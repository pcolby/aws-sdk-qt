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

#include "resourcegroupstaggingapiclient.h"
#include "resourcegroupstaggingapiclient_p.h"

#include "core/awssignaturev4.h"
#include "describereportcreationrequest.h"
#include "describereportcreationresponse.h"
#include "getcompliancesummaryrequest.h"
#include "getcompliancesummaryresponse.h"
#include "getresourcesrequest.h"
#include "getresourcesresponse.h"
#include "gettagkeysrequest.h"
#include "gettagkeysresponse.h"
#include "gettagvaluesrequest.h"
#include "gettagvaluesresponse.h"
#include "startreportcreationrequest.h"
#include "startreportcreationresponse.h"
#include "tagresourcesrequest.h"
#include "tagresourcesresponse.h"
#include "untagresourcesrequest.h"
#include "untagresourcesresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ResourceGroupsTaggingAPI
 * \brief Contains classess for accessing AWS Resource Groups Tagging API.
 *
 * \inmodule QtAwsResourceGroupsTaggingAPI
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ResourceGroupsTaggingAPI {

/*!
 * \class QtAws::ResourceGroupsTaggingAPI::ResourceGroupsTaggingAPIClient
 * \brief The ResourceGroupsTaggingAPIClient class provides access to the AWS Resource Groups Tagging API service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsResourceGroupsTaggingAPI
 *
 */

/*!
 * \brief Constructs a ResourceGroupsTaggingAPIClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ResourceGroupsTaggingAPIClient::ResourceGroupsTaggingAPIClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2017-01-26"),
    QStringLiteral("tagging"),
    QStringLiteral("AWS Resource Groups Tagging API"),
    QStringLiteral("tagging"),
    parent), d_ptr(new ResourceGroupsTaggingAPIClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload ResourceGroupsTaggingAPIClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ResourceGroupsTaggingAPIClient::ResourceGroupsTaggingAPIClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2017-01-26"),
    QStringLiteral("tagging"),
    QStringLiteral("AWS Resource Groups Tagging API"),
    QStringLiteral("tagging"),
    parent), d_ptr(new ResourceGroupsTaggingAPIClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the ResourceGroupsTaggingAPIClient service, and returns a pointer to an
 * DescribeReportCreationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the status of the <code>StartReportCreation</code> operation.
 *
 * </p
 *
 * You can call this operation only from the organization's management account and from the us-east-1
 */
DescribeReportCreationResponse * ResourceGroupsTaggingAPIClient::describeReportCreation(const DescribeReportCreationRequest &request)
{
    return qobject_cast<DescribeReportCreationResponse *>(send(request));
}

/*!
 * Sends \a request to the ResourceGroupsTaggingAPIClient service, and returns a pointer to an
 * GetComplianceSummaryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a table that shows counts of resources that are noncompliant with their tag
 *
 * policies>
 *
 * For more information on tag policies, see <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">Tag
 * Policies</a> in the <i>AWS Organizations User Guide.</i>
 *
 * </p
 *
 * You can call this operation only from the organization's management account and from the us-east-1
 *
 * Region>
 *
 * This operation supports pagination, where the response can be sent in multiple pages. You should check the
 * <code>PaginationToken</code> response parameter to determine if there are additional results available to return. Repeat
 * the query, passing the <code>PaginationToken</code> response parameter value as an input to the next request until you
 * recieve a <code>null</code> value. A null value for <code>PaginationToken</code> indicates that there are no more
 * results waiting to be
 */
GetComplianceSummaryResponse * ResourceGroupsTaggingAPIClient::getComplianceSummary(const GetComplianceSummaryRequest &request)
{
    return qobject_cast<GetComplianceSummaryResponse *>(send(request));
}

/*!
 * Sends \a request to the ResourceGroupsTaggingAPIClient service, and returns a pointer to an
 * GetResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns all the tagged or previously tagged resources that are located in the specified Region for the AWS
 *
 * account>
 *
 * Depending on what information you want returned, you can also specify the
 *
 * following> <ul> <li>
 *
 * <i>Filters</i> that specify what tags and resource types you want returned. The response includes all tags that are
 * associated with the requested
 *
 * resources> </li> <li>
 *
 * Information about compliance with the account's effective tag policy. For more information on tag policies, see <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">Tag
 * Policies</a> in the <i>AWS Organizations User Guide.</i>
 *
 * </p </li> </ul>
 *
 * This operation supports pagination, where the response can be sent in multiple pages. You should check the
 * <code>PaginationToken</code> response parameter to determine if there are additional results available to return. Repeat
 * the query, passing the <code>PaginationToken</code> response parameter value as an input to the next request until you
 * recieve a <code>null</code> value. A null value for <code>PaginationToken</code> indicates that there are no more
 * results waiting to be
 */
GetResourcesResponse * ResourceGroupsTaggingAPIClient::getResources(const GetResourcesRequest &request)
{
    return qobject_cast<GetResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the ResourceGroupsTaggingAPIClient service, and returns a pointer to an
 * GetTagKeysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns all tag keys currently in use in the specified Region for the calling AWS
 *
 * account>
 *
 * This operation supports pagination, where the response can be sent in multiple pages. You should check the
 * <code>PaginationToken</code> response parameter to determine if there are additional results available to return. Repeat
 * the query, passing the <code>PaginationToken</code> response parameter value as an input to the next request until you
 * recieve a <code>null</code> value. A null value for <code>PaginationToken</code> indicates that there are no more
 * results waiting to be
 */
GetTagKeysResponse * ResourceGroupsTaggingAPIClient::getTagKeys(const GetTagKeysRequest &request)
{
    return qobject_cast<GetTagKeysResponse *>(send(request));
}

/*!
 * Sends \a request to the ResourceGroupsTaggingAPIClient service, and returns a pointer to an
 * GetTagValuesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns all tag values for the specified key that are used in the specified AWS Region for the calling AWS
 *
 * account>
 *
 * This operation supports pagination, where the response can be sent in multiple pages. You should check the
 * <code>PaginationToken</code> response parameter to determine if there are additional results available to return. Repeat
 * the query, passing the <code>PaginationToken</code> response parameter value as an input to the next request until you
 * recieve a <code>null</code> value. A null value for <code>PaginationToken</code> indicates that there are no more
 * results waiting to be
 */
GetTagValuesResponse * ResourceGroupsTaggingAPIClient::getTagValues(const GetTagValuesRequest &request)
{
    return qobject_cast<GetTagValuesResponse *>(send(request));
}

/*!
 * Sends \a request to the ResourceGroupsTaggingAPIClient service, and returns a pointer to an
 * StartReportCreationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a report that lists all tagged resources in the accounts across your organization and tells whether each
 * resource is compliant with the effective tag policy. Compliance data is refreshed daily. The report is generated
 *
 * asynchronously>
 *
 * The generated report is saved to the following
 *
 * location>
 *
 * <code>s3://example-bucket/AwsTagPolicies/o-exampleorgid/YYYY-MM-ddTHH:mm:ssZ/report.csv</code>
 *
 * </p
 *
 * You can call this operation only from the organization's management account and from the us-east-1
 */
StartReportCreationResponse * ResourceGroupsTaggingAPIClient::startReportCreation(const StartReportCreationRequest &request)
{
    return qobject_cast<StartReportCreationResponse *>(send(request));
}

/*!
 * Sends \a request to the ResourceGroupsTaggingAPIClient service, and returns a pointer to an
 * TagResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies one or more tags to the specified resources. Note the
 *
 * following> <ul> <li>
 *
 * Not all resources can have tags. For a list of services with resources that support tagging using this operation, see <a
 * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/supported-services.html">Services that
 * support the Resource Groups Tagging
 *
 * API</a>> </li> <li>
 *
 * Each resource can have up to 50 tags. For other limits, see <a
 * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html#tag-conventions">Tag Naming and Usage
 * Conventions</a> in the <i>AWS General Reference.</i>
 *
 * </p </li> <li>
 *
 * You can only tag resources that are located in the specified AWS Region for the AWS
 *
 * account> </li> <li>
 *
 * To add tags to a resource, you need the necessary permissions for the service that the resource belongs to as well as
 * permissions for adding tags. For more information, see the documentation for each
 *
 * service> </li> </ul> <b>
 *
 * Do not store personally identifiable information (PII) or other confidential or sensitive information in tags. We use
 * tags to provide you with billing and administration services. Tags are not intended to be used for private or sensitive
 */
TagResourcesResponse * ResourceGroupsTaggingAPIClient::tagResources(const TagResourcesRequest &request)
{
    return qobject_cast<TagResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the ResourceGroupsTaggingAPIClient service, and returns a pointer to an
 * UntagResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags from the specified resources. When you specify a tag key, the action removes both that key
 * and its associated value. The operation succeeds even if you attempt to remove tags from a resource that were already
 * removed. Note the
 *
 * following> <ul> <li>
 *
 * To remove tags from a resource, you need the necessary permissions for the service that the resource belongs to as well
 * as permissions for removing tags. For more information, see the documentation for the service whose resource you want to
 *
 * untag> </li> <li>
 *
 * You can only tag resources that are located in the specified AWS Region for the calling AWS
 */
UntagResourcesResponse * ResourceGroupsTaggingAPIClient::untagResources(const UntagResourcesRequest &request)
{
    return qobject_cast<UntagResourcesResponse *>(send(request));
}

/*!
 * \class QtAws::ResourceGroupsTaggingAPI::ResourceGroupsTaggingAPIClientPrivate
 * \brief The ResourceGroupsTaggingAPIClientPrivate class provides private implementation for ResourceGroupsTaggingAPIClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsResourceGroupsTaggingAPI
 */

/*!
 * Constructs a ResourceGroupsTaggingAPIClientPrivate object with public implementation \a q.
 */
ResourceGroupsTaggingAPIClientPrivate::ResourceGroupsTaggingAPIClientPrivate(ResourceGroupsTaggingAPIClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace ResourceGroupsTaggingAPI
} // namespace QtAws
