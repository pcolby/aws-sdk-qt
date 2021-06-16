/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "forecastserviceclient.h"
#include "forecastserviceclient_p.h"

#include "core/awssignaturev4.h"
#include "createdatasetrequest.h"
#include "createdatasetresponse.h"
#include "createdatasetgrouprequest.h"
#include "createdatasetgroupresponse.h"
#include "createdatasetimportjobrequest.h"
#include "createdatasetimportjobresponse.h"
#include "createforecastrequest.h"
#include "createforecastresponse.h"
#include "createforecastexportjobrequest.h"
#include "createforecastexportjobresponse.h"
#include "createpredictorrequest.h"
#include "createpredictorresponse.h"
#include "createpredictorbacktestexportjobrequest.h"
#include "createpredictorbacktestexportjobresponse.h"
#include "deletedatasetrequest.h"
#include "deletedatasetresponse.h"
#include "deletedatasetgrouprequest.h"
#include "deletedatasetgroupresponse.h"
#include "deletedatasetimportjobrequest.h"
#include "deletedatasetimportjobresponse.h"
#include "deleteforecastrequest.h"
#include "deleteforecastresponse.h"
#include "deleteforecastexportjobrequest.h"
#include "deleteforecastexportjobresponse.h"
#include "deletepredictorrequest.h"
#include "deletepredictorresponse.h"
#include "deletepredictorbacktestexportjobrequest.h"
#include "deletepredictorbacktestexportjobresponse.h"
#include "deleteresourcetreerequest.h"
#include "deleteresourcetreeresponse.h"
#include "describedatasetrequest.h"
#include "describedatasetresponse.h"
#include "describedatasetgrouprequest.h"
#include "describedatasetgroupresponse.h"
#include "describedatasetimportjobrequest.h"
#include "describedatasetimportjobresponse.h"
#include "describeforecastrequest.h"
#include "describeforecastresponse.h"
#include "describeforecastexportjobrequest.h"
#include "describeforecastexportjobresponse.h"
#include "describepredictorrequest.h"
#include "describepredictorresponse.h"
#include "describepredictorbacktestexportjobrequest.h"
#include "describepredictorbacktestexportjobresponse.h"
#include "getaccuracymetricsrequest.h"
#include "getaccuracymetricsresponse.h"
#include "listdatasetgroupsrequest.h"
#include "listdatasetgroupsresponse.h"
#include "listdatasetimportjobsrequest.h"
#include "listdatasetimportjobsresponse.h"
#include "listdatasetsrequest.h"
#include "listdatasetsresponse.h"
#include "listforecastexportjobsrequest.h"
#include "listforecastexportjobsresponse.h"
#include "listforecastsrequest.h"
#include "listforecastsresponse.h"
#include "listpredictorbacktestexportjobsrequest.h"
#include "listpredictorbacktestexportjobsresponse.h"
#include "listpredictorsrequest.h"
#include "listpredictorsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
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
 * \namespace QtAws::ForecastService
 * \brief Contains classess for accessing Amazon Forecast Service.
 *
 * \inmodule QtAwsForecastService
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::ForecastServiceClient
 * \brief The ForecastServiceClient class provides access to the Amazon Forecast Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 */

/*!
 * \brief Constructs a ForecastServiceClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ForecastServiceClient::ForecastServiceClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ForecastServiceClientPrivate(this), parent)
{
    Q_D(ForecastServiceClient);
    d->apiVersion = QStringLiteral("2018-06-26");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("forecast");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Forecast Service");
    d->serviceName = QStringLiteral("forecast");
}

/*!
 * \overload ForecastServiceClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ForecastServiceClient::ForecastServiceClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ForecastServiceClientPrivate(this), parent)
{
    Q_D(ForecastServiceClient);
    d->apiVersion = QStringLiteral("2018-06-26");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("forecast");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Forecast Service");
    d->serviceName = QStringLiteral("forecast");
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
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
 * dataset group to create a predictor. For more information, see
 *
 * <a>howitworks-datasets-groups</a>>
 *
 * To get a list of all your datasets, use the <a>ListDatasets</a>
 *
 * operation>
 *
 * For example Forecast datasets, see the <a href="https://github.com/aws-samples/amazon-forecast-samples">Amazon Forecast
 * Sample GitHub
 *
 * repository</a>> <note>
 *
 * The <code>Status</code> of a dataset must be <code>ACTIVE</code> before you can import training data. Use the
 * <a>DescribeDataset</a> operation to get the
 */
CreateDatasetResponse * ForecastServiceClient::createDataset(const CreateDatasetRequest &request)
{
    return qobject_cast<CreateDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
 * CreateDatasetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a dataset group, which holds a collection of related datasets. You can add datasets to the dataset group when
 * you create the dataset group, or later by using the <a>UpdateDatasetGroup</a>
 *
 * operation>
 *
 * After creating a dataset group and adding datasets, you use the dataset group when you create a predictor. For more
 * information, see
 *
 * <a>howitworks-datasets-groups</a>>
 *
 * To get a list of all your datasets groups, use the <a>ListDatasetGroups</a>
 *
 * operation> <note>
 *
 * The <code>Status</code> of a dataset group must be <code>ACTIVE</code> before you can use the dataset group to create a
 * predictor. To get the status, use the <a>DescribeDatasetGroup</a>
 */
CreateDatasetGroupResponse * ForecastServiceClient::createDatasetGroup(const CreateDatasetGroupRequest &request)
{
    return qobject_cast<CreateDatasetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
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
 * You must specify a <a>DataSource</a> object that includes an AWS Identity and Access Management (IAM) role that Amazon
 * Forecast can assume to access the data, as Amazon Forecast makes a copy of your data and processes it in an internal AWS
 * system. For more information, see
 *
 * <a>aws-forecast-iam-roles</a>>
 *
 * The training data must be in CSV format. The delimiter must be a comma
 *
 * (,)>
 *
 * You can specify the path to a specific CSV file, the S3 bucket, or to a folder in the S3 bucket. For the latter two
 * cases, Amazon Forecast imports all files up to the limit of 10,000
 *
 * files>
 *
 * Because dataset imports are not aggregated, your most recent dataset import is the one that is used when training a
 * predictor or generating a forecast. Make sure that your most recent dataset import contains all of the data you want to
 * model off of, and not just the new data collected since the previous
 *
 * import>
 *
 * To get a list of all your dataset import jobs, filtered by specified criteria, use the <a>ListDatasetImportJobs</a>
 */
CreateDatasetImportJobResponse * ForecastServiceClient::createDatasetImportJob(const CreateDatasetImportJobRequest &request)
{
    return qobject_cast<CreateDatasetImportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
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
 */
CreateForecastResponse * ForecastServiceClient::createForecast(const CreateForecastRequest &request)
{
    return qobject_cast<CreateForecastResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
 * CreateForecastExportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Exports a forecast created by the <a>CreateForecast</a> operation to your Amazon Simple Storage Service (Amazon S3)
 * bucket. The forecast file name will match the following
 *
 * conventions>
 *
 * &lt;ForecastExportJobName&gt;_&lt;ExportTimestamp&gt;_&lt;PartNumber&gt>
 *
 * where the &lt;ExportTimestamp&gt; component is in Java SimpleDateFormat
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
CreateForecastExportJobResponse * ForecastServiceClient::createForecastExportJob(const CreateForecastExportJobRequest &request)
{
    return qobject_cast<CreateForecastExportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
 * CreatePredictorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
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
CreatePredictorResponse * ForecastServiceClient::createPredictor(const CreatePredictorRequest &request)
{
    return qobject_cast<CreatePredictorResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
 * CreatePredictorBacktestExportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Exports backtest forecasts and accuracy metrics generated by the <a>CreatePredictor</a> operation. Two folders
 * containing CSV files are exported to your specified S3
 *
 * bucket>
 *
 * The export file names will match the following
 *
 * conventions>
 *
 * <code>&lt;ExportJobName&gt;_&lt;ExportTimestamp&gt;_&lt;PartNumber&gt;.csv</code>
 *
 * </p
 *
 * The &lt;ExportTimestamp&gt; component is in Java SimpleDate format
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
CreatePredictorBacktestExportJobResponse * ForecastServiceClient::createPredictorBacktestExportJob(const CreatePredictorBacktestExportJobRequest &request)
{
    return qobject_cast<CreatePredictorBacktestExportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
 * DeleteDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon Forecast dataset that was created using the <a>CreateDataset</a> operation. You can only delete
 * datasets that have a status of <code>ACTIVE</code> or <code>CREATE_FAILED</code>. To get the status use the
 * <a>DescribeDataset</a>
 *
 * operation> <note>
 *
 * Forecast does not automatically update any dataset groups that contain the deleted dataset. In order to update the
 * dataset group, use the operation, omitting the deleted dataset's
 */
DeleteDatasetResponse * ForecastServiceClient::deleteDataset(const DeleteDatasetRequest &request)
{
    return qobject_cast<DeleteDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
 * DeleteDatasetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a dataset group created using the <a>CreateDatasetGroup</a> operation. You can only delete dataset groups that
 * have a status of <code>ACTIVE</code>, <code>CREATE_FAILED</code>, or <code>UPDATE_FAILED</code>. To get the status, use
 * the <a>DescribeDatasetGroup</a>
 *
 * operation>
 *
 * This operation deletes only the dataset group, not the datasets in the
 */
DeleteDatasetGroupResponse * ForecastServiceClient::deleteDatasetGroup(const DeleteDatasetGroupRequest &request)
{
    return qobject_cast<DeleteDatasetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
 * DeleteDatasetImportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a dataset import job created using the <a>CreateDatasetImportJob</a> operation. You can delete only dataset
 * import jobs that have a status of <code>ACTIVE</code> or <code>CREATE_FAILED</code>. To get the status, use the
 * <a>DescribeDatasetImportJob</a>
 */
DeleteDatasetImportJobResponse * ForecastServiceClient::deleteDatasetImportJob(const DeleteDatasetImportJobRequest &request)
{
    return qobject_cast<DeleteDatasetImportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
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
DeleteForecastResponse * ForecastServiceClient::deleteForecast(const DeleteForecastRequest &request)
{
    return qobject_cast<DeleteForecastResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
 * DeleteForecastExportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a forecast export job created using the <a>CreateForecastExportJob</a> operation. You can delete only export
 * jobs that have a status of <code>ACTIVE</code> or <code>CREATE_FAILED</code>. To get the status, use the
 * <a>DescribeForecastExportJob</a>
 */
DeleteForecastExportJobResponse * ForecastServiceClient::deleteForecastExportJob(const DeleteForecastExportJobRequest &request)
{
    return qobject_cast<DeleteForecastExportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
 * DeletePredictorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a predictor created using the <a>CreatePredictor</a> operation. You can delete only predictor that have a status
 * of <code>ACTIVE</code> or <code>CREATE_FAILED</code>. To get the status, use the <a>DescribePredictor</a>
 */
DeletePredictorResponse * ForecastServiceClient::deletePredictor(const DeletePredictorRequest &request)
{
    return qobject_cast<DeletePredictorResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
 * DeletePredictorBacktestExportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a predictor backtest export
 */
DeletePredictorBacktestExportJobResponse * ForecastServiceClient::deletePredictorBacktestExportJob(const DeletePredictorBacktestExportJobRequest &request)
{
    return qobject_cast<DeletePredictorBacktestExportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
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
DeleteResourceTreeResponse * ForecastServiceClient::deleteResourceTree(const DeleteResourceTreeRequest &request)
{
    return qobject_cast<DeleteResourceTreeResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
 * DescribeDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an Amazon Forecast dataset created using the <a>CreateDataset</a>
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
DescribeDatasetResponse * ForecastServiceClient::describeDataset(const DescribeDatasetRequest &request)
{
    return qobject_cast<DescribeDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
 * DescribeDatasetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a dataset group created using the <a>CreateDatasetGroup</a>
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
DescribeDatasetGroupResponse * ForecastServiceClient::describeDatasetGroup(const DescribeDatasetGroupRequest &request)
{
    return qobject_cast<DescribeDatasetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
 * DescribeDatasetImportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a dataset import job created using the <a>CreateDatasetImportJob</a>
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
DescribeDatasetImportJobResponse * ForecastServiceClient::describeDatasetImportJob(const DescribeDatasetImportJobRequest &request)
{
    return qobject_cast<DescribeDatasetImportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
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
DescribeForecastResponse * ForecastServiceClient::describeForecast(const DescribeForecastRequest &request)
{
    return qobject_cast<DescribeForecastResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
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
DescribeForecastExportJobResponse * ForecastServiceClient::describeForecastExportJob(const DescribeForecastExportJobRequest &request)
{
    return qobject_cast<DescribeForecastExportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
 * DescribePredictorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
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
DescribePredictorResponse * ForecastServiceClient::describePredictor(const DescribePredictorRequest &request)
{
    return qobject_cast<DescribePredictorResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
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
DescribePredictorBacktestExportJobResponse * ForecastServiceClient::describePredictorBacktestExportJob(const DescribePredictorBacktestExportJobRequest &request)
{
    return qobject_cast<DescribePredictorBacktestExportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
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
GetAccuracyMetricsResponse * ForecastServiceClient::getAccuracyMetrics(const GetAccuracyMetricsRequest &request)
{
    return qobject_cast<GetAccuracyMetricsResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
 * ListDatasetGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of dataset groups created using the <a>CreateDatasetGroup</a> operation. For each dataset group, this
 * operation returns a summary of its properties, including its Amazon Resource Name (ARN). You can retrieve the complete
 * set of properties by using the dataset group ARN with the <a>DescribeDatasetGroup</a>
 */
ListDatasetGroupsResponse * ForecastServiceClient::listDatasetGroups(const ListDatasetGroupsRequest &request)
{
    return qobject_cast<ListDatasetGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
 * ListDatasetImportJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of dataset import jobs created using the <a>CreateDatasetImportJob</a> operation. For each import job,
 * this operation returns a summary of its properties, including its Amazon Resource Name (ARN). You can retrieve the
 * complete set of properties by using the ARN with the <a>DescribeDatasetImportJob</a> operation. You can filter the list
 * by providing an array of <a>Filter</a>
 */
ListDatasetImportJobsResponse * ForecastServiceClient::listDatasetImportJobs(const ListDatasetImportJobsRequest &request)
{
    return qobject_cast<ListDatasetImportJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
 * ListDatasetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of datasets created using the <a>CreateDataset</a> operation. For each dataset, a summary of its
 * properties, including its Amazon Resource Name (ARN), is returned. To retrieve the complete set of properties, use the
 * ARN with the <a>DescribeDataset</a>
 */
ListDatasetsResponse * ForecastServiceClient::listDatasets(const ListDatasetsRequest &request)
{
    return qobject_cast<ListDatasetsResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
 * ListForecastExportJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of forecast export jobs created using the <a>CreateForecastExportJob</a> operation. For each forecast
 * export job, this operation returns a summary of its properties, including its Amazon Resource Name (ARN). To retrieve
 * the complete set of properties, use the ARN with the <a>DescribeForecastExportJob</a> operation. You can filter the list
 * using an array of <a>Filter</a>
 */
ListForecastExportJobsResponse * ForecastServiceClient::listForecastExportJobs(const ListForecastExportJobsRequest &request)
{
    return qobject_cast<ListForecastExportJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
 * ListForecastsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of forecasts created using the <a>CreateForecast</a> operation. For each forecast, this operation returns
 * a summary of its properties, including its Amazon Resource Name (ARN). To retrieve the complete set of properties,
 * specify the ARN with the <a>DescribeForecast</a> operation. You can filter the list using an array of <a>Filter</a>
 */
ListForecastsResponse * ForecastServiceClient::listForecasts(const ListForecastsRequest &request)
{
    return qobject_cast<ListForecastsResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
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
ListPredictorBacktestExportJobsResponse * ForecastServiceClient::listPredictorBacktestExportJobs(const ListPredictorBacktestExportJobsRequest &request)
{
    return qobject_cast<ListPredictorBacktestExportJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
 * ListPredictorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of predictors created using the <a>CreatePredictor</a> operation. For each predictor, this operation
 * returns a summary of its properties, including its Amazon Resource Name (ARN). You can retrieve the complete set of
 * properties by using the ARN with the <a>DescribePredictor</a> operation. You can filter the list using an array of
 * <a>Filter</a>
 */
ListPredictorsResponse * ForecastServiceClient::listPredictors(const ListPredictorsRequest &request)
{
    return qobject_cast<ListPredictorsResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags for an Amazon Forecast
 */
ListTagsForResourceResponse * ForecastServiceClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
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
 */
StopResourceResponse * ForecastServiceClient::stopResource(const StopResourceRequest &request)
{
    return qobject_cast<StopResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates the specified tags to a resource with the specified <code>resourceArn</code>. If existing tags on a resource
 * are not specified in the request parameters, they are not changed. When a resource is deleted, the tags associated with
 * that resource are also
 */
TagResourceResponse * ForecastServiceClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified tags from a
 */
UntagResourceResponse * ForecastServiceClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastServiceClient service, and returns a pointer to an
 * UpdateDatasetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Replaces the datasets in a dataset group with the specified
 *
 * datasets> <note>
 *
 * The <code>Status</code> of the dataset group must be <code>ACTIVE</code> before you can use the dataset group to create
 * a predictor. Use the <a>DescribeDatasetGroup</a> operation to get the
 */
UpdateDatasetGroupResponse * ForecastServiceClient::updateDatasetGroup(const UpdateDatasetGroupRequest &request)
{
    return qobject_cast<UpdateDatasetGroupResponse *>(send(request));
}

/*!
 * \class QtAws::ForecastService::ForecastServiceClientPrivate
 * \brief The ForecastServiceClientPrivate class provides private implementation for ForecastServiceClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a ForecastServiceClientPrivate object with public implementation \a q.
 */
ForecastServiceClientPrivate::ForecastServiceClientPrivate(ForecastServiceClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ForecastService
} // namespace QtAws
