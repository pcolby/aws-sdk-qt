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
    d->apiVersion = QStringLiteral("2017-11-27");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("resource-groups");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Resource Groups");
    d->serviceName = QStringLiteral("resource-groups");
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
    d->apiVersion = QStringLiteral("2017-11-27");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("resource-groups");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Resource Groups");
    d->serviceName = QStringLiteral("resource-groups");
}

/**
 * Creates a group with a specified name, description, and resource
 *
 * @param  request Request to send to AWS Resource Groups.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateGroupResponse * ResourceGroupsClient::createGroup(const CreateGroupRequest &request)
{

}

/**
 * Deletes a specified resource group. Deleting a resource group does not delete resources that are members of the group;
 * it only deletes the group
 *
 * @param  request Request to send to AWS Resource Groups.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteGroupResponse * ResourceGroupsClient::deleteGroup(const DeleteGroupRequest &request)
{

}

/**
 * Returns information about a specified resource
 *
 * @param  request Request to send to AWS Resource Groups.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetGroupResponse * ResourceGroupsClient::getGroup(const GetGroupRequest &request)
{

}

/**
 * Returns the resource query associated with the specified resource
 *
 * @param  request Request to send to AWS Resource Groups.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetGroupQueryResponse * ResourceGroupsClient::getGroupQuery(const GetGroupQueryRequest &request)
{

}

/**
 * Returns a list of tags that are associated with a resource, specified by an
 *
 * @param  request Request to send to AWS Resource Groups.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetTagsResponse * ResourceGroupsClient::getTags(const GetTagsRequest &request)
{

}

/**
 * Returns a list of ARNs of resources that are members of a specified resource
 *
 * @param  request Request to send to AWS Resource Groups.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListGroupResourcesResponse * ResourceGroupsClient::listGroupResources(const ListGroupResourcesRequest &request)
{

}

/**
 * Returns a list of existing resource groups in your
 *
 * @param  request Request to send to AWS Resource Groups.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListGroupsResponse * ResourceGroupsClient::listGroups(const ListGroupsRequest &request)
{

}

/**
 * Returns a list of AWS resource identifiers that matches a specified query. The query uses the same format as a resource
 * query in a CreateGroup or UpdateGroupQuery
 *
 * @param  request Request to send to AWS Resource Groups.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SearchResourcesResponse * ResourceGroupsClient::searchResources(const SearchResourcesRequest &request)
{

}

/**
 * Adds specified tags to a resource with the specified ARN. Existing tags on a resource are not changed if they are not
 * specified in the request
 *
 * @param  request Request to send to AWS Resource Groups.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TagResponse * ResourceGroupsClient::tag(const TagRequest &request)
{

}

/**
 * Deletes specified tags from a specified
 *
 * @param  request Request to send to AWS Resource Groups.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UntagResponse * ResourceGroupsClient::untag(const UntagRequest &request)
{

}

/**
 * Updates an existing group with a new or changed description. You cannot update the name of a resource
 *
 * @param  request Request to send to AWS Resource Groups.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateGroupResponse * ResourceGroupsClient::updateGroup(const UpdateGroupRequest &request)
{

}

/**
 * Updates the resource query of a
 *
 * @param  request Request to send to AWS Resource Groups.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateGroupQueryResponse * ResourceGroupsClient::updateGroupQuery(const UpdateGroupQueryRequest &request)
{

}

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
