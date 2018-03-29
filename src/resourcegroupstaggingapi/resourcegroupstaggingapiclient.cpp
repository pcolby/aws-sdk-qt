/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "resourcegroupstaggingapiclient.h"
#include "resourcegroupstaggingapiclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace QtAws {
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
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ResourceGroupsTaggingAPIClientPrivate(this), parent)
{
    Q_D(ResourceGroupsTaggingAPIClient);
    d->apiVersion = QStringLiteral("2017-01-26");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("tagging");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Resource Groups Tagging API");
    d->serviceName = QStringLiteral("tagging");
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
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ResourceGroupsTaggingAPIClientPrivate(this), parent)
{
    Q_D(ResourceGroupsTaggingAPIClient);
    d->apiVersion = QStringLiteral("2017-01-26");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("tagging");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Resource Groups Tagging API");
    d->serviceName = QStringLiteral("tagging");
}

/**
 * Returns all the tagged resources that are associated with the specified tags (keys and values) located in the specified
 * region for the AWS account. The tags and the resource types that you specify in the request are known as <i>filters</i>.
 * The response includes all tags that are associated with the requested resources. If no filter is provided, this action
 * returns a paginated resource list with the associated
 *
 * @param  request Request to send to AWS Resource Groups Tagging API.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetResourcesResponse * ResourceGroupsTaggingAPIClient::getResources(const GetResourcesRequest &request)
{
    return qobject_cast<GetResourcesResponse *>(send(request));
}

/**
 * Returns all tag keys in the specified region for the AWS
 *
 * @param  request Request to send to AWS Resource Groups Tagging API.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetTagKeysResponse * ResourceGroupsTaggingAPIClient::getTagKeys(const GetTagKeysRequest &request)
{
    return qobject_cast<GetTagKeysResponse *>(send(request));
}

/**
 * Returns all tag values for the specified key in the specified region for the AWS
 *
 * @param  request Request to send to AWS Resource Groups Tagging API.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetTagValuesResponse * ResourceGroupsTaggingAPIClient::getTagValues(const GetTagValuesRequest &request)
{
    return qobject_cast<GetTagValuesResponse *>(send(request));
}

/**
 * Applies one or more tags to the specified resources. Note the
 *
 * following> <ul> <li>
 *
 * Not all resources can have tags. For a list of resources that support tagging, see <a
 * href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/supported-resources.html">Supported Resources</a> in the
 * <i>AWS Resource Groups and Tag Editor User
 *
 * Guide</i>> </li> <li>
 *
 * Each resource can have up to 50 tags. For other limits, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#tag-restrictions">Tag Restrictions</a> in the
 * <i>Amazon EC2 User Guide for Linux
 *
 * Instances</i>> </li> <li>
 *
 * You can only tag resources that are located in the specified region for the AWS
 *
 * account> </li> <li>
 *
 * To add tags to a resource, you need the necessary permissions for the service that the resource belongs to as well as
 * permissions for adding tags. For more information, see <a
 * href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/obtaining-permissions-for-tagging.html">Obtaining
 * Permissions for Tagging</a> in the <i>AWS Resource Groups and Tag Editor User
 *
 * @param  request Request to send to AWS Resource Groups Tagging API.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TagResourcesResponse * ResourceGroupsTaggingAPIClient::tagResources(const TagResourcesRequest &request)
{
    return qobject_cast<TagResourcesResponse *>(send(request));
}

/**
 * Removes the specified tags from the specified resources. When you specify a tag key, the action removes both that key
 * and its associated value. The operation succeeds even if you attempt to remove tags from a resource that were already
 * removed. Note the
 *
 * following> <ul> <li>
 *
 * To remove tags from a resource, you need the necessary permissions for the service that the resource belongs to as well
 * as permissions for removing tags. For more information, see <a
 * href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/obtaining-permissions-for-tagging.html">Obtaining
 * Permissions for Tagging</a> in the <i>AWS Resource Groups and Tag Editor User
 *
 * Guide</i>> </li> <li>
 *
 * You can only tag resources that are located in the specified region for the AWS
 *
 * @param  request Request to send to AWS Resource Groups Tagging API.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UntagResourcesResponse * ResourceGroupsTaggingAPIClient::untagResources(const UntagResourcesRequest &request)
{
    return qobject_cast<UntagResourcesResponse *>(send(request));
}

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
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ResourceGroupsTaggingAPI
} // namespace QtAws
