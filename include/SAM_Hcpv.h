#ifndef SAM_HCPV_H_
#define SAM_HCPV_H_

#include "visibility.h"
#include "SAM_api.h"


#include <stdint.h>
#ifdef __cplusplus
extern "C"
{
#endif

	//
	// Hcpv Technology Model
	//

	/** 
	 * Create a Hcpv variable table.
	 * @param def: the set of financial model-dependent defaults to use (None, Residential, ...)
	 * @param[in,out] err: a pointer to an error object
	 */

	SAM_EXPORT typedef void * SAM_Hcpv;

	SAM_EXPORT SAM_Hcpv SAM_Hcpv_construct(const char* def, SAM_error* err);

	/// verbosity level 0 or 1. Returns 1 on success
	SAM_EXPORT int SAM_Hcpv_execute(SAM_Hcpv data, int verbosity, SAM_error* err);

	SAM_EXPORT void SAM_Hcpv_destruct(SAM_Hcpv system);


	//
	// SolarResourceData parameters
	//

	/**
	 * Set file_name: Weather file in TMY2, TMY3, EPW, or SMW.
	 * options: None
	 * constraints: LOCAL_FILE
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_SolarResourceData_file_name_sset(SAM_Hcpv ptr, const char* str, SAM_error *err);


	//
	// PVWatts parameters
	//

	/**
	 * Set system_capacity: Nameplate capacity [kW]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_PVWatts_system_capacity_fset(SAM_Hcpv ptr, float number, SAM_error *err);


	//
	// HCPVModule parameters
	//

	/**
	 * Set module_a: Equation variable (a), at high irradiance & low wind speed [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVModule_module_a_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set module_a0: Air mass modifier coefficient 0 [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVModule_module_a0_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set module_a1: Air mass modifier coefficient 1 [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVModule_module_a1_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set module_a2: Air mass modifier coefficient 2 [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVModule_module_a2_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set module_a3: Air mass modifier coefficient 3 [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVModule_module_a3_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set module_a4: Air mass modifier coefficient 4 [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVModule_module_a4_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set module_alignment_error: Alignment loss factor [0..1]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVModule_module_alignment_error_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set module_b: Equation variable (b), rate at which module temp drops [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVModule_module_b_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set module_cell_area: Single cell area [cm^2]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVModule_module_cell_area_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set module_concentration: Concentration ratio [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVModule_module_concentration_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set module_dT: Equation variable (dT), temp diff between heat sink & cell [C]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVModule_module_dT_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set module_flutter_loss_coeff: Wind flutter loss factor [0..1 per m/s]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVModule_module_flutter_loss_coeff_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set module_mjeff: Module junction efficiency array [percent]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVModule_module_mjeff_aset(SAM_Hcpv ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set module_ncells: Number of cells [none]
	 * options: None
	 * constraints: INTEGER
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVModule_module_ncells_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set module_optical_error: Optical error factor [0..1]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVModule_module_optical_error_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set module_rad: POA irradiance array [W/m^2]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVModule_module_rad_aset(SAM_Hcpv ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set module_reference: Index in arrays of the reference condition [none]
	 * options: None
	 * constraints: INTEGER
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVModule_module_reference_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set module_temp_coeff: Temperature coefficient [%/C]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVModule_module_temp_coeff_fset(SAM_Hcpv ptr, float number, SAM_error *err);


	//
	// InverterCECDatabase parameters
	//

	/**
	 * Set inv_snl_c0: Parameter defining the curvature (parabolic) of the relationship between ac-power and dc-power at the reference operating condition, default value of zero gives a linear relationship, (1/W) [xxx]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_InverterCECDatabase_inv_snl_c0_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set inv_snl_c1: Empirical coefficient allowing Pdco to vary linearly with dc-voltage input, default value is zero, (1/V) [xxx]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_InverterCECDatabase_inv_snl_c1_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set inv_snl_c2: Empirical coefficient allowing Pso to vary linearly with dc-voltage input, default value is zero, (1/V) [xxx]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_InverterCECDatabase_inv_snl_c2_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set inv_snl_c3: Empirical coefficient allowing Co to vary linearly with dc-voltage input, default value is zero, (1/V) [xxx]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_InverterCECDatabase_inv_snl_c3_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set inv_snl_paco: W maximum ac-power rating for inverter at reference or nominal operating condition, assumed to be an upper limit value, (W) [xxx]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_InverterCECDatabase_inv_snl_paco_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set inv_snl_pdco: W dc-power level at which the ac-power rating is achieved at the reference operating condition, (W) [xxx]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_InverterCECDatabase_inv_snl_pdco_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set inv_snl_pnt: W ac-power consumed by inverter at night (night tare) to maintain circuitry required to sense PV array voltage, (W) [xxx]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_InverterCECDatabase_inv_snl_pnt_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set inv_snl_pso: W dc-power required to start the inversion process, or self-consumption by inverter, strongly influences inverter efficiency at low power levels, (W) [xxx]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_InverterCECDatabase_inv_snl_pso_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set inv_snl_vdcmax: V (Vdcmax) dc-voltage maximum operating voltage, (V) [xxx]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_InverterCECDatabase_inv_snl_vdcmax_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set inv_snl_vdco: V (Vnom) dc-voltage level at which the ac-power rating is achieved at the reference operating condition, (V) [xxx]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_InverterCECDatabase_inv_snl_vdco_fset(SAM_Hcpv ptr, float number, SAM_error *err);


	//
	// HCPVArray parameters
	//

	/**
	 * Set array_ac_wiring_loss: AC wiring loss factor [0..1]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVArray_array_ac_wiring_loss_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set array_dc_mismatch_loss: DC module mismatch loss factor [0..1]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVArray_array_dc_mismatch_loss_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set array_dc_wiring_loss: DC Wiring loss factor [0..1]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVArray_array_dc_wiring_loss_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set array_diode_conn_loss: Diodes and connections loss factor [0..1]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVArray_array_diode_conn_loss_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set array_enable_azalt_sf: Boolean for irradiance derate [0-1]
	 * options: None
	 * constraints: INTEGER
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVArray_array_enable_azalt_sf_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set array_modules_per_tracker: Modules on each tracker [none]
	 * options: None
	 * constraints: INTEGER
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVArray_array_modules_per_tracker_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set array_monthly_soiling: Monthly soiling factors array [0..1]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVArray_array_monthly_soiling_aset(SAM_Hcpv ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set array_num_inverters: Number of inverters [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVArray_array_num_inverters_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set array_num_trackers: Number of trackers [none]
	 * options: None
	 * constraints: INTEGER
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVArray_array_num_trackers_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set array_rlim_az_max: Tracker maximum azimuth angle [deg]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVArray_array_rlim_az_max_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set array_rlim_az_min: Tracker minimum azimuth angle [deg]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVArray_array_rlim_az_min_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set array_rlim_el_max: Tracker maximum elevation angle [deg]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVArray_array_rlim_el_max_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set array_rlim_el_min: Tracker minimum elevation angle [deg]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVArray_array_rlim_el_min_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set array_tracker_power_fraction: Single tracker power fraction [0..1]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVArray_array_tracker_power_fraction_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set array_tracking_error: General racking error [0..1]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVArray_array_tracking_error_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set array_wind_stow_speed: Allowed wind speed before stowing [m/s]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVArray_array_wind_stow_speed_fset(SAM_Hcpv ptr, float number, SAM_error *err);

	/**
	 * Set azaltsf: Azimuth-Altitude Shading Table
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Hcpv_HCPVArray_azaltsf_mset(SAM_Hcpv ptr, float* mat, int nrows, int ncols, SAM_error *err);


	/**
	 * SolarResourceData Getters
	 */

	SAM_EXPORT const char* SAM_Hcpv_SolarResourceData_file_name_sget(SAM_Hcpv ptr, SAM_error *err);


	/**
	 * PVWatts Getters
	 */

	SAM_EXPORT float SAM_Hcpv_PVWatts_system_capacity_fget(SAM_Hcpv ptr, SAM_error *err);


	/**
	 * HCPVModule Getters
	 */

	SAM_EXPORT float SAM_Hcpv_HCPVModule_module_a_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_HCPVModule_module_a0_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_HCPVModule_module_a1_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_HCPVModule_module_a2_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_HCPVModule_module_a3_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_HCPVModule_module_a4_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_HCPVModule_module_alignment_error_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_HCPVModule_module_b_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_HCPVModule_module_cell_area_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_HCPVModule_module_concentration_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_HCPVModule_module_dT_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_HCPVModule_module_flutter_loss_coeff_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Hcpv_HCPVModule_module_mjeff_aget(SAM_Hcpv ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_HCPVModule_module_ncells_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_HCPVModule_module_optical_error_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Hcpv_HCPVModule_module_rad_aget(SAM_Hcpv ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_HCPVModule_module_reference_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_HCPVModule_module_temp_coeff_fget(SAM_Hcpv ptr, SAM_error *err);


	/**
	 * InverterCECDatabase Getters
	 */

	SAM_EXPORT float SAM_Hcpv_InverterCECDatabase_inv_snl_c0_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_InverterCECDatabase_inv_snl_c1_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_InverterCECDatabase_inv_snl_c2_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_InverterCECDatabase_inv_snl_c3_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_InverterCECDatabase_inv_snl_paco_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_InverterCECDatabase_inv_snl_pdco_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_InverterCECDatabase_inv_snl_pnt_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_InverterCECDatabase_inv_snl_pso_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_InverterCECDatabase_inv_snl_vdcmax_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_InverterCECDatabase_inv_snl_vdco_fget(SAM_Hcpv ptr, SAM_error *err);


	/**
	 * HCPVArray Getters
	 */

	SAM_EXPORT float SAM_Hcpv_HCPVArray_array_ac_wiring_loss_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_HCPVArray_array_dc_mismatch_loss_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_HCPVArray_array_dc_wiring_loss_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_HCPVArray_array_diode_conn_loss_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_HCPVArray_array_enable_azalt_sf_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_HCPVArray_array_modules_per_tracker_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Hcpv_HCPVArray_array_monthly_soiling_aget(SAM_Hcpv ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_HCPVArray_array_num_inverters_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_HCPVArray_array_num_trackers_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_HCPVArray_array_rlim_az_max_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_HCPVArray_array_rlim_az_min_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_HCPVArray_array_rlim_el_max_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_HCPVArray_array_rlim_el_min_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_HCPVArray_array_tracker_power_fraction_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_HCPVArray_array_tracking_error_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_HCPVArray_array_wind_stow_speed_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Hcpv_HCPVArray_azaltsf_mget(SAM_Hcpv ptr, int* nrows, int* ncols, SAM_error *err);


	/**
	 * Outputs Getters
	 */

	SAM_EXPORT float SAM_Hcpv_Outputs_ac_loss_tracker_kwh_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_Outputs_annual_ac_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_Outputs_annual_beam_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_Outputs_annual_dc_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_Outputs_annual_dc_net_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_Outputs_annual_energy_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_Outputs_annual_input_radiation_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_Outputs_capacity_factor_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_Outputs_dc_loss_stowing_kwh_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_Outputs_dc_nominal_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Hcpv_Outputs_gen_aget(SAM_Hcpv ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Hcpv_Outputs_hourly_ac_aget(SAM_Hcpv ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Hcpv_Outputs_hourly_airmass_aget(SAM_Hcpv ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Hcpv_Outputs_hourly_beam_aget(SAM_Hcpv ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Hcpv_Outputs_hourly_celleff_aget(SAM_Hcpv ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Hcpv_Outputs_hourly_dc_aget(SAM_Hcpv ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Hcpv_Outputs_hourly_dc_net_aget(SAM_Hcpv ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Hcpv_Outputs_hourly_input_radiation_aget(SAM_Hcpv ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Hcpv_Outputs_hourly_modeff_aget(SAM_Hcpv ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Hcpv_Outputs_hourly_poa_aget(SAM_Hcpv ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Hcpv_Outputs_hourly_sazi_aget(SAM_Hcpv ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Hcpv_Outputs_hourly_shading_derate_aget(SAM_Hcpv ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Hcpv_Outputs_hourly_solazi_aget(SAM_Hcpv ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Hcpv_Outputs_hourly_solzen_aget(SAM_Hcpv ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Hcpv_Outputs_hourly_stilt_aget(SAM_Hcpv ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Hcpv_Outputs_hourly_sunup_aget(SAM_Hcpv ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Hcpv_Outputs_hourly_tcell_aget(SAM_Hcpv ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Hcpv_Outputs_hourly_tdry_aget(SAM_Hcpv ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Hcpv_Outputs_hourly_tmod_aget(SAM_Hcpv ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Hcpv_Outputs_hourly_windspd_aget(SAM_Hcpv ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_Outputs_kwh_per_kw_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_Outputs_modeff_ref_fget(SAM_Hcpv ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Hcpv_Outputs_monthly_beam_aget(SAM_Hcpv ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Hcpv_Outputs_monthly_dc_net_aget(SAM_Hcpv ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Hcpv_Outputs_monthly_energy_aget(SAM_Hcpv ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Hcpv_Outputs_monthly_input_radiation_aget(SAM_Hcpv ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Hcpv_Outputs_tracker_nameplate_watts_fget(SAM_Hcpv ptr, SAM_error *err);

#ifdef __cplusplus
} /* end of extern "C" { */
#endif

#endif