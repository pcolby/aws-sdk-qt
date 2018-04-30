/*
    Copyright 2013-2018 Paul Colby

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

#include "machinelearningclient.h"
#include "machinelearningclient_p.h"

#include "core/awssignaturev4.h"
#include "addtagsrequest.h"
#include "addtagsresponse.h"
#include "createbatchpredictionrequest.h"
#include "createbatchpredictionresponse.h"
#include "createdatasourcefromrdsrequest.h"
#include "createdatasourcefromrdsresponse.h"
#include "createdatasourcefromredshiftrequest.h"
#include "createdatasourcefromredshiftresponse.h"
#include "createdatasourcefroms3request.h"
#include "createdatasourcefroms3response.h"
#include "createevaluationrequest.h"
#include "createevaluationresponse.h"
#include "createmlmodelrequest.h"
#include "createmlmodelresponse.h"
#include "createrealtimeendpointrequest.h"
#include "createrealtimeendpointresponse.h"
#include "deletebatchpredictionrequest.h"
#include "deletebatchpredictionresponse.h"
#include "deletedatasourcerequest.h"
#include "deletedatasourceresponse.h"
#include "deleteevaluationrequest.h"
#include "deleteevaluationresponse.h"
#include "deletemlmodelrequest.h"
#include "deletemlmodelresponse.h"
#include "deleterealtimeendpointrequest.h"
#include "deleterealtimeendpointresponse.h"
#include "deletetagsrequest.h"
#include "deletetagsresponse.h"
#include "describebatchpredictionsrequest.h"
#include "describebatchpredictionsresponse.h"
#include "describedatasourcesrequest.h"
#include "describedatasourcesresponse.h"
#include "describeevaluationsrequest.h"
#include "describeevaluationsresponse.h"
#include "describemlmodelsrequest.h"
#include "describemlmodelsresponse.h"
#include "describetagsrequest.h"
#include "describetagsresponse.h"
#include "getbatchpredictionrequest.h"
#include "getbatchpredictionresponse.h"
#include "getdatasourcerequest.h"
#include "getdatasourceresponse.h"
#include "getevaluationrequest.h"
#include "getevaluationresponse.h"
#include "getmlmodelrequest.h"
#include "getmlmodelresponse.h"
#include "predictrequest.h"
#include "predictresponse.h"
#include "updatebatchpredictionrequest.h"
#include "updatebatchpredictionresponse.h"
#include "updatedatasourcerequest.h"
#include "updatedatasourceresponse.h"
#include "updateevaluationrequest.h"
#include "updateevaluationresponse.h"
#include "updatemlmodelrequest.h"
#include "updatemlmodelresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::MachineLearning
 * \brief Contains classess for accessing Amazon Machine Learning.
 *
 * \inmodule QtAwsMachineLearning
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::MachineLearningClient
 * \brief The MachineLearningClient class provides access to the Amazon Machine Learning service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMachineLearning
 *
 */

/*!
 * \brief Constructs a MachineLearningClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
MachineLearningClient::MachineLearningClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MachineLearningClientPrivate(this), parent)
{
    Q_D(MachineLearningClient);
    d->apiVersion = QStringLiteral("2014-12-12");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("machinelearning");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Machine Learning");
    d->serviceName = QStringLiteral("machinelearning");
}

/*!
 * \overload MachineLearningClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
MachineLearningClient::MachineLearningClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MachineLearningClientPrivate(this), parent)
{
    Q_D(MachineLearningClient);
    d->apiVersion = QStringLiteral("2014-12-12");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("machinelearning");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Machine Learning");
    d->serviceName = QStringLiteral("machinelearning");
}

/*!
 * Sends \a request to the MachineLearningClient service, and returns a pointer to an
 * AddTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more tags to an object, up to a limit of 10. Each tag consists of a key and an optional value. If you add a
 * tag using a key that is already associated with the ML object, <code>AddTags</code> updates the tag's
 */
AddTagsResponse * MachineLearningClient::addTags(const AddTagsRequest &request)
{
    return qobject_cast<AddTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the MachineLearningClient service, and returns a pointer to an
 * CreateBatchPredictionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates predictions for a group of observations. The observations to process exist in one or more data files
 * referenced by a <code>DataSource</code>. This operation creates a new <code>BatchPrediction</code>, and uses an
 * <code>MLModel</code> and the data files referenced by the <code>DataSource</code> as information sources.
 *
 * </p
 *
 * <code>CreateBatchPrediction</code> is an asynchronous operation. In response to <code>CreateBatchPrediction</code>,
 * Amazon Machine Learning (Amazon ML) immediately returns and sets the <code>BatchPrediction</code> status to
 * <code>PENDING</code>. After the <code>BatchPrediction</code> completes, Amazon ML sets the status to
 * <code>COMPLETED</code>.
 *
 * </p
 *
 * You can poll for status updates by using the <a>GetBatchPrediction</a> operation and checking the <code>Status</code>
 * parameter of the result. After the <code>COMPLETED</code> status appears, the results are available in the location
 * specified by the <code>OutputUri</code>
 */
CreateBatchPredictionResponse * MachineLearningClient::createBatchPrediction(const CreateBatchPredictionRequest &request)
{
    return qobject_cast<CreateBatchPredictionResponse *>(send(request));
}

/*!
 * Sends \a request to the MachineLearningClient service, and returns a pointer to an
 * CreateDataSourceFromRDSResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a <code>DataSource</code> object from an <a href="http://aws.amazon.com/rds/"> Amazon Relational Database
 * Service</a> (Amazon RDS). A <code>DataSource</code> references data that can be used to perform
 * <code>CreateMLModel</code>, <code>CreateEvaluation</code>, or <code>CreateBatchPrediction</code>
 *
 * operations>
 *
 * <code>CreateDataSourceFromRDS</code> is an asynchronous operation. In response to <code>CreateDataSourceFromRDS</code>,
 * Amazon Machine Learning (Amazon ML) immediately returns and sets the <code>DataSource</code> status to
 * <code>PENDING</code>. After the <code>DataSource</code> is created and ready for use, Amazon ML sets the
 * <code>Status</code> parameter to <code>COMPLETED</code>. <code>DataSource</code> in the <code>COMPLETED</code> or
 * <code>PENDING</code> state can be used only to perform <code>&gt;CreateMLModel</code>&gt;,
 * <code>CreateEvaluation</code>, or <code>CreateBatchPrediction</code> operations.
 *
 * </p
 *
 * If Amazon ML cannot accept the input source, it sets the <code>Status</code> parameter to <code>FAILED</code> and
 * includes an error message in the <code>Message</code> attribute of the <code>GetDataSource</code> operation response.
 */
CreateDataSourceFromRDSResponse * MachineLearningClient::createDataSourceFromRDS(const CreateDataSourceFromRDSRequest &request)
{
    return qobject_cast<CreateDataSourceFromRDSResponse *>(send(request));
}

/*!
 * Sends \a request to the MachineLearningClient service, and returns a pointer to an
 * CreateDataSourceFromRedshiftResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a <code>DataSource</code> from a database hosted on an Amazon Redshift cluster. A <code>DataSource</code>
 * references data that can be used to perform either <code>CreateMLModel</code>, <code>CreateEvaluation</code>, or
 * <code>CreateBatchPrediction</code>
 *
 * operations>
 *
 * <code>CreateDataSourceFromRedshift</code> is an asynchronous operation. In response to
 * <code>CreateDataSourceFromRedshift</code>, Amazon Machine Learning (Amazon ML) immediately returns and sets the
 * <code>DataSource</code> status to <code>PENDING</code>. After the <code>DataSource</code> is created and ready for use,
 * Amazon ML sets the <code>Status</code> parameter to <code>COMPLETED</code>. <code>DataSource</code> in
 * <code>COMPLETED</code> or <code>PENDING</code> states can be used to perform only <code>CreateMLModel</code>,
 * <code>CreateEvaluation</code>, or <code>CreateBatchPrediction</code> operations.
 *
 * </p
 *
 * If Amazon ML can't accept the input source, it sets the <code>Status</code> parameter to <code>FAILED</code> and
 * includes an error message in the <code>Message</code> attribute of the <code>GetDataSource</code> operation response.
 *
 * </p
 *
 * The observations should be contained in the database hosted on an Amazon Redshift cluster and should be specified by a
 * <code>SelectSqlQuery</code> query. Amazon ML executes an <code>Unload</code> command in Amazon Redshift to transfer the
 * result set of the <code>SelectSqlQuery</code> query to
 *
 * <code>S3StagingLocation</code>>
 *
 * After the <code>DataSource</code> has been created, it's ready for use in evaluations and batch predictions. If you plan
 * to use the <code>DataSource</code> to train an <code>MLModel</code>, the <code>DataSource</code> also requires a recipe.
 * A recipe describes how each input variable will be used in training an <code>MLModel</code>. Will the variable be
 * included or excluded from training? Will the variable be manipulated; for example, will it be combined with another
 * variable or will it be split apart into word combinations? The recipe provides answers to these
 *
 * questions> <?oxy_insert_start author="laurama" timestamp="20160406T153842-0700"><p>You can't change an existing
 * datasource, but you can copy and modify the settings from an existing Amazon Redshift datasource to create a new
 * datasource. To do so, call <code>GetDataSource</code> for an existing datasource and copy the values to a
 * <code>CreateDataSource</code> call. Change the settings that you want to change and make sure that all required fields
 * have the appropriate
 */
CreateDataSourceFromRedshiftResponse * MachineLearningClient::createDataSourceFromRedshift(const CreateDataSourceFromRedshiftRequest &request)
{
    return qobject_cast<CreateDataSourceFromRedshiftResponse *>(send(request));
}

/*!
 * Sends \a request to the MachineLearningClient service, and returns a pointer to an
 * CreateDataSourceFromS3Response object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a <code>DataSource</code> object. A <code>DataSource</code> references data that can be used to perform
 * <code>CreateMLModel</code>, <code>CreateEvaluation</code>, or <code>CreateBatchPrediction</code>
 *
 * operations>
 *
 * <code>CreateDataSourceFromS3</code> is an asynchronous operation. In response to <code>CreateDataSourceFromS3</code>,
 * Amazon Machine Learning (Amazon ML) immediately returns and sets the <code>DataSource</code> status to
 * <code>PENDING</code>. After the <code>DataSource</code> has been created and is ready for use, Amazon ML sets the
 * <code>Status</code> parameter to <code>COMPLETED</code>. <code>DataSource</code> in the <code>COMPLETED</code> or
 * <code>PENDING</code> state can be used to perform only <code>CreateMLModel</code>, <code>CreateEvaluation</code> or
 * <code>CreateBatchPrediction</code> operations.
 *
 * </p
 *
 * If Amazon ML can't accept the input source, it sets the <code>Status</code> parameter to <code>FAILED</code> and
 * includes an error message in the <code>Message</code> attribute of the <code>GetDataSource</code> operation response.
 *
 * </p
 *
 * The observation data used in a <code>DataSource</code> should be ready to use; that is, it should have a consistent
 * structure, and missing data values should be kept to a minimum. The observation data must reside in one or more .csv
 * files in an Amazon Simple Storage Service (Amazon S3) location, along with a schema that describes the data items by
 * name and type. The same schema must be used for all of the data files referenced by the <code>DataSource</code>.
 *
 * </p
 *
 * After the <code>DataSource</code> has been created, it's ready to use in evaluations and batch predictions. If you plan
 * to use the <code>DataSource</code> to train an <code>MLModel</code>, the <code>DataSource</code> also needs a recipe. A
 * recipe describes how each input variable will be used in training an <code>MLModel</code>. Will the variable be included
 * or excluded from training? Will the variable be manipulated; for example, will it be combined with another variable or
 * will it be split apart into word combinations? The recipe provides answers to these
 */
CreateDataSourceFromS3Response * MachineLearningClient::createDataSourceFromS3(const CreateDataSourceFromS3Request &request)
{
    return qobject_cast<CreateDataSourceFromS3Response *>(send(request));
}

/*!
 * Sends \a request to the MachineLearningClient service, and returns a pointer to an
 * CreateEvaluationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new <code>Evaluation</code> of an <code>MLModel</code>. An <code>MLModel</code> is evaluated on a set of
 * observations associated to a <code>DataSource</code>. Like a <code>DataSource</code> for an <code>MLModel</code>, the
 * <code>DataSource</code> for an <code>Evaluation</code> contains values for the <code>Target Variable</code>. The
 * <code>Evaluation</code> compares the predicted result for each observation to the actual outcome and provides a summary
 * so that you know how effective the <code>MLModel</code> functions on the test data. Evaluation generates a relevant
 * performance metric, such as BinaryAUC, RegressionRMSE or MulticlassAvgFScore based on the corresponding
 * <code>MLModelType</code>: <code>BINARY</code>, <code>REGRESSION</code> or <code>MULTICLASS</code>.
 *
 * </p
 *
 * <code>CreateEvaluation</code> is an asynchronous operation. In response to <code>CreateEvaluation</code>, Amazon Machine
 * Learning (Amazon ML) immediately returns and sets the evaluation status to <code>PENDING</code>. After the
 * <code>Evaluation</code> is created and ready for use, Amazon ML sets the status to <code>COMPLETED</code>.
 *
 * </p
 *
 * You can use the <code>GetEvaluation</code> operation to check progress of the evaluation during the creation
 */
CreateEvaluationResponse * MachineLearningClient::createEvaluation(const CreateEvaluationRequest &request)
{
    return qobject_cast<CreateEvaluationResponse *>(send(request));
}

/*!
 * Sends \a request to the MachineLearningClient service, and returns a pointer to an
 * CreateMLModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new <code>MLModel</code> using the <code>DataSource</code> and the recipe as information sources.
 *
 * </p
 *
 * An <code>MLModel</code> is nearly immutable. Users can update only the <code>MLModelName</code> and the
 * <code>ScoreThreshold</code> in an <code>MLModel</code> without creating a new <code>MLModel</code>.
 *
 * </p
 *
 * <code>CreateMLModel</code> is an asynchronous operation. In response to <code>CreateMLModel</code>, Amazon Machine
 * Learning (Amazon ML) immediately returns and sets the <code>MLModel</code> status to <code>PENDING</code>. After the
 * <code>MLModel</code> has been created and ready is for use, Amazon ML sets the status to <code>COMPLETED</code>.
 *
 * </p
 *
 * You can use the <code>GetMLModel</code> operation to check the progress of the <code>MLModel</code> during the creation
 *
 * operation>
 *
 * <code>CreateMLModel</code> requires a <code>DataSource</code> with computed statistics, which can be created by setting
 * <code>ComputeStatistics</code> to <code>true</code> in <code>CreateDataSourceFromRDS</code>,
 * <code>CreateDataSourceFromS3</code>, or <code>CreateDataSourceFromRedshift</code> operations.
 */
CreateMLModelResponse * MachineLearningClient::createMLModel(const CreateMLModelRequest &request)
{
    return qobject_cast<CreateMLModelResponse *>(send(request));
}

/*!
 * Sends \a request to the MachineLearningClient service, and returns a pointer to an
 * CreateRealtimeEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a real-time endpoint for the <code>MLModel</code>. The endpoint contains the URI of the <code>MLModel</code>;
 * that is, the location to send real-time prediction requests for the specified
 */
CreateRealtimeEndpointResponse * MachineLearningClient::createRealtimeEndpoint(const CreateRealtimeEndpointRequest &request)
{
    return qobject_cast<CreateRealtimeEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the MachineLearningClient service, and returns a pointer to an
 * DeleteBatchPredictionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns the DELETED status to a <code>BatchPrediction</code>, rendering it
 *
 * unusable>
 *
 * After using the <code>DeleteBatchPrediction</code> operation, you can use the <a>GetBatchPrediction</a> operation to
 * verify that the status of the <code>BatchPrediction</code> changed to
 *
 * DELETED>
 *
 * <b>Caution:</b> The result of the <code>DeleteBatchPrediction</code> operation is
 */
DeleteBatchPredictionResponse * MachineLearningClient::deleteBatchPrediction(const DeleteBatchPredictionRequest &request)
{
    return qobject_cast<DeleteBatchPredictionResponse *>(send(request));
}

/*!
 * Sends \a request to the MachineLearningClient service, and returns a pointer to an
 * DeleteDataSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns the DELETED status to a <code>DataSource</code>, rendering it
 *
 * unusable>
 *
 * After using the <code>DeleteDataSource</code> operation, you can use the <a>GetDataSource</a> operation to verify that
 * the status of the <code>DataSource</code> changed to
 *
 * DELETED>
 *
 * <b>Caution:</b> The results of the <code>DeleteDataSource</code> operation are
 */
DeleteDataSourceResponse * MachineLearningClient::deleteDataSource(const DeleteDataSourceRequest &request)
{
    return qobject_cast<DeleteDataSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MachineLearningClient service, and returns a pointer to an
 * DeleteEvaluationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns the <code>DELETED</code> status to an <code>Evaluation</code>, rendering it
 *
 * unusable>
 *
 * After invoking the <code>DeleteEvaluation</code> operation, you can use the <code>GetEvaluation</code> operation to
 * verify that the status of the <code>Evaluation</code> changed to
 *
 * <code>DELETED</code>> <caution><title>Caution</title>
 */
DeleteEvaluationResponse * MachineLearningClient::deleteEvaluation(const DeleteEvaluationRequest &request)
{
    return qobject_cast<DeleteEvaluationResponse *>(send(request));
}

/*!
 * Sends \a request to the MachineLearningClient service, and returns a pointer to an
 * DeleteMLModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns the <code>DELETED</code> status to an <code>MLModel</code>, rendering it
 *
 * unusable>
 *
 * After using the <code>DeleteMLModel</code> operation, you can use the <code>GetMLModel</code> operation to verify that
 * the status of the <code>MLModel</code> changed to
 *
 * DELETED>
 *
 * <b>Caution:</b> The result of the <code>DeleteMLModel</code> operation is
 */
DeleteMLModelResponse * MachineLearningClient::deleteMLModel(const DeleteMLModelRequest &request)
{
    return qobject_cast<DeleteMLModelResponse *>(send(request));
}

/*!
 * Sends \a request to the MachineLearningClient service, and returns a pointer to an
 * DeleteRealtimeEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a real time endpoint of an
 */
DeleteRealtimeEndpointResponse * MachineLearningClient::deleteRealtimeEndpoint(const DeleteRealtimeEndpointRequest &request)
{
    return qobject_cast<DeleteRealtimeEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the MachineLearningClient service, and returns a pointer to an
 * DeleteTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified tags associated with an ML object. After this operation is complete, you can't recover deleted
 *
 * tags>
 *
 * If you specify a tag that doesn't exist, Amazon ML ignores
 */
DeleteTagsResponse * MachineLearningClient::deleteTags(const DeleteTagsRequest &request)
{
    return qobject_cast<DeleteTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the MachineLearningClient service, and returns a pointer to an
 * DescribeBatchPredictionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <code>BatchPrediction</code> operations that match the search criteria in the
 */
DescribeBatchPredictionsResponse * MachineLearningClient::describeBatchPredictions(const DescribeBatchPredictionsRequest &request)
{
    return qobject_cast<DescribeBatchPredictionsResponse *>(send(request));
}

/*!
 * Sends \a request to the MachineLearningClient service, and returns a pointer to an
 * DescribeDataSourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <code>DataSource</code> that match the search criteria in the
 */
DescribeDataSourcesResponse * MachineLearningClient::describeDataSources(const DescribeDataSourcesRequest &request)
{
    return qobject_cast<DescribeDataSourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the MachineLearningClient service, and returns a pointer to an
 * DescribeEvaluationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <code>DescribeEvaluations</code> that match the search criteria in the
 */
DescribeEvaluationsResponse * MachineLearningClient::describeEvaluations(const DescribeEvaluationsRequest &request)
{
    return qobject_cast<DescribeEvaluationsResponse *>(send(request));
}

/*!
 * Sends \a request to the MachineLearningClient service, and returns a pointer to an
 * DescribeMLModelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <code>MLModel</code> that match the search criteria in the
 */
DescribeMLModelsResponse * MachineLearningClient::describeMLModels(const DescribeMLModelsRequest &request)
{
    return qobject_cast<DescribeMLModelsResponse *>(send(request));
}

/*!
 * Sends \a request to the MachineLearningClient service, and returns a pointer to an
 * DescribeTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of the tags for your Amazon ML
 */
DescribeTagsResponse * MachineLearningClient::describeTags(const DescribeTagsRequest &request)
{
    return qobject_cast<DescribeTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the MachineLearningClient service, and returns a pointer to an
 * GetBatchPredictionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a <code>BatchPrediction</code> that includes detailed metadata, status, and data file information for a
 * <code>Batch Prediction</code>
 */
GetBatchPredictionResponse * MachineLearningClient::getBatchPrediction(const GetBatchPredictionRequest &request)
{
    return qobject_cast<GetBatchPredictionResponse *>(send(request));
}

/*!
 * Sends \a request to the MachineLearningClient service, and returns a pointer to an
 * GetDataSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a <code>DataSource</code> that includes metadata and data file information, as well as the current status of the
 *
 * <code>DataSource</code>>
 *
 * <code>GetDataSource</code> provides results in normal or verbose format. The verbose format adds the schema description
 * and the list of files pointed to by the DataSource to the normal
 */
GetDataSourceResponse * MachineLearningClient::getDataSource(const GetDataSourceRequest &request)
{
    return qobject_cast<GetDataSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MachineLearningClient service, and returns a pointer to an
 * GetEvaluationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an <code>Evaluation</code> that includes metadata as well as the current status of the
 */
GetEvaluationResponse * MachineLearningClient::getEvaluation(const GetEvaluationRequest &request)
{
    return qobject_cast<GetEvaluationResponse *>(send(request));
}

/*!
 * Sends \a request to the MachineLearningClient service, and returns a pointer to an
 * GetMLModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an <code>MLModel</code> that includes detailed metadata, data source information, and the current status of the
 *
 * <code>MLModel</code>>
 *
 * <code>GetMLModel</code> provides results in normal or verbose format.
 */
GetMLModelResponse * MachineLearningClient::getMLModel(const GetMLModelRequest &request)
{
    return qobject_cast<GetMLModelResponse *>(send(request));
}

/*!
 * Sends \a request to the MachineLearningClient service, and returns a pointer to an
 * PredictResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a prediction for the observation using the specified <code>ML
 *
 * Model</code>> <note><title>Note</title>
 *
 * Not all response parameters will be populated. Whether a response parameter is populated depends on the type of model
 */
PredictResponse * MachineLearningClient::predict(const PredictRequest &request)
{
    return qobject_cast<PredictResponse *>(send(request));
}

/*!
 * Sends \a request to the MachineLearningClient service, and returns a pointer to an
 * UpdateBatchPredictionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the <code>BatchPredictionName</code> of a
 *
 * <code>BatchPrediction</code>>
 *
 * You can use the <code>GetBatchPrediction</code> operation to view the contents of the updated data
 */
UpdateBatchPredictionResponse * MachineLearningClient::updateBatchPrediction(const UpdateBatchPredictionRequest &request)
{
    return qobject_cast<UpdateBatchPredictionResponse *>(send(request));
}

/*!
 * Sends \a request to the MachineLearningClient service, and returns a pointer to an
 * UpdateDataSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the <code>DataSourceName</code> of a
 *
 * <code>DataSource</code>>
 *
 * You can use the <code>GetDataSource</code> operation to view the contents of the updated data
 */
UpdateDataSourceResponse * MachineLearningClient::updateDataSource(const UpdateDataSourceRequest &request)
{
    return qobject_cast<UpdateDataSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MachineLearningClient service, and returns a pointer to an
 * UpdateEvaluationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the <code>EvaluationName</code> of an
 *
 * <code>Evaluation</code>>
 *
 * You can use the <code>GetEvaluation</code> operation to view the contents of the updated data
 */
UpdateEvaluationResponse * MachineLearningClient::updateEvaluation(const UpdateEvaluationRequest &request)
{
    return qobject_cast<UpdateEvaluationResponse *>(send(request));
}

/*!
 * Sends \a request to the MachineLearningClient service, and returns a pointer to an
 * UpdateMLModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the <code>MLModelName</code> and the <code>ScoreThreshold</code> of an
 *
 * <code>MLModel</code>>
 *
 * You can use the <code>GetMLModel</code> operation to view the contents of the updated data
 */
UpdateMLModelResponse * MachineLearningClient::updateMLModel(const UpdateMLModelRequest &request)
{
    return qobject_cast<UpdateMLModelResponse *>(send(request));
}

/*!
 * \class QtAws::MachineLearning::MachineLearningClientPrivate
 * \brief The MachineLearningClientPrivate class provides private implementation for MachineLearningClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a MachineLearningClientPrivate object with public implementation \a q.
 */
MachineLearningClientPrivate::MachineLearningClientPrivate(MachineLearningClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace MachineLearning
} // namespace QtAws
