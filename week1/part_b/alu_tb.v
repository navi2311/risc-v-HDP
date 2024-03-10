module alu_tb();

    // Inputs
    reg [31:0]a;
    reg [31:0]b;
    reg[1:0]sel;

    // Outputs
    wire [31:0] result;

    // Instantiate the Unit Under Test (UUT)
    alu  uut (
        .a(a),
        .b(b),
        .sel(sel),
        .result(result)
    );

    initial begin

            $dumpfile("alu.vcd");
             $dumpvars(1,alu_tb);

        // Apply inputs.
        a = 32'h0000000a;
        b = 32'h00000001;
        #50
        sel=0;
        #10
        sel=2'b10;
        #10
        sel=2'b11;
        #10
        sel=2'b01;
        #100
        $finish;
    end

endmodule
