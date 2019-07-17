/*
    Copyright 2013-2019 Paul Colby

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
 * \brief Contains classess for accessing Amazon CloudFront.
 *
 * \inmodule QtAwsCloudFront
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CloudFrontClient
 * \brief The CloudFrontClient class provides access to the Amazon CloudFront service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloudFront
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
    d->apiVersion = QStringLiteral("2019-03-26");
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
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
CloudFrontClient::CloudFrontClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudFrontClientPrivate(this), parent)
{
    Q_D(CloudFrontClient);
    d->apiVersion = QStringLiteral("2019-03-26");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("cloudfront");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon CloudFront");
    d->serviceName = QStringLiteral("cloudfront");
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * CreateCloudFrontOriginAccessIdentityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new origin access identity. If you're using Amazon S3 for your origin, you can use an origin access identity
 * to require users to access your content using a CloudFront URL instead of the Amazon S3 URL. For more information about
 * how to use origin access identities, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving Private Content
 * through CloudFront</a> in the <i>Amazon CloudFront Developer
 */
CreateCloudFrontOriginAccessIdentityResponse * CloudFrontClient::createCloudFrontOriginAccessIdentity(const CreateCloudFrontOriginAccessIdentityRequest &request)
{
    return qobject_cast<CreateCloudFrontOriginAccessIdentityResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * CreateDistributionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new web distribution. You create a CloudFront distribution to tell CloudFront where you want content to be
 * delivered from, and the details about how to track and manage content delivery. Send a <code>POST</code> request to the
 * <code>/<i>CloudFront API version</i>/distribution</code>/<code>distribution ID</code>
 *
 * resource> <b>
 *
 * When you update a distribution, there are more required fields than when you create a distribution. When you update your
 * distribution by using <a
 * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_UpdateDistribution.html">UpdateDistribution</a>,
 * follow the steps included in the documentation to get the current configuration and then make your updates. This helps
 * to make sure that you include all of the required fields. To view a summary, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-overview-required-fields.html">Required
 * Fields for Create Distribution and Update Distribution</a> in the <i>Amazon CloudFront Developer
 */
CreateDistributionResponse * CloudFrontClient::createDistribution(const CreateDistributionRequest &request)
{
    return qobject_cast<CreateDistributionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * CreateDistributionWithTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a new distribution with
 */
CreateDistributionWithTagsResponse * CloudFrontClient::createDistributionWithTags(const CreateDistributionWithTagsRequest &request)
{
    return qobject_cast<CreateDistributionWithTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * CreateFieldLevelEncryptionConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a new field-level encryption
 */
CreateFieldLevelEncryptionConfigResponse * CloudFrontClient::createFieldLevelEncryptionConfig(const CreateFieldLevelEncryptionConfigRequest &request)
{
    return qobject_cast<CreateFieldLevelEncryptionConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * CreateFieldLevelEncryptionProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a field-level encryption
 */
CreateFieldLevelEncryptionProfileResponse * CloudFrontClient::createFieldLevelEncryptionProfile(const CreateFieldLevelEncryptionProfileRequest &request)
{
    return qobject_cast<CreateFieldLevelEncryptionProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * CreateInvalidationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a new invalidation.
 */
CreateInvalidationResponse * CloudFrontClient::createInvalidation(const CreateInvalidationRequest &request)
{
    return qobject_cast<CreateInvalidationResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * CreatePublicKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Add a new public key to CloudFront to use, for example, for field-level encryption. You can add a maximum of 10 public
 * keys with one AWS
 */
CreatePublicKeyResponse * CloudFrontClient::createPublicKey(const CreatePublicKeyRequest &request)
{
    return qobject_cast<CreatePublicKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * CreateStreamingDistributionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new RTMP distribution. An RTMP distribution is similar to a web distribution, but an RTMP distribution streams
 * media files using the Adobe Real-Time Messaging Protocol (RTMP) instead of serving files using HTTP.
 *
 * </p
 *
 * To create a new distribution, submit a <code>POST</code> request to the <i>CloudFront API version</i>/distribution
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
 * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-rtmp.html">Working with RTMP
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
 */
CreateStreamingDistributionResponse * CloudFrontClient::createStreamingDistribution(const CreateStreamingDistributionRequest &request)
{
    return qobject_cast<CreateStreamingDistributionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * CreateStreamingDistributionWithTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a new streaming distribution with
 */
CreateStreamingDistributionWithTagsResponse * CloudFrontClient::createStreamingDistributionWithTags(const CreateStreamingDistributionWithTagsRequest &request)
{
    return qobject_cast<CreateStreamingDistributionWithTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * DeleteCloudFrontOriginAccessIdentityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete an origin access identity.
 */
DeleteCloudFrontOriginAccessIdentityResponse * CloudFrontClient::deleteCloudFrontOriginAccessIdentity(const DeleteCloudFrontOriginAccessIdentityRequest &request)
{
    return qobject_cast<DeleteCloudFrontOriginAccessIdentityResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * DeleteDistributionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete a distribution.
 */
DeleteDistributionResponse * CloudFrontClient::deleteDistribution(const DeleteDistributionRequest &request)
{
    return qobject_cast<DeleteDistributionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * DeleteFieldLevelEncryptionConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove a field-level encryption
 */
DeleteFieldLevelEncryptionConfigResponse * CloudFrontClient::deleteFieldLevelEncryptionConfig(const DeleteFieldLevelEncryptionConfigRequest &request)
{
    return qobject_cast<DeleteFieldLevelEncryptionConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * DeleteFieldLevelEncryptionProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove a field-level encryption
 */
DeleteFieldLevelEncryptionProfileResponse * CloudFrontClient::deleteFieldLevelEncryptionProfile(const DeleteFieldLevelEncryptionProfileRequest &request)
{
    return qobject_cast<DeleteFieldLevelEncryptionProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * DeletePublicKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove a public key you previously added to
 */
DeletePublicKeyResponse * CloudFrontClient::deletePublicKey(const DeletePublicKeyRequest &request)
{
    return qobject_cast<DeletePublicKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * DeleteStreamingDistributionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/HowToDeleteDistribution.html">Deleting a
 * Distribution</a> in the <i>Amazon CloudFront Developer
 */
DeleteStreamingDistributionResponse * CloudFrontClient::deleteStreamingDistribution(const DeleteStreamingDistributionRequest &request)
{
    return qobject_cast<DeleteStreamingDistributionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetCloudFrontOriginAccessIdentityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the information about an origin access identity.
 */
GetCloudFrontOriginAccessIdentityResponse * CloudFrontClient::getCloudFrontOriginAccessIdentity(const GetCloudFrontOriginAccessIdentityRequest &request)
{
    return qobject_cast<GetCloudFrontOriginAccessIdentityResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetCloudFrontOriginAccessIdentityConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the configuration information about an origin access identity.
 */
GetCloudFrontOriginAccessIdentityConfigResponse * CloudFrontClient::getCloudFrontOriginAccessIdentityConfig(const GetCloudFrontOriginAccessIdentityConfigRequest &request)
{
    return qobject_cast<GetCloudFrontOriginAccessIdentityConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetDistributionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the information about a
 */
GetDistributionResponse * CloudFrontClient::getDistribution(const GetDistributionRequest &request)
{
    return qobject_cast<GetDistributionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetDistributionConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the configuration information about a distribution.
 */
GetDistributionConfigResponse * CloudFrontClient::getDistributionConfig(const GetDistributionConfigRequest &request)
{
    return qobject_cast<GetDistributionConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetFieldLevelEncryptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the field-level encryption configuration
 */
GetFieldLevelEncryptionResponse * CloudFrontClient::getFieldLevelEncryption(const GetFieldLevelEncryptionRequest &request)
{
    return qobject_cast<GetFieldLevelEncryptionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetFieldLevelEncryptionConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the field-level encryption configuration
 */
GetFieldLevelEncryptionConfigResponse * CloudFrontClient::getFieldLevelEncryptionConfig(const GetFieldLevelEncryptionConfigRequest &request)
{
    return qobject_cast<GetFieldLevelEncryptionConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetFieldLevelEncryptionProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the field-level encryption profile
 */
GetFieldLevelEncryptionProfileResponse * CloudFrontClient::getFieldLevelEncryptionProfile(const GetFieldLevelEncryptionProfileRequest &request)
{
    return qobject_cast<GetFieldLevelEncryptionProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetFieldLevelEncryptionProfileConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the field-level encryption profile configuration
 */
GetFieldLevelEncryptionProfileConfigResponse * CloudFrontClient::getFieldLevelEncryptionProfileConfig(const GetFieldLevelEncryptionProfileConfigRequest &request)
{
    return qobject_cast<GetFieldLevelEncryptionProfileConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetInvalidationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the information about an invalidation.
 */
GetInvalidationResponse * CloudFrontClient::getInvalidation(const GetInvalidationRequest &request)
{
    return qobject_cast<GetInvalidationResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetPublicKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the public key
 */
GetPublicKeyResponse * CloudFrontClient::getPublicKey(const GetPublicKeyRequest &request)
{
    return qobject_cast<GetPublicKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetPublicKeyConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Return public key configuration
 */
GetPublicKeyConfigResponse * CloudFrontClient::getPublicKeyConfig(const GetPublicKeyConfigRequest &request)
{
    return qobject_cast<GetPublicKeyConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetStreamingDistributionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a specified RTMP distribution, including the distribution
 */
GetStreamingDistributionResponse * CloudFrontClient::getStreamingDistribution(const GetStreamingDistributionRequest &request)
{
    return qobject_cast<GetStreamingDistributionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * GetStreamingDistributionConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the configuration information about a streaming distribution.
 */
GetStreamingDistributionConfigResponse * CloudFrontClient::getStreamingDistributionConfig(const GetStreamingDistributionConfigRequest &request)
{
    return qobject_cast<GetStreamingDistributionConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListCloudFrontOriginAccessIdentitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists origin access
 */
ListCloudFrontOriginAccessIdentitiesResponse * CloudFrontClient::listCloudFrontOriginAccessIdentities(const ListCloudFrontOriginAccessIdentitiesRequest &request)
{
    return qobject_cast<ListCloudFrontOriginAccessIdentitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListDistributionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List CloudFront
 */
ListDistributionsResponse * CloudFrontClient::listDistributions(const ListDistributionsRequest &request)
{
    return qobject_cast<ListDistributionsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListDistributionsByWebACLIdResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the distributions that are associated with a specified AWS WAF web ACL.
 */
ListDistributionsByWebACLIdResponse * CloudFrontClient::listDistributionsByWebACLId(const ListDistributionsByWebACLIdRequest &request)
{
    return qobject_cast<ListDistributionsByWebACLIdResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListFieldLevelEncryptionConfigsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all field-level encryption configurations that have been created in CloudFront for this
 */
ListFieldLevelEncryptionConfigsResponse * CloudFrontClient::listFieldLevelEncryptionConfigs(const ListFieldLevelEncryptionConfigsRequest &request)
{
    return qobject_cast<ListFieldLevelEncryptionConfigsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListFieldLevelEncryptionProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Request a list of field-level encryption profiles that have been created in CloudFront for this
 */
ListFieldLevelEncryptionProfilesResponse * CloudFrontClient::listFieldLevelEncryptionProfiles(const ListFieldLevelEncryptionProfilesRequest &request)
{
    return qobject_cast<ListFieldLevelEncryptionProfilesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListInvalidationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists invalidation batches.
 */
ListInvalidationsResponse * CloudFrontClient::listInvalidations(const ListInvalidationsRequest &request)
{
    return qobject_cast<ListInvalidationsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListPublicKeysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all public keys that have been added to CloudFront for this
 */
ListPublicKeysResponse * CloudFrontClient::listPublicKeys(const ListPublicKeysRequest &request)
{
    return qobject_cast<ListPublicKeysResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListStreamingDistributionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List streaming distributions.
 */
ListStreamingDistributionsResponse * CloudFrontClient::listStreamingDistributions(const ListStreamingDistributionsRequest &request)
{
    return qobject_cast<ListStreamingDistributionsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List tags for a CloudFront
 */
ListTagsForResourceResponse * CloudFrontClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Add tags to a CloudFront
 */
TagResourceResponse * CloudFrontClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove tags from a CloudFront
 */
UntagResourceResponse * CloudFrontClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * UpdateCloudFrontOriginAccessIdentityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update an origin access identity.
 */
UpdateCloudFrontOriginAccessIdentityResponse * CloudFrontClient::updateCloudFrontOriginAccessIdentity(const UpdateCloudFrontOriginAccessIdentityRequest &request)
{
    return qobject_cast<UpdateCloudFrontOriginAccessIdentityResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * UpdateDistributionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the configuration for a web distribution.
 *
 * </p <b>
 *
 * When you update a distribution, there are more required fields than when you create a distribution. When you update your
 * distribution by using this API action, follow the steps here to get the current configuration and then make your
 * updates, to make sure that you include all of the required fields. To view a summary, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-overview-required-fields.html">Required
 * Fields for Create Distribution and Update Distribution</a> in the <i>Amazon CloudFront Developer
 *
 * Guide</i>> </b>
 *
 * The update process includes getting the current distribution configuration, updating the XML document that is returned
 * to make your changes, and then submitting an <code>UpdateDistribution</code> request to make the
 *
 * updates>
 *
 * For information about updating a distribution using the CloudFront console instead, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-creating-console.html">Creating
 * a Distribution</a> in the <i>Amazon CloudFront Developer
 *
 * Guide</i>>
 *
 * <b>To update a web distribution using the CloudFront API</b>
 *
 * </p <ol> <li>
 *
 * Submit a <a
 * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_GetDistributionConfig.html">GetDistributionConfig</a>
 * request to get the current configuration and an <code>Etag</code> header for the
 *
 * distribution> <note>
 *
 * If you update the distribution again, you must get a new <code>Etag</code>
 *
 * header> </note> </li> <li>
 *
 * Update the XML document that was returned in the response to your <code>GetDistributionConfig</code> request to include
 * your changes.
 *
 * </p <b>
 *
 * When you edit the XML file, be aware of the
 *
 * following> <ul> <li>
 *
 * You must strip out the ETag parameter that is
 *
 * returned> </li> <li>
 *
 * Additional fields are required when you update a distribution. There may be fields included in the XML file for features
 * that you haven't configured for your distribution. This is expected and required to successfully update the
 *
 * distribution> </li> <li>
 *
 * You can't change the value of <code>CallerReference</code>. If you try to change this value, CloudFront returns an
 * <code>IllegalUpdate</code> error.
 *
 * </p </li> <li>
 *
 * The new configuration replaces the existing configuration; the values that you specify in an
 * <code>UpdateDistribution</code> request are not merged into your existing configuration. When you add, delete, or
 * replace values in an element that allows multiple values (for example, <code>CNAME</code>), you must specify all of the
 * values that you want to appear in the updated distribution. In addition, you must update the corresponding
 * <code>Quantity</code>
 *
 * element> </li> </ul> </b> </li> <li>
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
 * Optional: Submit a <a
 * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_GetDistribution.html">GetDistribution</a> request
 * to confirm that your changes have propagated. When propagation is complete, the value of <code>Status</code> is
 */
UpdateDistributionResponse * CloudFrontClient::updateDistribution(const UpdateDistributionRequest &request)
{
    return qobject_cast<UpdateDistributionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * UpdateFieldLevelEncryptionConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update a field-level encryption configuration.
 */
UpdateFieldLevelEncryptionConfigResponse * CloudFrontClient::updateFieldLevelEncryptionConfig(const UpdateFieldLevelEncryptionConfigRequest &request)
{
    return qobject_cast<UpdateFieldLevelEncryptionConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * UpdateFieldLevelEncryptionProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update a field-level encryption profile.
 */
UpdateFieldLevelEncryptionProfileResponse * CloudFrontClient::updateFieldLevelEncryptionProfile(const UpdateFieldLevelEncryptionProfileRequest &request)
{
    return qobject_cast<UpdateFieldLevelEncryptionProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * UpdatePublicKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update public key information. Note that the only value you can change is the
 */
UpdatePublicKeyResponse * CloudFrontClient::updatePublicKey(const UpdatePublicKeyRequest &request)
{
    return qobject_cast<UpdatePublicKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFrontClient service, and returns a pointer to an
 * UpdateStreamingDistributionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update a streaming distribution.
 */
UpdateStreamingDistributionResponse * CloudFrontClient::updateStreamingDistribution(const UpdateStreamingDistributionRequest &request)
{
    return qobject_cast<UpdateStreamingDistributionResponse *>(send(request));
}

/*!
 * \class QtAws::CloudFront::CloudFrontClientPrivate
 * \brief The CloudFrontClientPrivate class provides private implementation for CloudFrontClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CloudFrontClientPrivate object with public implementation \a q.
 */
CloudFrontClientPrivate::CloudFrontClientPrivate(CloudFrontClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CloudFront
} // namespace QtAws
