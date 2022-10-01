// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resourcegroupstaggingclient.h"
#include "resourcegroupstaggingclient_p.h"

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
 * \namespace QtAws::ResourceGroupsTagging
 * \brief Contains classess for accessing AWS Resource Groups Tagging API.
 *
 * \inmodule QtAwsResourceGroupsTagging
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ResourceGroupsTagging {

/*!
 * \class QtAws::ResourceGroupsTagging::ResourceGroupsTaggingClient
 * \brief The ResourceGroupsTaggingClient class provides access to the AWS Resource Groups Tagging API service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsResourceGroupsTagging
 *
 */

/*!
 * \brief Constructs a ResourceGroupsTaggingClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ResourceGroupsTaggingClient::ResourceGroupsTaggingClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ResourceGroupsTaggingClientPrivate(this), parent)
{
    Q_D(ResourceGroupsTaggingClient);
    d->apiVersion = QStringLiteral("2017-01-26");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("tagging");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Resource Groups Tagging API");
    d->serviceName = QStringLiteral("tagging");
}

/*!
 * \overload ResourceGroupsTaggingClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ResourceGroupsTaggingClient::ResourceGroupsTaggingClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ResourceGroupsTaggingClientPrivate(this), parent)
{
    Q_D(ResourceGroupsTaggingClient);
    d->apiVersion = QStringLiteral("2017-01-26");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("tagging");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Resource Groups Tagging API");
    d->serviceName = QStringLiteral("tagging");
}

/*!
 * Sends \a request to the ResourceGroupsTaggingClient service, and returns a pointer to an
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
DescribeReportCreationResponse * ResourceGroupsTaggingClient::describeReportCreation(const DescribeReportCreationRequest &request)
{
    return qobject_cast<DescribeReportCreationResponse *>(send(request));
}

/*!
 * Sends \a request to the ResourceGroupsTaggingClient service, and returns a pointer to an
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
 * Policies</a> in the <i>Organizations User Guide.</i>
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
GetComplianceSummaryResponse * ResourceGroupsTaggingClient::getComplianceSummary(const GetComplianceSummaryRequest &request)
{
    return qobject_cast<GetComplianceSummaryResponse *>(send(request));
}

/*!
 * Sends \a request to the ResourceGroupsTaggingClient service, and returns a pointer to an
 * GetResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns all the tagged or previously tagged resources that are located in the specified Amazon Web Services Region for
 * the
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
 * Policies</a> in the <i>Organizations User Guide.</i>
 *
 * </p </li> </ul>
 *
 * This operation supports pagination, where the response can be sent in multiple pages. You should check the
 * <code>PaginationToken</code> response parameter to determine if there are additional results available to return. Repeat
 * the query, passing the <code>PaginationToken</code> response parameter value as an input to the next request until you
 * recieve a <code>null</code> value. A null value for <code>PaginationToken</code> indicates that there are no more
 * results waiting to be
 */
GetResourcesResponse * ResourceGroupsTaggingClient::getResources(const GetResourcesRequest &request)
{
    return qobject_cast<GetResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the ResourceGroupsTaggingClient service, and returns a pointer to an
 * GetTagKeysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns all tag keys currently in use in the specified Amazon Web Services Region for the calling
 *
 * account>
 *
 * This operation supports pagination, where the response can be sent in multiple pages. You should check the
 * <code>PaginationToken</code> response parameter to determine if there are additional results available to return. Repeat
 * the query, passing the <code>PaginationToken</code> response parameter value as an input to the next request until you
 * recieve a <code>null</code> value. A null value for <code>PaginationToken</code> indicates that there are no more
 * results waiting to be
 */
GetTagKeysResponse * ResourceGroupsTaggingClient::getTagKeys(const GetTagKeysRequest &request)
{
    return qobject_cast<GetTagKeysResponse *>(send(request));
}

/*!
 * Sends \a request to the ResourceGroupsTaggingClient service, and returns a pointer to an
 * GetTagValuesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns all tag values for the specified key that are used in the specified Amazon Web Services Region for the calling
 *
 * account>
 *
 * This operation supports pagination, where the response can be sent in multiple pages. You should check the
 * <code>PaginationToken</code> response parameter to determine if there are additional results available to return. Repeat
 * the query, passing the <code>PaginationToken</code> response parameter value as an input to the next request until you
 * recieve a <code>null</code> value. A null value for <code>PaginationToken</code> indicates that there are no more
 * results waiting to be
 */
GetTagValuesResponse * ResourceGroupsTaggingClient::getTagValues(const GetTagValuesRequest &request)
{
    return qobject_cast<GetTagValuesResponse *>(send(request));
}

/*!
 * Sends \a request to the ResourceGroupsTaggingClient service, and returns a pointer to an
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
StartReportCreationResponse * ResourceGroupsTaggingClient::startReportCreation(const StartReportCreationRequest &request)
{
    return qobject_cast<StartReportCreationResponse *>(send(request));
}

/*!
 * Sends \a request to the ResourceGroupsTaggingClient service, and returns a pointer to an
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
 * support the Resource Groups Tagging API</a>. If the resource doesn't yet support this operation, the resource's service
 * might support tagging using its own API operations. For more information, refer to the documentation for that
 *
 * service> </li> <li>
 *
 * Each resource can have up to 50 tags. For other limits, see <a
 * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html#tag-conventions">Tag Naming and Usage
 * Conventions</a> in the <i>Amazon Web Services General Reference.</i>
 *
 * </p </li> <li>
 *
 * You can only tag resources that are located in the specified Amazon Web Services Region for the Amazon Web Services
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
 *
 * data> </b>
 *
 * <b>Minimum permissions</b>
 *
 * </p
 *
 * In addition to the <code>tag:TagResources</code> permission required by this operation, you must also have the tagging
 * permission defined by the service that created the resource. For example, to tag an Amazon EC2 instance using the
 * <code>TagResources</code> operation, you must have both of the following
 *
 * permissions> <ul> <li>
 *
 * <code>tag:TagResource</code>
 *
 * </p </li> <li>
 *
 * <code>ec2:CreateTags</code>
 */
TagResourcesResponse * ResourceGroupsTaggingClient::tagResources(const TagResourcesRequest &request)
{
    return qobject_cast<TagResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the ResourceGroupsTaggingClient service, and returns a pointer to an
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
 * You can only tag resources that are located in the specified Amazon Web Services Region for the calling Amazon Web
 * Services
 *
 * account> </li> </ul>
 *
 * <b>Minimum permissions</b>
 *
 * </p
 *
 * In addition to the <code>tag:UntagResources</code> permission required by this operation, you must also have the remove
 * tags permission defined by the service that created the resource. For example, to remove the tags from an Amazon EC2
 * instance using the <code>UntagResources</code> operation, you must have both of the following
 *
 * permissions> <ul> <li>
 *
 * <code>tag:UntagResource</code>
 *
 * </p </li> <li>
 *
 * <code>ec2:DeleteTags</code>
 */
UntagResourcesResponse * ResourceGroupsTaggingClient::untagResources(const UntagResourcesRequest &request)
{
    return qobject_cast<UntagResourcesResponse *>(send(request));
}

/*!
 * \class QtAws::ResourceGroupsTagging::ResourceGroupsTaggingClientPrivate
 * \brief The ResourceGroupsTaggingClientPrivate class provides private implementation for ResourceGroupsTaggingClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsResourceGroupsTagging
 */

/*!
 * Constructs a ResourceGroupsTaggingClientPrivate object with public implementation \a q.
 */
ResourceGroupsTaggingClientPrivate::ResourceGroupsTaggingClientPrivate(ResourceGroupsTaggingClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ResourceGroupsTagging
} // namespace QtAws
