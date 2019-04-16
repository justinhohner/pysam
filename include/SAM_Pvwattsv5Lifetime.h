#ifndef SAM_PVWATTSV5LIFETIME_H_
#define SAM_PVWATTSV5LIFETIME_H_

#include "visibility.h"
#include "SAM_api.h"


#include <stdint.h>
#ifdef __cplusplus
extern "C"
{
#endif

	//
	// Pvwattsv5Lifetime Technology Model
	//

	/** 
	 * Create a Pvwattsv5Lifetime variable table.
	 * @param def: the set of financial model-dependent defaults to use (None, Residential, ...)
	 * @param[in,out] err: a pointer to an error object
	 */

	SAM_EXPORT typedef void * SAM_Pvwattsv5Lifetime;

	SAM_EXPORT SAM_Pvwattsv5Lifetime SAM_Pvwattsv5Lifetime_construct(const char* def, SAM_error* err);

	/// verbosity level 0 or 1. Returns 1 on success
	SAM_EXPORT int SAM_Pvwattsv5Lifetime_execute(SAM_Pvwattsv5Lifetime data, int verbosity, SAM_error* err);

	SAM_EXPORT void SAM_Pvwattsv5Lifetime_destruct(SAM_Pvwattsv5Lifetime system);


	//
	// Common parameters
	//

	/**
	 * Set system_use_lifetime_output: Run lifetime simulation [0/1]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Pvwattsv5Lifetime_Common_system_use_lifetime_output_fset(SAM_Pvwattsv5Lifetime ptr, float number, SAM_error *err);


	//
	// FinancialAnalysisParameters parameters
	//

	/**
	 * Set analysis_period: Analysis period [years]
	 * options: None
	 * constraints: None
	 * required if: system_use_lifetime_output=1
	 */
	SAM_EXPORT void SAM_Pvwattsv5Lifetime_FinancialAnalysisParameters_analysis_period_fset(SAM_Pvwattsv5Lifetime ptr, float number, SAM_error *err);


	//
	// LifetimePV parameters
	//

	/**
	 * Set dc_degradation: Annual AC degradation [%/year]
	 * options: None
	 * constraints: None
	 * required if: system_use_lifetime_output=1
	 */
	SAM_EXPORT void SAM_Pvwattsv5Lifetime_LifetimePV_dc_degradation_aset(SAM_Pvwattsv5Lifetime ptr, float* arr, int length, SAM_error *err);


	//
	// Weather parameters
	//

	/**
	 * Set solar_resource_data: Weather data
	 * options: dn,df,tdry,wspd,lat,lon,tz
	 * constraints: None
	 * required if: ?
	 */
	SAM_EXPORT void SAM_Pvwattsv5Lifetime_Weather_solar_resource_data_tset(SAM_Pvwattsv5Lifetime ptr, SAM_table tab, SAM_error *err);

	/**
	 * Set solar_resource_file: Weather file path
	 * options: None
	 * constraints: None
	 * required if: ?
	 */
	SAM_EXPORT void SAM_Pvwattsv5Lifetime_Weather_solar_resource_file_sset(SAM_Pvwattsv5Lifetime ptr, const char* str, SAM_error *err);


	//
	// PVWatts parameters
	//

	/**
	 * Set array_type: Array type [0/1/2/3/4]
	 * options: Fixed OR,Fixed Roof,1Axis,Backtracked,2Axis
	 * constraints: MIN=0,MAX=4,INTEGER
	 * required if: *
	 */
	SAM_EXPORT void SAM_Pvwattsv5Lifetime_PVWatts_array_type_fset(SAM_Pvwattsv5Lifetime ptr, float number, SAM_error *err);

	/**
	 * Set azimuth: Azimuth angle [deg]
	 * options: E=90,S=180,W=270
	 * constraints: MIN=0,MAX=360
	 * required if: array_type<4
	 */
	SAM_EXPORT void SAM_Pvwattsv5Lifetime_PVWatts_azimuth_fset(SAM_Pvwattsv5Lifetime ptr, float number, SAM_error *err);

	/**
	 * Set dc_ac_ratio: DC to AC ratio [ratio]
	 * options: None
	 * constraints: POSITIVE
	 * required if: ?=1.1
	 */
	SAM_EXPORT void SAM_Pvwattsv5Lifetime_PVWatts_dc_ac_ratio_fset(SAM_Pvwattsv5Lifetime ptr, float number, SAM_error *err);

	/**
	 * Set gcr: Ground coverage ratio [0..1]
	 * options: None
	 * constraints: MIN=0,MAX=3
	 * required if: ?=0.4
	 */
	SAM_EXPORT void SAM_Pvwattsv5Lifetime_PVWatts_gcr_fset(SAM_Pvwattsv5Lifetime ptr, float number, SAM_error *err);

	/**
	 * Set inv_eff: Inverter efficiency at rated power [%]
	 * options: None
	 * constraints: MIN=90,MAX=99.5
	 * required if: ?=96
	 */
	SAM_EXPORT void SAM_Pvwattsv5Lifetime_PVWatts_inv_eff_fset(SAM_Pvwattsv5Lifetime ptr, float number, SAM_error *err);

	/**
	 * Set losses: System losses [%]
	 * options: Total system losses
	 * constraints: MIN=-5,MAX=99
	 * required if: *
	 */
	SAM_EXPORT void SAM_Pvwattsv5Lifetime_PVWatts_losses_fset(SAM_Pvwattsv5Lifetime ptr, float number, SAM_error *err);

	/**
	 * Set module_type: Module type [0/1/2]
	 * options: Standard,Premium,Thin film
	 * constraints: MIN=0,MAX=2,INTEGER
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Pvwattsv5Lifetime_PVWatts_module_type_fset(SAM_Pvwattsv5Lifetime ptr, float number, SAM_error *err);

	/**
	 * Set shading:azal: Azimuth x altitude beam shading loss [%]
	 * options: None
	 * constraints: None
	 * required if: ?
	 */
	SAM_EXPORT void SAM_Pvwattsv5Lifetime_PVWatts_shading_azal_mset(SAM_Pvwattsv5Lifetime ptr, float* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set shading:diff: Diffuse shading loss [%]
	 * options: None
	 * constraints: None
	 * required if: ?
	 */
	SAM_EXPORT void SAM_Pvwattsv5Lifetime_PVWatts_shading_diff_fset(SAM_Pvwattsv5Lifetime ptr, float number, SAM_error *err);

	/**
	 * Set shading:mxh: Month x Hour beam shading loss [%]
	 * options: None
	 * constraints: None
	 * required if: ?
	 */
	SAM_EXPORT void SAM_Pvwattsv5Lifetime_PVWatts_shading_mxh_mset(SAM_Pvwattsv5Lifetime ptr, float* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set shading:timestep: Time step beam shading loss [%]
	 * options: None
	 * constraints: None
	 * required if: ?
	 */
	SAM_EXPORT void SAM_Pvwattsv5Lifetime_PVWatts_shading_timestep_mset(SAM_Pvwattsv5Lifetime ptr, float* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set system_capacity: System size (DC nameplate) [kW]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Pvwattsv5Lifetime_PVWatts_system_capacity_fset(SAM_Pvwattsv5Lifetime ptr, float number, SAM_error *err);

	/**
	 * Set tilt: Tilt angle [deg]
	 * options: H=0,V=90
	 * constraints: MIN=0,MAX=90
	 * required if: array_type<4
	 */
	SAM_EXPORT void SAM_Pvwattsv5Lifetime_PVWatts_tilt_fset(SAM_Pvwattsv5Lifetime ptr, float number, SAM_error *err);


	//
	// Battwatts parameters
	//

	/**
	 * Set batt_simple_enable: Enable Battery [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Pvwattsv5Lifetime_Battwatts_batt_simple_enable_fset(SAM_Pvwattsv5Lifetime ptr, float number, SAM_error *err);


	/**
	 * Common Getters
	 */

	SAM_EXPORT float SAM_Pvwattsv5Lifetime_Common_system_use_lifetime_output_fget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);


	/**
	 * FinancialAnalysisParameters Getters
	 */

	SAM_EXPORT float SAM_Pvwattsv5Lifetime_FinancialAnalysisParameters_analysis_period_fget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);


	/**
	 * LifetimePV Getters
	 */

	SAM_EXPORT float* SAM_Pvwattsv5Lifetime_LifetimePV_dc_degradation_aget(SAM_Pvwattsv5Lifetime ptr, int* length, SAM_error *err);


	/**
	 * Weather Getters
	 */

	SAM_EXPORT SAM_table SAM_Pvwattsv5Lifetime_Weather_solar_resource_data_tget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);

	SAM_EXPORT const char* SAM_Pvwattsv5Lifetime_Weather_solar_resource_file_sget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);


	/**
	 * PVWatts Getters
	 */

	SAM_EXPORT float SAM_Pvwattsv5Lifetime_PVWatts_array_type_fget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);

	SAM_EXPORT float SAM_Pvwattsv5Lifetime_PVWatts_azimuth_fget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);

	SAM_EXPORT float SAM_Pvwattsv5Lifetime_PVWatts_dc_ac_ratio_fget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);

	SAM_EXPORT float SAM_Pvwattsv5Lifetime_PVWatts_gcr_fget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);

	SAM_EXPORT float SAM_Pvwattsv5Lifetime_PVWatts_inv_eff_fget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);

	SAM_EXPORT float SAM_Pvwattsv5Lifetime_PVWatts_losses_fget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);

	SAM_EXPORT float SAM_Pvwattsv5Lifetime_PVWatts_module_type_fget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Pvwattsv5Lifetime_PVWatts_shading_azal_mget(SAM_Pvwattsv5Lifetime ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT float SAM_Pvwattsv5Lifetime_PVWatts_shading_diff_fget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Pvwattsv5Lifetime_PVWatts_shading_mxh_mget(SAM_Pvwattsv5Lifetime ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT float* SAM_Pvwattsv5Lifetime_PVWatts_shading_timestep_mget(SAM_Pvwattsv5Lifetime ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT float SAM_Pvwattsv5Lifetime_PVWatts_system_capacity_fget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);

	SAM_EXPORT float SAM_Pvwattsv5Lifetime_PVWatts_tilt_fget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);


	/**
	 * Battwatts Getters
	 */

	SAM_EXPORT float SAM_Pvwattsv5Lifetime_Battwatts_batt_simple_enable_fget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);


	/**
	 * Outputs Getters
	 */

	SAM_EXPORT float* SAM_Pvwattsv5Lifetime_Outputs_ac_aget(SAM_Pvwattsv5Lifetime ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Pvwattsv5Lifetime_Outputs_ac_annual_fget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Pvwattsv5Lifetime_Outputs_ac_monthly_aget(SAM_Pvwattsv5Lifetime ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Pvwattsv5Lifetime_Outputs_annual_energy_fget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Pvwattsv5Lifetime_Outputs_aoi_aget(SAM_Pvwattsv5Lifetime ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Pvwattsv5Lifetime_Outputs_capacity_factor_fget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);

	SAM_EXPORT const char* SAM_Pvwattsv5Lifetime_Outputs_city_sget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Pvwattsv5Lifetime_Outputs_dc_aget(SAM_Pvwattsv5Lifetime ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Pvwattsv5Lifetime_Outputs_dc_monthly_aget(SAM_Pvwattsv5Lifetime ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Pvwattsv5Lifetime_Outputs_df_aget(SAM_Pvwattsv5Lifetime ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Pvwattsv5Lifetime_Outputs_dn_aget(SAM_Pvwattsv5Lifetime ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Pvwattsv5Lifetime_Outputs_elev_fget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Pvwattsv5Lifetime_Outputs_gh_aget(SAM_Pvwattsv5Lifetime ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Pvwattsv5Lifetime_Outputs_inverter_efficiency_fget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);

	SAM_EXPORT float SAM_Pvwattsv5Lifetime_Outputs_inverter_model_fget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);

	SAM_EXPORT float SAM_Pvwattsv5Lifetime_Outputs_kwh_per_kw_fget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);

	SAM_EXPORT float SAM_Pvwattsv5Lifetime_Outputs_lat_fget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);

	SAM_EXPORT const char* SAM_Pvwattsv5Lifetime_Outputs_location_sget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);

	SAM_EXPORT float SAM_Pvwattsv5Lifetime_Outputs_lon_fget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Pvwattsv5Lifetime_Outputs_monthly_energy_aget(SAM_Pvwattsv5Lifetime ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Pvwattsv5Lifetime_Outputs_percent_complete_fget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Pvwattsv5Lifetime_Outputs_poa_aget(SAM_Pvwattsv5Lifetime ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Pvwattsv5Lifetime_Outputs_poa_monthly_aget(SAM_Pvwattsv5Lifetime ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Pvwattsv5Lifetime_Outputs_shad_beam_factor_aget(SAM_Pvwattsv5Lifetime ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Pvwattsv5Lifetime_Outputs_solrad_annual_fget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Pvwattsv5Lifetime_Outputs_solrad_monthly_aget(SAM_Pvwattsv5Lifetime ptr, int* length, SAM_error *err);

	SAM_EXPORT const char* SAM_Pvwattsv5Lifetime_Outputs_state_sget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Pvwattsv5Lifetime_Outputs_sunup_aget(SAM_Pvwattsv5Lifetime ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Pvwattsv5Lifetime_Outputs_tamb_aget(SAM_Pvwattsv5Lifetime ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Pvwattsv5Lifetime_Outputs_tcell_aget(SAM_Pvwattsv5Lifetime ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Pvwattsv5Lifetime_Outputs_tpoa_aget(SAM_Pvwattsv5Lifetime ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Pvwattsv5Lifetime_Outputs_ts_shift_hours_fget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);

	SAM_EXPORT float SAM_Pvwattsv5Lifetime_Outputs_tz_fget(SAM_Pvwattsv5Lifetime ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Pvwattsv5Lifetime_Outputs_wspd_aget(SAM_Pvwattsv5Lifetime ptr, int* length, SAM_error *err);

#ifdef __cplusplus
} /* end of extern "C" { */
#endif

#endif