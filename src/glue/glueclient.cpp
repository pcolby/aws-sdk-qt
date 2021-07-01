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

#include "glueclient.h"
#include "glueclient_p.h"

#include "core/awssignaturev4.h"
#include "batchcreatepartitionrequest.h"
#include "batchcreatepartitionresponse.h"
#include "batchdeleteconnectionrequest.h"
#include "batchdeleteconnectionresponse.h"
#include "batchdeletepartitionrequest.h"
#include "batchdeletepartitionresponse.h"
#include "batchdeletetablerequest.h"
#include "batchdeletetableresponse.h"
#include "batchdeletetableversionrequest.h"
#include "batchdeletetableversionresponse.h"
#include "batchgetcrawlersrequest.h"
#include "batchgetcrawlersresponse.h"
#include "batchgetdevendpointsrequest.h"
#include "batchgetdevendpointsresponse.h"
#include "batchgetjobsrequest.h"
#include "batchgetjobsresponse.h"
#include "batchgetpartitionrequest.h"
#include "batchgetpartitionresponse.h"
#include "batchgettriggersrequest.h"
#include "batchgettriggersresponse.h"
#include "batchgetworkflowsrequest.h"
#include "batchgetworkflowsresponse.h"
#include "batchstopjobrunrequest.h"
#include "batchstopjobrunresponse.h"
#include "batchupdatepartitionrequest.h"
#include "batchupdatepartitionresponse.h"
#include "cancelmltaskrunrequest.h"
#include "cancelmltaskrunresponse.h"
#include "checkschemaversionvalidityrequest.h"
#include "checkschemaversionvalidityresponse.h"
#include "createclassifierrequest.h"
#include "createclassifierresponse.h"
#include "createconnectionrequest.h"
#include "createconnectionresponse.h"
#include "createcrawlerrequest.h"
#include "createcrawlerresponse.h"
#include "createdatabaserequest.h"
#include "createdatabaseresponse.h"
#include "createdevendpointrequest.h"
#include "createdevendpointresponse.h"
#include "createjobrequest.h"
#include "createjobresponse.h"
#include "createmltransformrequest.h"
#include "createmltransformresponse.h"
#include "createpartitionrequest.h"
#include "createpartitionresponse.h"
#include "createpartitionindexrequest.h"
#include "createpartitionindexresponse.h"
#include "createregistryrequest.h"
#include "createregistryresponse.h"
#include "createschemarequest.h"
#include "createschemaresponse.h"
#include "createscriptrequest.h"
#include "createscriptresponse.h"
#include "createsecurityconfigurationrequest.h"
#include "createsecurityconfigurationresponse.h"
#include "createtablerequest.h"
#include "createtableresponse.h"
#include "createtriggerrequest.h"
#include "createtriggerresponse.h"
#include "createuserdefinedfunctionrequest.h"
#include "createuserdefinedfunctionresponse.h"
#include "createworkflowrequest.h"
#include "createworkflowresponse.h"
#include "deleteclassifierrequest.h"
#include "deleteclassifierresponse.h"
#include "deletecolumnstatisticsforpartitionrequest.h"
#include "deletecolumnstatisticsforpartitionresponse.h"
#include "deletecolumnstatisticsfortablerequest.h"
#include "deletecolumnstatisticsfortableresponse.h"
#include "deleteconnectionrequest.h"
#include "deleteconnectionresponse.h"
#include "deletecrawlerrequest.h"
#include "deletecrawlerresponse.h"
#include "deletedatabaserequest.h"
#include "deletedatabaseresponse.h"
#include "deletedevendpointrequest.h"
#include "deletedevendpointresponse.h"
#include "deletejobrequest.h"
#include "deletejobresponse.h"
#include "deletemltransformrequest.h"
#include "deletemltransformresponse.h"
#include "deletepartitionrequest.h"
#include "deletepartitionresponse.h"
#include "deletepartitionindexrequest.h"
#include "deletepartitionindexresponse.h"
#include "deleteregistryrequest.h"
#include "deleteregistryresponse.h"
#include "deleteresourcepolicyrequest.h"
#include "deleteresourcepolicyresponse.h"
#include "deleteschemarequest.h"
#include "deleteschemaresponse.h"
#include "deleteschemaversionsrequest.h"
#include "deleteschemaversionsresponse.h"
#include "deletesecurityconfigurationrequest.h"
#include "deletesecurityconfigurationresponse.h"
#include "deletetablerequest.h"
#include "deletetableresponse.h"
#include "deletetableversionrequest.h"
#include "deletetableversionresponse.h"
#include "deletetriggerrequest.h"
#include "deletetriggerresponse.h"
#include "deleteuserdefinedfunctionrequest.h"
#include "deleteuserdefinedfunctionresponse.h"
#include "deleteworkflowrequest.h"
#include "deleteworkflowresponse.h"
#include "getcatalogimportstatusrequest.h"
#include "getcatalogimportstatusresponse.h"
#include "getclassifierrequest.h"
#include "getclassifierresponse.h"
#include "getclassifiersrequest.h"
#include "getclassifiersresponse.h"
#include "getcolumnstatisticsforpartitionrequest.h"
#include "getcolumnstatisticsforpartitionresponse.h"
#include "getcolumnstatisticsfortablerequest.h"
#include "getcolumnstatisticsfortableresponse.h"
#include "getconnectionrequest.h"
#include "getconnectionresponse.h"
#include "getconnectionsrequest.h"
#include "getconnectionsresponse.h"
#include "getcrawlerrequest.h"
#include "getcrawlerresponse.h"
#include "getcrawlermetricsrequest.h"
#include "getcrawlermetricsresponse.h"
#include "getcrawlersrequest.h"
#include "getcrawlersresponse.h"
#include "getdatacatalogencryptionsettingsrequest.h"
#include "getdatacatalogencryptionsettingsresponse.h"
#include "getdatabaserequest.h"
#include "getdatabaseresponse.h"
#include "getdatabasesrequest.h"
#include "getdatabasesresponse.h"
#include "getdataflowgraphrequest.h"
#include "getdataflowgraphresponse.h"
#include "getdevendpointrequest.h"
#include "getdevendpointresponse.h"
#include "getdevendpointsrequest.h"
#include "getdevendpointsresponse.h"
#include "getjobrequest.h"
#include "getjobresponse.h"
#include "getjobbookmarkrequest.h"
#include "getjobbookmarkresponse.h"
#include "getjobrunrequest.h"
#include "getjobrunresponse.h"
#include "getjobrunsrequest.h"
#include "getjobrunsresponse.h"
#include "getjobsrequest.h"
#include "getjobsresponse.h"
#include "getmltaskrunrequest.h"
#include "getmltaskrunresponse.h"
#include "getmltaskrunsrequest.h"
#include "getmltaskrunsresponse.h"
#include "getmltransformrequest.h"
#include "getmltransformresponse.h"
#include "getmltransformsrequest.h"
#include "getmltransformsresponse.h"
#include "getmappingrequest.h"
#include "getmappingresponse.h"
#include "getpartitionrequest.h"
#include "getpartitionresponse.h"
#include "getpartitionindexesrequest.h"
#include "getpartitionindexesresponse.h"
#include "getpartitionsrequest.h"
#include "getpartitionsresponse.h"
#include "getplanrequest.h"
#include "getplanresponse.h"
#include "getregistryrequest.h"
#include "getregistryresponse.h"
#include "getresourcepoliciesrequest.h"
#include "getresourcepoliciesresponse.h"
#include "getresourcepolicyrequest.h"
#include "getresourcepolicyresponse.h"
#include "getschemarequest.h"
#include "getschemaresponse.h"
#include "getschemabydefinitionrequest.h"
#include "getschemabydefinitionresponse.h"
#include "getschemaversionrequest.h"
#include "getschemaversionresponse.h"
#include "getschemaversionsdiffrequest.h"
#include "getschemaversionsdiffresponse.h"
#include "getsecurityconfigurationrequest.h"
#include "getsecurityconfigurationresponse.h"
#include "getsecurityconfigurationsrequest.h"
#include "getsecurityconfigurationsresponse.h"
#include "gettablerequest.h"
#include "gettableresponse.h"
#include "gettableversionrequest.h"
#include "gettableversionresponse.h"
#include "gettableversionsrequest.h"
#include "gettableversionsresponse.h"
#include "gettablesrequest.h"
#include "gettablesresponse.h"
#include "gettagsrequest.h"
#include "gettagsresponse.h"
#include "gettriggerrequest.h"
#include "gettriggerresponse.h"
#include "gettriggersrequest.h"
#include "gettriggersresponse.h"
#include "getuserdefinedfunctionrequest.h"
#include "getuserdefinedfunctionresponse.h"
#include "getuserdefinedfunctionsrequest.h"
#include "getuserdefinedfunctionsresponse.h"
#include "getworkflowrequest.h"
#include "getworkflowresponse.h"
#include "getworkflowrunrequest.h"
#include "getworkflowrunresponse.h"
#include "getworkflowrunpropertiesrequest.h"
#include "getworkflowrunpropertiesresponse.h"
#include "getworkflowrunsrequest.h"
#include "getworkflowrunsresponse.h"
#include "importcatalogtogluerequest.h"
#include "importcatalogtoglueresponse.h"
#include "listcrawlersrequest.h"
#include "listcrawlersresponse.h"
#include "listdevendpointsrequest.h"
#include "listdevendpointsresponse.h"
#include "listjobsrequest.h"
#include "listjobsresponse.h"
#include "listmltransformsrequest.h"
#include "listmltransformsresponse.h"
#include "listregistriesrequest.h"
#include "listregistriesresponse.h"
#include "listschemaversionsrequest.h"
#include "listschemaversionsresponse.h"
#include "listschemasrequest.h"
#include "listschemasresponse.h"
#include "listtriggersrequest.h"
#include "listtriggersresponse.h"
#include "listworkflowsrequest.h"
#include "listworkflowsresponse.h"
#include "putdatacatalogencryptionsettingsrequest.h"
#include "putdatacatalogencryptionsettingsresponse.h"
#include "putresourcepolicyrequest.h"
#include "putresourcepolicyresponse.h"
#include "putschemaversionmetadatarequest.h"
#include "putschemaversionmetadataresponse.h"
#include "putworkflowrunpropertiesrequest.h"
#include "putworkflowrunpropertiesresponse.h"
#include "queryschemaversionmetadatarequest.h"
#include "queryschemaversionmetadataresponse.h"
#include "registerschemaversionrequest.h"
#include "registerschemaversionresponse.h"
#include "removeschemaversionmetadatarequest.h"
#include "removeschemaversionmetadataresponse.h"
#include "resetjobbookmarkrequest.h"
#include "resetjobbookmarkresponse.h"
#include "resumeworkflowrunrequest.h"
#include "resumeworkflowrunresponse.h"
#include "searchtablesrequest.h"
#include "searchtablesresponse.h"
#include "startcrawlerrequest.h"
#include "startcrawlerresponse.h"
#include "startcrawlerschedulerequest.h"
#include "startcrawlerscheduleresponse.h"
#include "startexportlabelstaskrunrequest.h"
#include "startexportlabelstaskrunresponse.h"
#include "startimportlabelstaskrunrequest.h"
#include "startimportlabelstaskrunresponse.h"
#include "startjobrunrequest.h"
#include "startjobrunresponse.h"
#include "startmlevaluationtaskrunrequest.h"
#include "startmlevaluationtaskrunresponse.h"
#include "startmllabelingsetgenerationtaskrunrequest.h"
#include "startmllabelingsetgenerationtaskrunresponse.h"
#include "starttriggerrequest.h"
#include "starttriggerresponse.h"
#include "startworkflowrunrequest.h"
#include "startworkflowrunresponse.h"
#include "stopcrawlerrequest.h"
#include "stopcrawlerresponse.h"
#include "stopcrawlerschedulerequest.h"
#include "stopcrawlerscheduleresponse.h"
#include "stoptriggerrequest.h"
#include "stoptriggerresponse.h"
#include "stopworkflowrunrequest.h"
#include "stopworkflowrunresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateclassifierrequest.h"
#include "updateclassifierresponse.h"
#include "updatecolumnstatisticsforpartitionrequest.h"
#include "updatecolumnstatisticsforpartitionresponse.h"
#include "updatecolumnstatisticsfortablerequest.h"
#include "updatecolumnstatisticsfortableresponse.h"
#include "updateconnectionrequest.h"
#include "updateconnectionresponse.h"
#include "updatecrawlerrequest.h"
#include "updatecrawlerresponse.h"
#include "updatecrawlerschedulerequest.h"
#include "updatecrawlerscheduleresponse.h"
#include "updatedatabaserequest.h"
#include "updatedatabaseresponse.h"
#include "updatedevendpointrequest.h"
#include "updatedevendpointresponse.h"
#include "updatejobrequest.h"
#include "updatejobresponse.h"
#include "updatemltransformrequest.h"
#include "updatemltransformresponse.h"
#include "updatepartitionrequest.h"
#include "updatepartitionresponse.h"
#include "updateregistryrequest.h"
#include "updateregistryresponse.h"
#include "updateschemarequest.h"
#include "updateschemaresponse.h"
#include "updatetablerequest.h"
#include "updatetableresponse.h"
#include "updatetriggerrequest.h"
#include "updatetriggerresponse.h"
#include "updateuserdefinedfunctionrequest.h"
#include "updateuserdefinedfunctionresponse.h"
#include "updateworkflowrequest.h"
#include "updateworkflowresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Glue
 * \brief Contains classess for accessing AWS Glue.
 *
 * \inmodule QtAwsGlue
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GlueClient
 * \brief The GlueClient class provides access to the AWS Glue service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 */

/*!
 * \brief Constructs a GlueClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
GlueClient::GlueClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new GlueClientPrivate(this), parent)
{
    Q_D(GlueClient);
    d->apiVersion = QStringLiteral("2017-03-31");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("glue");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Glue");
    d->serviceName = QStringLiteral("glue");
}

/*!
 * \overload GlueClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
GlueClient::GlueClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new GlueClientPrivate(this), parent)
{
    Q_D(GlueClient);
    d->apiVersion = QStringLiteral("2017-03-31");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("glue");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Glue");
    d->serviceName = QStringLiteral("glue");
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * BatchCreatePartitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates one or more partitions in a batch
 */
BatchCreatePartitionResponse * GlueClient::batchCreatePartition(const BatchCreatePartitionRequest &request)
{
    return qobject_cast<BatchCreatePartitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * BatchDeleteConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a list of connection definitions from the Data
 */
BatchDeleteConnectionResponse * GlueClient::batchDeleteConnection(const BatchDeleteConnectionRequest &request)
{
    return qobject_cast<BatchDeleteConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * BatchDeletePartitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes one or more partitions in a batch
 */
BatchDeletePartitionResponse * GlueClient::batchDeletePartition(const BatchDeletePartitionRequest &request)
{
    return qobject_cast<BatchDeletePartitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * BatchDeleteTableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes multiple tables at
 *
 * once> <note>
 *
 * After completing this operation, you no longer have access to the table versions and partitions that belong to the
 * deleted table. AWS Glue deletes these "orphaned" resources asynchronously in a timely manner, at the discretion of the
 *
 * service>
 *
 * To ensure the immediate deletion of all related resources, before calling <code>BatchDeleteTable</code>, use
 * <code>DeleteTableVersion</code> or <code>BatchDeleteTableVersion</code>, and <code>DeletePartition</code> or
 * <code>BatchDeletePartition</code>, to delete any resources that belong to the
 */
BatchDeleteTableResponse * GlueClient::batchDeleteTable(const BatchDeleteTableRequest &request)
{
    return qobject_cast<BatchDeleteTableResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * BatchDeleteTableVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified batch of versions of a
 */
BatchDeleteTableVersionResponse * GlueClient::batchDeleteTableVersion(const BatchDeleteTableVersionRequest &request)
{
    return qobject_cast<BatchDeleteTableVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * BatchGetCrawlersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of resource metadata for a given list of crawler names. After calling the <code>ListCrawlers</code>
 * operation, you can call this operation to access the data to which you have been granted permissions. This operation
 * supports all IAM permissions, including permission conditions that uses
 */
BatchGetCrawlersResponse * GlueClient::batchGetCrawlers(const BatchGetCrawlersRequest &request)
{
    return qobject_cast<BatchGetCrawlersResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * BatchGetDevEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of resource metadata for a given list of development endpoint names. After calling the
 * <code>ListDevEndpoints</code> operation, you can call this operation to access the data to which you have been granted
 * permissions. This operation supports all IAM permissions, including permission conditions that uses
 */
BatchGetDevEndpointsResponse * GlueClient::batchGetDevEndpoints(const BatchGetDevEndpointsRequest &request)
{
    return qobject_cast<BatchGetDevEndpointsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * BatchGetJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of resource metadata for a given list of job names. After calling the <code>ListJobs</code> operation,
 * you can call this operation to access the data to which you have been granted permissions. This operation supports all
 * IAM permissions, including permission conditions that uses tags.
 */
BatchGetJobsResponse * GlueClient::batchGetJobs(const BatchGetJobsRequest &request)
{
    return qobject_cast<BatchGetJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * BatchGetPartitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves partitions in a batch
 */
BatchGetPartitionResponse * GlueClient::batchGetPartition(const BatchGetPartitionRequest &request)
{
    return qobject_cast<BatchGetPartitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * BatchGetTriggersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of resource metadata for a given list of trigger names. After calling the <code>ListTriggers</code>
 * operation, you can call this operation to access the data to which you have been granted permissions. This operation
 * supports all IAM permissions, including permission conditions that uses
 */
BatchGetTriggersResponse * GlueClient::batchGetTriggers(const BatchGetTriggersRequest &request)
{
    return qobject_cast<BatchGetTriggersResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * BatchGetWorkflowsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of resource metadata for a given list of workflow names. After calling the <code>ListWorkflows</code>
 * operation, you can call this operation to access the data to which you have been granted permissions. This operation
 * supports all IAM permissions, including permission conditions that uses
 */
BatchGetWorkflowsResponse * GlueClient::batchGetWorkflows(const BatchGetWorkflowsRequest &request)
{
    return qobject_cast<BatchGetWorkflowsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * BatchStopJobRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops one or more job runs for a specified job
 */
BatchStopJobRunResponse * GlueClient::batchStopJobRun(const BatchStopJobRunRequest &request)
{
    return qobject_cast<BatchStopJobRunResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * BatchUpdatePartitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates one or more partitions in a batch
 */
BatchUpdatePartitionResponse * GlueClient::batchUpdatePartition(const BatchUpdatePartitionRequest &request)
{
    return qobject_cast<BatchUpdatePartitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CancelMLTaskRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels (stops) a task run. Machine learning task runs are asynchronous tasks that AWS Glue runs on your behalf as part
 * of various machine learning workflows. You can cancel a machine learning task run at any time by calling
 * <code>CancelMLTaskRun</code> with a task run's parent transform's <code>TransformID</code> and the task run's
 * <code>TaskRunId</code>.
 */
CancelMLTaskRunResponse * GlueClient::cancelMLTaskRun(const CancelMLTaskRunRequest &request)
{
    return qobject_cast<CancelMLTaskRunResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CheckSchemaVersionValidityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Validates the supplied schema. This call has no side effects, it simply validates using the supplied schema using
 * <code>DataFormat</code> as the format. Since it does not take a schema set name, no compatibility checks are
 */
CheckSchemaVersionValidityResponse * GlueClient::checkSchemaVersionValidity(const CheckSchemaVersionValidityRequest &request)
{
    return qobject_cast<CheckSchemaVersionValidityResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreateClassifierResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a classifier in the user's account. This can be a <code>GrokClassifier</code>, an <code>XMLClassifier</code>, a
 * <code>JsonClassifier</code>, or a <code>CsvClassifier</code>, depending on which field of the request is
 */
CreateClassifierResponse * GlueClient::createClassifier(const CreateClassifierRequest &request)
{
    return qobject_cast<CreateClassifierResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreateConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a connection definition in the Data
 */
CreateConnectionResponse * GlueClient::createConnection(const CreateConnectionRequest &request)
{
    return qobject_cast<CreateConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreateCrawlerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new crawler with specified targets, role, configuration, and optional schedule. At least one crawl target must
 * be specified, in the <code>s3Targets</code> field, the <code>jdbcTargets</code> field, or the
 * <code>DynamoDBTargets</code>
 */
CreateCrawlerResponse * GlueClient::createCrawler(const CreateCrawlerRequest &request)
{
    return qobject_cast<CreateCrawlerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreateDatabaseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new database in a Data
 */
CreateDatabaseResponse * GlueClient::createDatabase(const CreateDatabaseRequest &request)
{
    return qobject_cast<CreateDatabaseResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreateDevEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new development
 */
CreateDevEndpointResponse * GlueClient::createDevEndpoint(const CreateDevEndpointRequest &request)
{
    return qobject_cast<CreateDevEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreateJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new job
 */
CreateJobResponse * GlueClient::createJob(const CreateJobRequest &request)
{
    return qobject_cast<CreateJobResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreateMLTransformResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an AWS Glue machine learning transform. This operation creates the transform and all the necessary parameters to
 * train
 *
 * it>
 *
 * Call this operation as the first step in the process of using a machine learning transform (such as the
 * <code>FindMatches</code> transform) for deduplicating data. You can provide an optional <code>Description</code>, in
 * addition to the parameters that you want to use for your
 *
 * algorithm>
 *
 * You must also specify certain parameters for the tasks that AWS Glue runs on your behalf as part of learning from your
 * data and creating a high-quality machine learning transform. These parameters include <code>Role</code>, and optionally,
 * <code>AllocatedCapacity</code>, <code>Timeout</code>, and <code>MaxRetries</code>. For more information, see <a
 */
CreateMLTransformResponse * GlueClient::createMLTransform(const CreateMLTransformRequest &request)
{
    return qobject_cast<CreateMLTransformResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreatePartitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new
 */
CreatePartitionResponse * GlueClient::createPartition(const CreatePartitionRequest &request)
{
    return qobject_cast<CreatePartitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreatePartitionIndexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a specified partition index in an existing
 */
CreatePartitionIndexResponse * GlueClient::createPartitionIndex(const CreatePartitionIndexRequest &request)
{
    return qobject_cast<CreatePartitionIndexResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreateRegistryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new registry which may be used to hold a collection of
 */
CreateRegistryResponse * GlueClient::createRegistry(const CreateRegistryRequest &request)
{
    return qobject_cast<CreateRegistryResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreateSchemaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new schema set and registers the schema definition. Returns an error if the schema set already exists without
 * actually registering the
 *
 * version>
 *
 * When the schema set is created, a version checkpoint will be set to the first version. Compatibility mode "DISABLED"
 * restricts any additional schema versions from being added after the first schema version. For all other compatibility
 * modes, validation of compatibility settings will be applied only from the second version onwards when the
 * <code>RegisterSchemaVersion</code> API is
 *
 * used>
 *
 * When this API is called without a <code>RegistryId</code>, this will create an entry for a "default-registry" in the
 * registry database tables, if it is not already
 */
CreateSchemaResponse * GlueClient::createSchema(const CreateSchemaRequest &request)
{
    return qobject_cast<CreateSchemaResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreateScriptResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Transforms a directed acyclic graph (DAG) into
 */
CreateScriptResponse * GlueClient::createScript(const CreateScriptRequest &request)
{
    return qobject_cast<CreateScriptResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreateSecurityConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new security configuration. A security configuration is a set of security properties that can be used by AWS
 * Glue. You can use a security configuration to encrypt data at rest. For information about using security configurations
 * in AWS Glue, see <a href="https://docs.aws.amazon.com/glue/latest/dg/encryption-security-configuration.html">Encrypting
 * Data Written by Crawlers, Jobs, and Development
 */
CreateSecurityConfigurationResponse * GlueClient::createSecurityConfiguration(const CreateSecurityConfigurationRequest &request)
{
    return qobject_cast<CreateSecurityConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreateTableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new table definition in the Data
 */
CreateTableResponse * GlueClient::createTable(const CreateTableRequest &request)
{
    return qobject_cast<CreateTableResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreateTriggerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new
 */
CreateTriggerResponse * GlueClient::createTrigger(const CreateTriggerRequest &request)
{
    return qobject_cast<CreateTriggerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreateUserDefinedFunctionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new function definition in the Data
 */
CreateUserDefinedFunctionResponse * GlueClient::createUserDefinedFunction(const CreateUserDefinedFunctionRequest &request)
{
    return qobject_cast<CreateUserDefinedFunctionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * CreateWorkflowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new
 */
CreateWorkflowResponse * GlueClient::createWorkflow(const CreateWorkflowRequest &request)
{
    return qobject_cast<CreateWorkflowResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteClassifierResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a classifier from the Data
 */
DeleteClassifierResponse * GlueClient::deleteClassifier(const DeleteClassifierRequest &request)
{
    return qobject_cast<DeleteClassifierResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteColumnStatisticsForPartitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete the partition column statistics of a
 *
 * column>
 *
 * The Identity and Access Management (IAM) permission required for this operation is
 */
DeleteColumnStatisticsForPartitionResponse * GlueClient::deleteColumnStatisticsForPartition(const DeleteColumnStatisticsForPartitionRequest &request)
{
    return qobject_cast<DeleteColumnStatisticsForPartitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteColumnStatisticsForTableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves table statistics of
 *
 * columns>
 *
 * The Identity and Access Management (IAM) permission required for this operation is
 */
DeleteColumnStatisticsForTableResponse * GlueClient::deleteColumnStatisticsForTable(const DeleteColumnStatisticsForTableRequest &request)
{
    return qobject_cast<DeleteColumnStatisticsForTableResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a connection from the Data
 */
DeleteConnectionResponse * GlueClient::deleteConnection(const DeleteConnectionRequest &request)
{
    return qobject_cast<DeleteConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteCrawlerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a specified crawler from the AWS Glue Data Catalog, unless the crawler state is
 */
DeleteCrawlerResponse * GlueClient::deleteCrawler(const DeleteCrawlerRequest &request)
{
    return qobject_cast<DeleteCrawlerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteDatabaseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a specified database from a Data
 *
 * Catalog> <note>
 *
 * After completing this operation, you no longer have access to the tables (and all table versions and partitions that
 * might belong to the tables) and the user-defined functions in the deleted database. AWS Glue deletes these "orphaned"
 * resources asynchronously in a timely manner, at the discretion of the
 *
 * service>
 *
 * To ensure the immediate deletion of all related resources, before calling <code>DeleteDatabase</code>, use
 * <code>DeleteTableVersion</code> or <code>BatchDeleteTableVersion</code>, <code>DeletePartition</code> or
 * <code>BatchDeletePartition</code>, <code>DeleteUserDefinedFunction</code>, and <code>DeleteTable</code> or
 * <code>BatchDeleteTable</code>, to delete any resources that belong to the
 */
DeleteDatabaseResponse * GlueClient::deleteDatabase(const DeleteDatabaseRequest &request)
{
    return qobject_cast<DeleteDatabaseResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteDevEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified development
 */
DeleteDevEndpointResponse * GlueClient::deleteDevEndpoint(const DeleteDevEndpointRequest &request)
{
    return qobject_cast<DeleteDevEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified job definition. If the job definition is not found, no exception is
 */
DeleteJobResponse * GlueClient::deleteJob(const DeleteJobRequest &request)
{
    return qobject_cast<DeleteJobResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteMLTransformResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an AWS Glue machine learning transform. Machine learning transforms are a special type of transform that use
 * machine learning to learn the details of the transformation to be performed by learning from examples provided by
 * humans. These transformations are then saved by AWS Glue. If you no longer need a transform, you can delete it by
 * calling <code>DeleteMLTransforms</code>. However, any AWS Glue jobs that still reference the deleted transform will no
 * longer
 */
DeleteMLTransformResponse * GlueClient::deleteMLTransform(const DeleteMLTransformRequest &request)
{
    return qobject_cast<DeleteMLTransformResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeletePartitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified
 */
DeletePartitionResponse * GlueClient::deletePartition(const DeletePartitionRequest &request)
{
    return qobject_cast<DeletePartitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeletePartitionIndexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified partition index from an existing
 */
DeletePartitionIndexResponse * GlueClient::deletePartitionIndex(const DeletePartitionIndexRequest &request)
{
    return qobject_cast<DeletePartitionIndexResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteRegistryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete the entire registry including schema and all of its versions. To get the status of the delete operation, you can
 * call the <code>GetRegistry</code> API after the asynchronous call. Deleting a registry will disable all online
 * operations for the registry such as the <code>UpdateRegistry</code>, <code>CreateSchema</code>,
 * <code>UpdateSchema</code>, and <code>RegisterSchemaVersion</code> APIs.
 */
DeleteRegistryResponse * GlueClient::deleteRegistry(const DeleteRegistryRequest &request)
{
    return qobject_cast<DeleteRegistryResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified
 */
DeleteResourcePolicyResponse * GlueClient::deleteResourcePolicy(const DeleteResourcePolicyRequest &request)
{
    return qobject_cast<DeleteResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteSchemaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the entire schema set, including the schema set and all of its versions. To get the status of the delete
 * operation, you can call <code>GetSchema</code> API after the asynchronous call. Deleting a registry will disable all
 * online operations for the schema, such as the <code>GetSchemaByDefinition</code>, and <code>RegisterSchemaVersion</code>
 */
DeleteSchemaResponse * GlueClient::deleteSchema(const DeleteSchemaRequest &request)
{
    return qobject_cast<DeleteSchemaResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteSchemaVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove versions from the specified schema. A version number or range may be supplied. If the compatibility mode forbids
 * deleting of a version that is necessary, such as BACKWARDS_FULL, an error is returned. Calling the
 * <code>GetSchemaVersions</code> API after this call will list the status of the deleted
 *
 * versions>
 *
 * When the range of version numbers contain check pointed version, the API will return a 409 conflict and will not proceed
 * with the deletion. You have to remove the checkpoint first using the <code>DeleteSchemaCheckpoint</code> API before
 * using this
 *
 * API>
 *
 * You cannot use the <code>DeleteSchemaVersions</code> API to delete the first schema version in the schema set. The first
 * schema version can only be deleted by the <code>DeleteSchema</code> API. This operation will also delete the attached
 * <code>SchemaVersionMetadata</code> under the schema versions. Hard deletes will be enforced on the
 *
 * database>
 *
 * If the compatibility mode forbids deleting of a version that is necessary, such as BACKWARDS_FULL, an error is
 */
DeleteSchemaVersionsResponse * GlueClient::deleteSchemaVersions(const DeleteSchemaVersionsRequest &request)
{
    return qobject_cast<DeleteSchemaVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteSecurityConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified security
 */
DeleteSecurityConfigurationResponse * GlueClient::deleteSecurityConfiguration(const DeleteSecurityConfigurationRequest &request)
{
    return qobject_cast<DeleteSecurityConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteTableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a table definition from the Data
 *
 * Catalog> <note>
 *
 * After completing this operation, you no longer have access to the table versions and partitions that belong to the
 * deleted table. AWS Glue deletes these "orphaned" resources asynchronously in a timely manner, at the discretion of the
 *
 * service>
 *
 * To ensure the immediate deletion of all related resources, before calling <code>DeleteTable</code>, use
 * <code>DeleteTableVersion</code> or <code>BatchDeleteTableVersion</code>, and <code>DeletePartition</code> or
 * <code>BatchDeletePartition</code>, to delete any resources that belong to the
 */
DeleteTableResponse * GlueClient::deleteTable(const DeleteTableRequest &request)
{
    return qobject_cast<DeleteTableResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteTableVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified version of a
 */
DeleteTableVersionResponse * GlueClient::deleteTableVersion(const DeleteTableVersionRequest &request)
{
    return qobject_cast<DeleteTableVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteTriggerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified trigger. If the trigger is not found, no exception is
 */
DeleteTriggerResponse * GlueClient::deleteTrigger(const DeleteTriggerRequest &request)
{
    return qobject_cast<DeleteTriggerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteUserDefinedFunctionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing function definition from the Data
 */
DeleteUserDefinedFunctionResponse * GlueClient::deleteUserDefinedFunction(const DeleteUserDefinedFunctionRequest &request)
{
    return qobject_cast<DeleteUserDefinedFunctionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * DeleteWorkflowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 */
DeleteWorkflowResponse * GlueClient::deleteWorkflow(const DeleteWorkflowRequest &request)
{
    return qobject_cast<DeleteWorkflowResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetCatalogImportStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the status of a migration
 */
GetCatalogImportStatusResponse * GlueClient::getCatalogImportStatus(const GetCatalogImportStatusRequest &request)
{
    return qobject_cast<GetCatalogImportStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetClassifierResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve a classifier by
 */
GetClassifierResponse * GlueClient::getClassifier(const GetClassifierRequest &request)
{
    return qobject_cast<GetClassifierResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetClassifiersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all classifier objects in the Data
 */
GetClassifiersResponse * GlueClient::getClassifiers(const GetClassifiersRequest &request)
{
    return qobject_cast<GetClassifiersResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetColumnStatisticsForPartitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves partition statistics of
 *
 * columns>
 *
 * The Identity and Access Management (IAM) permission required for this operation is
 */
GetColumnStatisticsForPartitionResponse * GlueClient::getColumnStatisticsForPartition(const GetColumnStatisticsForPartitionRequest &request)
{
    return qobject_cast<GetColumnStatisticsForPartitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetColumnStatisticsForTableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves table statistics of
 *
 * columns>
 *
 * The Identity and Access Management (IAM) permission required for this operation is
 */
GetColumnStatisticsForTableResponse * GlueClient::getColumnStatisticsForTable(const GetColumnStatisticsForTableRequest &request)
{
    return qobject_cast<GetColumnStatisticsForTableResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a connection definition from the Data
 */
GetConnectionResponse * GlueClient::getConnection(const GetConnectionRequest &request)
{
    return qobject_cast<GetConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetConnectionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of connection definitions from the Data
 */
GetConnectionsResponse * GlueClient::getConnections(const GetConnectionsRequest &request)
{
    return qobject_cast<GetConnectionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetCrawlerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves metadata for a specified
 */
GetCrawlerResponse * GlueClient::getCrawler(const GetCrawlerRequest &request)
{
    return qobject_cast<GetCrawlerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetCrawlerMetricsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves metrics about specified
 */
GetCrawlerMetricsResponse * GlueClient::getCrawlerMetrics(const GetCrawlerMetricsRequest &request)
{
    return qobject_cast<GetCrawlerMetricsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetCrawlersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves metadata for all crawlers defined in the customer
 */
GetCrawlersResponse * GlueClient::getCrawlers(const GetCrawlersRequest &request)
{
    return qobject_cast<GetCrawlersResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetDataCatalogEncryptionSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the security configuration for a specified
 */
GetDataCatalogEncryptionSettingsResponse * GlueClient::getDataCatalogEncryptionSettings(const GetDataCatalogEncryptionSettingsRequest &request)
{
    return qobject_cast<GetDataCatalogEncryptionSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetDatabaseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the definition of a specified
 */
GetDatabaseResponse * GlueClient::getDatabase(const GetDatabaseRequest &request)
{
    return qobject_cast<GetDatabaseResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetDatabasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves all databases defined in a given Data
 */
GetDatabasesResponse * GlueClient::getDatabases(const GetDatabasesRequest &request)
{
    return qobject_cast<GetDatabasesResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetDataflowGraphResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Transforms a Python script into a directed acyclic graph (DAG).
 */
GetDataflowGraphResponse * GlueClient::getDataflowGraph(const GetDataflowGraphRequest &request)
{
    return qobject_cast<GetDataflowGraphResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetDevEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a specified development
 *
 * endpoint> <note>
 *
 * When you create a development endpoint in a virtual private cloud (VPC), AWS Glue returns only a private IP address, and
 * the public IP address field is not populated. When you create a non-VPC development endpoint, AWS Glue returns only a
 * public IP
 */
GetDevEndpointResponse * GlueClient::getDevEndpoint(const GetDevEndpointRequest &request)
{
    return qobject_cast<GetDevEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetDevEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves all the development endpoints in this AWS
 *
 * account> <note>
 *
 * When you create a development endpoint in a virtual private cloud (VPC), AWS Glue returns only a private IP address and
 * the public IP address field is not populated. When you create a non-VPC development endpoint, AWS Glue returns only a
 * public IP
 */
GetDevEndpointsResponse * GlueClient::getDevEndpoints(const GetDevEndpointsRequest &request)
{
    return qobject_cast<GetDevEndpointsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves an existing job
 */
GetJobResponse * GlueClient::getJob(const GetJobRequest &request)
{
    return qobject_cast<GetJobResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetJobBookmarkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information on a job bookmark
 */
GetJobBookmarkResponse * GlueClient::getJobBookmark(const GetJobBookmarkRequest &request)
{
    return qobject_cast<GetJobBookmarkResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetJobRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the metadata for a given job
 */
GetJobRunResponse * GlueClient::getJobRun(const GetJobRunRequest &request)
{
    return qobject_cast<GetJobRunResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetJobRunsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves metadata for all runs of a given job
 */
GetJobRunsResponse * GlueClient::getJobRuns(const GetJobRunsRequest &request)
{
    return qobject_cast<GetJobRunsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves all current job
 */
GetJobsResponse * GlueClient::getJobs(const GetJobsRequest &request)
{
    return qobject_cast<GetJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetMLTaskRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets details for a specific task run on a machine learning transform. Machine learning task runs are asynchronous tasks
 * that AWS Glue runs on your behalf as part of various machine learning workflows. You can check the stats of any task run
 * by calling <code>GetMLTaskRun</code> with the <code>TaskRunID</code> and its parent transform's
 */
GetMLTaskRunResponse * GlueClient::getMLTaskRun(const GetMLTaskRunRequest &request)
{
    return qobject_cast<GetMLTaskRunResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetMLTaskRunsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of runs for a machine learning transform. Machine learning task runs are asynchronous tasks that AWS Glue
 * runs on your behalf as part of various machine learning workflows. You can get a sortable, filterable list of machine
 * learning task runs by calling <code>GetMLTaskRuns</code> with their parent transform's <code>TransformID</code> and
 * other optional parameters as documented in this
 *
 * section>
 *
 * This operation returns a list of historic runs and must be
 */
GetMLTaskRunsResponse * GlueClient::getMLTaskRuns(const GetMLTaskRunsRequest &request)
{
    return qobject_cast<GetMLTaskRunsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetMLTransformResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an AWS Glue machine learning transform artifact and all its corresponding metadata. Machine learning transforms are
 * a special type of transform that use machine learning to learn the details of the transformation to be performed by
 * learning from examples provided by humans. These transformations are then saved by AWS Glue. You can retrieve their
 * metadata by calling
 */
GetMLTransformResponse * GlueClient::getMLTransform(const GetMLTransformRequest &request)
{
    return qobject_cast<GetMLTransformResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetMLTransformsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a sortable, filterable list of existing AWS Glue machine learning transforms. Machine learning transforms are a
 * special type of transform that use machine learning to learn the details of the transformation to be performed by
 * learning from examples provided by humans. These transformations are then saved by AWS Glue, and you can retrieve their
 * metadata by calling
 */
GetMLTransformsResponse * GlueClient::getMLTransforms(const GetMLTransformsRequest &request)
{
    return qobject_cast<GetMLTransformsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetMappingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates
 */
GetMappingResponse * GlueClient::getMapping(const GetMappingRequest &request)
{
    return qobject_cast<GetMappingResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetPartitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a specified
 */
GetPartitionResponse * GlueClient::getPartition(const GetPartitionRequest &request)
{
    return qobject_cast<GetPartitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetPartitionIndexesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the partition indexes associated with a
 */
GetPartitionIndexesResponse * GlueClient::getPartitionIndexes(const GetPartitionIndexesRequest &request)
{
    return qobject_cast<GetPartitionIndexesResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetPartitionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the partitions in a
 */
GetPartitionsResponse * GlueClient::getPartitions(const GetPartitionsRequest &request)
{
    return qobject_cast<GetPartitionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetPlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets code to perform a specified
 */
GetPlanResponse * GlueClient::getPlan(const GetPlanRequest &request)
{
    return qobject_cast<GetPlanResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetRegistryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified registry in
 */
GetRegistryResponse * GlueClient::getRegistry(const GetRegistryRequest &request)
{
    return qobject_cast<GetRegistryResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetResourcePoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the resource policies set on individual resources by AWS Resource Access Manager during cross-account
 * permission grants. Also retrieves the Data Catalog resource
 *
 * policy>
 *
 * If you enabled metadata encryption in Data Catalog settings, and you do not have permission on the AWS KMS key, the
 * operation can't return the Data Catalog resource
 */
GetResourcePoliciesResponse * GlueClient::getResourcePolicies(const GetResourcePoliciesRequest &request)
{
    return qobject_cast<GetResourcePoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a specified resource
 */
GetResourcePolicyResponse * GlueClient::getResourcePolicy(const GetResourcePolicyRequest &request)
{
    return qobject_cast<GetResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetSchemaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified schema in
 */
GetSchemaResponse * GlueClient::getSchema(const GetSchemaRequest &request)
{
    return qobject_cast<GetSchemaResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetSchemaByDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a schema by the <code>SchemaDefinition</code>. The schema definition is sent to the Schema Registry,
 * canonicalized, and hashed. If the hash is matched within the scope of the <code>SchemaName</code> or ARN (or the default
 * registry, if none is supplied), that schema’s metadata is returned. Otherwise, a 404 or NotFound error is returned.
 * Schema versions in <code>Deleted</code> statuses will not be included in the
 */
GetSchemaByDefinitionResponse * GlueClient::getSchemaByDefinition(const GetSchemaByDefinitionRequest &request)
{
    return qobject_cast<GetSchemaByDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetSchemaVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the specified schema by its unique ID assigned when a version of the schema is created or registered. Schema
 * versions in Deleted status will not be included in the
 */
GetSchemaVersionResponse * GlueClient::getSchemaVersion(const GetSchemaVersionRequest &request)
{
    return qobject_cast<GetSchemaVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetSchemaVersionsDiffResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Fetches the schema version difference in the specified difference type between two stored schema versions in the Schema
 *
 * Registry>
 *
 * This API allows you to compare two schema versions between two schema definitions under the same
 */
GetSchemaVersionsDiffResponse * GlueClient::getSchemaVersionsDiff(const GetSchemaVersionsDiffRequest &request)
{
    return qobject_cast<GetSchemaVersionsDiffResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetSecurityConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a specified security
 */
GetSecurityConfigurationResponse * GlueClient::getSecurityConfiguration(const GetSecurityConfigurationRequest &request)
{
    return qobject_cast<GetSecurityConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetSecurityConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of all security
 */
GetSecurityConfigurationsResponse * GlueClient::getSecurityConfigurations(const GetSecurityConfigurationsRequest &request)
{
    return qobject_cast<GetSecurityConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetTableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the <code>Table</code> definition in a Data Catalog for a specified
 */
GetTableResponse * GlueClient::getTable(const GetTableRequest &request)
{
    return qobject_cast<GetTableResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetTableVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a specified version of a
 */
GetTableVersionResponse * GlueClient::getTableVersion(const GetTableVersionRequest &request)
{
    return qobject_cast<GetTableVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetTableVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of strings that identify available versions of a specified
 */
GetTableVersionsResponse * GlueClient::getTableVersions(const GetTableVersionsRequest &request)
{
    return qobject_cast<GetTableVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetTablesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the definitions of some or all of the tables in a given
 */
GetTablesResponse * GlueClient::getTables(const GetTablesRequest &request)
{
    return qobject_cast<GetTablesResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of tags associated with a
 */
GetTagsResponse * GlueClient::getTags(const GetTagsRequest &request)
{
    return qobject_cast<GetTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetTriggerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the definition of a
 */
GetTriggerResponse * GlueClient::getTrigger(const GetTriggerRequest &request)
{
    return qobject_cast<GetTriggerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetTriggersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets all the triggers associated with a
 */
GetTriggersResponse * GlueClient::getTriggers(const GetTriggersRequest &request)
{
    return qobject_cast<GetTriggersResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetUserDefinedFunctionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a specified function definition from the Data
 */
GetUserDefinedFunctionResponse * GlueClient::getUserDefinedFunction(const GetUserDefinedFunctionRequest &request)
{
    return qobject_cast<GetUserDefinedFunctionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetUserDefinedFunctionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves multiple function definitions from the Data
 */
GetUserDefinedFunctionsResponse * GlueClient::getUserDefinedFunctions(const GetUserDefinedFunctionsRequest &request)
{
    return qobject_cast<GetUserDefinedFunctionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetWorkflowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves resource metadata for a
 */
GetWorkflowResponse * GlueClient::getWorkflow(const GetWorkflowRequest &request)
{
    return qobject_cast<GetWorkflowResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetWorkflowRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the metadata for a given workflow run.
 */
GetWorkflowRunResponse * GlueClient::getWorkflowRun(const GetWorkflowRunRequest &request)
{
    return qobject_cast<GetWorkflowRunResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetWorkflowRunPropertiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the workflow run properties which were set during the
 */
GetWorkflowRunPropertiesResponse * GlueClient::getWorkflowRunProperties(const GetWorkflowRunPropertiesRequest &request)
{
    return qobject_cast<GetWorkflowRunPropertiesResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * GetWorkflowRunsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves metadata for all runs of a given
 */
GetWorkflowRunsResponse * GlueClient::getWorkflowRuns(const GetWorkflowRunsRequest &request)
{
    return qobject_cast<GetWorkflowRunsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * ImportCatalogToGlueResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Imports an existing Amazon Athena Data Catalog to AWS
 */
ImportCatalogToGlueResponse * GlueClient::importCatalogToGlue(const ImportCatalogToGlueRequest &request)
{
    return qobject_cast<ImportCatalogToGlueResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * ListCrawlersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the names of all crawler resources in this AWS account, or the resources with the specified tag. This
 * operation allows you to see which resources are available in your account, and their
 *
 * names>
 *
 * This operation takes the optional <code>Tags</code> field, which you can use as a filter on the response so that tagged
 * resources can be retrieved as a group. If you choose to use tags filtering, only resources with the tag are
 */
ListCrawlersResponse * GlueClient::listCrawlers(const ListCrawlersRequest &request)
{
    return qobject_cast<ListCrawlersResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * ListDevEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the names of all <code>DevEndpoint</code> resources in this AWS account, or the resources with the specified
 * tag. This operation allows you to see which resources are available in your account, and their
 *
 * names>
 *
 * This operation takes the optional <code>Tags</code> field, which you can use as a filter on the response so that tagged
 * resources can be retrieved as a group. If you choose to use tags filtering, only resources with the tag are
 */
ListDevEndpointsResponse * GlueClient::listDevEndpoints(const ListDevEndpointsRequest &request)
{
    return qobject_cast<ListDevEndpointsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * ListJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the names of all job resources in this AWS account, or the resources with the specified tag. This operation
 * allows you to see which resources are available in your account, and their
 *
 * names>
 *
 * This operation takes the optional <code>Tags</code> field, which you can use as a filter on the response so that tagged
 * resources can be retrieved as a group. If you choose to use tags filtering, only resources with the tag are
 */
ListJobsResponse * GlueClient::listJobs(const ListJobsRequest &request)
{
    return qobject_cast<ListJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * ListMLTransformsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a sortable, filterable list of existing AWS Glue machine learning transforms in this AWS account, or the
 * resources with the specified tag. This operation takes the optional <code>Tags</code> field, which you can use as a
 * filter of the responses so that tagged resources can be retrieved as a group. If you choose to use tag filtering, only
 * resources with the tags are retrieved.
 */
ListMLTransformsResponse * GlueClient::listMLTransforms(const ListMLTransformsRequest &request)
{
    return qobject_cast<ListMLTransformsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * ListRegistriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of registries that you have created, with minimal registry information. Registries in the
 * <code>Deleting</code> status will not be included in the results. Empty results will be returned if there are no
 * registries
 */
ListRegistriesResponse * GlueClient::listRegistries(const ListRegistriesRequest &request)
{
    return qobject_cast<ListRegistriesResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * ListSchemaVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of schema versions that you have created, with minimal information. Schema versions in Deleted status
 * will not be included in the results. Empty results will be returned if there are no schema versions
 */
ListSchemaVersionsResponse * GlueClient::listSchemaVersions(const ListSchemaVersionsRequest &request)
{
    return qobject_cast<ListSchemaVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * ListSchemasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of schemas with minimal details. Schemas in Deleting status will not be included in the results. Empty
 * results will be returned if there are no schemas
 *
 * available>
 *
 * When the <code>RegistryId</code> is not provided, all the schemas across registries will be part of the API
 */
ListSchemasResponse * GlueClient::listSchemas(const ListSchemasRequest &request)
{
    return qobject_cast<ListSchemasResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * ListTriggersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the names of all trigger resources in this AWS account, or the resources with the specified tag. This
 * operation allows you to see which resources are available in your account, and their
 *
 * names>
 *
 * This operation takes the optional <code>Tags</code> field, which you can use as a filter on the response so that tagged
 * resources can be retrieved as a group. If you choose to use tags filtering, only resources with the tag are
 */
ListTriggersResponse * GlueClient::listTriggers(const ListTriggersRequest &request)
{
    return qobject_cast<ListTriggersResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * ListWorkflowsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists names of workflows created in the
 */
ListWorkflowsResponse * GlueClient::listWorkflows(const ListWorkflowsRequest &request)
{
    return qobject_cast<ListWorkflowsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * PutDataCatalogEncryptionSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the security configuration for a specified catalog. After the configuration has been set, the specified encryption
 * is applied to every catalog write
 */
PutDataCatalogEncryptionSettingsResponse * GlueClient::putDataCatalogEncryptionSettings(const PutDataCatalogEncryptionSettingsRequest &request)
{
    return qobject_cast<PutDataCatalogEncryptionSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * PutResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the Data Catalog resource policy for access
 */
PutResourcePolicyResponse * GlueClient::putResourcePolicy(const PutResourcePolicyRequest &request)
{
    return qobject_cast<PutResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * PutSchemaVersionMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Puts the metadata key value pair for a specified schema version ID. A maximum of 10 key value pairs will be allowed per
 * schema version. They can be added over one or more
 */
PutSchemaVersionMetadataResponse * GlueClient::putSchemaVersionMetadata(const PutSchemaVersionMetadataRequest &request)
{
    return qobject_cast<PutSchemaVersionMetadataResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * PutWorkflowRunPropertiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Puts the specified workflow run properties for the given workflow run. If a property already exists for the specified
 * run, then it overrides the value otherwise adds the property to existing
 */
PutWorkflowRunPropertiesResponse * GlueClient::putWorkflowRunProperties(const PutWorkflowRunPropertiesRequest &request)
{
    return qobject_cast<PutWorkflowRunPropertiesResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * QuerySchemaVersionMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Queries for the schema version metadata information.
 */
QuerySchemaVersionMetadataResponse * GlueClient::querySchemaVersionMetadata(const QuerySchemaVersionMetadataRequest &request)
{
    return qobject_cast<QuerySchemaVersionMetadataResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * RegisterSchemaVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a new version to the existing schema. Returns an error if new version of schema does not meet the compatibility
 * requirements of the schema set. This API will not create a new schema set and will return a 404 error if the schema set
 * is not already present in the Schema
 *
 * Registry>
 *
 * If this is the first schema definition to be registered in the Schema Registry, this API will store the schema version
 * and return immediately. Otherwise, this call has the potential to run longer than other operations due to compatibility
 * modes. You can call the <code>GetSchemaVersion</code> API with the <code>SchemaVersionId</code> to check compatibility
 *
 * modes>
 *
 * If the same schema definition is already stored in Schema Registry as a version, the schema ID of the existing schema is
 * returned to the
 */
RegisterSchemaVersionResponse * GlueClient::registerSchemaVersion(const RegisterSchemaVersionRequest &request)
{
    return qobject_cast<RegisterSchemaVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * RemoveSchemaVersionMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a key value pair from the schema version metadata for the specified schema version
 */
RemoveSchemaVersionMetadataResponse * GlueClient::removeSchemaVersionMetadata(const RemoveSchemaVersionMetadataRequest &request)
{
    return qobject_cast<RemoveSchemaVersionMetadataResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * ResetJobBookmarkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Resets a bookmark
 */
ResetJobBookmarkResponse * GlueClient::resetJobBookmark(const ResetJobBookmarkRequest &request)
{
    return qobject_cast<ResetJobBookmarkResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * ResumeWorkflowRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Restarts selected nodes of a previous partially completed workflow run and resumes the workflow run. The selected nodes
 * and all nodes that are downstream from the selected nodes are
 */
ResumeWorkflowRunResponse * GlueClient::resumeWorkflowRun(const ResumeWorkflowRunRequest &request)
{
    return qobject_cast<ResumeWorkflowRunResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * SearchTablesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Searches a set of tables based on properties in the table metadata as well as on the parent database. You can search
 * against text or filter conditions.
 *
 * </p
 *
 * You can only get tables that you have access to based on the security policies defined in Lake Formation. You need at
 * least a read-only access to the table for it to be returned. If you do not have access to all the columns in the table,
 * these columns will not be searched against when returning the list of tables back to you. If you have access to the
 * columns but not the data in the columns, those columns and the associated metadata for those columns will be included in
 * the search.
 */
SearchTablesResponse * GlueClient::searchTables(const SearchTablesRequest &request)
{
    return qobject_cast<SearchTablesResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * StartCrawlerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a crawl using the specified crawler, regardless of what is scheduled. If the crawler is already running, returns
 * a <a
 */
StartCrawlerResponse * GlueClient::startCrawler(const StartCrawlerRequest &request)
{
    return qobject_cast<StartCrawlerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * StartCrawlerScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the schedule state of the specified crawler to <code>SCHEDULED</code>, unless the crawler is already running or
 * the schedule state is already
 */
StartCrawlerScheduleResponse * GlueClient::startCrawlerSchedule(const StartCrawlerScheduleRequest &request)
{
    return qobject_cast<StartCrawlerScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * StartExportLabelsTaskRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Begins an asynchronous task to export all labeled data for a particular transform. This task is the only label-related
 * API call that is not part of the typical active learning workflow. You typically use
 * <code>StartExportLabelsTaskRun</code> when you want to work with all of your existing labels at the same time, such as
 * when you want to remove or change labels that were previously submitted as truth. This API operation accepts the
 * <code>TransformId</code> whose labels you want to export and an Amazon Simple Storage Service (Amazon S3) path to export
 * the labels to. The operation returns a <code>TaskRunId</code>. You can check on the status of your task run by calling
 * the <code>GetMLTaskRun</code>
 */
StartExportLabelsTaskRunResponse * GlueClient::startExportLabelsTaskRun(const StartExportLabelsTaskRunRequest &request)
{
    return qobject_cast<StartExportLabelsTaskRunResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * StartImportLabelsTaskRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables you to provide additional labels (examples of truth) to be used to teach the machine learning transform and
 * improve its quality. This API operation is generally used as part of the active learning workflow that starts with the
 * <code>StartMLLabelingSetGenerationTaskRun</code> call and that ultimately results in improving the quality of your
 * machine learning transform.
 *
 * </p
 *
 * After the <code>StartMLLabelingSetGenerationTaskRun</code> finishes, AWS Glue machine learning will have generated a
 * series of questions for humans to answer. (Answering these questions is often called 'labeling' in the machine learning
 * workflows). In the case of the <code>FindMatches</code> transform, these questions are of the form, “What is the correct
 * way to group these rows together into groups composed entirely of matching records?” After the labeling process is
 * finished, users upload their answers/labels with a call to <code>StartImportLabelsTaskRun</code>. After
 * <code>StartImportLabelsTaskRun</code> finishes, all future runs of the machine learning transform use the new and
 * improved labels and perform a higher-quality
 *
 * transformation>
 *
 * By default, <code>StartMLLabelingSetGenerationTaskRun</code> continually learns from and combines all labels that you
 * upload unless you set <code>Replace</code> to true. If you set <code>Replace</code> to true,
 * <code>StartImportLabelsTaskRun</code> deletes and forgets all previously uploaded labels and learns only from the exact
 * set that you upload. Replacing labels can be helpful if you realize that you previously uploaded incorrect labels, and
 * you believe that they are having a negative effect on your transform
 *
 * quality>
 *
 * You can check on the status of your task run by calling the <code>GetMLTaskRun</code> operation.
 */
StartImportLabelsTaskRunResponse * GlueClient::startImportLabelsTaskRun(const StartImportLabelsTaskRunRequest &request)
{
    return qobject_cast<StartImportLabelsTaskRunResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * StartJobRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a job run using a job
 */
StartJobRunResponse * GlueClient::startJobRun(const StartJobRunRequest &request)
{
    return qobject_cast<StartJobRunResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * StartMLEvaluationTaskRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a task to estimate the quality of the transform.
 *
 * </p
 *
 * When you provide label sets as examples of truth, AWS Glue machine learning uses some of those examples to learn from
 * them. The rest of the labels are used as a test to estimate
 *
 * quality>
 *
 * Returns a unique identifier for the run. You can call <code>GetMLTaskRun</code> to get more information about the stats
 * of the
 */
StartMLEvaluationTaskRunResponse * GlueClient::startMLEvaluationTaskRun(const StartMLEvaluationTaskRunRequest &request)
{
    return qobject_cast<StartMLEvaluationTaskRunResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * StartMLLabelingSetGenerationTaskRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the active learning workflow for your machine learning transform to improve the transform's quality by generating
 * label sets and adding
 *
 * labels>
 *
 * When the <code>StartMLLabelingSetGenerationTaskRun</code> finishes, AWS Glue will have generated a "labeling set" or a
 * set of questions for humans to
 *
 * answer>
 *
 * In the case of the <code>FindMatches</code> transform, these questions are of the form, “What is the correct way to
 * group these rows together into groups composed entirely of matching records?”
 *
 * </p
 *
 * After the labeling process is finished, you can upload your labels with a call to <code>StartImportLabelsTaskRun</code>.
 * After <code>StartImportLabelsTaskRun</code> finishes, all future runs of the machine learning transform will use the new
 * and improved labels and perform a higher-quality
 */
StartMLLabelingSetGenerationTaskRunResponse * GlueClient::startMLLabelingSetGenerationTaskRun(const StartMLLabelingSetGenerationTaskRunRequest &request)
{
    return qobject_cast<StartMLLabelingSetGenerationTaskRunResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * StartTriggerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an existing trigger. See <a href="https://docs.aws.amazon.com/glue/latest/dg/trigger-job.html">Triggering
 * Jobs</a> for information about how different types of trigger are
 */
StartTriggerResponse * GlueClient::startTrigger(const StartTriggerRequest &request)
{
    return qobject_cast<StartTriggerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * StartWorkflowRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a new run of the specified
 */
StartWorkflowRunResponse * GlueClient::startWorkflowRun(const StartWorkflowRunRequest &request)
{
    return qobject_cast<StartWorkflowRunResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * StopCrawlerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * If the specified crawler is running, stops the
 */
StopCrawlerResponse * GlueClient::stopCrawler(const StopCrawlerRequest &request)
{
    return qobject_cast<StopCrawlerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * StopCrawlerScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the schedule state of the specified crawler to <code>NOT_SCHEDULED</code>, but does not stop the crawler if it is
 * already
 */
StopCrawlerScheduleResponse * GlueClient::stopCrawlerSchedule(const StopCrawlerScheduleRequest &request)
{
    return qobject_cast<StopCrawlerScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * StopTriggerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a specified
 */
StopTriggerResponse * GlueClient::stopTrigger(const StopTriggerRequest &request)
{
    return qobject_cast<StopTriggerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * StopWorkflowRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops the execution of the specified workflow
 */
StopWorkflowRunResponse * GlueClient::stopWorkflowRun(const StopWorkflowRunRequest &request)
{
    return qobject_cast<StopWorkflowRunResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds tags to a resource. A tag is a label you can assign to an AWS resource. In AWS Glue, you can tag only certain
 * resources. For information about what resources you can tag, see <a
 * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">AWS Tags in AWS
 */
TagResourceResponse * GlueClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from a
 */
UntagResourceResponse * GlueClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UpdateClassifierResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies an existing classifier (a <code>GrokClassifier</code>, an <code>XMLClassifier</code>, a
 * <code>JsonClassifier</code>, or a <code>CsvClassifier</code>, depending on which field is
 */
UpdateClassifierResponse * GlueClient::updateClassifier(const UpdateClassifierRequest &request)
{
    return qobject_cast<UpdateClassifierResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UpdateColumnStatisticsForPartitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates partition statistics of
 *
 * columns>
 *
 * The Identity and Access Management (IAM) permission required for this operation is
 */
UpdateColumnStatisticsForPartitionResponse * GlueClient::updateColumnStatisticsForPartition(const UpdateColumnStatisticsForPartitionRequest &request)
{
    return qobject_cast<UpdateColumnStatisticsForPartitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UpdateColumnStatisticsForTableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates table statistics of
 *
 * columns>
 *
 * The Identity and Access Management (IAM) permission required for this operation is
 */
UpdateColumnStatisticsForTableResponse * GlueClient::updateColumnStatisticsForTable(const UpdateColumnStatisticsForTableRequest &request)
{
    return qobject_cast<UpdateColumnStatisticsForTableResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UpdateConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a connection definition in the Data
 */
UpdateConnectionResponse * GlueClient::updateConnection(const UpdateConnectionRequest &request)
{
    return qobject_cast<UpdateConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UpdateCrawlerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a crawler. If a crawler is running, you must stop it using <code>StopCrawler</code> before updating
 */
UpdateCrawlerResponse * GlueClient::updateCrawler(const UpdateCrawlerRequest &request)
{
    return qobject_cast<UpdateCrawlerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UpdateCrawlerScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the schedule of a crawler using a <code>cron</code> expression.
 */
UpdateCrawlerScheduleResponse * GlueClient::updateCrawlerSchedule(const UpdateCrawlerScheduleRequest &request)
{
    return qobject_cast<UpdateCrawlerScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UpdateDatabaseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing database definition in a Data
 */
UpdateDatabaseResponse * GlueClient::updateDatabase(const UpdateDatabaseRequest &request)
{
    return qobject_cast<UpdateDatabaseResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UpdateDevEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a specified development
 */
UpdateDevEndpointResponse * GlueClient::updateDevEndpoint(const UpdateDevEndpointRequest &request)
{
    return qobject_cast<UpdateDevEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UpdateJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing job
 */
UpdateJobResponse * GlueClient::updateJob(const UpdateJobRequest &request)
{
    return qobject_cast<UpdateJobResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UpdateMLTransformResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing machine learning transform. Call this operation to tune the algorithm parameters to achieve better
 *
 * results>
 *
 * After calling this operation, you can call the <code>StartMLEvaluationTaskRun</code> operation to assess how well your
 * new parameters achieved your goals (such as improving the quality of your machine learning transform, or making it more
 */
UpdateMLTransformResponse * GlueClient::updateMLTransform(const UpdateMLTransformRequest &request)
{
    return qobject_cast<UpdateMLTransformResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UpdatePartitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a
 */
UpdatePartitionResponse * GlueClient::updatePartition(const UpdatePartitionRequest &request)
{
    return qobject_cast<UpdatePartitionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UpdateRegistryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing registry which is used to hold a collection of schemas. The updated properties relate to the
 * registry, and do not modify any of the schemas within the registry.
 */
UpdateRegistryResponse * GlueClient::updateRegistry(const UpdateRegistryRequest &request)
{
    return qobject_cast<UpdateRegistryResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UpdateSchemaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the description, compatibility setting, or version checkpoint for a schema
 *
 * set>
 *
 * For updating the compatibility setting, the call will not validate compatibility for the entire set of schema versions
 * with the new compatibility setting. If the value for <code>Compatibility</code> is provided, the
 * <code>VersionNumber</code> (a checkpoint) is also required. The API will validate the checkpoint version number for
 *
 * consistency>
 *
 * If the value for the <code>VersionNumber</code> (checkpoint) is provided, <code>Compatibility</code> is optional and
 * this can be used to set/reset a checkpoint for the
 *
 * schema>
 *
 * This update will happen only if the schema is in the AVAILABLE
 */
UpdateSchemaResponse * GlueClient::updateSchema(const UpdateSchemaRequest &request)
{
    return qobject_cast<UpdateSchemaResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UpdateTableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a metadata table in the Data
 */
UpdateTableResponse * GlueClient::updateTable(const UpdateTableRequest &request)
{
    return qobject_cast<UpdateTableResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UpdateTriggerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a trigger
 */
UpdateTriggerResponse * GlueClient::updateTrigger(const UpdateTriggerRequest &request)
{
    return qobject_cast<UpdateTriggerResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UpdateUserDefinedFunctionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing function definition in the Data
 */
UpdateUserDefinedFunctionResponse * GlueClient::updateUserDefinedFunction(const UpdateUserDefinedFunctionRequest &request)
{
    return qobject_cast<UpdateUserDefinedFunctionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueClient service, and returns a pointer to an
 * UpdateWorkflowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing
 */
UpdateWorkflowResponse * GlueClient::updateWorkflow(const UpdateWorkflowRequest &request)
{
    return qobject_cast<UpdateWorkflowResponse *>(send(request));
}

/*!
 * \class QtAws::Glue::GlueClientPrivate
 * \brief The GlueClientPrivate class provides private implementation for GlueClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GlueClientPrivate object with public implementation \a q.
 */
GlueClientPrivate::GlueClientPrivate(GlueClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Glue
} // namespace QtAws
