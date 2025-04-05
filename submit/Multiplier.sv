module Multiplier #(
    parameter LEN = 32
) (
    input clk,
    input rst,
    input [LEN-1:0] multiplicand,
    input [LEN-1:0] multiplier,
    input start,
    
    output [LEN*2-1:0] product,
    output finish
);

    localparam PRODUCT_LEN = LEN*2;
    //len of the product register
    logic [LEN-1:0] multiplicand_reg;
    //initialize the multiplicand register
    logic [PRODUCT_LEN-1:0] product_reg;
    //initialize the product register
    localparam CNT_LEN = $clog2(LEN);
    //???
    localparam CNT_NUM = LEN - 1;
    //count of the adding times
    typedef enum logic [1:0] {IDLE, WORK, FINAL} fsm_state;
    //state initialization
    fsm_state fsm_state_reg;
    //register to store all the states
    logic [CNT_LEN-1:0] work_cnt = CNT_LEN'(LEN);
    //work_cnt to 0->end the procedure

    always_ff@(posedge clk or posedge rst)begin
        //used to implement state transfer
        if (rst) begin
            fsm_state_reg <= IDLE;
        end else begin
            case(fsm_state_reg)
                IDLE:
                if(start) fsm_state_reg <= WORK;
                else fsm_state_reg <= IDLE;
                WORK:
                if(work_cnt == 0) fsm_state_reg <= FINAL;
                FINAL:
                fsm_state_reg <= FINAL;
                default:
                fsm_state_reg <= IDLE;
            endcase
        end
    end

    always_ff@(posedge clk)begin
        case(fsm_state_reg)
            IDLE: begin
                multiplicand_reg <= multiplicand;
                product_reg <= {{LEN{1'b0}}, multiplier};
                work_cnt <= CNT_LEN'(LEN);
            end
            WORK: begin
                work_cnt <= work_cnt - 1;
                product_reg <= product_reg[0] ? {product_reg[PRODUCT_LEN-1:LEN] + multiplicand_reg, product_reg[LEN-1:0]} >> 1 : product_reg >> 1;
            end
            FINAL: begin
                product_reg <= product_reg;
            end
            default: product_reg <= product_reg;
        endcase
    end

    assign product = (work_cnt == 0) ? (product_reg) : {PRODUCT_LEN{1'b0}};
    assign finish = (work_cnt == 0);
    //control signal and output signal
    
endmodule