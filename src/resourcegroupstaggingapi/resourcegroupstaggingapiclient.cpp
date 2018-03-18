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

#include "resourcegroupstaggingapiclient.h"
#include "resourcegroupstaggingapiclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace ResourceGroupsTaggingAPI {

/**
 * @class  ResourceGroupsTaggingAPIClient
 *
 * @brief  Client for AWS Resource Groups Tagging API
 *
 * <fullname>Resource Groups Tagging API</fullname>
 *
 * This guide describes the API operations for the resource groups
 *
 * tagging>
 *
 * A tag is a label that you assign to an AWS resource. A tag consists of a key and a value, both of which you define. For
 * example, if you have two Amazon EC2 instances, you might assign both a tag key of "Stack." But the value of "Stack"
 * might be "Testing" for one and "Production" for the
 *
 * other>
 *
 * Tagging can help you organize your resources and enables you to simplify resource management, access management and cost
 * allocation. For more information about tagging, see <a
 * href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/tag-editor.html">Working with Tag Editor</a> and <a
 * href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/resource-groups.html">Working with Resource Groups</a>.
 * For more information about permissions you need to use the resource groups tagging APIs, see <a
 * href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/obtaining-permissions-for-resource-groups.html">Obtaining
 * Permissions for Resource Groups </a> and <a
 * href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/obtaining-permissions-for-tagging.html">Obtaining
 * Permissions for Tagging
 *
 * </a>>
 *
 * You can use the resource groups tagging APIs to complete the following
 *
 * tasks> <ul> <li>
 *
 * Tag and untag supported resources located in the specified region for the AWS
 *
 * accoun> </li> <li>
 *
 * Use tag-based filters to search for resources located in the specified region for the AWS
 *
 * accoun> </li> <li>
 *
 * List all existing tag keys in the specified region for the AWS
 *
 * accoun> </li> <li>
 *
 * List all existing values for the specified key in the specified region for the AWS
 *
 * accoun> </li> </ul>
 *
 * Not all resources can have tags. For a lists of resources that you can tag, see <a
 * href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/supported-resources.html">Supported Resources</a> in the
 * <i>AWS Resource Groups and Tag Editor User
 *
 * Guide</i>>
 *
 * To make full use of the resource groups tagging APIs, you might need additional IAM permissions, including permission to
 * access the resources of individual services as well as permission to view and apply tags to those resources. For more
 * information, see <a
 * href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/obtaining-permissions-for-tagging.html">Obtaining
 * Permissions for Tagging</a> in the <i>AWS Resource Groups and Tag Editor User
 */

/**
 * @brief  Constructs a new ResourceGroupsTaggingAPIClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
ResourceGroupsTaggingAPIClient::ResourceGroupsTaggingAPIClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ResourceGroupsTaggingAPIClientPrivate(this), parent)
{
    Q_D(ResourceGroupsTaggingAPIClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new ResourceGroupsTaggingAPIClient object.
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
ResourceGroupsTaggingAPIClient::ResourceGroupsTaggingAPIClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ResourceGroupsTaggingAPIClientPrivate(this), parent)
{
    Q_D(ResourceGroupsTaggingAPIClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  ResourceGroupsTaggingAPIClientPrivate
 *
 * @brief  Private implementation for ResourceGroupsTaggingAPIClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResourceGroupsTaggingAPIClientPrivate object.
 *
 * @param  q  Pointer to this object's public ResourceGroupsTaggingAPIClient instance.
 */
ResourceGroupsTaggingAPIClientPrivate::ResourceGroupsTaggingAPIClientPrivate(ResourceGroupsTaggingAPIClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace ResourceGroupsTaggingAPI
} // namespace AWS
