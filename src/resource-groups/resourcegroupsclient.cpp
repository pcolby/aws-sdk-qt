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

#include "resourcegroupsclient.h"
#include "resourcegroupsclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace ResourceGroups {

/**
 * @class  ResourceGroupsClient
 *
 * @brief  Client for AWS Resource Groups
 *
 * <fullname>AWS Resource Groups</fullname>
 *
 * AWS Resource Groups lets you organize AWS resources such as Amazon EC2 instances, Amazon Relational Database Service
 * databases, and Amazon S3 buckets into groups using criteria that you define as tags. A resource group is a collection of
 * resources that match the resource types specified in a query, and share one or more tags or portions of tags. You can
 * create a group of resources based on their roles in your cloud infrastructure, lifecycle stages, regions, application
 * layers, or virtually any criteria. Resource groups enable you to automate management tasks, such as those in AWS Systems
 * Manager Automation documents, on tag-related resources in AWS Systems Manager. Groups of tagged resources also let you
 * quickly view a custom console in AWS Systems Manager that shows AWS Config compliance and other monitoring data about
 * member
 *
 * resources>
 *
 * To create a resource group, build a resource query, and specify tags that identify the criteria that members of the
 * group have in common. Tags are key-value
 *
 * pairs>
 *
 * For more information about Resource Groups, see the <a
 * href="https://docs.aws.amazon.com/ARG/latest/userguide/welcome.html">AWS Resource Groups User
 *
 * Guide</a>>
 *
 * AWS Resource Groups uses a REST-compliant API that you can use to perform the following types of
 *
 * operations> <ul> <li>
 *
 * Create, Read, Update, and Delete (CRUD) operations on resource groups and resource query
 *
 * entitie> </li> <li>
 *
 * Applying, editing, and removing tags from resource
 *
 * group> </li> <li>
 *
 * Resolving resource group member ARNs so they can be returned as search
 *
 * result> </li> <li>
 *
 * Getting data about resources that are members of a
 *
 * grou> </li> <li>
 *
 * Searching AWS resources based on a resource
 */

/**
 * @brief  Constructs a new ResourceGroupsClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
ResourceGroupsClient::ResourceGroupsClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ResourceGroupsClientPrivate(this), parent)
{
    Q_D(ResourceGroupsClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new ResourceGroupsClient object.
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
ResourceGroupsClient::ResourceGroupsClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ResourceGroupsClientPrivate(this), parent)
{
    Q_D(ResourceGroupsClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  ResourceGroupsClientPrivate
 *
 * @brief  Private implementation for ResourceGroupsClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResourceGroupsClientPrivate object.
 *
 * @param  q  Pointer to this object's public ResourceGroupsClient instance.
 */
ResourceGroupsClientPrivate::ResourceGroupsClientPrivate(ResourceGroupsClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace ResourceGroups
} // namespace AWS
