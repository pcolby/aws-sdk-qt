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

#include "cloudfrontclient.h"
#include "cloudfrontclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace CloudFront {

/**
 * @class  CloudFrontClient
 *
 * @brief  Client for Amazon CloudFront
 *
 * <fullname>Amazon CloudFront</fullname>
 *
 * This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 * CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 * CloudFront Developer
 */

/**
 * @brief  Constructs a new CloudFrontClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
CloudFrontClient::CloudFrontClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CloudFrontClientPrivate(this), parent)
{
    Q_D(CloudFrontClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("cloudfront");
}

/**
 * @brief  Constructs a new CloudFrontClient object.
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
CloudFrontClient::CloudFrontClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CloudFrontClientPrivate(this), parent)
{
    Q_D(CloudFrontClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("cloudfront");
}

/// @todo override getEndpoint() to use cloudfront.

/**
 * Creates a new origin access identity. If you're using Amazon S3 for your origin, you can use an origin access identity
 * to require users to access your content using a CloudFront URL instead of the Amazon S3 URL. For more information about
 * how to use origin access identities, see <a
 * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving Private Content
 * through CloudFront</a> in the <i>Amazon CloudFront Developer
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateCloudFrontOriginAccessIdentityResponse * CloudFrontClient::createCloudFrontOriginAccessIdentity(const CreateCloudFrontOriginAccessIdentityRequest &request)
{

}

/**
 * Creates a new web distribution. Send a <code>POST</code> request to the <code>/<i>CloudFront API
 * version</i>/distribution</code>/<code>distribution ID</code>
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDistributionResponse * CloudFrontClient::createDistribution(const CreateDistributionRequest &request)
{

}

/**
 * Create a new distribution with
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDistributionWithTagsResponse * CloudFrontClient::createDistributionWithTags(const CreateDistributionWithTagsRequest &request)
{

}

/**
 * Create a new invalidation.
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateInvalidationResponse * CloudFrontClient::createInvalidation(const CreateInvalidationRequest &request)
{

}

/**
 * Creates a new RMTP distribution. An RTMP distribution is similar to a web distribution, but an RTMP distribution streams
 * media files using the Adobe Real-Time Messaging Protocol (RTMP) instead of serving files using HTTP.
 *
 * </p
 *
 * To create a new web distribution, submit a <code>POST</code> request to the <i>CloudFront API version</i>/distribution
 * resource. The request body must include a document with a <i>StreamingDistributionConfig</i> element. The response
 * echoes the <code>StreamingDistributionConfig</code> element and returns other information about the RTMP
 *
 * distribution>
 *
 * To get the status of your request, use the <i>GET StreamingDistribution</i> API action. When the value of
 * <code>Enabled</code> is <code>true</code> and the value of <code>Status</code> is <code>Deployed</code>, your
 * distribution is ready. A distribution usually deploys in less than 15
 *
 * minutes>
 *
 * For more information about web distributions, see <a
 * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-rtmp.html">Working with RTMP
 * Distributions</a> in the <i>Amazon CloudFront Developer
 *
 * Guide</i>> <b>
 *
 * Beginning with the 2012-05-05 version of the CloudFront API, we made substantial changes to the format of the XML
 * document that you include in the request body when you create or update a web distribution or an RTMP distribution, and
 * when you invalidate objects. With previous versions of the API, we discovered that it was too easy to accidentally
 * delete one or more values for an element that accepts multiple values, for example, CNAMEs and trusted signers. Our
 * changes for the 2012-05-05 release are intended to prevent these accidental deletions and to notify you when there's a
 * mismatch between the number of values you say you're specifying in the <code>Quantity</code> element and the number of
 * values
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateStreamingDistributionResponse * CloudFrontClient::createStreamingDistribution(const CreateStreamingDistributionRequest &request)
{

}

/**
 * Create a new streaming distribution with
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateStreamingDistributionWithTagsResponse * CloudFrontClient::createStreamingDistributionWithTags(const CreateStreamingDistributionWithTagsRequest &request)
{

}

/**
 * Delete an origin access identity.
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteCloudFrontOriginAccessIdentityResponse * CloudFrontClient::deleteCloudFrontOriginAccessIdentity(const DeleteCloudFrontOriginAccessIdentityRequest &request)
{

}

/**
 * Delete a distribution.
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDistributionResponse * CloudFrontClient::deleteDistribution(const DeleteDistributionRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteServiceLinkedRoleResponse * CloudFrontClient::deleteServiceLinkedRole(const DeleteServiceLinkedRoleRequest &request)
{

}

/**
 * Delete a streaming distribution. To delete an RTMP distribution using the CloudFront API, perform the following
 *
 * steps>
 *
 * <b>To delete an RTMP distribution using the CloudFront
 *
 * API</b>> <ol> <li>
 *
 * Disable the RTMP
 *
 * distribution> </li> <li>
 *
 * Submit a <code>GET Streaming Distribution Config</code> request to get the current configuration and the
 * <code>Etag</code> header for the distribution.
 *
 * </p </li> <li>
 *
 * Update the XML document that was returned in the response to your <code>GET Streaming Distribution Config</code> request
 * to change the value of <code>Enabled</code> to
 *
 * <code>false</code>> </li> <li>
 *
 * Submit a <code>PUT Streaming Distribution Config</code> request to update the configuration for your distribution. In
 * the request body, include the XML document that you updated in Step 3. Then set the value of the HTTP
 * <code>If-Match</code> header to the value of the <code>ETag</code> header that CloudFront returned when you submitted
 * the <code>GET Streaming Distribution Config</code> request in Step
 *
 * 2> </li> <li>
 *
 * Review the response to the <code>PUT Streaming Distribution Config</code> request to confirm that the distribution was
 * successfully
 *
 * disabled> </li> <li>
 *
 * Submit a <code>GET Streaming Distribution Config</code> request to confirm that your changes have propagated. When
 * propagation is complete, the value of <code>Status</code> is
 *
 * <code>Deployed</code>> </li> <li>
 *
 * Submit a <code>DELETE Streaming Distribution</code> request. Set the value of the HTTP <code>If-Match</code> header to
 * the value of the <code>ETag</code> header that CloudFront returned when you submitted the <code>GET Streaming
 * Distribution Config</code> request in Step
 *
 * 2> </li> <li>
 *
 * Review the response to your <code>DELETE Streaming Distribution</code> request to confirm that the distribution was
 * successfully
 *
 * deleted> </li> </ol>
 *
 * For information about deleting a distribution using the CloudFront console, see <a
 * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/HowToDeleteDistribution.html">Deleting a
 * Distribution</a> in the <i>Amazon CloudFront Developer
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteStreamingDistributionResponse * CloudFrontClient::deleteStreamingDistribution(const DeleteStreamingDistributionRequest &request)
{

}

/**
 * Get the information about an origin access identity.
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCloudFrontOriginAccessIdentityResponse * CloudFrontClient::getCloudFrontOriginAccessIdentity(const GetCloudFrontOriginAccessIdentityRequest &request)
{

}

/**
 * Get the configuration information about an origin access identity.
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCloudFrontOriginAccessIdentityConfigResponse * CloudFrontClient::getCloudFrontOriginAccessIdentityConfig(const GetCloudFrontOriginAccessIdentityConfigRequest &request)
{

}

/**
 * Get the information about a distribution.
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDistributionResponse * CloudFrontClient::getDistribution(const GetDistributionRequest &request)
{

}

/**
 * Get the configuration information about a distribution.
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDistributionConfigResponse * CloudFrontClient::getDistributionConfig(const GetDistributionConfigRequest &request)
{

}

/**
 * Get the information about an invalidation.
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetInvalidationResponse * CloudFrontClient::getInvalidation(const GetInvalidationRequest &request)
{

}

/**
 * Gets information about a specified RTMP distribution, including the distribution
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetStreamingDistributionResponse * CloudFrontClient::getStreamingDistribution(const GetStreamingDistributionRequest &request)
{

}

/**
 * Get the configuration information about a streaming distribution.
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetStreamingDistributionConfigResponse * CloudFrontClient::getStreamingDistributionConfig(const GetStreamingDistributionConfigRequest &request)
{

}

/**
 * Lists origin access
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListCloudFrontOriginAccessIdentitiesResponse * CloudFrontClient::listCloudFrontOriginAccessIdentities(const ListCloudFrontOriginAccessIdentitiesRequest &request)
{

}

/**
 * List distributions.
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListDistributionsResponse * CloudFrontClient::listDistributions(const ListDistributionsRequest &request)
{

}

/**
 * List the distributions that are associated with a specified AWS WAF web ACL.
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListDistributionsByWebACLIdResponse * CloudFrontClient::listDistributionsByWebACLId(const ListDistributionsByWebACLIdRequest &request)
{

}

/**
 * Lists invalidation batches.
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListInvalidationsResponse * CloudFrontClient::listInvalidations(const ListInvalidationsRequest &request)
{

}

/**
 * List streaming distributions.
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListStreamingDistributionsResponse * CloudFrontClient::listStreamingDistributions(const ListStreamingDistributionsRequest &request)
{

}

/**
 * List tags for a CloudFront
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTagsForResourceResponse * CloudFrontClient::listTagsForResource(const ListTagsForResourceRequest &request)
{

}

/**
 * Add tags to a CloudFront
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TagResourceResponse * CloudFrontClient::tagResource(const TagResourceRequest &request)
{

}

/**
 * Remove tags from a CloudFront
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UntagResourceResponse * CloudFrontClient::untagResource(const UntagResourceRequest &request)
{

}

/**
 * Update an origin access identity.
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateCloudFrontOriginAccessIdentityResponse * CloudFrontClient::updateCloudFrontOriginAccessIdentity(const UpdateCloudFrontOriginAccessIdentityRequest &request)
{

}

/**
 * Updates the configuration for a web distribution. Perform the following
 *
 * steps>
 *
 * For information about updating a distribution using the CloudFront console, see <a
 * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-creating-console.html">Creating
 * or Updating a Web Distribution Using the CloudFront Console </a> in the <i>Amazon CloudFront Developer
 *
 * Guide</i>>
 *
 * <b>To update a web distribution using the CloudFront API</b>
 *
 * </p <ol> <li>
 *
 * Submit a <a>GetDistributionConfig</a> request to get the current configuration and an <code>Etag</code> header for the
 *
 * distribution> <note>
 *
 * If you update the distribution again, you need to get a new <code>Etag</code>
 *
 * header> </note> </li> <li>
 *
 * Update the XML document that was returned in the response to your <code>GetDistributionConfig</code> request to include
 * the desired changes. You can't change the value of <code>CallerReference</code>. If you try to change this value,
 * CloudFront returns an <code>IllegalUpdate</code>
 *
 * error> <b>
 *
 * The new configuration replaces the existing configuration; the values that you specify in an
 * <code>UpdateDistribution</code> request are not merged into the existing configuration. When you add, delete, or replace
 * values in an element that allows multiple values (for example, <code>CNAME</code>), you must specify all of the values
 * that you want to appear in the updated distribution. In addition, you must update the corresponding
 * <code>Quantity</code>
 *
 * element> </b> </li> <li>
 *
 * Submit an <code>UpdateDistribution</code> request to update the configuration for your
 *
 * distribution> <ul> <li>
 *
 * In the request body, include the XML document that you updated in Step 2. The request body must include an XML document
 * with a <code>DistributionConfig</code>
 *
 * element> </li> <li>
 *
 * Set the value of the HTTP <code>If-Match</code> header to the value of the <code>ETag</code> header that CloudFront
 * returned when you submitted the <code>GetDistributionConfig</code> request in Step
 *
 * 1> </li> </ul> </li> <li>
 *
 * Review the response to the <code>UpdateDistribution</code> request to confirm that the configuration was successfully
 *
 * updated> </li> <li>
 *
 * Optional: Submit a <a>GetDistribution</a> request to confirm that your changes have propagated. When propagation is
 * complete, the value of <code>Status</code> is
 *
 * <code>Deployed</code>> <b>
 *
 * Beginning with the 2012-05-05 version of the CloudFront API, we made substantial changes to the format of the XML
 * document that you include in the request body when you create or update a distribution. With previous versions of the
 * API, we discovered that it was too easy to accidentally delete one or more values for an element that accepts multiple
 * values, for example, CNAMEs and trusted signers. Our changes for the 2012-05-05 release are intended to prevent these
 * accidental deletions and to notify you when there's a mismatch between the number of values you say you're specifying in
 * the <code>Quantity</code> element and the number of values you're actually
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateDistributionResponse * CloudFrontClient::updateDistribution(const UpdateDistributionRequest &request)
{

}

/**
 * Update a streaming distribution.
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateStreamingDistributionResponse * CloudFrontClient::updateStreamingDistribution(const UpdateStreamingDistributionRequest &request)
{

}

/**
 * @internal
 *
 * @class  CloudFrontClientPrivate
 *
 * @brief  Private implementation for CloudFrontClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudFrontClientPrivate object.
 *
 * @param  q  Pointer to this object's public CloudFrontClient instance.
 */
CloudFrontClientPrivate::CloudFrontClientPrivate(CloudFrontClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace CloudFront
} // namespace AWS
