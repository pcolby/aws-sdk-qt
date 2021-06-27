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

#include "personalizeclient.h"
#include "personalizeclient_p.h"

#include "core/awssignaturev4.h"
#include "createbatchinferencejobrequest.h"
#include "createbatchinferencejobresponse.h"
#include "createcampaignrequest.h"
#include "createcampaignresponse.h"
#include "createdatasetrequest.h"
#include "createdatasetresponse.h"
#include "createdatasetexportjobrequest.h"
#include "createdatasetexportjobresponse.h"
#include "createdatasetgrouprequest.h"
#include "createdatasetgroupresponse.h"
#include "createdatasetimportjobrequest.h"
#include "createdatasetimportjobresponse.h"
#include "createeventtrackerrequest.h"
#include "createeventtrackerresponse.h"
#include "createfilterrequest.h"
#include "createfilterresponse.h"
#include "createschemarequest.h"
#include "createschemaresponse.h"
#include "createsolutionrequest.h"
#include "createsolutionresponse.h"
#include "createsolutionversionrequest.h"
#include "createsolutionversionresponse.h"
#include "deletecampaignrequest.h"
#include "deletecampaignresponse.h"
#include "deletedatasetrequest.h"
#include "deletedatasetresponse.h"
#include "deletedatasetgrouprequest.h"
#include "deletedatasetgroupresponse.h"
#include "deleteeventtrackerrequest.h"
#include "deleteeventtrackerresponse.h"
#include "deletefilterrequest.h"
#include "deletefilterresponse.h"
#include "deleteschemarequest.h"
#include "deleteschemaresponse.h"
#include "deletesolutionrequest.h"
#include "deletesolutionresponse.h"
#include "describealgorithmrequest.h"
#include "describealgorithmresponse.h"
#include "describebatchinferencejobrequest.h"
#include "describebatchinferencejobresponse.h"
#include "describecampaignrequest.h"
#include "describecampaignresponse.h"
#include "describedatasetrequest.h"
#include "describedatasetresponse.h"
#include "describedatasetexportjobrequest.h"
#include "describedatasetexportjobresponse.h"
#include "describedatasetgrouprequest.h"
#include "describedatasetgroupresponse.h"
#include "describedatasetimportjobrequest.h"
#include "describedatasetimportjobresponse.h"
#include "describeeventtrackerrequest.h"
#include "describeeventtrackerresponse.h"
#include "describefeaturetransformationrequest.h"
#include "describefeaturetransformationresponse.h"
#include "describefilterrequest.h"
#include "describefilterresponse.h"
#include "describereciperequest.h"
#include "describereciperesponse.h"
#include "describeschemarequest.h"
#include "describeschemaresponse.h"
#include "describesolutionrequest.h"
#include "describesolutionresponse.h"
#include "describesolutionversionrequest.h"
#include "describesolutionversionresponse.h"
#include "getsolutionmetricsrequest.h"
#include "getsolutionmetricsresponse.h"
#include "listbatchinferencejobsrequest.h"
#include "listbatchinferencejobsresponse.h"
#include "listcampaignsrequest.h"
#include "listcampaignsresponse.h"
#include "listdatasetexportjobsrequest.h"
#include "listdatasetexportjobsresponse.h"
#include "listdatasetgroupsrequest.h"
#include "listdatasetgroupsresponse.h"
#include "listdatasetimportjobsrequest.h"
#include "listdatasetimportjobsresponse.h"
#include "listdatasetsrequest.h"
#include "listdatasetsresponse.h"
#include "listeventtrackersrequest.h"
#include "listeventtrackersresponse.h"
#include "listfiltersrequest.h"
#include "listfiltersresponse.h"
#include "listrecipesrequest.h"
#include "listrecipesresponse.h"
#include "listschemasrequest.h"
#include "listschemasresponse.h"
#include "listsolutionversionsrequest.h"
#include "listsolutionversionsresponse.h"
#include "listsolutionsrequest.h"
#include "listsolutionsresponse.h"
#include "stopsolutionversioncreationrequest.h"
#include "stopsolutionversioncreationresponse.h"
#include "updatecampaignrequest.h"
#include "updatecampaignresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Personalize
 * \brief Contains classess for accessing Amazon Personalize.
 *
 * \inmodule QtAwsPersonalize
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::PersonalizeClient
 * \brief The PersonalizeClient class provides access to the Amazon Personalize service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 */

/*!
 * \brief Constructs a PersonalizeClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
PersonalizeClient::PersonalizeClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2018-05-22"),
    QStringLiteral("personalize"),
    QStringLiteral("Amazon Personalize"),
    QStringLiteral("personalize"),
    parent), d_ptr(new PersonalizeClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload PersonalizeClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
PersonalizeClient::PersonalizeClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2018-05-22"),
    QStringLiteral("personalize"),
    QStringLiteral("Amazon Personalize"),
    QStringLiteral("personalize"),
    parent), d_ptr(new PersonalizeClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * CreateBatchInferenceJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a batch inference job. The operation can handle up to 50 million records and the input file must be in JSON
 * format. For more information, see
 */
CreateBatchInferenceJobResponse * PersonalizeClient::createBatchInferenceJob(const CreateBatchInferenceJobRequest &request)
{
    return qobject_cast<CreateBatchInferenceJobResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * CreateCampaignResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a campaign by deploying a solution version. When a client calls the <a
 * href="https://docs.aws.amazon.com/personalize/latest/dg/API_RS_GetRecommendations.html">GetRecommendations</a> and <a
 * href="https://docs.aws.amazon.com/personalize/latest/dg/API_RS_GetPersonalizedRanking.html">GetPersonalizedRanking</a>
 * APIs, a campaign is specified in the
 *
 * request>
 *
 * <b>Minimum Provisioned TPS and Auto-Scaling</b>
 *
 * </p
 *
 * A transaction is a single <code>GetRecommendations</code> or <code>GetPersonalizedRanking</code> call. Transactions per
 * second (TPS) is the throughput and unit of billing for Amazon Personalize. The minimum provisioned TPS
 * (<code>minProvisionedTPS</code>) specifies the baseline throughput provisioned by Amazon Personalize, and thus, the
 * minimum billing charge.
 *
 * </p
 *
 * If your TPS increases beyond <code>minProvisionedTPS</code>, Amazon Personalize auto-scales the provisioned capacity up
 * and down, but never below <code>minProvisionedTPS</code>. There's a short time delay while the capacity is increased
 * that might cause loss of
 *
 * transactions>
 *
 * The actual TPS used is calculated as the average requests/second within a 5-minute window. You pay for maximum of either
 * the minimum provisioned TPS or the actual TPS. We recommend starting with a low <code>minProvisionedTPS</code>, track
 * your usage using Amazon CloudWatch metrics, and then increase the <code>minProvisionedTPS</code> as
 *
 * necessary>
 *
 * <b>Status</b>
 *
 * </p
 *
 * A campaign can be in one of the following
 *
 * states> <ul> <li>
 *
 * CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or- CREATE
 *
 * FAILE> </li> <li>
 *
 * DELETE PENDING &gt; DELETE
 *
 * IN_PROGRES> </li> </ul>
 *
 * To get the campaign status, call
 *
 * <a>DescribeCampaign</a>> <note>
 *
 * Wait until the <code>status</code> of the campaign is <code>ACTIVE</code> before asking the campaign for
 *
 * recommendations> </note> <p class="title"> <b>Related APIs</b>
 *
 * </p <ul> <li>
 *
 * <a>ListCampaigns</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeCampaign</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateCampaign</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteCampaign</a>
 */
CreateCampaignResponse * PersonalizeClient::createCampaign(const CreateCampaignRequest &request)
{
    return qobject_cast<CreateCampaignResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * CreateDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an empty dataset and adds it to the specified dataset group. Use <a>CreateDatasetImportJob</a> to import your
 * training data to a
 *
 * dataset>
 *
 * There are three types of
 *
 * datasets> <ul> <li>
 *
 * Interaction> </li> <li>
 *
 * Item> </li> <li>
 *
 * User> </li> </ul>
 *
 * Each dataset type has an associated schema with required field types. Only the <code>Interactions</code> dataset is
 * required in order to train a model (also referred to as creating a
 *
 * solution)>
 *
 * A dataset can be in one of the following
 *
 * states> <ul> <li>
 *
 * CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or- CREATE
 *
 * FAILE> </li> <li>
 *
 * DELETE PENDING &gt; DELETE
 *
 * IN_PROGRES> </li> </ul>
 *
 * To get the status of the dataset, call
 *
 * <a>DescribeDataset</a>> <p class="title"> <b>Related APIs</b>
 *
 * </p <ul> <li>
 *
 * <a>CreateDatasetGroup</a>
 *
 * </p </li> <li>
 *
 * <a>ListDatasets</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeDataset</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteDataset</a>
 */
CreateDatasetResponse * PersonalizeClient::createDataset(const CreateDatasetRequest &request)
{
    return qobject_cast<CreateDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * CreateDatasetExportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a job that exports data from your dataset to an Amazon S3 bucket. To allow Amazon Personalize to export the
 * training data, you must specify an service-linked AWS Identity and Access Management (IAM) role that gives Amazon
 * Personalize <code>PutObject</code> permissions for your Amazon S3 bucket. For information, see <a
 * href="https://docs.aws.amazon.com/personalize/latest/dg/export-data.html">Exporting a dataset</a> in the Amazon
 * Personalize developer guide.
 *
 * </p
 *
 * <b>Status</b>
 *
 * </p
 *
 * A dataset export job can be in one of the following
 *
 * states> <ul> <li>
 *
 * CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or- CREATE
 *
 * FAILE> </li> </ul>
 *
 * To get the status of the export job, call <a>DescribeDatasetExportJob</a>, and specify the Amazon Resource Name (ARN) of
 * the dataset export job. The dataset export is complete when the status shows as ACTIVE. If the status shows as CREATE
 * FAILED, the response includes a <code>failureReason</code> key, which describes why the job failed.
 */
CreateDatasetExportJobResponse * PersonalizeClient::createDatasetExportJob(const CreateDatasetExportJobRequest &request)
{
    return qobject_cast<CreateDatasetExportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * CreateDatasetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an empty dataset group. A dataset group contains related datasets that supply data for training a model. A
 * dataset group can contain at most three datasets, one for each type of
 *
 * dataset> <ul> <li>
 *
 * Interaction> </li> <li>
 *
 * Item> </li> <li>
 *
 * User> </li> </ul>
 *
 * To train a model (create a solution), a dataset group that contains an <code>Interactions</code> dataset is required.
 * Call <a>CreateDataset</a> to add a dataset to the
 *
 * group>
 *
 * A dataset group can be in one of the following
 *
 * states> <ul> <li>
 *
 * CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or- CREATE
 *
 * FAILE> </li> <li>
 *
 * DELETE
 *
 * PENDIN> </li> </ul>
 *
 * To get the status of the dataset group, call <a>DescribeDatasetGroup</a>. If the status shows as CREATE FAILED, the
 * response includes a <code>failureReason</code> key, which describes why the creation
 *
 * failed> <note>
 *
 * You must wait until the <code>status</code> of the dataset group is <code>ACTIVE</code> before adding a dataset to the
 *
 * group> </note>
 *
 * You can specify an AWS Key Management Service (KMS) key to encrypt the datasets in the group. If you specify a KMS key,
 * you must also include an AWS Identity and Access Management (IAM) role that has permission to access the
 *
 * key> <p class="title"> <b>APIs that require a dataset group ARN in the request</b>
 *
 * </p <ul> <li>
 *
 * <a>CreateDataset</a>
 *
 * </p </li> <li>
 *
 * <a>CreateEventTracker</a>
 *
 * </p </li> <li>
 *
 * <a>CreateSolution</a>
 *
 * </p </li> </ul> <p class="title"> <b>Related APIs</b>
 *
 * </p <ul> <li>
 *
 * <a>ListDatasetGroups</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeDatasetGroup</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteDatasetGroup</a>
 */
CreateDatasetGroupResponse * PersonalizeClient::createDatasetGroup(const CreateDatasetGroupRequest &request)
{
    return qobject_cast<CreateDatasetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * CreateDatasetImportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a job that imports training data from your data source (an Amazon S3 bucket) to an Amazon Personalize dataset.
 * To allow Amazon Personalize to import the training data, you must specify an AWS Identity and Access Management (IAM)
 * service role that has permission to read from the data source, as Amazon Personalize makes a copy of your data and
 * processes it in an internal AWS system. For information on granting access to your Amazon S3 bucket, see <a
 * href="https://docs.aws.amazon.com/personalize/latest/dg/granting-personalize-s3-access.html">Giving Amazon Personalize
 * Access to Amazon S3 Resources</a>.
 *
 * </p <b>
 *
 * The dataset import job replaces any existing data in the dataset that you imported in
 *
 * bulk> </b>
 *
 * <b>Status</b>
 *
 * </p
 *
 * A dataset import job can be in one of the following
 *
 * states> <ul> <li>
 *
 * CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or- CREATE
 *
 * FAILE> </li> </ul>
 *
 * To get the status of the import job, call <a>DescribeDatasetImportJob</a>, providing the Amazon Resource Name (ARN) of
 * the dataset import job. The dataset import is complete when the status shows as ACTIVE. If the status shows as CREATE
 * FAILED, the response includes a <code>failureReason</code> key, which describes why the job
 *
 * failed> <note>
 *
 * Importing takes time. You must wait until the status shows as ACTIVE before training a model using the
 *
 * dataset> </note> <p class="title"> <b>Related APIs</b>
 *
 * </p <ul> <li>
 *
 * <a>ListDatasetImportJobs</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeDatasetImportJob</a>
 */
CreateDatasetImportJobResponse * PersonalizeClient::createDatasetImportJob(const CreateDatasetImportJobRequest &request)
{
    return qobject_cast<CreateDatasetImportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * CreateEventTrackerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an event tracker that you use when adding event data to a specified dataset group using the <a
 * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UBS_PutEvents.html">PutEvents</a>
 *
 * API> <note>
 *
 * Only one event tracker can be associated with a dataset group. You will get an error if you call
 * <code>CreateEventTracker</code> using the same dataset group as an existing event
 *
 * tracker> </note>
 *
 * When you create an event tracker, the response includes a tracking ID, which you pass as a parameter when you use the <a
 * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UBS_PutEvents.html">PutEvents</a> operation. Amazon
 * Personalize then appends the event data to the Interactions dataset of the dataset group you specify in your event
 * tracker.
 *
 * </p
 *
 * The event tracker can be in one of the following
 *
 * states> <ul> <li>
 *
 * CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or- CREATE
 *
 * FAILE> </li> <li>
 *
 * DELETE PENDING &gt; DELETE
 *
 * IN_PROGRES> </li> </ul>
 *
 * To get the status of the event tracker, call
 *
 * <a>DescribeEventTracker</a>> <note>
 *
 * The event tracker must be in the ACTIVE state before using the tracking
 *
 * ID> </note> <p class="title"> <b>Related APIs</b>
 *
 * </p <ul> <li>
 *
 * <a>ListEventTrackers</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeEventTracker</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteEventTracker</a>
 */
CreateEventTrackerResponse * PersonalizeClient::createEventTracker(const CreateEventTrackerRequest &request)
{
    return qobject_cast<CreateEventTrackerResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * CreateFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a recommendation filter. For more information, see
 */
CreateFilterResponse * PersonalizeClient::createFilter(const CreateFilterRequest &request)
{
    return qobject_cast<CreateFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * CreateSchemaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Personalize schema from the specified schema string. The schema you create must be in Avro JSON
 *
 * format>
 *
 * Amazon Personalize recognizes three schema variants. Each schema is associated with a dataset type and has a set of
 * required field and keywords. You specify a schema when you call
 *
 * <a>CreateDataset</a>> <p class="title"> <b>Related APIs</b>
 *
 * </p <ul> <li>
 *
 * <a>ListSchemas</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeSchema</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteSchema</a>
 */
CreateSchemaResponse * PersonalizeClient::createSchema(const CreateSchemaRequest &request)
{
    return qobject_cast<CreateSchemaResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * CreateSolutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates the configuration for training a model. A trained model is known as a solution. After the configuration is
 * created, you train the model (create a solution) by calling the <a>CreateSolutionVersion</a> operation. Every time you
 * call <code>CreateSolutionVersion</code>, a new version of the solution is
 *
 * created>
 *
 * After creating a solution version, you check its accuracy by calling <a>GetSolutionMetrics</a>. When you are satisfied
 * with the version, you deploy it using <a>CreateCampaign</a>. The campaign provides recommendations to a client through
 * the <a href="https://docs.aws.amazon.com/personalize/latest/dg/API_RS_GetRecommendations.html">GetRecommendations</a>
 *
 * API>
 *
 * To train a model, Amazon Personalize requires training data and a recipe. The training data comes from the dataset group
 * that you provide in the request. A recipe specifies the training algorithm and a feature transformation. You can specify
 * one of the predefined recipes provided by Amazon Personalize. Alternatively, you can specify <code>performAutoML</code>
 * and Amazon Personalize will analyze your data and select the optimum USER_PERSONALIZATION recipe for
 *
 * you> <note>
 *
 * Amazon Personalize doesn't support configuring the <code>hpoObjective</code> for solution hyperparameter optimization at
 * this
 *
 * time> </note>
 *
 * <b>Status</b>
 *
 * </p
 *
 * A solution can be in one of the following
 *
 * states> <ul> <li>
 *
 * CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or- CREATE
 *
 * FAILE> </li> <li>
 *
 * DELETE PENDING &gt; DELETE
 *
 * IN_PROGRES> </li> </ul>
 *
 * To get the status of the solution, call <a>DescribeSolution</a>. Wait until the status shows as ACTIVE before calling
 *
 * <code>CreateSolutionVersion</code>> <p class="title"> <b>Related APIs</b>
 *
 * </p <ul> <li>
 *
 * <a>ListSolutions</a>
 *
 * </p </li> <li>
 *
 * <a>CreateSolutionVersion</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeSolution</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteSolution</a>
 *
 * </p </li> </ul> <ul> <li>
 *
 * <a>ListSolutionVersions</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeSolutionVersion</a>
 */
CreateSolutionResponse * PersonalizeClient::createSolution(const CreateSolutionRequest &request)
{
    return qobject_cast<CreateSolutionResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * CreateSolutionVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Trains or retrains an active solution. A solution is created using the <a>CreateSolution</a> operation and must be in
 * the ACTIVE state before calling <code>CreateSolutionVersion</code>. A new version of the solution is created every time
 * you call this
 *
 * operation>
 *
 * <b>Status</b>
 *
 * </p
 *
 * A solution version can be in one of the following
 *
 * states> <ul> <li>
 *
 * CREATE
 *
 * PENDIN> </li> <li>
 *
 * CREATE
 *
 * IN_PROGRES> </li> <li>
 *
 * ACTIV> </li> <li>
 *
 * CREATE
 *
 * FAILE> </li> <li>
 *
 * CREATE
 *
 * STOPPIN> </li> <li>
 *
 * CREATE
 *
 * STOPPE> </li> </ul>
 *
 * To get the status of the version, call <a>DescribeSolutionVersion</a>. Wait until the status shows as ACTIVE before
 * calling
 *
 * <code>CreateCampaign</code>>
 *
 * If the status shows as CREATE FAILED, the response includes a <code>failureReason</code> key, which describes why the
 * job
 *
 * failed> <p class="title"> <b>Related APIs</b>
 *
 * </p <ul> <li>
 *
 * <a>ListSolutionVersions</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeSolutionVersion</a>
 *
 * </p </li> </ul> <ul> <li>
 *
 * <a>ListSolutions</a>
 *
 * </p </li> <li>
 *
 * <a>CreateSolution</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeSolution</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteSolution</a>
 */
CreateSolutionVersionResponse * PersonalizeClient::createSolutionVersion(const CreateSolutionVersionRequest &request)
{
    return qobject_cast<CreateSolutionVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * DeleteCampaignResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a campaign by deleting the solution deployment. The solution that the campaign is based on is not deleted and
 * can be redeployed when needed. A deleted campaign can no longer be specified in a <a
 * href="https://docs.aws.amazon.com/personalize/latest/dg/API_RS_GetRecommendations.html">GetRecommendations</a> request.
 * For more information on campaigns, see
 */
DeleteCampaignResponse * PersonalizeClient::deleteCampaign(const DeleteCampaignRequest &request)
{
    return qobject_cast<DeleteCampaignResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * DeleteDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a dataset. You can't delete a dataset if an associated <code>DatasetImportJob</code> or
 * <code>SolutionVersion</code> is in the CREATE PENDING or IN PROGRESS state. For more information on datasets, see
 */
DeleteDatasetResponse * PersonalizeClient::deleteDataset(const DeleteDatasetRequest &request)
{
    return qobject_cast<DeleteDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * DeleteDatasetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a dataset group. Before you delete a dataset group, you must delete the
 *
 * following> <ul> <li>
 *
 * All associated event
 *
 * trackers> </li> <li>
 *
 * All associated
 *
 * solutions> </li> <li>
 *
 * All datasets in the dataset
 */
DeleteDatasetGroupResponse * PersonalizeClient::deleteDatasetGroup(const DeleteDatasetGroupRequest &request)
{
    return qobject_cast<DeleteDatasetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * DeleteEventTrackerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the event tracker. Does not delete the event-interactions dataset from the associated dataset group. For more
 * information on event trackers, see
 */
DeleteEventTrackerResponse * PersonalizeClient::deleteEventTracker(const DeleteEventTrackerRequest &request)
{
    return qobject_cast<DeleteEventTrackerResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * DeleteFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 */
DeleteFilterResponse * PersonalizeClient::deleteFilter(const DeleteFilterRequest &request)
{
    return qobject_cast<DeleteFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * DeleteSchemaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a schema. Before deleting a schema, you must delete all datasets referencing the schema. For more information on
 * schemas, see
 */
DeleteSchemaResponse * PersonalizeClient::deleteSchema(const DeleteSchemaRequest &request)
{
    return qobject_cast<DeleteSchemaResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * DeleteSolutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes all versions of a solution and the <code>Solution</code> object itself. Before deleting a solution, you must
 * delete all campaigns based on the solution. To determine what campaigns are using the solution, call
 * <a>ListCampaigns</a> and supply the Amazon Resource Name (ARN) of the solution. You can't delete a solution if an
 * associated <code>SolutionVersion</code> is in the CREATE PENDING or IN PROGRESS state. For more information on
 * solutions, see
 */
DeleteSolutionResponse * PersonalizeClient::deleteSolution(const DeleteSolutionRequest &request)
{
    return qobject_cast<DeleteSolutionResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * DescribeAlgorithmResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the given
 */
DescribeAlgorithmResponse * PersonalizeClient::describeAlgorithm(const DescribeAlgorithmRequest &request)
{
    return qobject_cast<DescribeAlgorithmResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * DescribeBatchInferenceJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the properties of a batch inference job including name, Amazon Resource Name (ARN), status, input and output
 * configurations, and the ARN of the solution version used to generate the
 */
DescribeBatchInferenceJobResponse * PersonalizeClient::describeBatchInferenceJob(const DescribeBatchInferenceJobRequest &request)
{
    return qobject_cast<DescribeBatchInferenceJobResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * DescribeCampaignResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the given campaign, including its
 *
 * status>
 *
 * A campaign can be in one of the following
 *
 * states> <ul> <li>
 *
 * CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or- CREATE
 *
 * FAILE> </li> <li>
 *
 * DELETE PENDING &gt; DELETE
 *
 * IN_PROGRES> </li> </ul>
 *
 * When the <code>status</code> is <code>CREATE FAILED</code>, the response includes the <code>failureReason</code> key,
 * which describes
 *
 * why>
 *
 * For more information on campaigns, see
 */
DescribeCampaignResponse * PersonalizeClient::describeCampaign(const DescribeCampaignRequest &request)
{
    return qobject_cast<DescribeCampaignResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * DescribeDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the given dataset. For more information on datasets, see
 */
DescribeDatasetResponse * PersonalizeClient::describeDataset(const DescribeDatasetRequest &request)
{
    return qobject_cast<DescribeDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * DescribeDatasetExportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the dataset export job created by <a>CreateDatasetExportJob</a>, including the export job
 */
DescribeDatasetExportJobResponse * PersonalizeClient::describeDatasetExportJob(const DescribeDatasetExportJobRequest &request)
{
    return qobject_cast<DescribeDatasetExportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * DescribeDatasetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the given dataset group. For more information on dataset groups, see
 */
DescribeDatasetGroupResponse * PersonalizeClient::describeDatasetGroup(const DescribeDatasetGroupRequest &request)
{
    return qobject_cast<DescribeDatasetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * DescribeDatasetImportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the dataset import job created by <a>CreateDatasetImportJob</a>, including the import job
 */
DescribeDatasetImportJobResponse * PersonalizeClient::describeDatasetImportJob(const DescribeDatasetImportJobRequest &request)
{
    return qobject_cast<DescribeDatasetImportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * DescribeEventTrackerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an event tracker. The response includes the <code>trackingId</code> and <code>status</code> of the event
 * tracker. For more information on event trackers, see
 */
DescribeEventTrackerResponse * PersonalizeClient::describeEventTracker(const DescribeEventTrackerRequest &request)
{
    return qobject_cast<DescribeEventTrackerResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * DescribeFeatureTransformationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the given feature
 */
DescribeFeatureTransformationResponse * PersonalizeClient::describeFeatureTransformation(const DescribeFeatureTransformationRequest &request)
{
    return qobject_cast<DescribeFeatureTransformationResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * DescribeFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a filter's
 */
DescribeFilterResponse * PersonalizeClient::describeFilter(const DescribeFilterRequest &request)
{
    return qobject_cast<DescribeFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * DescribeRecipeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a
 *
 * recipe>
 *
 * A recipe contains three
 *
 * items> <ul> <li>
 *
 * An algorithm that trains a
 *
 * model> </li> <li>
 *
 * Hyperparameters that govern the
 *
 * training> </li> <li>
 *
 * Feature transformation information for modifying the input data before
 *
 * training> </li> </ul>
 *
 * Amazon Personalize provides a set of predefined recipes. You specify a recipe when you create a solution with the
 * <a>CreateSolution</a> API. <code>CreateSolution</code> trains a model by using the algorithm in the specified recipe and
 * a training dataset. The solution, when deployed as a campaign, can provide recommendations using the <a
 * href="https://docs.aws.amazon.com/personalize/latest/dg/API_RS_GetRecommendations.html">GetRecommendations</a>
 */
DescribeRecipeResponse * PersonalizeClient::describeRecipe(const DescribeRecipeRequest &request)
{
    return qobject_cast<DescribeRecipeResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * DescribeSchemaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a schema. For more information on schemas, see
 */
DescribeSchemaResponse * PersonalizeClient::describeSchema(const DescribeSchemaRequest &request)
{
    return qobject_cast<DescribeSchemaResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * DescribeSolutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a solution. For more information on solutions, see
 */
DescribeSolutionResponse * PersonalizeClient::describeSolution(const DescribeSolutionRequest &request)
{
    return qobject_cast<DescribeSolutionResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * DescribeSolutionVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a specific version of a solution. For more information on solutions, see
 */
DescribeSolutionVersionResponse * PersonalizeClient::describeSolutionVersion(const DescribeSolutionVersionRequest &request)
{
    return qobject_cast<DescribeSolutionVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * GetSolutionMetricsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the metrics for the specified solution
 */
GetSolutionMetricsResponse * PersonalizeClient::getSolutionMetrics(const GetSolutionMetricsRequest &request)
{
    return qobject_cast<GetSolutionMetricsResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * ListBatchInferenceJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of the batch inference jobs that have been performed off of a solution
 */
ListBatchInferenceJobsResponse * PersonalizeClient::listBatchInferenceJobs(const ListBatchInferenceJobsRequest &request)
{
    return qobject_cast<ListBatchInferenceJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * ListCampaignsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of campaigns that use the given solution. When a solution is not specified, all the campaigns associated
 * with the account are listed. The response provides the properties for each campaign, including the Amazon Resource Name
 * (ARN). For more information on campaigns, see
 */
ListCampaignsResponse * PersonalizeClient::listCampaigns(const ListCampaignsRequest &request)
{
    return qobject_cast<ListCampaignsResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * ListDatasetExportJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of dataset export jobs that use the given dataset. When a dataset is not specified, all the dataset
 * export jobs associated with the account are listed. The response provides the properties for each dataset export job,
 * including the Amazon Resource Name (ARN). For more information on dataset export jobs, see
 * <a>CreateDatasetExportJob</a>. For more information on datasets, see
 */
ListDatasetExportJobsResponse * PersonalizeClient::listDatasetExportJobs(const ListDatasetExportJobsRequest &request)
{
    return qobject_cast<ListDatasetExportJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * ListDatasetGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of dataset groups. The response provides the properties for each dataset group, including the Amazon
 * Resource Name (ARN). For more information on dataset groups, see
 */
ListDatasetGroupsResponse * PersonalizeClient::listDatasetGroups(const ListDatasetGroupsRequest &request)
{
    return qobject_cast<ListDatasetGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * ListDatasetImportJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of dataset import jobs that use the given dataset. When a dataset is not specified, all the dataset
 * import jobs associated with the account are listed. The response provides the properties for each dataset import job,
 * including the Amazon Resource Name (ARN). For more information on dataset import jobs, see
 * <a>CreateDatasetImportJob</a>. For more information on datasets, see
 */
ListDatasetImportJobsResponse * PersonalizeClient::listDatasetImportJobs(const ListDatasetImportJobsRequest &request)
{
    return qobject_cast<ListDatasetImportJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * ListDatasetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the list of datasets contained in the given dataset group. The response provides the properties for each
 * dataset, including the Amazon Resource Name (ARN). For more information on datasets, see
 */
ListDatasetsResponse * PersonalizeClient::listDatasets(const ListDatasetsRequest &request)
{
    return qobject_cast<ListDatasetsResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * ListEventTrackersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the list of event trackers associated with the account. The response provides the properties for each event
 * tracker, including the Amazon Resource Name (ARN) and tracking ID. For more information on event trackers, see
 */
ListEventTrackersResponse * PersonalizeClient::listEventTrackers(const ListEventTrackersRequest &request)
{
    return qobject_cast<ListEventTrackersResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * ListFiltersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all filters that belong to a given dataset
 */
ListFiltersResponse * PersonalizeClient::listFilters(const ListFiltersRequest &request)
{
    return qobject_cast<ListFiltersResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * ListRecipesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of available recipes. The response provides the properties for each recipe, including the recipe's Amazon
 * Resource Name
 */
ListRecipesResponse * PersonalizeClient::listRecipes(const ListRecipesRequest &request)
{
    return qobject_cast<ListRecipesResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * ListSchemasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the list of schemas associated with the account. The response provides the properties for each schema, including
 * the Amazon Resource Name (ARN). For more information on schemas, see
 */
ListSchemasResponse * PersonalizeClient::listSchemas(const ListSchemasRequest &request)
{
    return qobject_cast<ListSchemasResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * ListSolutionVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of solution versions for the given solution. When a solution is not specified, all the solution versions
 * associated with the account are listed. The response provides the properties for each solution version, including the
 * Amazon Resource Name (ARN). For more information on solutions, see
 */
ListSolutionVersionsResponse * PersonalizeClient::listSolutionVersions(const ListSolutionVersionsRequest &request)
{
    return qobject_cast<ListSolutionVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * ListSolutionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of solutions that use the given dataset group. When a dataset group is not specified, all the solutions
 * associated with the account are listed. The response provides the properties for each solution, including the Amazon
 * Resource Name (ARN). For more information on solutions, see
 */
ListSolutionsResponse * PersonalizeClient::listSolutions(const ListSolutionsRequest &request)
{
    return qobject_cast<ListSolutionsResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * StopSolutionVersionCreationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops creating a solution version that is in a state of CREATE_PENDING or CREATE IN_PROGRESS.
 *
 * </p
 *
 * Depending on the current state of the solution version, the solution version state changes as
 *
 * follows> <ul> <li>
 *
 * CREATE_PENDING &gt;
 *
 * CREATE_STOPPE>
 *
 * o> </li> <li>
 *
 * CREATE_IN_PROGRESS &gt; CREATE_STOPPING &gt;
 *
 * CREATE_STOPPE> </li> </ul>
 *
 * You are billed for all of the training completed up until you stop the solution version creation. You cannot resume
 * creating a solution version once it has been
 */
StopSolutionVersionCreationResponse * PersonalizeClient::stopSolutionVersionCreation(const StopSolutionVersionCreationRequest &request)
{
    return qobject_cast<StopSolutionVersionCreationResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeClient service, and returns a pointer to an
 * UpdateCampaignResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a campaign by either deploying a new solution or changing the value of the campaign's
 * <code>minProvisionedTPS</code>
 *
 * parameter>
 *
 * To update a campaign, the campaign status must be ACTIVE or CREATE FAILED. Check the campaign status using the
 * <a>DescribeCampaign</a>
 *
 * API> <note>
 *
 * You must wait until the <code>status</code> of the updated campaign is <code>ACTIVE</code> before asking the campaign
 * for
 *
 * recommendations> </note>
 *
 * For more information on campaigns, see
 */
UpdateCampaignResponse * PersonalizeClient::updateCampaign(const UpdateCampaignRequest &request)
{
    return qobject_cast<UpdateCampaignResponse *>(send(request));
}

/*!
 * \class QtAws::Personalize::PersonalizeClientPrivate
 * \brief The PersonalizeClientPrivate class provides private implementation for PersonalizeClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a PersonalizeClientPrivate object with public implementation \a q.
 */
PersonalizeClientPrivate::PersonalizeClientPrivate(PersonalizeClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace Personalize
} // namespace QtAws
