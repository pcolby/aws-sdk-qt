/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "applicationdiscoveryserviceclient.h"
#include "applicationdiscoveryserviceclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace ApplicationDiscoveryService {

/**
 * @class  ApplicationDiscoveryServiceClient
 *
 * @brief  Client for AWS Application Discovery Service
 *
 * <fullname>AWS Application Discovery Service</fullname>
 *
 * AWS Application Discovery Service helps you plan application migration projects by automatically identifying servers,
 * virtual machines (VMs), software, and software dependencies running in your on-premises data centers. Application
 * Discovery Service also collects application performance data, which can help you assess the outcome of your migration.
 * The data collected by Application Discovery Service is securely retained in an AWS-hosted and managed database in the
 * cloud. You can export the data as a CSV or XML file into your preferred visualization tool or cloud-migration solution
 * to plan your migration. For more information, see <a href="http://aws.amazon.com/application-discovery/faqs/">AWS
 * Application Discovery Service
 *
 * FAQ</a>>
 *
 * Application Discovery Service offers two modes of
 *
 * operation> <ul> <li>
 *
 * <b>Agentless discovery</b> mode is recommended for environments that use VMware vCenter Server. This mode doesn't
 * require you to install an agent on each host. Agentless discovery gathers server information regardless of the operating
 * systems, which minimizes the time required for initial on-premises infrastructure assessment. Agentless discovery
 * doesn't collect information about software and software dependencies. It also doesn't work in non-VMware environments.
 *
 * </p </li> <li>
 *
 * <b>Agent-based discovery</b> mode collects a richer set of data than agentless discovery by using the AWS Application
 * Discovery Agent, which you install on one or more hosts in your data center. The agent captures infrastructure and
 * application information, including an inventory of installed software applications, system and process performance,
 * resource utilization, and network dependencies between workloads. The information collected by agents is secured at rest
 * and in transit to the Application Discovery Service database in the cloud.
 *
 * </p </li> </ul>
 *
 * We recommend that you use agent-based discovery for non-VMware environments and to collect information about software
 * and software dependencies. You can also run agent-based and agentless discovery simultaneously. Use agentless discovery
 * to quickly complete the initial infrastructure assessment and then install agents on select
 *
 * hosts>
 *
 * Application Discovery Service integrates with application discovery solutions from AWS Partner Network (APN) partners.
 * Third-party application discovery tools can query Application Discovery Service and write to the Application Discovery
 * Service database using a public API. You can then import the data into either a visualization tool or cloud-migration
 *
 * solution> <b>
 *
 * Application Discovery Service doesn't gather sensitive information. All data is handled according to the <a
 * href="http://aws.amazon.com/privacy/">AWS Privacy Policy</a>. You can operate Application Discovery Service offline to
 * inspect collected data before it is shared with the
 *
 * service> </b>
 *
 * Your AWS account must be granted access to Application Discovery Service, a process called <i>whitelisting</i>. This is
 * true for AWS partners and customers alike. To request access, <a
 * href="http://aws.amazon.com/application-discovery/">sign up for Application Discovery Service</a>.
 *
 * </p
 *
 * This API reference provides descriptions, syntax, and usage examples for each of the actions and data types for
 * Application Discovery Service. The topic for each action shows the API request parameters and the response.
 * Alternatively, you can use one of the AWS SDKs to access an API that is tailored to the programming language or platform
 * that you're using. For more information, see <a href="http://aws.amazon.com/tools/#SDKs">AWS
 *
 * SDKs</a>>
 *
 * This guide is intended for use with the <a href="http://docs.aws.amazon.com/application-discovery/latest/userguide/">
 * <i>AWS Application Discovery Service User Guide</i>
 */

/**
 * @brief  Constructs a new ApplicationDiscoveryServiceClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
ApplicationDiscoveryServiceClient::ApplicationDiscoveryServiceClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ApplicationDiscoveryServiceClientPrivate(this), parent)
{
    Q_D(ApplicationDiscoveryServiceClient);
    d->apiVersion = QStringLiteral("2015-11-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("discovery");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Application Discovery Service");
    d->serviceName = QStringLiteral("discovery");
}

/**
 * @brief  Constructs a new ApplicationDiscoveryServiceClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
ApplicationDiscoveryServiceClient::ApplicationDiscoveryServiceClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ApplicationDiscoveryServiceClientPrivate(this), parent)
{
    Q_D(ApplicationDiscoveryServiceClient);
    d->apiVersion = QStringLiteral("2015-11-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("discovery");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Application Discovery Service");
    d->serviceName = QStringLiteral("discovery");
}

/**
 * Associates one or more configuration items with an
 *
 * @param  request Request to send to AWS Application Discovery Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AssociateConfigurationItemsToApplicationResponse * ApplicationDiscoveryServiceClient::associateConfigurationItemsToApplication(const AssociateConfigurationItemsToApplicationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Creates an application with the given name and
 *
 * @param  request Request to send to AWS Application Discovery Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateApplicationResponse * ApplicationDiscoveryServiceClient::createApplication(const CreateApplicationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Creates one or more tags for configuration items. Tags are metadata that help you categorize IT assets. This API accepts
 * a list of multiple configuration
 *
 * @param  request Request to send to AWS Application Discovery Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateTagsResponse * ApplicationDiscoveryServiceClient::createTags(const CreateTagsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Deletes a list of applications and their associations with configuration
 *
 * @param  request Request to send to AWS Application Discovery Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteApplicationsResponse * ApplicationDiscoveryServiceClient::deleteApplications(const DeleteApplicationsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Deletes the association between configuration items and one or more tags. This API accepts a list of multiple
 * configuration
 *
 * @param  request Request to send to AWS Application Discovery Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteTagsResponse * ApplicationDiscoveryServiceClient::deleteTags(const DeleteTagsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Lists agents or the Connector by ID or lists all agents/Connectors associated with your user account if you did not
 * specify an
 *
 * @param  request Request to send to AWS Application Discovery Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeAgentsResponse * ApplicationDiscoveryServiceClient::describeAgents(const DescribeAgentsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Retrieves attributes for a list of configuration item IDs. All of the supplied IDs must be for the same asset type
 * (server, application, process, or connection). Output fields are specific to the asset type selected. For example, the
 * output for a <i>server</i> configuration item includes a list of attributes about the server, such as host name,
 * operating system, and number of network
 *
 * cards>
 *
 * For a complete list of outputs for each asset type, see <a
 * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/discovery-api-queries.html#DescribeConfigurations">Using
 * the DescribeConfigurations
 *
 * @param  request Request to send to AWS Application Discovery Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeConfigurationsResponse * ApplicationDiscoveryServiceClient::describeConfigurations(const DescribeConfigurationsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Deprecated. Use <code>DescribeExportTasks</code>
 *
 * instead>
 *
 * Retrieves the status of a given export process. You can retrieve status from a maximum of 100
 *
 * @param  request Request to send to AWS Application Discovery Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeExportConfigurationsResponse * ApplicationDiscoveryServiceClient::describeExportConfigurations(const DescribeExportConfigurationsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Retrieve status of one or more export tasks. You can retrieve the status of up to 100 export
 *
 * @param  request Request to send to AWS Application Discovery Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeExportTasksResponse * ApplicationDiscoveryServiceClient::describeExportTasks(const DescribeExportTasksRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Retrieves a list of configuration items that are tagged with a specific tag. Or retrieves a list of all tags assigned to
 * a specific configuration
 *
 * @param  request Request to send to AWS Application Discovery Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeTagsResponse * ApplicationDiscoveryServiceClient::describeTags(const DescribeTagsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Disassociates one or more configuration items from an
 *
 * @param  request Request to send to AWS Application Discovery Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisassociateConfigurationItemsFromApplicationResponse * ApplicationDiscoveryServiceClient::disassociateConfigurationItemsFromApplication(const DisassociateConfigurationItemsFromApplicationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Deprecated. Use <code>StartExportTask</code>
 *
 * instead>
 *
 * Exports all discovered configuration data to an Amazon S3 bucket or an application that enables you to view and evaluate
 * the data. Data includes tags and tag associations, processes, connections, servers, and system performance. This API
 * returns an export ID that you can query using the <i>DescribeExportConfigurations</i> API. The system imposes a limit of
 * two configuration exports in six
 *
 * @param  request Request to send to AWS Application Discovery Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ExportConfigurationsResponse * ApplicationDiscoveryServiceClient::exportConfigurations()
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Retrieves a short summary of discovered
 *
 * @param  request Request to send to AWS Application Discovery Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDiscoverySummaryResponse * ApplicationDiscoveryServiceClient::getDiscoverySummary(const GetDiscoverySummaryRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Retrieves a list of configuration items according to criteria that you specify in a filter. The filter criteria
 * identifies the relationship
 *
 * @param  request Request to send to AWS Application Discovery Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListConfigurationsResponse * ApplicationDiscoveryServiceClient::listConfigurations(const ListConfigurationsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Retrieves a list of servers that are one network hop away from a specified
 *
 * @param  request Request to send to AWS Application Discovery Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListServerNeighborsResponse * ApplicationDiscoveryServiceClient::listServerNeighbors(const ListServerNeighborsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Instructs the specified agents or connectors to start collecting
 *
 * @param  request Request to send to AWS Application Discovery Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartDataCollectionByAgentIdsResponse * ApplicationDiscoveryServiceClient::startDataCollectionByAgentIds(const StartDataCollectionByAgentIdsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
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
 *
 * @param  request Request to send to AWS Application Discovery Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartExportTaskResponse * ApplicationDiscoveryServiceClient::startExportTask(const StartExportTaskRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Instructs the specified agents or connectors to stop collecting
 *
 * @param  request Request to send to AWS Application Discovery Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StopDataCollectionByAgentIdsResponse * ApplicationDiscoveryServiceClient::stopDataCollectionByAgentIds(const StopDataCollectionByAgentIdsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Updates metadata about an
 *
 * @param  request Request to send to AWS Application Discovery Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateApplicationResponse * ApplicationDiscoveryServiceClient::updateApplication(const UpdateApplicationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * @internal
 *
 * @class  ApplicationDiscoveryServiceClientPrivate
 *
 * @brief  Private implementation for ApplicationDiscoveryServiceClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ApplicationDiscoveryServiceClientPrivate object.
 *
 * @param  q  Pointer to this object's public ApplicationDiscoveryServiceClient instance.
 */
ApplicationDiscoveryServiceClientPrivate::ApplicationDiscoveryServiceClientPrivate(ApplicationDiscoveryServiceClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace ApplicationDiscoveryService
} // namespace AWS
