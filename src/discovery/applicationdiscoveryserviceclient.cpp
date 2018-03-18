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
 * solution> <important>
 *
 * Application Discovery Service doesn't gather sensitive information. All data is handled according to the <a
 * href="http://aws.amazon.com/privacy/">AWS Privacy Policy</a>. You can operate Application Discovery Service offline to
 * inspect collected data before it is shared with the
 *
 * service> </important>
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
