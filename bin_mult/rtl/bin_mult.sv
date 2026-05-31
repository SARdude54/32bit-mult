`timescale 1ps/1ps

// -----------------------------------------------------------------------------
// OpenLane/LVS wrapper for bin_mult_core
//
// Purpose:
//   - Exposes scalar top-level pins A_0..A_31, B_0..B_31, C_0..C_63.
//   - Keeps the real multiplier RTL clean inside bin_mult_core.
//   - Avoids LVS bus naming mismatches such as A[0] in SPICE vs A[31:0]
//     in gate-level Verilog.
// -----------------------------------------------------------------------------

module bin_mult (
    input  logic clk,
    input  logic rst_n,

    input  logic vld_in,
    input  logic rdy_out,

    input  logic A_0,
    input  logic A_1,
    input  logic A_2,
    input  logic A_3,
    input  logic A_4,
    input  logic A_5,
    input  logic A_6,
    input  logic A_7,
    input  logic A_8,
    input  logic A_9,
    input  logic A_10,
    input  logic A_11,
    input  logic A_12,
    input  logic A_13,
    input  logic A_14,
    input  logic A_15,
    input  logic A_16,
    input  logic A_17,
    input  logic A_18,
    input  logic A_19,
    input  logic A_20,
    input  logic A_21,
    input  logic A_22,
    input  logic A_23,
    input  logic A_24,
    input  logic A_25,
    input  logic A_26,
    input  logic A_27,
    input  logic A_28,
    input  logic A_29,
    input  logic A_30,
    input  logic A_31,

    input  logic B_0,
    input  logic B_1,
    input  logic B_2,
    input  logic B_3,
    input  logic B_4,
    input  logic B_5,
    input  logic B_6,
    input  logic B_7,
    input  logic B_8,
    input  logic B_9,
    input  logic B_10,
    input  logic B_11,
    input  logic B_12,
    input  logic B_13,
    input  logic B_14,
    input  logic B_15,
    input  logic B_16,
    input  logic B_17,
    input  logic B_18,
    input  logic B_19,
    input  logic B_20,
    input  logic B_21,
    input  logic B_22,
    input  logic B_23,
    input  logic B_24,
    input  logic B_25,
    input  logic B_26,
    input  logic B_27,
    input  logic B_28,
    input  logic B_29,
    input  logic B_30,
    input  logic B_31,

    output logic C_0,
    output logic C_1,
    output logic C_2,
    output logic C_3,
    output logic C_4,
    output logic C_5,
    output logic C_6,
    output logic C_7,
    output logic C_8,
    output logic C_9,
    output logic C_10,
    output logic C_11,
    output logic C_12,
    output logic C_13,
    output logic C_14,
    output logic C_15,
    output logic C_16,
    output logic C_17,
    output logic C_18,
    output logic C_19,
    output logic C_20,
    output logic C_21,
    output logic C_22,
    output logic C_23,
    output logic C_24,
    output logic C_25,
    output logic C_26,
    output logic C_27,
    output logic C_28,
    output logic C_29,
    output logic C_30,
    output logic C_31,
    output logic C_32,
    output logic C_33,
    output logic C_34,
    output logic C_35,
    output logic C_36,
    output logic C_37,
    output logic C_38,
    output logic C_39,
    output logic C_40,
    output logic C_41,
    output logic C_42,
    output logic C_43,
    output logic C_44,
    output logic C_45,
    output logic C_46,
    output logic C_47,
    output logic C_48,
    output logic C_49,
    output logic C_50,
    output logic C_51,
    output logic C_52,
    output logic C_53,
    output logic C_54,
    output logic C_55,
    output logic C_56,
    output logic C_57,
    output logic C_58,
    output logic C_59,
    output logic C_60,
    output logic C_61,
    output logic C_62,
    output logic C_63,

    output logic vld_out,
    output logic rdy_in
);

    logic [31:0] A_bus;
    logic [31:0] B_bus;
    logic [63:0] C_bus;

    assign A_bus = { A_31, A_30, A_29, A_28, A_27, A_26, A_25, A_24, A_23, A_22, A_21, A_20, A_19, A_18, A_17, A_16, A_15, A_14, A_13, A_12, A_11, A_10, A_9, A_8, A_7, A_6, A_5, A_4, A_3, A_2, A_1, A_0 };
    assign B_bus = { B_31, B_30, B_29, B_28, B_27, B_26, B_25, B_24, B_23, B_22, B_21, B_20, B_19, B_18, B_17, B_16, B_15, B_14, B_13, B_12, B_11, B_10, B_9, B_8, B_7, B_6, B_5, B_4, B_3, B_2, B_1, B_0 };

    bin_mult_core core (
        .clk     (clk),
        .rst_n   (rst_n),

        .vld_in  (vld_in),
        .rdy_out (rdy_out),

        .A       (A_bus),
        .B       (B_bus),
        .C       (C_bus),

        .vld_out (vld_out),
        .rdy_in  (rdy_in)
    );

    assign C_0 = C_bus[0];
    assign C_1 = C_bus[1];
    assign C_2 = C_bus[2];
    assign C_3 = C_bus[3];
    assign C_4 = C_bus[4];
    assign C_5 = C_bus[5];
    assign C_6 = C_bus[6];
    assign C_7 = C_bus[7];
    assign C_8 = C_bus[8];
    assign C_9 = C_bus[9];
    assign C_10 = C_bus[10];
    assign C_11 = C_bus[11];
    assign C_12 = C_bus[12];
    assign C_13 = C_bus[13];
    assign C_14 = C_bus[14];
    assign C_15 = C_bus[15];
    assign C_16 = C_bus[16];
    assign C_17 = C_bus[17];
    assign C_18 = C_bus[18];
    assign C_19 = C_bus[19];
    assign C_20 = C_bus[20];
    assign C_21 = C_bus[21];
    assign C_22 = C_bus[22];
    assign C_23 = C_bus[23];
    assign C_24 = C_bus[24];
    assign C_25 = C_bus[25];
    assign C_26 = C_bus[26];
    assign C_27 = C_bus[27];
    assign C_28 = C_bus[28];
    assign C_29 = C_bus[29];
    assign C_30 = C_bus[30];
    assign C_31 = C_bus[31];
    assign C_32 = C_bus[32];
    assign C_33 = C_bus[33];
    assign C_34 = C_bus[34];
    assign C_35 = C_bus[35];
    assign C_36 = C_bus[36];
    assign C_37 = C_bus[37];
    assign C_38 = C_bus[38];
    assign C_39 = C_bus[39];
    assign C_40 = C_bus[40];
    assign C_41 = C_bus[41];
    assign C_42 = C_bus[42];
    assign C_43 = C_bus[43];
    assign C_44 = C_bus[44];
    assign C_45 = C_bus[45];
    assign C_46 = C_bus[46];
    assign C_47 = C_bus[47];
    assign C_48 = C_bus[48];
    assign C_49 = C_bus[49];
    assign C_50 = C_bus[50];
    assign C_51 = C_bus[51];
    assign C_52 = C_bus[52];
    assign C_53 = C_bus[53];
    assign C_54 = C_bus[54];
    assign C_55 = C_bus[55];
    assign C_56 = C_bus[56];
    assign C_57 = C_bus[57];
    assign C_58 = C_bus[58];
    assign C_59 = C_bus[59];
    assign C_60 = C_bus[60];
    assign C_61 = C_bus[61];
    assign C_62 = C_bus[62];
    assign C_63 = C_bus[63];

endmodule
