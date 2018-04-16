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

#include "cloudfrontclient.h"
#include "cloudfrontclient_p.h"

#include "core/awssignaturev4.h"
#include "createcloudfrontoriginaccessidentityrequest.h"
#include "createcloudfrontoriginaccessidentityresponse.h"
#include "createdistributionrequest.h"
#include "createdistributionresponse.h"
#include "createdistributionwithtagsrequest.h"
#include "createdistributionwithtagsresponse.h"
#include "createfieldlevelencryptionconfigrequest.h"
#include "createfieldlevelencryptionconfigresponse.h"
#include "createfieldlevelencryptionprofilerequest.h"
#include "createfieldlevelencryptionprofileresponse.h"
#include "createinvalidationrequest.h"
#include "createinvalidationresponse.h"
#include "createpublickeyrequest.h"
#include "createpublickeyresponse.h"
#include "createstreamingdistributionrequest.h"
#include "createstreamingdistributionresponse.h"
#include "createstreamingdistributionwithtagsrequest.h"
#include "createstreamingdistributionwithtagsresponse.h"
#include "deletecloudfrontoriginaccessidentityrequest.h"
#include "deletecloudfrontoriginaccessidentityresponse.h"
#include "deletedistributionrequest.h"
#include "deletedistributionresponse.h"
#include "deletefieldlevelencryptionconfigrequest.h"
#include "deletefieldlevelencryptionconfigresponse.h"
#include "deletefieldlevelencryptionprofilerequest.h"
#include "deletefieldlevelencryptionprofileresponse.h"
#include "deletepublickeyrequest.h"
#include "deletepublickeyresponse.h"
#include "deleteservicelinkedrolerequest.h"
#include "deleteservicelinkedroleresponse.h"
#include "deletestreamingdistributionrequest.h"
#include "deletestreamingdistributionresponse.h"
#include "getcloudfrontoriginaccessidentityrequest.h"
#include "getcloudfrontoriginaccessidentityresponse.h"
#include "getcloudfrontoriginaccessidentityconfigrequest.h"
#include "getcloudfrontoriginaccessidentityconfigresponse.h"
#include "getdistributionrequest.h"
#include "getdistributionresponse.h"
#include "getdistributionconfigrequest.h"
#include "getdistributionconfigresponse.h"
#include "getfieldlevelencryptionrequest.h"
#include "getfieldlevelencryptionresponse.h"
#include "getfieldlevelencryptionconfigrequest.h"
#include "getfieldlevelencryptionconfigresponse.h"
#include "getfieldlevelencryptionprofilerequest.h"
#include "getfieldlevelencryptionprofileresponse.h"
#include "getfieldlevelencryptionprofileconfigrequest.h"
#include "getfieldlevelencryptionprofileconfigresponse.h"
#include "getinvalidationrequest.h"
#include "getinvalidationresponse.h"
#include "getpublickeyrequest.h"
#include "getpublickeyresponse.h"
#include "getpublickeyconfigrequest.h"
#include "getpublickeyconfigresponse.h"
#include "getstreamingdistributionrequest.h"
#include "getstreamingdistributionresponse.h"
#include "getstreamingdistributionconfigrequest.h"
#include "getstreamingdistributionconfigresponse.h"
#include "listcloudfrontoriginaccessidentitiesrequest.h"
#include "listcloudfrontoriginaccessidentitiesresponse.h"
#include "listdistributionsrequest.h"
#include "listdistributionsresponse.h"
#include "listdistributionsbywebaclidrequest.h"
#include "listdistributionsbywebaclidresponse.h"
#include "listfieldlevelencryptionconfigsrequest.h"
#include "listfieldlevelencryptionconfigsresponse.h"
#include "listfieldlevelencryptionprofilesrequest.h"
#include "listfieldlevelencryptionprofilesresponse.h"
#include "listinvalidationsrequest.h"
#include "listinvalidationsresponse.h"
#include "listpublickeysrequest.h"
#include "listpublickeysresponse.h"
#include "liststreamingdistributionsrequest.h"
#include "liststreamingdistributionsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatecloudfrontoriginaccessidentityrequest.h"
#include "updatecloudfrontoriginaccessidentityresponse.h"
#include "updatedistributionrequest.h"
#include "updatedistributionresponse.h"
#include "updatefieldlevelencryptionconfigrequest.h"
#include "updatefieldlevelencryptionconfigresponse.h"
#include "updatefieldlevelencryptionprofilerequest.h"
#include "updatefieldlevelencryptionprofileresponse.h"
#include "updatepublickeyrequest.h"
#include "updatepublickeyresponse.h"
#include "updatestreamingdistributionrequest.h"
#include "updatestreamingdistributionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CloudFront
 * \brief The QtAws::CloudFront contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CloudFrontClient
 *
 * \brief The CloudFrontClient class provides access to the Amazon CloudFront service.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 */

/*!
 * \brief Constructs a CloudFrontClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CloudFrontClient::CloudFrontClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudFrontClientPrivate(this), parent)
{
    Q_D(CloudFrontClient);
    d->apiVersion = QStringLiteral("2017-10-30");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("cloudfront");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon CloudFront");
    d->serviceName = QStringLiteral("cloudfront");
}

/*!
 * \overload CloudFrontClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \a  AwsEndpoint::getEndpoint()
 */
CloudFrontClient::CloudFrontClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudFrontClientPrivate(this), parent)
{
    Q_D(CloudFrontClient);
    d->apiVersion = QStringLiteral("2017-10-30");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("cloudfront");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon CloudFront");
    d->serviceName = QStringLiteral("cloudfront");
}

/*!
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
    return qobject_cast<CreateCloudFrontOriginAccessIdentityResponse *>(send(request));
}

/*!
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
    return qobject_cast<CreateDistributionResponse *>(send(request));
}

/*!
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
    return qobject_cast<CreateDistributionWithTagsResponse *>(send(request));
}

/*!
 * Create a new field-level encryption
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateFieldLevelEncryptionConfigResponse * CloudFrontClient::createFieldLevelEncryptionConfig(const CreateFieldLevelEncryptionConfigRequest &request)
{
    return qobject_cast<CreateFieldLevelEncryptionConfigResponse *>(send(request));
}

/*!
 * Create a field-level encryption
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateFieldLevelEncryptionProfileResponse * CloudFrontClient::createFieldLevelEncryptionProfile(const CreateFieldLevelEncryptionProfileRequest &request)
{
    return qobject_cast<CreateFieldLevelEncryptionProfileResponse *>(send(request));
}

/*!
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
    return qobject_cast<CreateInvalidationResponse *>(send(request));
}

/*!
 * Add a new public key to CloudFront to use, for example, for field-level encryption. You can add a maximum of 10 public
 * keys with one AWS
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreatePublicKeyResponse * CloudFrontClient::createPublicKey(const CreatePublicKeyRequest &request)
{
    return qobject_cast<CreatePublicKeyResponse *>(send(request));
}

/*!
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
    return qobject_cast<CreateStreamingDistributionResponse *>(send(request));
}

/*!
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
    return qobject_cast<CreateStreamingDistributionWithTagsResponse *>(send(request));
}

/*!
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
    return qobject_cast<DeleteCloudFrontOriginAccessIdentityResponse *>(send(request));
}

/*!
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
    return qobject_cast<DeleteDistributionResponse *>(send(request));
}

/*!
 * Remove a field-level encryption
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteFieldLevelEncryptionConfigResponse * CloudFrontClient::deleteFieldLevelEncryptionConfig(const DeleteFieldLevelEncryptionConfigRequest &request)
{
    return qobject_cast<DeleteFieldLevelEncryptionConfigResponse *>(send(request));
}

/*!
 * Remove a field-level encryption
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteFieldLevelEncryptionProfileResponse * CloudFrontClient::deleteFieldLevelEncryptionProfile(const DeleteFieldLevelEncryptionProfileRequest &request)
{
    return qobject_cast<DeleteFieldLevelEncryptionProfileResponse *>(send(request));
}

/*!
 * Remove a public key you previously added to
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeletePublicKeyResponse * CloudFrontClient::deletePublicKey(const DeletePublicKeyRequest &request)
{
    return qobject_cast<DeletePublicKeyResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteServiceLinkedRoleResponse * CloudFrontClient::deleteServiceLinkedRole(const DeleteServiceLinkedRoleRequest &request)
{
    return qobject_cast<DeleteServiceLinkedRoleResponse *>(send(request));
}

/*!
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
    return qobject_cast<DeleteStreamingDistributionResponse *>(send(request));
}

/*!
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
    return qobject_cast<GetCloudFrontOriginAccessIdentityResponse *>(send(request));
}

/*!
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
    return qobject_cast<GetCloudFrontOriginAccessIdentityConfigResponse *>(send(request));
}

/*!
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
    return qobject_cast<GetDistributionResponse *>(send(request));
}

/*!
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
    return qobject_cast<GetDistributionConfigResponse *>(send(request));
}

/*!
 * Get the field-level encryption configuration
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetFieldLevelEncryptionResponse * CloudFrontClient::getFieldLevelEncryption(const GetFieldLevelEncryptionRequest &request)
{
    return qobject_cast<GetFieldLevelEncryptionResponse *>(send(request));
}

/*!
 * Get the field-level encryption configuration
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetFieldLevelEncryptionConfigResponse * CloudFrontClient::getFieldLevelEncryptionConfig(const GetFieldLevelEncryptionConfigRequest &request)
{
    return qobject_cast<GetFieldLevelEncryptionConfigResponse *>(send(request));
}

/*!
 * Get the field-level encryption profile
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetFieldLevelEncryptionProfileResponse * CloudFrontClient::getFieldLevelEncryptionProfile(const GetFieldLevelEncryptionProfileRequest &request)
{
    return qobject_cast<GetFieldLevelEncryptionProfileResponse *>(send(request));
}

/*!
 * Get the field-level encryption profile configuration
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetFieldLevelEncryptionProfileConfigResponse * CloudFrontClient::getFieldLevelEncryptionProfileConfig(const GetFieldLevelEncryptionProfileConfigRequest &request)
{
    return qobject_cast<GetFieldLevelEncryptionProfileConfigResponse *>(send(request));
}

/*!
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
    return qobject_cast<GetInvalidationResponse *>(send(request));
}

/*!
 * Get the public key
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetPublicKeyResponse * CloudFrontClient::getPublicKey(const GetPublicKeyRequest &request)
{
    return qobject_cast<GetPublicKeyResponse *>(send(request));
}

/*!
 * Return public key configuration
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetPublicKeyConfigResponse * CloudFrontClient::getPublicKeyConfig(const GetPublicKeyConfigRequest &request)
{
    return qobject_cast<GetPublicKeyConfigResponse *>(send(request));
}

/*!
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
    return qobject_cast<GetStreamingDistributionResponse *>(send(request));
}

/*!
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
    return qobject_cast<GetStreamingDistributionConfigResponse *>(send(request));
}

/*!
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
    return qobject_cast<ListCloudFrontOriginAccessIdentitiesResponse *>(send(request));
}

/*!
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
    return qobject_cast<ListDistributionsResponse *>(send(request));
}

/*!
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
    return qobject_cast<ListDistributionsByWebACLIdResponse *>(send(request));
}

/*!
 * List all field-level encryption configurations that have been created in CloudFront for this
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListFieldLevelEncryptionConfigsResponse * CloudFrontClient::listFieldLevelEncryptionConfigs(const ListFieldLevelEncryptionConfigsRequest &request)
{
    return qobject_cast<ListFieldLevelEncryptionConfigsResponse *>(send(request));
}

/*!
 * Request a list of field-level encryption profiles that have been created in CloudFront for this
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListFieldLevelEncryptionProfilesResponse * CloudFrontClient::listFieldLevelEncryptionProfiles(const ListFieldLevelEncryptionProfilesRequest &request)
{
    return qobject_cast<ListFieldLevelEncryptionProfilesResponse *>(send(request));
}

/*!
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
    return qobject_cast<ListInvalidationsResponse *>(send(request));
}

/*!
 * List all public keys that have been added to CloudFront for this
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPublicKeysResponse * CloudFrontClient::listPublicKeys(const ListPublicKeysRequest &request)
{
    return qobject_cast<ListPublicKeysResponse *>(send(request));
}

/*!
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
    return qobject_cast<ListStreamingDistributionsResponse *>(send(request));
}

/*!
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
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
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
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
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
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
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
    return qobject_cast<UpdateCloudFrontOriginAccessIdentityResponse *>(send(request));
}

/*!
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
    return qobject_cast<UpdateDistributionResponse *>(send(request));
}

/*!
 * Update a field-level encryption configuration.
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateFieldLevelEncryptionConfigResponse * CloudFrontClient::updateFieldLevelEncryptionConfig(const UpdateFieldLevelEncryptionConfigRequest &request)
{
    return qobject_cast<UpdateFieldLevelEncryptionConfigResponse *>(send(request));
}

/*!
 * Update a field-level encryption profile.
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateFieldLevelEncryptionProfileResponse * CloudFrontClient::updateFieldLevelEncryptionProfile(const UpdateFieldLevelEncryptionProfileRequest &request)
{
    return qobject_cast<UpdateFieldLevelEncryptionProfileResponse *>(send(request));
}

/*!
 * Update public key information. Note that the only value you can change is the
 *
 * @param  request Request to send to Amazon CloudFront.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdatePublicKeyResponse * CloudFrontClient::updatePublicKey(const UpdatePublicKeyRequest &request)
{
    return qobject_cast<UpdatePublicKeyResponse *>(send(request));
}

/*!
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
    return qobject_cast<UpdateStreamingDistributionResponse *>(send(request));
}

/*!
 * @internal
 *
 * @class  CloudFrontClientPrivate
 *
 * @brief  Private implementation for CloudFrontClient.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CloudFrontClientPrivate object.
 *
 * @param  q  Pointer to this object's public CloudFrontClient instance.
 */
CloudFrontClientPrivate::CloudFrontClientPrivate(CloudFrontClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CloudFront
} // namespace QtAws
