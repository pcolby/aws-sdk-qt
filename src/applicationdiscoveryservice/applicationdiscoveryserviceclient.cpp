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

#include "applicationdiscoveryserviceclient.h"
#include "applicationdiscoveryserviceclient_p.h"

#include "core/awssignaturev4.h"
#include "associateconfigurationitemstoapplicationrequest.h"
#include "associateconfigurationitemstoapplicationresponse.h"
#include "batchdeleteimportdatarequest.h"
#include "batchdeleteimportdataresponse.h"
#include "createapplicationrequest.h"
#include "createapplicationresponse.h"
#include "createtagsrequest.h"
#include "createtagsresponse.h"
#include "deleteapplicationsrequest.h"
#include "deleteapplicationsresponse.h"
#include "deletetagsrequest.h"
#include "deletetagsresponse.h"
#include "describeagentsrequest.h"
#include "describeagentsresponse.h"
#include "describeconfigurationsrequest.h"
#include "describeconfigurationsresponse.h"
#include "describecontinuousexportsrequest.h"
#include "describecontinuousexportsresponse.h"
#include "describeexportconfigurationsrequest.h"
#include "describeexportconfigurationsresponse.h"
#include "describeexporttasksrequest.h"
#include "describeexporttasksresponse.h"
#include "describeimporttasksrequest.h"
#include "describeimporttasksresponse.h"
#include "describetagsrequest.h"
#include "describetagsresponse.h"
#include "disassociateconfigurationitemsfromapplicationrequest.h"
#include "disassociateconfigurationitemsfromapplicationresponse.h"
#include "exportconfigurationsrequest.h"
#include "exportconfigurationsresponse.h"
#include "getdiscoverysummaryrequest.h"
#include "getdiscoverysummaryresponse.h"
#include "listconfigurationsrequest.h"
#include "listconfigurationsresponse.h"
#include "listserverneighborsrequest.h"
#include "listserverneighborsresponse.h"
#include "startcontinuousexportrequest.h"
#include "startcontinuousexportresponse.h"
#include "startdatacollectionbyagentidsrequest.h"
#include "startdatacollectionbyagentidsresponse.h"
#include "startexporttaskrequest.h"
#include "startexporttaskresponse.h"
#include "startimporttaskrequest.h"
#include "startimporttaskresponse.h"
#include "stopcontinuousexportrequest.h"
#include "stopcontinuousexportresponse.h"
#include "stopdatacollectionbyagentidsrequest.h"
#include "stopdatacollectionbyagentidsresponse.h"
#include "updateapplicationrequest.h"
#include "updateapplicationresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ApplicationDiscoveryService
 * \brief Contains classess for accessing AWS Application Discovery Service.
 *
 * \inmodule QtAwsApplicationDiscoveryService
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ApplicationDiscoveryService {

/*!
 * \class QtAws::ApplicationDiscoveryService::ApplicationDiscoveryServiceClient
 * \brief The ApplicationDiscoveryServiceClient class provides access to the AWS Application Discovery Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsApplicationDiscoveryService
 *
 *  <fullname>AWS Application Discovery Service</fullname>
 * 
 *  AWS Application Discovery Service helps you plan application migration projects. It automatically identifies servers,
 *  virtual machines (VMs), and network dependencies in your on-premises data centers. For more information, see the <a
 *  href="http://aws.amazon.com/application-discovery/faqs/">AWS Application Discovery Service FAQ</a>. Application
 *  Discovery Service offers three ways of performing discovery and collecting data about your on-premises
 * 
 *  servers> <ul> <li>
 * 
 *  <b>Agentless discovery</b> is recommended for environments that use VMware vCenter Server. This mode doesn't require you
 *  to install an agent on each host. It does not work in non-VMware
 * 
 *  environments> <ul> <li>
 * 
 *  Agentless discovery gathers server information regardless of the operating systems, which minimizes the time required
 *  for initial on-premises infrastructure
 * 
 *  assessment> </li> <li>
 * 
 *  Agentless discovery doesn't collect information about network dependencies, only agent-based discovery collects that
 * 
 *  information> </li> </ul> </li> </ul> <ul> <li>
 * 
 *  <b>Agent-based discovery</b> collects a richer set of data than agentless discovery by using the AWS Application
 *  Discovery Agent, which you install on one or more hosts in your data
 * 
 *  center> <ul> <li>
 * 
 *  The agent captures infrastructure and application information, including an inventory of running processes, system
 *  performance information, resource utilization, and network
 * 
 *  dependencies> </li> <li>
 * 
 *  The information collected by agents is secured at rest and in transit to the Application Discovery Service database in
 *  the cloud.
 * 
 *  </p </li> </ul> </li> </ul> <ul> <li>
 * 
 *  <b>AWS Partner Network (APN) solutions</b> integrate with Application Discovery Service, enabling you to import details
 *  of your on-premises environment directly into Migration Hub without using the discovery connector or discovery
 * 
 *  agent> <ul> <li>
 * 
 *  Third-party application discovery tools can query AWS Application Discovery Service, and they can write to the
 *  Application Discovery Service database using the public
 * 
 *  API> </li> <li>
 * 
 *  In this way, you can import data into Migration Hub and view it, so that you can associate applications with servers and
 *  track
 * 
 *  migrations> </li> </ul> </li> </ul>
 * 
 *  <b>Recommendations</b>
 * 
 *  </p
 * 
 *  We recommend that you use agent-based discovery for non-VMware environments, and whenever you want to collect
 *  information about network dependencies. You can run agent-based and agentless discovery simultaneously. Use agentless
 *  discovery to complete the initial infrastructure assessment quickly, and then install agents on select hosts to collect
 *  additional
 * 
 *  information>
 * 
 *  <b>Working With This Guide</b>
 * 
 *  </p
 * 
 *  This API reference provides descriptions, syntax, and usage examples for each of the actions and data types for
 *  Application Discovery Service. The topic for each action shows the API request parameters and the response.
 *  Alternatively, you can use one of the AWS SDKs to access an API that is tailored to the programming language or platform
 *  that you're using. For more information, see <a href="http://aws.amazon.com/tools/#SDKs">AWS
 * 
 *  SDKs</a>> <note> <ul> <li>
 * 
 *  Remember that you must set your Migration Hub home region before you call any of these
 * 
 *  APIs> </li> <li>
 * 
 *  You must make API calls for write actions (create, notify, associate, disassociate, import, or put) while in your home
 *  region, or a <code>HomeRegionNotSetException</code> error is
 * 
 *  returned> </li> <li>
 * 
 *  API calls for read actions (list, describe, stop, and delete) are permitted outside of your home
 * 
 *  region> </li> <li>
 * 
 *  Although it is unlikely, the Migration Hub home region could change. If you call APIs outside the home region, an
 *  <code>InvalidInputException</code> is
 * 
 *  returned> </li> <li>
 * 
 *  You must call <code>GetHomeRegion</code> to obtain the latest Migration Hub home
 * 
 *  region> </li> </ul> </note>
 * 
 *  This guide is intended for use with the <a href="http://docs.aws.amazon.com/application-discovery/latest/userguide/">AWS
 *  Application Discovery Service User
 * 
 *  Guide</a>> <b>
 * 
 *  All data is handled according to the <a href="http://aws.amazon.com/privacy/">AWS Privacy Policy</a>. You can operate
 *  Application Discovery Service offline to inspect collected data before it is shared with the
 */

/*!
 * \brief Constructs a ApplicationDiscoveryServiceClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ApplicationDiscoveryServiceClient::ApplicationDiscoveryServiceClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2015-11-01"),
    QStringLiteral("discovery"),
    QStringLiteral("AWS Application Discovery Service"),
    QStringLiteral("discovery"),
    parent), d_ptr(new ApplicationDiscoveryServiceClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload ApplicationDiscoveryServiceClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ApplicationDiscoveryServiceClient::ApplicationDiscoveryServiceClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2015-11-01"),
    QStringLiteral("discovery"),
    QStringLiteral("AWS Application Discovery Service"),
    QStringLiteral("discovery"),
    parent), d_ptr(new ApplicationDiscoveryServiceClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * AssociateConfigurationItemsToApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates one or more configuration items with an
 */
AssociateConfigurationItemsToApplicationResponse * ApplicationDiscoveryServiceClient::associateConfigurationItemsToApplication(const AssociateConfigurationItemsToApplicationRequest &request)
{
    return qobject_cast<AssociateConfigurationItemsToApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * BatchDeleteImportDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes one or more import tasks, each identified by their import ID. Each import task has a number of records that can
 * identify servers or applications.
 *
 * </p
 *
 * AWS Application Discovery Service has built-in matching logic that will identify when discovered servers match existing
 * entries that you've previously discovered, the information for the already-existing discovered server is updated. When
 * you delete an import task that contains records that were used to match, the information in those matched records that
 * comes from the deleted records will also be
 */
BatchDeleteImportDataResponse * ApplicationDiscoveryServiceClient::batchDeleteImportData(const BatchDeleteImportDataRequest &request)
{
    return qobject_cast<BatchDeleteImportDataResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * CreateApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an application with the given name and
 */
CreateApplicationResponse * ApplicationDiscoveryServiceClient::createApplication(const CreateApplicationRequest &request)
{
    return qobject_cast<CreateApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * CreateTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates one or more tags for configuration items. Tags are metadata that help you categorize IT assets. This API accepts
 * a list of multiple configuration
 */
CreateTagsResponse * ApplicationDiscoveryServiceClient::createTags(const CreateTagsRequest &request)
{
    return qobject_cast<CreateTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * DeleteApplicationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a list of applications and their associations with configuration
 */
DeleteApplicationsResponse * ApplicationDiscoveryServiceClient::deleteApplications(const DeleteApplicationsRequest &request)
{
    return qobject_cast<DeleteApplicationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * DeleteTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the association between configuration items and one or more tags. This API accepts a list of multiple
 * configuration
 */
DeleteTagsResponse * ApplicationDiscoveryServiceClient::deleteTags(const DeleteTagsRequest &request)
{
    return qobject_cast<DeleteTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * DescribeAgentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists agents or connectors as specified by ID or other filters. All agents/connectors associated with your user account
 * can be listed if you call <code>DescribeAgents</code> as is without passing any
 */
DescribeAgentsResponse * ApplicationDiscoveryServiceClient::describeAgents(const DescribeAgentsRequest &request)
{
    return qobject_cast<DescribeAgentsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * DescribeConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves attributes for a list of configuration item
 *
 * IDs> <note>
 *
 * All of the supplied IDs must be for the same asset type from one of the
 *
 * following> <ul> <li>
 *
 * serve> </li> <li>
 *
 * applicatio> </li> <li>
 *
 * proces> </li> <li>
 *
 * connectio> </li> </ul>
 *
 * Output fields are specific to the asset type specified. For example, the output for a <i>server</i> configuration item
 * includes a list of attributes about the server, such as host name, operating system, number of network cards,
 *
 * etc>
 *
 * For a complete list of outputs for each asset type, see <a
 * href="https://docs.aws.amazon.com/application-discovery/latest/userguide/discovery-api-queries.html#DescribeConfigurations">Using
 * the DescribeConfigurations Action</a> in the <i>AWS Application Discovery Service User
 */
DescribeConfigurationsResponse * ApplicationDiscoveryServiceClient::describeConfigurations(const DescribeConfigurationsRequest &request)
{
    return qobject_cast<DescribeConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * DescribeContinuousExportsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists exports as specified by ID. All continuous exports associated with your user account can be listed if you call
 * <code>DescribeContinuousExports</code> as is without passing any
 */
DescribeContinuousExportsResponse * ApplicationDiscoveryServiceClient::describeContinuousExports(const DescribeContinuousExportsRequest &request)
{
    return qobject_cast<DescribeContinuousExportsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * DescribeExportConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <code>DescribeExportConfigurations</code> is deprecated. Use <a
 * href="https://docs.aws.amazon.com/application-discovery/latest/APIReference/API_DescribeExportTasks.html">DescribeImportTasks</a>,
 */
DescribeExportConfigurationsResponse * ApplicationDiscoveryServiceClient::describeExportConfigurations(const DescribeExportConfigurationsRequest &request)
{
    return qobject_cast<DescribeExportConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * DescribeExportTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve status of one or more export tasks. You can retrieve the status of up to 100 export
 */
DescribeExportTasksResponse * ApplicationDiscoveryServiceClient::describeExportTasks(const DescribeExportTasksRequest &request)
{
    return qobject_cast<DescribeExportTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * DescribeImportTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of import tasks for your account, including status information, times, IDs, the Amazon S3 Object URL
 * for the import file, and
 */
DescribeImportTasksResponse * ApplicationDiscoveryServiceClient::describeImportTasks(const DescribeImportTasksRequest &request)
{
    return qobject_cast<DescribeImportTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * DescribeTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of configuration items that have tags as specified by the key-value pairs, name and value, passed to
 * the optional parameter
 *
 * <code>filters</code>>
 *
 * There are three valid tag filter
 *
 * names> <ul> <li>
 *
 * tagKe> </li> <li>
 *
 * tagValu> </li> <li>
 *
 * configurationI> </li> </ul>
 *
 * Also, all configuration items associated with your user account that have tags can be listed if you call
 * <code>DescribeTags</code> as is without passing any
 */
DescribeTagsResponse * ApplicationDiscoveryServiceClient::describeTags(const DescribeTagsRequest &request)
{
    return qobject_cast<DescribeTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * DisassociateConfigurationItemsFromApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates one or more configuration items from an
 */
DisassociateConfigurationItemsFromApplicationResponse * ApplicationDiscoveryServiceClient::disassociateConfigurationItemsFromApplication(const DisassociateConfigurationItemsFromApplicationRequest &request)
{
    return qobject_cast<DisassociateConfigurationItemsFromApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * ExportConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deprecated. Use <code>StartExportTask</code>
 *
 * instead>
 *
 * Exports all discovered configuration data to an Amazon S3 bucket or an application that enables you to view and evaluate
 * the data. Data includes tags and tag associations, processes, connections, servers, and system performance. This API
 * returns an export ID that you can query using the <i>DescribeExportConfigurations</i> API. The system imposes a limit of
 * two configuration exports in six
 */
ExportConfigurationsResponse * ApplicationDiscoveryServiceClient::exportConfigurations(const ExportConfigurationsRequest &request)
{
    return qobject_cast<ExportConfigurationsResponse *>(send(request));
}

/*!
 * Sends a ExportConfigurations request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * ExportConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deprecated. Use <code>StartExportTask</code>
 *
 * instead>
 *
 * Exports all discovered configuration data to an Amazon S3 bucket or an application that enables you to view and evaluate
 * the data. Data includes tags and tag associations, processes, connections, servers, and system performance. This API
 * returns an export ID that you can query using the <i>DescribeExportConfigurations</i> API. The system imposes a limit of
 * two configuration exports in six
 */
ExportConfigurationsResponse * ApplicationDiscoveryServiceClient::exportConfigurations()
{
    return exportConfigurations(ExportConfigurationsRequest());
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * GetDiscoverySummaryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a short summary of discovered
 *
 * assets>
 *
 * This API operation takes no request parameters and is called as is at the command prompt as shown in the
 */
GetDiscoverySummaryResponse * ApplicationDiscoveryServiceClient::getDiscoverySummary(const GetDiscoverySummaryRequest &request)
{
    return qobject_cast<GetDiscoverySummaryResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * ListConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of configuration items as specified by the value passed to the required parameter
 * <code>configurationType</code>. Optional filtering may be applied to refine search
 */
ListConfigurationsResponse * ApplicationDiscoveryServiceClient::listConfigurations(const ListConfigurationsRequest &request)
{
    return qobject_cast<ListConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * ListServerNeighborsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of servers that are one network hop away from a specified
 */
ListServerNeighborsResponse * ApplicationDiscoveryServiceClient::listServerNeighbors(const ListServerNeighborsRequest &request)
{
    return qobject_cast<ListServerNeighborsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * StartContinuousExportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Start the continuous flow of agent's discovered data into Amazon
 */
StartContinuousExportResponse * ApplicationDiscoveryServiceClient::startContinuousExport(const StartContinuousExportRequest &request)
{
    return qobject_cast<StartContinuousExportResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * StartDataCollectionByAgentIdsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Instructs the specified agents or connectors to start collecting
 */
StartDataCollectionByAgentIdsResponse * ApplicationDiscoveryServiceClient::startDataCollectionByAgentIds(const StartDataCollectionByAgentIdsRequest &request)
{
    return qobject_cast<StartDataCollectionByAgentIdsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * StartExportTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Begins the export of discovered data to an S3
 *
 * bucket>
 *
 * If you specify <code>agentIds</code> in a filter, the task exports up to 72 hours of detailed data collected by the
 * identified Application Discovery Agent, including network, process, and performance details. A time range for exported
 * agent data may be set by using <code>startTime</code> and <code>endTime</code>. Export of detailed agent data is limited
 * to five concurrently running exports.
 *
 * </p
 *
 * If you do not include an <code>agentIds</code> filter, summary data is exported that includes both AWS Agentless
 * Discovery Connector data and summary data from AWS Discovery Agents. Export of summary data is limited to two exports
 * per day.
 */
StartExportTaskResponse * ApplicationDiscoveryServiceClient::startExportTask(const StartExportTaskRequest &request)
{
    return qobject_cast<StartExportTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * StartImportTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an import task, which allows you to import details of your on-premises environment directly into AWS Migration
 * Hub without having to use the Application Discovery Service (ADS) tools such as the Discovery Connector or Discovery
 * Agent. This gives you the option to perform migration assessment and planning directly from your imported data,
 * including the ability to group your devices as applications and track their migration
 *
 * status>
 *
 * To start an import request, do
 *
 * this> <ol> <li>
 *
 * Download the specially formatted comma separated value (CSV) import template, which you can find here: <a
 *
 * href="https://s3-us-west-2.amazonaws.com/templates-7cffcf56-bd96-4b1c-b45b-a5b42f282e46/import_template.csv">https://s3-us-west-2.amazonaws.com/templates-7cffcf56-bd96-4b1c-b45b-a5b42f282e46/import_template.csv</a>>
 * </li> <li>
 *
 * Fill out the template with your server and application
 *
 * data> </li> <li>
 *
 * Upload your import file to an Amazon S3 bucket, and make a note of it's Object URL. Your import file must be in the CSV
 *
 * format> </li> <li>
 *
 * Use the console or the <code>StartImportTask</code> command with the AWS CLI or one of the AWS SDKs to import the
 * records from your
 *
 * file> </li> </ol>
 *
 * For more information, including step-by-step procedures, see <a
 * href="https://docs.aws.amazon.com/application-discovery/latest/userguide/discovery-import.html">Migration Hub Import</a>
 * in the <i>AWS Application Discovery Service User
 *
 * Guide</i>> <note>
 *
 * There are limits to the number of import tasks you can create (and delete) in an AWS account. For more information, see
 * <a href="https://docs.aws.amazon.com/application-discovery/latest/userguide/ads_service_limits.html">AWS Application
 * Discovery Service Limits</a> in the <i>AWS Application Discovery Service User
 */
StartImportTaskResponse * ApplicationDiscoveryServiceClient::startImportTask(const StartImportTaskRequest &request)
{
    return qobject_cast<StartImportTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * StopContinuousExportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stop the continuous flow of agent's discovered data into Amazon
 */
StopContinuousExportResponse * ApplicationDiscoveryServiceClient::stopContinuousExport(const StopContinuousExportRequest &request)
{
    return qobject_cast<StopContinuousExportResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * StopDataCollectionByAgentIdsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Instructs the specified agents or connectors to stop collecting
 */
StopDataCollectionByAgentIdsResponse * ApplicationDiscoveryServiceClient::stopDataCollectionByAgentIds(const StopDataCollectionByAgentIdsRequest &request)
{
    return qobject_cast<StopDataCollectionByAgentIdsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * UpdateApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates metadata about an
 */
UpdateApplicationResponse * ApplicationDiscoveryServiceClient::updateApplication(const UpdateApplicationRequest &request)
{
    return qobject_cast<UpdateApplicationResponse *>(send(request));
}

/*!
 * \class QtAws::ApplicationDiscoveryService::ApplicationDiscoveryServiceClientPrivate
 * \brief The ApplicationDiscoveryServiceClientPrivate class provides private implementation for ApplicationDiscoveryServiceClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsApplicationDiscoveryService
 */

/*!
 * Constructs a ApplicationDiscoveryServiceClientPrivate object with public implementation \a q.
 */
ApplicationDiscoveryServiceClientPrivate::ApplicationDiscoveryServiceClientPrivate(ApplicationDiscoveryServiceClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace ApplicationDiscoveryService
} // namespace QtAws
