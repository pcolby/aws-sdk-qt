/*
    Copyright 2013-2016 Paul Colby

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
 * The AWS Application Discovery Service helps Systems Integrators quickly and reliably plan application migration projects by automatically identifying applications running in on-premises data centers, their associated dependencies, and their performance profile.
 *
 +  Planning data center migrations can involve thousands of workloads that are often deeply interdependent. Application discovery and dependency mapping are important early first steps in the migration process, but difficult to perform at scale due to the lack of automated tools.
 *
 + The AWS Application Discovery Service automatically collects configuration and usage data from servers to develop a list of applications, how they perform, and how they are interdependent. This information is securely retained in an AWS Application Discovery Service database which you can export as a CSV file into your preferred visualization tool or cloud migration solution to help reduce the complexity and time in planning your cloud migration.
 *
 + The Application Discovery Service is currently available for preview. Only customers who are engaged with <a href="https://aws.amazon.com/professional-services/">AWS Professional Services</a> or a certified AWS partner can use the service. To see the list of certified partners and request access to the Application Discovery Service, complete the following <a href="http://aws.amazon.com/application-discovery/preview/">preview form</a>.
 *
 + This API reference provides descriptions, syntax, and usage examples for each of the actions and data types for the Discovery Service. The topic for each action shows the API request parameters and the response. Alternatively, you can use one of the AWS SDKs to access an API that is tailored to the programming language or platform that you're using. For more information, see <a href="http://aws.amazon.com/tools/#SDKs">AWS SDKs</a>.
 *
 + This guide is intended for use with the <a href="http://docs.aws.amazon.com/application-discovery/latest/userguide/what-is-appdiscovery.html"> <i>AWS Discovery Service User Guide</i> </a>.
 *
 + The following are short descriptions of each API action, organized by function.
 *
 +  <b>Managing AWS Agents Using the Application Discovery Service</b>
 *
 + An AWS agent is software that you install on on-premises servers and virtual machines that are targeted for discovery and migration. Agents run on Linux and Windows Server and collect server configuration and activity information about your applications and infrastructure. Specifically, agents collect the following information and send it to the Application Discovery Service using Secure Sockets Layer (SSL) encryption:
 *
 +  <ul> <li>
 *
 + User information (user name, home directory)
 *
 +  </li> <li>
 *
 + Group information (name)
 *
 +  </li> <li>
 *
 + List of installed packages
 *
 +  </li> <li>
 *
 + List of kernel modules
 *
 +  </li> <li>
 *
 + All create and stop process events
 *
 +  </li> <li>
 *
 + DNS queries
 *
 +  </li> <li>
 *
 + NIC information
 *
 +  </li> <li>
 *
 + TCP/UDP process listening ports
 *
 +  </li> <li>
 *
 + TCPV4/V6 connections
 *
 +  </li> <li>
 *
 + Operating system information
 *
 +  </li> <li>
 *
 + System performance
 *
 +  </li> <li>
 *
 + Process performance
 *
 +  </li> </ul>
 *
 + The Application Discovery Service API includes the following actions to manage AWS agents:
 *
 +  <ul> <li>
 *
 +  <i>StartDataCollectionByAgentIds</i>: Instructs the specified agents to start collecting data. The Application Discovery Service takes several minutes to receive and process data after you initiate data collection.
 *
 +  </li> <li>
 *
 +  <i>StopDataCollectionByAgentIds</i>: Instructs the specified agents to stop collecting data.
 *
 +  </li> <li>
 *
 +  <i>DescribeAgents</i>: Lists AWS agents by ID or lists all agents associated with your user account if you did not specify an agent ID. The output includes agent IDs, IP addresses, media access control (MAC) addresses, agent health, host name where the agent resides, and the version number of each agent.
 *
 +  </li> </ul>
 *
 +  <b>Querying Configuration Items</b>
 *
 + A <i>configuration item</i> is an IT asset that was discovered in your data center by an AWS agent. When you use the Application Discovery Service, you can specify filters and query specific configuration items. The service supports Server, Process, and Connection configuration items. This means you can specify a value for the following keys and query your IT assets:
 *
 +  <p class="title"> <b>Server</b>
 *
 +  <ul> <li>
 *
 + server.HostName
 *
 +  </li> <li>
 *
 + server.osName
 *
 +  </li> <li>
 *
 + server.osVersion
 *
 +  </li> <li>
 *
 + server.configurationId
 *
 +  </li> <li>
 *
 + server.agentId
 *
 +  </li> </ul> <p class="title"> <b>Process</b>
 *
 +  <ul> <li>
 *
 + process.name
 *
 +  </li> <li>
 *
 + process.CommandLine
 *
 +  </li> <li>
 *
 + process.configurationId
 *
 +  </li> <li>
 *
 + server.hostName
 *
 +  </li> <li>
 *
 + server.osName
 *
 +  </li> <li>
 *
 + server.osVersion
 *
 +  </li> <li>
 *
 + server.configurationId
 *
 +  </li> <li>
 *
 + server.agentId
 *
 +  </li> </ul> <p class="title"> <b>Connection</b>
 *
 +  <ul> <li>
 *
 + connection.sourceIp
 *
 +  </li> <li>
 *
 + connection.sourcePort
 *
 +  </li> <li>
 *
 + connection.destinationIp
 *
 +  </li> <li>
 *
 + connection.destinationPort
 *
 +  </li> <li>
 *
 + sourceProcess.configurationId
 *
 +  </li> <li>
 *
 + sourceProcess.commandLine
 *
 +  </li> <li>
 *
 + sourceProcess.name
 *
 +  </li> <li>
 *
 + destinationProcessId.configurationId
 *
 +  </li> <li>
 *
 + destinationProcess.commandLine
 *
 +  </li> <li>
 *
 + destinationProcess.name
 *
 +  </li> <li>
 *
 + sourceServer.configurationId
 *
 +  </li> <li>
 *
 + sourceServer.hostName
 *
 +  </li> <li>
 *
 + sourceServer.osName
 *
 +  </li> <li>
 *
 + sourceServer.osVersion
 *
 +  </li> <li>
 *
 + destinationServer.configurationId
 *
 +  </li> <li>
 *
 + destinationServer.hostName
 *
 +  </li> <li>
 *
 + destinationServer.osName
 *
 +  </li> <li>
 *
 + destinationServer.osVersion
 *
 +  </li> </ul>
 *
 + The Application Discovery Service includes the following actions for querying configuration items.
 *
 +  <ul> <li>
 *
 +  <i>DescribeConfigurations</i>: Retrieves a list of attributes for a specific configuration ID. For example, the output for a <i>server</i> configuration item includes a list of attributes about the server, including host name, operating system, number of network cards, etc.
 *
 +  </li> <li>
 *
 +  <i>ListConfigurations</i>: Retrieves a list of configuration items according to the criteria you specify in a filter. The filter criteria identify relationship requirements. For example, you can specify filter criteria of process.name with values of <i>nginx</i> and <i>apache</i>.
 *
 +  </li> </ul>
 *
 +  <b>Tagging Discovered Configuration Items</b>
 *
 + You can tag discovered configuration items. Tags are metadata that help you categorize IT assets in your data center. Tags use a <i>key</i>-<i>value</i> format. For example, <code>{"key": "serverType", "value": "webServer"}</code>.
 *
 +  <ul> <li>
 *
 +  <i>CreateTags</i>: Creates one or more tags for a configuration items.
 *
 +  </li> <li>
 *
 +  <i>DescribeTags</i>: Retrieves a list of configuration items that are tagged with a specific tag. <i>Or</i>, retrieves a list of all tags assigned to a specific configuration item.
 *
 +  </li> <li>
 *
 +  <i>DeleteTags</i>: Deletes the association between a configuration item and one or more tags.
 *
 +  </li> </ul>
 *
 +  <b>Exporting Data</b>
 *
 + You can export data as a CSV file to an Amazon S3 bucket or into your preferred visualization tool or cloud migration solution to help reduce the complexity and time in planning your cloud migration.
 *
 +  <ul> <li>
 *
 +  <i>ExportConfigurations</i>: Exports all discovered configuration data to an Amazon S3 bucket. Data includes tags and tag associations, processes, connections, servers, and system performance. This API returns an export ID which you can query using the GetExportStatus API.
 *
 +  </li> <li>
 *
 +  <i>DescribeExportConfigurations</i>: Gets the status of the data export. When the export is complete, the service returns an Amazon S3 URL where you can download CSV files that include the data.
 *
 +  </li> </ul>
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
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
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
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

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
