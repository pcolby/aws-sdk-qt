// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "forecastclient.h"
#include "forecastclient_p.h"

#include "core/awssignaturev4.h"
#include "createautopredictorrequest.h"
#include "createautopredictorresponse.h"
#include "createdatasetrequest.h"
#include "createdatasetresponse.h"
#include "createdatasetgrouprequest.h"
#include "createdatasetgroupresponse.h"
#include "createdatasetimportjobrequest.h"
#include "createdatasetimportjobresponse.h"
#include "createexplainabilityrequest.h"
#include "createexplainabilityresponse.h"
#include "createexplainabilityexportrequest.h"
#include "createexplainabilityexportresponse.h"
#include "createforecastrequest.h"
#include "createforecastresponse.h"
#include "createforecastexportjobrequest.h"
#include "createforecastexportjobresponse.h"
#include "createmonitorrequest.h"
#include "createmonitorresponse.h"
#include "createpredictorrequest.h"
#include "createpredictorresponse.h"
#include "createpredictorbacktestexportjobrequest.h"
#include "createpredictorbacktestexportjobresponse.h"
#include "createwhatifanalysisrequest.h"
#include "createwhatifanalysisresponse.h"
#include "createwhatifforecastrequest.h"
#include "createwhatifforecastresponse.h"
#include "createwhatifforecastexportrequest.h"
#include "createwhatifforecastexportresponse.h"
#include "deletedatasetrequest.h"
#include "deletedatasetresponse.h"
#include "deletedatasetgrouprequest.h"
#include "deletedatasetgroupresponse.h"
#include "deletedatasetimportjobrequest.h"
#include "deletedatasetimportjobresponse.h"
#include "deleteexplainabilityrequest.h"
#include "deleteexplainabilityresponse.h"
#include "deleteexplainabilityexportrequest.h"
#include "deleteexplainabilityexportresponse.h"
#include "deleteforecastrequest.h"
#include "deleteforecastresponse.h"
#include "deleteforecastexportjobrequest.h"
#include "deleteforecastexportjobresponse.h"
#include "deletemonitorrequest.h"
#include "deletemonitorresponse.h"
#include "deletepredictorrequest.h"
#include "deletepredictorresponse.h"
#include "deletepredictorbacktestexportjobrequest.h"
#include "deletepredictorbacktestexportjobresponse.h"
#include "deleteresourcetreerequest.h"
#include "deleteresourcetreeresponse.h"
#include "deletewhatifanalysisrequest.h"
#include "deletewhatifanalysisresponse.h"
#include "deletewhatifforecastrequest.h"
#include "deletewhatifforecastresponse.h"
#include "deletewhatifforecastexportrequest.h"
#include "deletewhatifforecastexportresponse.h"
#include "describeautopredictorrequest.h"
#include "describeautopredictorresponse.h"
#include "describedatasetrequest.h"
#include "describedatasetresponse.h"
#include "describedatasetgrouprequest.h"
#include "describedatasetgroupresponse.h"
#include "describedatasetimportjobrequest.h"
#include "describedatasetimportjobresponse.h"
#include "describeexplainabilityrequest.h"
#include "describeexplainabilityresponse.h"
#include "describeexplainabilityexportrequest.h"
#include "describeexplainabilityexportresponse.h"
#include "describeforecastrequest.h"
#include "describeforecastresponse.h"
#include "describeforecastexportjobrequest.h"
#include "describeforecastexportjobresponse.h"
#include "describemonitorrequest.h"
#include "describemonitorresponse.h"
#include "describepredictorrequest.h"
#include "describepredictorresponse.h"
#include "describepredictorbacktestexportjobrequest.h"
#include "describepredictorbacktestexportjobresponse.h"
#include "describewhatifanalysisrequest.h"
#include "describewhatifanalysisresponse.h"
#include "describewhatifforecastrequest.h"
#include "describewhatifforecastresponse.h"
#include "describewhatifforecastexportrequest.h"
#include "describewhatifforecastexportresponse.h"
#include "getaccuracymetricsrequest.h"
#include "getaccuracymetricsresponse.h"
#include "listdatasetgroupsrequest.h"
#include "listdatasetgroupsresponse.h"
#include "listdatasetimportjobsrequest.h"
#include "listdatasetimportjobsresponse.h"
#include "listdatasetsrequest.h"
#include "listdatasetsresponse.h"
#include "listexplainabilitiesrequest.h"
#include "listexplainabilitiesresponse.h"
#include "listexplainabilityexportsrequest.h"
#include "listexplainabilityexportsresponse.h"
#include "listforecastexportjobsrequest.h"
#include "listforecastexportjobsresponse.h"
#include "listforecastsrequest.h"
#include "listforecastsresponse.h"
#include "listmonitorevaluationsrequest.h"
#include "listmonitorevaluationsresponse.h"
#include "listmonitorsrequest.h"
#include "listmonitorsresponse.h"
#include "listpredictorbacktestexportjobsrequest.h"
#include "listpredictorbacktestexportjobsresponse.h"
#include "listpredictorsrequest.h"
#include "listpredictorsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listwhatifanalysesrequest.h"
#include "listwhatifanalysesresponse.h"
#include "listwhatifforecastexportsrequest.h"
#include "listwhatifforecastexportsresponse.h"
#include "listwhatifforecastsrequest.h"
#include "listwhatifforecastsresponse.h"
#include "resumeresourcerequest.h"
#include "resumeresourceresponse.h"
#include "stopresourcerequest.h"
#include "stopresourceresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatedatasetgrouprequest.h"
#include "updatedatasetgroupresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Forecast
 * \brief Contains classess for accessing Amazon Forecast Service.
 *
 * \inmodule QtAwsForecast
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ForecastClient
 * \brief The ForecastClient class provides access to the Amazon Forecast Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 */

/*!
 * \brief Constructs a ForecastClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ForecastClient::ForecastClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ForecastClientPrivate(this), parent)
{
    Q_D(ForecastClient);
    d->apiVersion = QStringLiteral("2018-06-26");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("forecast");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Forecast Service");
    d->serviceName = QStringLiteral("forecast");
}

/*!
 * \overload ForecastClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ForecastClient::ForecastClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ForecastClientPrivate(this), parent)
{
    Q_D(ForecastClient);
    d->apiVersion = QStringLiteral("2018-06-26");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("forecast");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Forecast Service");
    d->serviceName = QStringLiteral("forecast");
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * CreateAutoPredictorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Forecast
 *
 * predictor>
 *
 * Amazon Forecast creates predictors with AutoPredictor, which involves applying the optimal combination of algorithms to
 * each time series in your datasets. You can use <a>CreateAutoPredictor</a> to create new predictors or upgrade/retrain
 * existing
 *
 * predictors>
 *
 * <b>Creating new predictors</b>
 *
 * </p
 *
 * The following parameters are required when creating a new
 *
 * predictor> <ul> <li>
 *
 * <code>PredictorName</code> - A unique name for the
 *
 * predictor> </li> <li>
 *
 * <code>DatasetGroupArn</code> - The ARN of the dataset group used to train the
 *
 * predictor> </li> <li>
 *
 * <code>ForecastFrequency</code> - The granularity of your forecasts (hourly, daily, weekly,
 *
 * etc)> </li> <li>
 *
 * <code>ForecastHorizon</code> - The number of time-steps that the model predicts. The forecast horizon is also called the
 * prediction
 *
 * length> </li> </ul>
 *
 * When creating a new predictor, do not specify a value for
 *
 * <code>ReferencePredictorArn</code>>
 *
 * <b>Upgrading and retraining predictors</b>
 *
 * </p
 *
 * The following parameters are required when retraining or upgrading a
 *
 * predictor> <ul> <li>
 *
 * <code>PredictorName</code> - A unique name for the
 *
 * predictor> </li> <li>
 *
 * <code>ReferencePredictorArn</code> - The ARN of the predictor to retrain or
 *
 * upgrade> </li> </ul>
 *
 * When upgrading or retraining a predictor, only specify values for the <code>ReferencePredictorArn</code> and
 * <code>PredictorName</code>.
 */
CreateAutoPredictorResponse * ForecastClient::createAutoPredictor(const CreateAutoPredictorRequest &request)
{
    return qobject_cast<CreateAutoPredictorResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * CreateDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Forecast dataset. The information about the dataset that you provide helps Forecast understand how to
 * consume the data for model training. This includes the
 *
 * following> <ul> <li>
 *
 * <i> <code>DataFrequency</code> </i> - How frequently your historical time-series data is
 *
 * collected> </li> <li>
 *
 * <i> <code>Domain</code> </i> and <i> <code>DatasetType</code> </i> - Each dataset has an associated dataset domain and a
 * type within the domain. Amazon Forecast provides a list of predefined domains and types within each domain. For each
 * unique dataset domain and type within the domain, Amazon Forecast requires your data to include a minimum set of
 * predefined
 *
 * fields> </li> <li>
 *
 * <i> <code>Schema</code> </i> - A schema specifies the fields in the dataset, including the field name and data
 *
 * type> </li> </ul>
 *
 * After creating a dataset, you import your training data into it and add the dataset to a dataset group. You use the
 * dataset group to create a predictor. For more information, see <a
 * href="https://docs.aws.amazon.com/forecast/latest/dg/howitworks-datasets-groups.html">Importing
 *
 * datasets</a>>
 *
 * To get a list of all your datasets, use the <a
 * href="https://docs.aws.amazon.com/forecast/latest/dg/API_ListDatasets.html">ListDatasets</a>
 *
 * operation>
 *
 * For example Forecast datasets, see the <a href="https://github.com/aws-samples/amazon-forecast-samples">Amazon Forecast
 * Sample GitHub
 *
 * repository</a>> <note>
 *
 * The <code>Status</code> of a dataset must be <code>ACTIVE</code> before you can import training data. Use the <a
 * href="https://docs.aws.amazon.com/forecast/latest/dg/API_DescribeDataset.html">DescribeDataset</a> operation to get the
 */
CreateDatasetResponse * ForecastClient::createDataset(const CreateDatasetRequest &request)
{
    return qobject_cast<CreateDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * CreateDatasetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a dataset group, which holds a collection of related datasets. You can add datasets to the dataset group when
 * you create the dataset group, or later by using the <a
 * href="https://docs.aws.amazon.com/forecast/latest/dg/API_UpdateDatasetGroup.html">UpdateDatasetGroup</a>
 *
 * operation>
 *
 * After creating a dataset group and adding datasets, you use the dataset group when you create a predictor. For more
 * information, see <a href="https://docs.aws.amazon.com/forecast/latest/dg/howitworks-datasets-groups.html">Dataset
 *
 * groups</a>>
 *
 * To get a list of all your datasets groups, use the <a
 * href="https://docs.aws.amazon.com/forecast/latest/dg/API_ListDatasetGroups.html">ListDatasetGroups</a>
 *
 * operation> <note>
 *
 * The <code>Status</code> of a dataset group must be <code>ACTIVE</code> before you can use the dataset group to create a
 * predictor. To get the status, use the <a
 * href="https://docs.aws.amazon.com/forecast/latest/dg/API_DescribeDatasetGroup.html">DescribeDatasetGroup</a>
 */
CreateDatasetGroupResponse * ForecastClient::createDatasetGroup(const CreateDatasetGroupRequest &request)
{
    return qobject_cast<CreateDatasetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * CreateDatasetImportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Imports your training data to an Amazon Forecast dataset. You provide the location of your training data in an Amazon
 * Simple Storage Service (Amazon S3) bucket and the Amazon Resource Name (ARN) of the dataset that you want to import the
 * data
 *
 * to>
 *
 * You must specify a <a href="https://docs.aws.amazon.com/forecast/latest/dg/API_DataSource.html">DataSource</a> object
 * that includes an AWS Identity and Access Management (IAM) role that Amazon Forecast can assume to access the data, as
 * Amazon Forecast makes a copy of your data and processes it in an internal AWS system. For more information, see <a
 * href="https://docs.aws.amazon.com/forecast/latest/dg/aws-forecast-iam-roles.html">Set up
 *
 * permissions</a>>
 *
 * The training data must be in CSV or Parquet format. The delimiter must be a comma
 *
 * (,)>
 *
 * You can specify the path to a specific file, the S3 bucket, or to a folder in the S3 bucket. For the latter two cases,
 * Amazon Forecast imports all files up to the limit of 10,000
 *
 * files>
 *
 * Because dataset imports are not aggregated, your most recent dataset import is the one that is used when training a
 * predictor or generating a forecast. Make sure that your most recent dataset import contains all of the data you want to
 * model off of, and not just the new data collected since the previous
 *
 * import>
 *
 * To get a list of all your dataset import jobs, filtered by specified criteria, use the <a
 * href="https://docs.aws.amazon.com/forecast/latest/dg/API_ListDatasetImportJobs.html">ListDatasetImportJobs</a>
 */
CreateDatasetImportJobResponse * ForecastClient::createDatasetImportJob(const CreateDatasetImportJobRequest &request)
{
    return qobject_cast<CreateDatasetImportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * CreateExplainabilityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * Explainability is only available for Forecasts and Predictors generated from an AutoPredictor
 *
 * (<a>CreateAutoPredictor</a>> </note>
 *
 * Creates an Amazon Forecast
 *
 * Explainability>
 *
 * Explainability helps you better understand how the attributes in your datasets impact forecast. Amazon Forecast uses a
 * metric called Impact scores to quantify the relative impact of each attribute and determine whether they increase or
 * decrease forecast
 *
 * values>
 *
 * To enable Forecast Explainability, your predictor must include at least one of the following: related time series, item
 * metadata, or additional datasets like Holidays and the Weather
 *
 * Index>
 *
 * CreateExplainability accepts either a Predictor ARN or Forecast ARN. To receive aggregated Impact scores for all time
 * series and time points in your datasets, provide a Predictor ARN. To receive Impact scores for specific time series and
 * time points, provide a Forecast
 *
 * ARN>
 *
 * <b>CreateExplainability with a Predictor ARN</b>
 *
 * </p <note>
 *
 * You can only have one Explainability resource per predictor. If you already enabled <code>ExplainPredictor</code> in
 * <a>CreateAutoPredictor</a>, that predictor already has an Explainability
 *
 * resource> </note>
 *
 * The following parameters are required when providing a Predictor
 *
 * ARN> <ul> <li>
 *
 * <code>ExplainabilityName</code> - A unique name for the
 *
 * Explainability> </li> <li>
 *
 * <code>ResourceArn</code> - The Arn of the
 *
 * predictor> </li> <li>
 *
 * <code>TimePointGranularity</code> - Must be set to
 *
 * “ALL”> </li> <li>
 *
 * <code>TimeSeriesGranularity</code> - Must be set to
 *
 * “ALL”> </li> </ul>
 *
 * Do not specify a value for the following
 *
 * parameters> <ul> <li>
 *
 * <code>DataSource</code> - Only valid when TimeSeriesGranularity is
 *
 * “SPECIFIC”> </li> <li>
 *
 * <code>Schema</code> - Only valid when TimeSeriesGranularity is
 *
 * “SPECIFIC”> </li> <li>
 *
 * <code>StartDateTime</code> - Only valid when TimePointGranularity is
 *
 * “SPECIFIC”> </li> <li>
 *
 * <code>EndDateTime</code> - Only valid when TimePointGranularity is
 *
 * “SPECIFIC”> </li> </ul>
 *
 * <b>CreateExplainability with a Forecast ARN</b>
 *
 * </p <note>
 *
 * You can specify a maximum of 50 time series and 500 time
 *
 * points> </note>
 *
 * The following parameters are required when providing a Predictor
 *
 * ARN> <ul> <li>
 *
 * <code>ExplainabilityName</code> - A unique name for the
 *
 * Explainability> </li> <li>
 *
 * <code>ResourceArn</code> - The Arn of the
 *
 * forecast> </li> <li>
 *
 * <code>TimePointGranularity</code> - Either “ALL” or
 *
 * “SPECIFIC”> </li> <li>
 *
 * <code>TimeSeriesGranularity</code> - Either “ALL” or
 *
 * “SPECIFIC”> </li> </ul>
 *
 * If you set TimeSeriesGranularity to “SPECIFIC”, you must also provide the
 *
 * following> <ul> <li>
 *
 * <code>DataSource</code> - The S3 location of the CSV file specifying your time
 *
 * series> </li> <li>
 *
 * <code>Schema</code> - The Schema defines the attributes and attribute types listed in the Data
 *
 * Source> </li> </ul>
 *
 * If you set TimePointGranularity to “SPECIFIC”, you must also provide the
 *
 * following> <ul> <li>
 *
 * <code>StartDateTime</code> - The first timestamp in the range of time
 *
 * points> </li> <li>
 *
 * <code>EndDateTime</code> - The last timestamp in the range of time
 */
CreateExplainabilityResponse * ForecastClient::createExplainability(const CreateExplainabilityRequest &request)
{
    return qobject_cast<CreateExplainabilityResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * CreateExplainabilityExportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Exports an Explainability resource created by the <a>CreateExplainability</a> operation. Exported files are exported to
 * an Amazon Simple Storage Service (Amazon S3)
 *
 * bucket>
 *
 * You must specify a <a>DataDestination</a> object that includes an Amazon S3 bucket and an AWS Identity and Access
 * Management (IAM) role that Amazon Forecast can assume to access the Amazon S3 bucket. For more information, see
 *
 * <a>aws-forecast-iam-roles</a>> <note>
 *
 * The <code>Status</code> of the export job must be <code>ACTIVE</code> before you can access the export in your Amazon S3
 * bucket. To get the status, use the <a>DescribeExplainabilityExport</a>
 */
CreateExplainabilityExportResponse * ForecastClient::createExplainabilityExport(const CreateExplainabilityExportRequest &request)
{
    return qobject_cast<CreateExplainabilityExportResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * CreateForecastResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a forecast for each item in the <code>TARGET_TIME_SERIES</code> dataset that was used to train the predictor.
 * This is known as inference. To retrieve the forecast for a single item at low latency, use the operation. To export the
 * complete forecast into your Amazon Simple Storage Service (Amazon S3) bucket, use the <a>CreateForecastExportJob</a>
 *
 * operation>
 *
 * The range of the forecast is determined by the <code>ForecastHorizon</code> value, which you specify in the
 * <a>CreatePredictor</a> request. When you query a forecast, you can request a specific date range within the
 *
 * forecast>
 *
 * To get a list of all your forecasts, use the <a>ListForecasts</a>
 *
 * operation> <note>
 *
 * The forecasts generated by Amazon Forecast are in the same time zone as the dataset that was used to create the
 *
 * predictor> </note>
 *
 * For more information, see
 *
 * <a>howitworks-forecast</a>> <note>
 *
 * The <code>Status</code> of the forecast must be <code>ACTIVE</code> before you can query or export the forecast. Use the
 * <a>DescribeForecast</a> operation to get the
 *
 * status> </note>
 *
 * By default, a forecast includes predictions for every item (<code>item_id</code>) in the dataset group that was used to
 * train the predictor. However, you can use the <code>TimeSeriesSelector</code> object to generate a forecast on a subset
 * of time series. Forecast creation is skipped for any time series that you specify that are not in the input dataset. The
 * forecast export file will not contain these time series or their forecasted
 */
CreateForecastResponse * ForecastClient::createForecast(const CreateForecastRequest &request)
{
    return qobject_cast<CreateForecastResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * CreateForecastExportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Exports a forecast created by the <a>CreateForecast</a> operation to your Amazon Simple Storage Service (Amazon S3)
 * bucket. The forecast file name will match the following
 *
 * conventions>
 *
 * <ForecastExportJobName>_<ExportTimestamp>_<PartNumber>
 *
 * where the <ExportTimestamp> component is in Java SimpleDateFormat
 *
 * (yyyy-MM-ddTHH-mm-ssZ)>
 *
 * You must specify a <a>DataDestination</a> object that includes an AWS Identity and Access Management (IAM) role that
 * Amazon Forecast can assume to access the Amazon S3 bucket. For more information, see
 *
 * <a>aws-forecast-iam-roles</a>>
 *
 * For more information, see
 *
 * <a>howitworks-forecast</a>>
 *
 * To get a list of all your forecast export jobs, use the <a>ListForecastExportJobs</a>
 *
 * operation> <note>
 *
 * The <code>Status</code> of the forecast export job must be <code>ACTIVE</code> before you can access the forecast in
 * your Amazon S3 bucket. To get the status, use the <a>DescribeForecastExportJob</a>
 */
CreateForecastExportJobResponse * ForecastClient::createForecastExportJob(const CreateForecastExportJobRequest &request)
{
    return qobject_cast<CreateForecastExportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * CreateMonitorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a predictor monitor resource for an existing auto predictor. Predictor monitoring allows you to see how your
 * predictor's performance changes over time. For more information, see <a
 * href="https://docs.aws.amazon.com/forecast/latest/dg/predictor-monitoring.html">Predictor Monitoring</a>.
 */
CreateMonitorResponse * ForecastClient::createMonitor(const CreateMonitorRequest &request)
{
    return qobject_cast<CreateMonitorResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * CreatePredictorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This operation creates a legacy predictor that does not include all the predictor functionalities provided by Amazon
 * Forecast. To create a predictor that is compatible with all aspects of Forecast, use
 *
 * <a>CreateAutoPredictor</a>> </note>
 *
 * Creates an Amazon Forecast
 *
 * predictor>
 *
 * In the request, provide a dataset group and either specify an algorithm or let Amazon Forecast choose an algorithm for
 * you using AutoML. If you specify an algorithm, you also can override algorithm-specific
 *
 * hyperparameters>
 *
 * Amazon Forecast uses the algorithm to train a predictor using the latest version of the datasets in the specified
 * dataset group. You can then generate a forecast using the <a>CreateForecast</a>
 *
 * operation>
 *
 * To see the evaluation metrics, use the <a>GetAccuracyMetrics</a> operation.
 *
 * </p
 *
 * You can specify a featurization configuration to fill and aggregate the data fields in the
 * <code>TARGET_TIME_SERIES</code> dataset to improve model training. For more information, see
 *
 * <a>FeaturizationConfig</a>>
 *
 * For RELATED_TIME_SERIES datasets, <code>CreatePredictor</code> verifies that the <code>DataFrequency</code> specified
 * when the dataset was created matches the <code>ForecastFrequency</code>. TARGET_TIME_SERIES datasets don't have this
 * restriction. Amazon Forecast also verifies the delimiter and timestamp format. For more information, see
 *
 * <a>howitworks-datasets-groups</a>>
 *
 * By default, predictors are trained and evaluated at the 0.1 (P10), 0.5 (P50), and 0.9 (P90) quantiles. You can choose
 * custom forecast types to train and evaluate your predictor by setting the <code>ForecastTypes</code>.
 *
 * </p
 *
 * <b>AutoML</b>
 *
 * </p
 *
 * If you want Amazon Forecast to evaluate each algorithm and choose the one that minimizes the <code>objective
 * function</code>, set <code>PerformAutoML</code> to <code>true</code>. The <code>objective function</code> is defined as
 * the mean of the weighted losses over the forecast types. By default, these are the p10, p50, and p90 quantile losses.
 * For more information, see
 *
 * <a>EvaluationResult</a>>
 *
 * When AutoML is enabled, the following properties are
 *
 * disallowed> <ul> <li>
 *
 * <code>AlgorithmArn</code>
 *
 * </p </li> <li>
 *
 * <code>HPOConfig</code>
 *
 * </p </li> <li>
 *
 * <code>PerformHPO</code>
 *
 * </p </li> <li>
 *
 * <code>TrainingParameters</code>
 *
 * </p </li> </ul>
 *
 * To get a list of all of your predictors, use the <a>ListPredictors</a>
 *
 * operation> <note>
 *
 * Before you can use the predictor to create a forecast, the <code>Status</code> of the predictor must be
 * <code>ACTIVE</code>, signifying that training has completed. To get the status, use the <a>DescribePredictor</a>
 */
CreatePredictorResponse * ForecastClient::createPredictor(const CreatePredictorRequest &request)
{
    return qobject_cast<CreatePredictorResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * CreatePredictorBacktestExportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Exports backtest forecasts and accuracy metrics generated by the <a>CreateAutoPredictor</a> or <a>CreatePredictor</a>
 * operations. Two folders containing CSV or Parquet files are exported to your specified S3
 *
 * bucket>
 *
 * The export file names will match the following
 *
 * conventions>
 *
 * <code><ExportJobName>_<ExportTimestamp>_<PartNumber>.csv</code>
 *
 * </p
 *
 * The <ExportTimestamp> component is in Java SimpleDate format
 *
 * (yyyy-MM-ddTHH-mm-ssZ)>
 *
 * You must specify a <a>DataDestination</a> object that includes an Amazon S3 bucket and an AWS Identity and Access
 * Management (IAM) role that Amazon Forecast can assume to access the Amazon S3 bucket. For more information, see
 *
 * <a>aws-forecast-iam-roles</a>> <note>
 *
 * The <code>Status</code> of the export job must be <code>ACTIVE</code> before you can access the export in your Amazon S3
 * bucket. To get the status, use the <a>DescribePredictorBacktestExportJob</a>
 */
CreatePredictorBacktestExportJobResponse * ForecastClient::createPredictorBacktestExportJob(const CreatePredictorBacktestExportJobRequest &request)
{
    return qobject_cast<CreatePredictorBacktestExportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * CreateWhatIfAnalysisResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * What-if analysis is a scenario modeling technique where you make a hypothetical change to a time series and compare the
 * forecasts generated by these changes against the baseline, unchanged time series. It is important to remember that the
 * purpose of a what-if analysis is to understand how a forecast can change given different modifications to the baseline
 * time
 *
 * series>
 *
 * For example, imagine you are a clothing retailer who is considering an end of season sale to clear space for new styles.
 * After creating a baseline forecast, you can use a what-if analysis to investigate how different sales tactics might
 * affect your goals. You could create a scenario where everything is given a 25% markdown and another where everything is
 * given a fixed dollar markdown. You can create a scenario where the sale lasts for 1 week and another where the sale
 * lasts for 1 month. Your what-if analysis enables you to compare many different scenarios against each
 *
 * other>
 *
 * Note that a what-if analysis is meant to display what the forecasting model has learned and how it will behave in the
 * scenarios that you are evaluating. Do not blindly use the results of the what-if analysis to make business decisions.
 * For instance, forecasts might not be accurate for novel scenarios where there is no reference available to determine
 * whether a forecast is
 *
 * good>
 *
 * The <a>TimeSeriesSelector</a> object defines the items that you want in the what-if
 */
CreateWhatIfAnalysisResponse * ForecastClient::createWhatIfAnalysis(const CreateWhatIfAnalysisRequest &request)
{
    return qobject_cast<CreateWhatIfAnalysisResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * CreateWhatIfForecastResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A what-if forecast is a forecast that is created from a modified version of the baseline forecast. Each what-if forecast
 * incorporates either a replacement dataset or a set of transformations to the original dataset.
 */
CreateWhatIfForecastResponse * ForecastClient::createWhatIfForecast(const CreateWhatIfForecastRequest &request)
{
    return qobject_cast<CreateWhatIfForecastResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * CreateWhatIfForecastExportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Exports a forecast created by the <a>CreateWhatIfForecast</a> operation to your Amazon Simple Storage Service (Amazon
 * S3) bucket. The forecast file name will match the following
 *
 * conventions>
 *
 * <code>≈<ForecastExportJobName>_<ExportTimestamp>_<PartNumber></code>
 *
 * </p
 *
 * The <ExportTimestamp> component is in Java SimpleDateFormat
 *
 * (yyyy-MM-ddTHH-mm-ssZ)>
 *
 * You must specify a <a>DataDestination</a> object that includes an AWS Identity and Access Management (IAM) role that
 * Amazon Forecast can assume to access the Amazon S3 bucket. For more information, see
 *
 * <a>aws-forecast-iam-roles</a>>
 *
 * For more information, see
 *
 * <a>howitworks-forecast</a>>
 *
 * To get a list of all your what-if forecast export jobs, use the <a>ListWhatIfForecastExports</a>
 *
 * operation> <note>
 *
 * The <code>Status</code> of the forecast export job must be <code>ACTIVE</code> before you can access the forecast in
 * your Amazon S3 bucket. To get the status, use the <a>DescribeWhatIfForecastExport</a>
 */
CreateWhatIfForecastExportResponse * ForecastClient::createWhatIfForecastExport(const CreateWhatIfForecastExportRequest &request)
{
    return qobject_cast<CreateWhatIfForecastExportResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * DeleteDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon Forecast dataset that was created using the <a
 * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDataset.html">CreateDataset</a> operation. You can only
 * delete datasets that have a status of <code>ACTIVE</code> or <code>CREATE_FAILED</code>. To get the status use the <a
 * href="https://docs.aws.amazon.com/forecast/latest/dg/API_DescribeDataset.html">DescribeDataset</a>
 *
 * operation> <note>
 *
 * Forecast does not automatically update any dataset groups that contain the deleted dataset. In order to update the
 * dataset group, use the <a
 * href="https://docs.aws.amazon.com/forecast/latest/dg/API_UpdateDatasetGroup.html">UpdateDatasetGroup</a> operation,
 * omitting the deleted dataset's
 */
DeleteDatasetResponse * ForecastClient::deleteDataset(const DeleteDatasetRequest &request)
{
    return qobject_cast<DeleteDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * DeleteDatasetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a dataset group created using the <a
 * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetGroup.html">CreateDatasetGroup</a> operation. You
 * can only delete dataset groups that have a status of <code>ACTIVE</code>, <code>CREATE_FAILED</code>, or
 * <code>UPDATE_FAILED</code>. To get the status, use the <a
 * href="https://docs.aws.amazon.com/forecast/latest/dg/API_DescribeDatasetGroup.html">DescribeDatasetGroup</a>
 *
 * operation>
 *
 * This operation deletes only the dataset group, not the datasets in the
 */
DeleteDatasetGroupResponse * ForecastClient::deleteDatasetGroup(const DeleteDatasetGroupRequest &request)
{
    return qobject_cast<DeleteDatasetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * DeleteDatasetImportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a dataset import job created using the <a
 * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetImportJob.html">CreateDatasetImportJob</a>
 * operation. You can delete only dataset import jobs that have a status of <code>ACTIVE</code> or
 * <code>CREATE_FAILED</code>. To get the status, use the <a
 * href="https://docs.aws.amazon.com/forecast/latest/dg/API_DescribeDatasetImportJob.html">DescribeDatasetImportJob</a>
 */
DeleteDatasetImportJobResponse * ForecastClient::deleteDatasetImportJob(const DeleteDatasetImportJobRequest &request)
{
    return qobject_cast<DeleteDatasetImportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * DeleteExplainabilityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Explainability
 *
 * resource>
 *
 * You can delete only predictor that have a status of <code>ACTIVE</code> or <code>CREATE_FAILED</code>. To get the
 * status, use the <a>DescribeExplainability</a>
 */
DeleteExplainabilityResponse * ForecastClient::deleteExplainability(const DeleteExplainabilityRequest &request)
{
    return qobject_cast<DeleteExplainabilityResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * DeleteExplainabilityExportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Explainability
 */
DeleteExplainabilityExportResponse * ForecastClient::deleteExplainabilityExport(const DeleteExplainabilityExportRequest &request)
{
    return qobject_cast<DeleteExplainabilityExportResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * DeleteForecastResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a forecast created using the <a>CreateForecast</a> operation. You can delete only forecasts that have a status
 * of <code>ACTIVE</code> or <code>CREATE_FAILED</code>. To get the status, use the <a>DescribeForecast</a>
 *
 * operation>
 *
 * You can't delete a forecast while it is being exported. After a forecast is deleted, you can no longer query the
 */
DeleteForecastResponse * ForecastClient::deleteForecast(const DeleteForecastRequest &request)
{
    return qobject_cast<DeleteForecastResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * DeleteForecastExportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a forecast export job created using the <a>CreateForecastExportJob</a> operation. You can delete only export
 * jobs that have a status of <code>ACTIVE</code> or <code>CREATE_FAILED</code>. To get the status, use the
 * <a>DescribeForecastExportJob</a>
 */
DeleteForecastExportJobResponse * ForecastClient::deleteForecastExportJob(const DeleteForecastExportJobRequest &request)
{
    return qobject_cast<DeleteForecastExportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * DeleteMonitorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a monitor resource. You can only delete a monitor resource with a status of <code>ACTIVE</code>,
 * <code>ACTIVE_STOPPED</code>, <code>CREATE_FAILED</code>, or
 */
DeleteMonitorResponse * ForecastClient::deleteMonitor(const DeleteMonitorRequest &request)
{
    return qobject_cast<DeleteMonitorResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * DeletePredictorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a predictor created using the <a>DescribePredictor</a> or <a>CreatePredictor</a> operations. You can delete only
 * predictor that have a status of <code>ACTIVE</code> or <code>CREATE_FAILED</code>. To get the status, use the
 * <a>DescribePredictor</a>
 */
DeletePredictorResponse * ForecastClient::deletePredictor(const DeletePredictorRequest &request)
{
    return qobject_cast<DeletePredictorResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * DeletePredictorBacktestExportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a predictor backtest export
 */
DeletePredictorBacktestExportJobResponse * ForecastClient::deletePredictorBacktestExportJob(const DeletePredictorBacktestExportJobRequest &request)
{
    return qobject_cast<DeletePredictorBacktestExportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * DeleteResourceTreeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an entire resource tree. This operation will delete the parent resource and its child
 *
 * resources>
 *
 * Child resources are resources that were created from another resource. For example, when a forecast is generated from a
 * predictor, the forecast is the child resource and the predictor is the parent
 *
 * resource>
 *
 * Amazon Forecast resources possess the following parent-child resource
 *
 * hierarchies> <ul> <li>
 *
 * <b>Dataset</b>: dataset import
 *
 * job> </li> <li>
 *
 * <b>Dataset Group</b>: predictors, predictor backtest export jobs, forecasts, forecast export
 *
 * job> </li> <li>
 *
 * <b>Predictor</b>: predictor backtest export jobs, forecasts, forecast export
 *
 * job> </li> <li>
 *
 * <b>Forecast</b>: forecast export
 *
 * job> </li> </ul> <note>
 *
 * <code>DeleteResourceTree</code> will only delete Amazon Forecast resources, and will not delete datasets or exported
 * files stored in Amazon S3.
 */
DeleteResourceTreeResponse * ForecastClient::deleteResourceTree(const DeleteResourceTreeRequest &request)
{
    return qobject_cast<DeleteResourceTreeResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * DeleteWhatIfAnalysisResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a what-if analysis created using the <a>CreateWhatIfAnalysis</a> operation. You can delete only what-if analyses
 * that have a status of <code>ACTIVE</code> or <code>CREATE_FAILED</code>. To get the status, use the
 * <a>DescribeWhatIfAnalysis</a> operation.
 *
 * </p
 *
 * You can't delete a what-if analysis while any of its forecasts are being
 */
DeleteWhatIfAnalysisResponse * ForecastClient::deleteWhatIfAnalysis(const DeleteWhatIfAnalysisRequest &request)
{
    return qobject_cast<DeleteWhatIfAnalysisResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * DeleteWhatIfForecastResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a what-if forecast created using the <a>CreateWhatIfForecast</a> operation. You can delete only what-if
 * forecasts that have a status of <code>ACTIVE</code> or <code>CREATE_FAILED</code>. To get the status, use the
 * <a>DescribeWhatIfForecast</a> operation.
 *
 * </p
 *
 * You can't delete a what-if forecast while it is being exported. After a what-if forecast is deleted, you can no longer
 * query the what-if
 */
DeleteWhatIfForecastResponse * ForecastClient::deleteWhatIfForecast(const DeleteWhatIfForecastRequest &request)
{
    return qobject_cast<DeleteWhatIfForecastResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * DeleteWhatIfForecastExportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a what-if forecast export created using the <a>CreateWhatIfForecastExport</a> operation. You can delete only
 * what-if forecast exports that have a status of <code>ACTIVE</code> or <code>CREATE_FAILED</code>. To get the status, use
 * the <a>DescribeWhatIfForecastExport</a> operation.
 */
DeleteWhatIfForecastExportResponse * ForecastClient::deleteWhatIfForecastExport(const DeleteWhatIfForecastExportRequest &request)
{
    return qobject_cast<DeleteWhatIfForecastExportResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * DescribeAutoPredictorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a predictor created using the CreateAutoPredictor
 */
DescribeAutoPredictorResponse * ForecastClient::describeAutoPredictor(const DescribeAutoPredictorRequest &request)
{
    return qobject_cast<DescribeAutoPredictorResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * DescribeDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an Amazon Forecast dataset created using the <a
 * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDataset.html">CreateDataset</a>
 *
 * operation>
 *
 * In addition to listing the parameters specified in the <code>CreateDataset</code> request, this operation includes the
 * following dataset
 *
 * properties> <ul> <li>
 *
 * <code>CreationTime</code>
 *
 * </p </li> <li>
 *
 * <code>LastModificationTime</code>
 *
 * </p </li> <li>
 *
 * <code>Status</code>
 */
DescribeDatasetResponse * ForecastClient::describeDataset(const DescribeDatasetRequest &request)
{
    return qobject_cast<DescribeDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * DescribeDatasetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a dataset group created using the <a
 * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetGroup.html">CreateDatasetGroup</a>
 *
 * operation>
 *
 * In addition to listing the parameters provided in the <code>CreateDatasetGroup</code> request, this operation includes
 * the following
 *
 * properties> <ul> <li>
 *
 * <code>DatasetArns</code> - The datasets belonging to the
 *
 * group> </li> <li>
 *
 * <code>CreationTime</code>
 *
 * </p </li> <li>
 *
 * <code>LastModificationTime</code>
 *
 * </p </li> <li>
 *
 * <code>Status</code>
 */
DescribeDatasetGroupResponse * ForecastClient::describeDatasetGroup(const DescribeDatasetGroupRequest &request)
{
    return qobject_cast<DescribeDatasetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * DescribeDatasetImportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a dataset import job created using the <a
 * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetImportJob.html">CreateDatasetImportJob</a>
 *
 * operation>
 *
 * In addition to listing the parameters provided in the <code>CreateDatasetImportJob</code> request, this operation
 * includes the following
 *
 * properties> <ul> <li>
 *
 * <code>CreationTime</code>
 *
 * </p </li> <li>
 *
 * <code>LastModificationTime</code>
 *
 * </p </li> <li>
 *
 * <code>DataSize</code>
 *
 * </p </li> <li>
 *
 * <code>FieldStatistics</code>
 *
 * </p </li> <li>
 *
 * <code>Status</code>
 *
 * </p </li> <li>
 *
 * <code>Message</code> - If an error occurred, information about the
 */
DescribeDatasetImportJobResponse * ForecastClient::describeDatasetImportJob(const DescribeDatasetImportJobRequest &request)
{
    return qobject_cast<DescribeDatasetImportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * DescribeExplainabilityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an Explainability resource created using the <a>CreateExplainability</a>
 */
DescribeExplainabilityResponse * ForecastClient::describeExplainability(const DescribeExplainabilityRequest &request)
{
    return qobject_cast<DescribeExplainabilityResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * DescribeExplainabilityExportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an Explainability export created using the <a>CreateExplainabilityExport</a>
 */
DescribeExplainabilityExportResponse * ForecastClient::describeExplainabilityExport(const DescribeExplainabilityExportRequest &request)
{
    return qobject_cast<DescribeExplainabilityExportResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * DescribeForecastResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a forecast created using the <a>CreateForecast</a>
 *
 * operation>
 *
 * In addition to listing the properties provided in the <code>CreateForecast</code> request, this operation lists the
 * following
 *
 * properties> <ul> <li>
 *
 * <code>DatasetGroupArn</code> - The dataset group that provided the training
 *
 * data> </li> <li>
 *
 * <code>CreationTime</code>
 *
 * </p </li> <li>
 *
 * <code>LastModificationTime</code>
 *
 * </p </li> <li>
 *
 * <code>Status</code>
 *
 * </p </li> <li>
 *
 * <code>Message</code> - If an error occurred, information about the
 */
DescribeForecastResponse * ForecastClient::describeForecast(const DescribeForecastRequest &request)
{
    return qobject_cast<DescribeForecastResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * DescribeForecastExportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a forecast export job created using the <a>CreateForecastExportJob</a>
 *
 * operation>
 *
 * In addition to listing the properties provided by the user in the <code>CreateForecastExportJob</code> request, this
 * operation lists the following
 *
 * properties> <ul> <li>
 *
 * <code>CreationTime</code>
 *
 * </p </li> <li>
 *
 * <code>LastModificationTime</code>
 *
 * </p </li> <li>
 *
 * <code>Status</code>
 *
 * </p </li> <li>
 *
 * <code>Message</code> - If an error occurred, information about the
 */
DescribeForecastExportJobResponse * ForecastClient::describeForecastExportJob(const DescribeForecastExportJobRequest &request)
{
    return qobject_cast<DescribeForecastExportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * DescribeMonitorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a monitor resource. In addition to listing the properties provided in the <a>CreateMonitor</a> request, this
 * operation lists the following
 *
 * properties> <ul> <li>
 *
 * <code>Baseline</code>
 *
 * </p </li> <li>
 *
 * <code>CreationTime</code>
 *
 * </p </li> <li>
 *
 * <code>LastEvaluationTime</code>
 *
 * </p </li> <li>
 *
 * <code>LastEvaluationState</code>
 *
 * </p </li> <li>
 *
 * <code>LastModificationTime</code>
 *
 * </p </li> <li>
 *
 * <code>Message</code>
 *
 * </p </li> <li>
 *
 * <code>Status</code>
 */
DescribeMonitorResponse * ForecastClient::describeMonitor(const DescribeMonitorRequest &request)
{
    return qobject_cast<DescribeMonitorResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * DescribePredictorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This operation is only valid for legacy predictors created with CreatePredictor. If you are not using a legacy
 * predictor, use
 *
 * <a>DescribeAutoPredictor</a>> </note>
 *
 * Describes a predictor created using the <a>CreatePredictor</a>
 *
 * operation>
 *
 * In addition to listing the properties provided in the <code>CreatePredictor</code> request, this operation lists the
 * following
 *
 * properties> <ul> <li>
 *
 * <code>DatasetImportJobArns</code> - The dataset import jobs used to import training
 *
 * data> </li> <li>
 *
 * <code>AutoMLAlgorithmArns</code> - If AutoML is performed, the algorithms that were
 *
 * evaluated> </li> <li>
 *
 * <code>CreationTime</code>
 *
 * </p </li> <li>
 *
 * <code>LastModificationTime</code>
 *
 * </p </li> <li>
 *
 * <code>Status</code>
 *
 * </p </li> <li>
 *
 * <code>Message</code> - If an error occurred, information about the
 */
DescribePredictorResponse * ForecastClient::describePredictor(const DescribePredictorRequest &request)
{
    return qobject_cast<DescribePredictorResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * DescribePredictorBacktestExportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a predictor backtest export job created using the <a>CreatePredictorBacktestExportJob</a>
 *
 * operation>
 *
 * In addition to listing the properties provided by the user in the <code>CreatePredictorBacktestExportJob</code> request,
 * this operation lists the following
 *
 * properties> <ul> <li>
 *
 * <code>CreationTime</code>
 *
 * </p </li> <li>
 *
 * <code>LastModificationTime</code>
 *
 * </p </li> <li>
 *
 * <code>Status</code>
 *
 * </p </li> <li>
 *
 * <code>Message</code> (if an error
 */
DescribePredictorBacktestExportJobResponse * ForecastClient::describePredictorBacktestExportJob(const DescribePredictorBacktestExportJobRequest &request)
{
    return qobject_cast<DescribePredictorBacktestExportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * DescribeWhatIfAnalysisResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the what-if analysis created using the <a>CreateWhatIfAnalysis</a>
 *
 * operation>
 *
 * In addition to listing the properties provided in the <code>CreateWhatIfAnalysis</code> request, this operation lists
 * the following
 *
 * properties> <ul> <li>
 *
 * <code>CreationTime</code>
 *
 * </p </li> <li>
 *
 * <code>LastModificationTime</code>
 *
 * </p </li> <li>
 *
 * <code>Message</code> - If an error occurred, information about the
 *
 * error> </li> <li>
 *
 * <code>Status</code>
 */
DescribeWhatIfAnalysisResponse * ForecastClient::describeWhatIfAnalysis(const DescribeWhatIfAnalysisRequest &request)
{
    return qobject_cast<DescribeWhatIfAnalysisResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * DescribeWhatIfForecastResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the what-if forecast created using the <a>CreateWhatIfForecast</a>
 *
 * operation>
 *
 * In addition to listing the properties provided in the <code>CreateWhatIfForecast</code> request, this operation lists
 * the following
 *
 * properties> <ul> <li>
 *
 * <code>CreationTime</code>
 *
 * </p </li> <li>
 *
 * <code>LastModificationTime</code>
 *
 * </p </li> <li>
 *
 * <code>Message</code> - If an error occurred, information about the
 *
 * error> </li> <li>
 *
 * <code>Status</code>
 */
DescribeWhatIfForecastResponse * ForecastClient::describeWhatIfForecast(const DescribeWhatIfForecastRequest &request)
{
    return qobject_cast<DescribeWhatIfForecastResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * DescribeWhatIfForecastExportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the what-if forecast export created using the <a>CreateWhatIfForecastExport</a>
 *
 * operation>
 *
 * In addition to listing the properties provided in the <code>CreateWhatIfForecastExport</code> request, this operation
 * lists the following
 *
 * properties> <ul> <li>
 *
 * <code>CreationTime</code>
 *
 * </p </li> <li>
 *
 * <code>LastModificationTime</code>
 *
 * </p </li> <li>
 *
 * <code>Message</code> - If an error occurred, information about the
 *
 * error> </li> <li>
 *
 * <code>Status</code>
 */
DescribeWhatIfForecastExportResponse * ForecastClient::describeWhatIfForecastExport(const DescribeWhatIfForecastExportRequest &request)
{
    return qobject_cast<DescribeWhatIfForecastExportResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * GetAccuracyMetricsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides metrics on the accuracy of the models that were trained by the <a>CreatePredictor</a> operation. Use metrics to
 * see how well the model performed and to decide whether to use the predictor to generate a forecast. For more
 * information, see <a href="https://docs.aws.amazon.com/forecast/latest/dg/metrics.html">Predictor
 *
 * Metrics</a>>
 *
 * This operation generates metrics for each backtest window that was evaluated. The number of backtest windows
 * (<code>NumberOfBacktestWindows</code>) is specified using the <a>EvaluationParameters</a> object, which is optionally
 * included in the <code>CreatePredictor</code> request. If <code>NumberOfBacktestWindows</code> isn't specified, the
 * number defaults to
 *
 * one>
 *
 * The parameters of the <code>filling</code> method determine which items contribute to the metrics. If you want all items
 * to contribute, specify <code>zero</code>. If you want only those items that have complete data in the range being
 * evaluated to contribute, specify <code>nan</code>. For more information, see
 *
 * <a>FeaturizationMethod</a>> <note>
 *
 * Before you can get accuracy metrics, the <code>Status</code> of the predictor must be <code>ACTIVE</code>, signifying
 * that training has completed. To get the status, use the <a>DescribePredictor</a>
 */
GetAccuracyMetricsResponse * ForecastClient::getAccuracyMetrics(const GetAccuracyMetricsRequest &request)
{
    return qobject_cast<GetAccuracyMetricsResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * ListDatasetGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of dataset groups created using the <a
 * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetGroup.html">CreateDatasetGroup</a> operation. For
 * each dataset group, this operation returns a summary of its properties, including its Amazon Resource Name (ARN). You
 * can retrieve the complete set of properties by using the dataset group ARN with the <a
 * href="https://docs.aws.amazon.com/forecast/latest/dg/API_DescribeDatasetGroup.html">DescribeDatasetGroup</a>
 */
ListDatasetGroupsResponse * ForecastClient::listDatasetGroups(const ListDatasetGroupsRequest &request)
{
    return qobject_cast<ListDatasetGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * ListDatasetImportJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of dataset import jobs created using the <a
 * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetImportJob.html">CreateDatasetImportJob</a>
 * operation. For each import job, this operation returns a summary of its properties, including its Amazon Resource Name
 * (ARN). You can retrieve the complete set of properties by using the ARN with the <a
 * href="https://docs.aws.amazon.com/forecast/latest/dg/API_DescribeDatasetImportJob.html">DescribeDatasetImportJob</a>
 * operation. You can filter the list by providing an array of <a
 * href="https://docs.aws.amazon.com/forecast/latest/dg/API_Filter.html">Filter</a>
 */
ListDatasetImportJobsResponse * ForecastClient::listDatasetImportJobs(const ListDatasetImportJobsRequest &request)
{
    return qobject_cast<ListDatasetImportJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * ListDatasetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of datasets created using the <a
 * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDataset.html">CreateDataset</a> operation. For each
 * dataset, a summary of its properties, including its Amazon Resource Name (ARN), is returned. To retrieve the complete
 * set of properties, use the ARN with the <a
 * href="https://docs.aws.amazon.com/forecast/latest/dg/API_DescribeDataset.html">DescribeDataset</a>
 */
ListDatasetsResponse * ForecastClient::listDatasets(const ListDatasetsRequest &request)
{
    return qobject_cast<ListDatasetsResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * ListExplainabilitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of Explainability resources created using the <a>CreateExplainability</a> operation. This operation
 * returns a summary for each Explainability. You can filter the list using an array of <a>Filter</a>
 *
 * objects>
 *
 * To retrieve the complete set of properties for a particular Explainability resource, use the ARN with the
 * <a>DescribeExplainability</a>
 */
ListExplainabilitiesResponse * ForecastClient::listExplainabilities(const ListExplainabilitiesRequest &request)
{
    return qobject_cast<ListExplainabilitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * ListExplainabilityExportsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of Explainability exports created using the <a>CreateExplainabilityExport</a> operation. This operation
 * returns a summary for each Explainability export. You can filter the list using an array of <a>Filter</a>
 *
 * objects>
 *
 * To retrieve the complete set of properties for a particular Explainability export, use the ARN with the
 * <a>DescribeExplainability</a>
 */
ListExplainabilityExportsResponse * ForecastClient::listExplainabilityExports(const ListExplainabilityExportsRequest &request)
{
    return qobject_cast<ListExplainabilityExportsResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * ListForecastExportJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of forecast export jobs created using the <a>CreateForecastExportJob</a> operation. For each forecast
 * export job, this operation returns a summary of its properties, including its Amazon Resource Name (ARN). To retrieve
 * the complete set of properties, use the ARN with the <a>DescribeForecastExportJob</a> operation. You can filter the list
 * using an array of <a>Filter</a>
 */
ListForecastExportJobsResponse * ForecastClient::listForecastExportJobs(const ListForecastExportJobsRequest &request)
{
    return qobject_cast<ListForecastExportJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * ListForecastsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of forecasts created using the <a>CreateForecast</a> operation. For each forecast, this operation returns
 * a summary of its properties, including its Amazon Resource Name (ARN). To retrieve the complete set of properties,
 * specify the ARN with the <a>DescribeForecast</a> operation. You can filter the list using an array of <a>Filter</a>
 */
ListForecastsResponse * ForecastClient::listForecasts(const ListForecastsRequest &request)
{
    return qobject_cast<ListForecastsResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * ListMonitorEvaluationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the monitoring evaluation results and predictor events collected by the monitor resource during
 * different windows of
 *
 * time>
 *
 * For information about monitoring see <a>predictor-monitoring</a>. For more information about retrieving monitoring
 * results see <a href="https://docs.aws.amazon.com/forecast/latest/dg/predictor-monitoring-results.html">Viewing
 * Monitoring
 */
ListMonitorEvaluationsResponse * ForecastClient::listMonitorEvaluations(const ListMonitorEvaluationsRequest &request)
{
    return qobject_cast<ListMonitorEvaluationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * ListMonitorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of monitors created with the <a>CreateMonitor</a> operation and <a>CreateAutoPredictor</a> operation. For
 * each monitor resource, this operation returns of a summary of its properties, including its Amazon Resource Name (ARN).
 * You can retrieve a complete set of properties of a monitor resource by specify the monitor's ARN in the
 * <a>DescribeMonitor</a>
 */
ListMonitorsResponse * ForecastClient::listMonitors(const ListMonitorsRequest &request)
{
    return qobject_cast<ListMonitorsResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * ListPredictorBacktestExportJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of predictor backtest export jobs created using the <a>CreatePredictorBacktestExportJob</a> operation.
 * This operation returns a summary for each backtest export job. You can filter the list using an array of <a>Filter</a>
 *
 * objects>
 *
 * To retrieve the complete set of properties for a particular backtest export job, use the ARN with the
 * <a>DescribePredictorBacktestExportJob</a>
 */
ListPredictorBacktestExportJobsResponse * ForecastClient::listPredictorBacktestExportJobs(const ListPredictorBacktestExportJobsRequest &request)
{
    return qobject_cast<ListPredictorBacktestExportJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * ListPredictorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of predictors created using the <a>CreateAutoPredictor</a> or <a>CreatePredictor</a> operations. For each
 * predictor, this operation returns a summary of its properties, including its Amazon Resource Name (ARN).
 *
 * </p
 *
 * You can retrieve the complete set of properties by using the ARN with the <a>DescribeAutoPredictor</a> and
 * <a>DescribePredictor</a> operations. You can filter the list using an array of <a>Filter</a>
 */
ListPredictorsResponse * ForecastClient::listPredictors(const ListPredictorsRequest &request)
{
    return qobject_cast<ListPredictorsResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags for an Amazon Forecast
 */
ListTagsForResourceResponse * ForecastClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * ListWhatIfAnalysesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of what-if analyses created using the <a>CreateWhatIfAnalysis</a> operation. For each what-if analysis,
 * this operation returns a summary of its properties, including its Amazon Resource Name (ARN). You can retrieve the
 * complete set of properties by using the what-if analysis ARN with the <a>DescribeWhatIfAnalysis</a>
 */
ListWhatIfAnalysesResponse * ForecastClient::listWhatIfAnalyses(const ListWhatIfAnalysesRequest &request)
{
    return qobject_cast<ListWhatIfAnalysesResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * ListWhatIfForecastExportsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of what-if forecast exports created using the <a>CreateWhatIfForecastExport</a> operation. For each
 * what-if forecast export, this operation returns a summary of its properties, including its Amazon Resource Name (ARN).
 * You can retrieve the complete set of properties by using the what-if forecast export ARN with the
 * <a>DescribeWhatIfForecastExport</a>
 */
ListWhatIfForecastExportsResponse * ForecastClient::listWhatIfForecastExports(const ListWhatIfForecastExportsRequest &request)
{
    return qobject_cast<ListWhatIfForecastExportsResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * ListWhatIfForecastsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of what-if forecasts created using the <a>CreateWhatIfForecast</a> operation. For each what-if forecast,
 * this operation returns a summary of its properties, including its Amazon Resource Name (ARN). You can retrieve the
 * complete set of properties by using the what-if forecast ARN with the <a>DescribeWhatIfForecast</a>
 */
ListWhatIfForecastsResponse * ForecastClient::listWhatIfForecasts(const ListWhatIfForecastsRequest &request)
{
    return qobject_cast<ListWhatIfForecastsResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * ResumeResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Resumes a stopped monitor
 */
ResumeResourceResponse * ForecastClient::resumeResource(const ResumeResourceRequest &request)
{
    return qobject_cast<ResumeResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * StopResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a
 *
 * resource>
 *
 * The resource undergoes the following states: <code>CREATE_STOPPING</code> and <code>CREATE_STOPPED</code>. You cannot
 * resume a resource once it has been
 *
 * stopped>
 *
 * This operation can be applied to the following resources (and their corresponding child
 *
 * resources)> <ul> <li>
 *
 * Dataset Import
 *
 * Jo> </li> <li>
 *
 * Predictor
 *
 * Jo> </li> <li>
 *
 * Forecast
 *
 * Jo> </li> <li>
 *
 * Forecast Export
 *
 * Jo> </li> <li>
 *
 * Predictor Backtest Export
 *
 * Jo> </li> <li>
 *
 * Explainability
 *
 * Jo> </li> <li>
 *
 * Explainability Export
 */
StopResourceResponse * ForecastClient::stopResource(const StopResourceRequest &request)
{
    return qobject_cast<StopResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates the specified tags to a resource with the specified <code>resourceArn</code>. If existing tags on a resource
 * are not specified in the request parameters, they are not changed. When a resource is deleted, the tags associated with
 * that resource are also
 */
TagResourceResponse * ForecastClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified tags from a
 */
UntagResourceResponse * ForecastClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastClient service, and returns a pointer to an
 * UpdateDatasetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Replaces the datasets in a dataset group with the specified
 *
 * datasets> <note>
 *
 * The <code>Status</code> of the dataset group must be <code>ACTIVE</code> before you can use the dataset group to create
 * a predictor. Use the <a
 * href="https://docs.aws.amazon.com/forecast/latest/dg/API_DescribeDatasetGroup.html">DescribeDatasetGroup</a> operation
 * to get the
 */
UpdateDatasetGroupResponse * ForecastClient::updateDatasetGroup(const UpdateDatasetGroupRequest &request)
{
    return qobject_cast<UpdateDatasetGroupResponse *>(send(request));
}

/*!
 * \class QtAws::Forecast::ForecastClientPrivate
 * \brief The ForecastClientPrivate class provides private implementation for ForecastClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ForecastClientPrivate object with public implementation \a q.
 */
ForecastClientPrivate::ForecastClientPrivate(ForecastClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Forecast
} // namespace QtAws
