/*
    Copyright 2013-2018 Paul Colby

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

#include "s3client.h"
#include "s3client_p.h"

#include "core/awssignaturev4.h"
#include "abortmultipartuploadrequest.h"
#include "abortmultipartuploadresponse.h"
#include "completemultipartuploadrequest.h"
#include "completemultipartuploadresponse.h"
#include "copyobjectrequest.h"
#include "copyobjectresponse.h"
#include "createbucketrequest.h"
#include "createbucketresponse.h"
#include "createmultipartuploadrequest.h"
#include "createmultipartuploadresponse.h"
#include "deletebucketrequest.h"
#include "deletebucketresponse.h"
#include "deletebucketanalyticsconfigurationrequest.h"
#include "deletebucketanalyticsconfigurationresponse.h"
#include "deletebucketcorsrequest.h"
#include "deletebucketcorsresponse.h"
#include "deletebucketencryptionrequest.h"
#include "deletebucketencryptionresponse.h"
#include "deletebucketinventoryconfigurationrequest.h"
#include "deletebucketinventoryconfigurationresponse.h"
#include "deletebucketlifecyclerequest.h"
#include "deletebucketlifecycleresponse.h"
#include "deletebucketmetricsconfigurationrequest.h"
#include "deletebucketmetricsconfigurationresponse.h"
#include "deletebucketpolicyrequest.h"
#include "deletebucketpolicyresponse.h"
#include "deletebucketreplicationrequest.h"
#include "deletebucketreplicationresponse.h"
#include "deletebuckettaggingrequest.h"
#include "deletebuckettaggingresponse.h"
#include "deletebucketwebsiterequest.h"
#include "deletebucketwebsiteresponse.h"
#include "deleteobjectrequest.h"
#include "deleteobjectresponse.h"
#include "deleteobjecttaggingrequest.h"
#include "deleteobjecttaggingresponse.h"
#include "deleteobjectsrequest.h"
#include "deleteobjectsresponse.h"
#include "getbucketaccelerateconfigurationrequest.h"
#include "getbucketaccelerateconfigurationresponse.h"
#include "getbucketaclrequest.h"
#include "getbucketaclresponse.h"
#include "getbucketanalyticsconfigurationrequest.h"
#include "getbucketanalyticsconfigurationresponse.h"
#include "getbucketcorsrequest.h"
#include "getbucketcorsresponse.h"
#include "getbucketencryptionrequest.h"
#include "getbucketencryptionresponse.h"
#include "getbucketinventoryconfigurationrequest.h"
#include "getbucketinventoryconfigurationresponse.h"
#include "getbucketlifecyclerequest.h"
#include "getbucketlifecycleresponse.h"
#include "getbucketlifecycleconfigurationrequest.h"
#include "getbucketlifecycleconfigurationresponse.h"
#include "getbucketlocationrequest.h"
#include "getbucketlocationresponse.h"
#include "getbucketloggingrequest.h"
#include "getbucketloggingresponse.h"
#include "getbucketmetricsconfigurationrequest.h"
#include "getbucketmetricsconfigurationresponse.h"
#include "getbucketnotificationrequest.h"
#include "getbucketnotificationresponse.h"
#include "getbucketnotificationconfigurationrequest.h"
#include "getbucketnotificationconfigurationresponse.h"
#include "getbucketpolicyrequest.h"
#include "getbucketpolicyresponse.h"
#include "getbucketreplicationrequest.h"
#include "getbucketreplicationresponse.h"
#include "getbucketrequestpaymentrequest.h"
#include "getbucketrequestpaymentresponse.h"
#include "getbuckettaggingrequest.h"
#include "getbuckettaggingresponse.h"
#include "getbucketversioningrequest.h"
#include "getbucketversioningresponse.h"
#include "getbucketwebsiterequest.h"
#include "getbucketwebsiteresponse.h"
#include "getobjectrequest.h"
#include "getobjectresponse.h"
#include "getobjectaclrequest.h"
#include "getobjectaclresponse.h"
#include "getobjecttaggingrequest.h"
#include "getobjecttaggingresponse.h"
#include "getobjecttorrentrequest.h"
#include "getobjecttorrentresponse.h"
#include "headbucketrequest.h"
#include "headbucketresponse.h"
#include "headobjectrequest.h"
#include "headobjectresponse.h"
#include "listbucketanalyticsconfigurationsrequest.h"
#include "listbucketanalyticsconfigurationsresponse.h"
#include "listbucketinventoryconfigurationsrequest.h"
#include "listbucketinventoryconfigurationsresponse.h"
#include "listbucketmetricsconfigurationsrequest.h"
#include "listbucketmetricsconfigurationsresponse.h"
#include "listbucketsresponse.h"
#include "listmultipartuploadsrequest.h"
#include "listmultipartuploadsresponse.h"
#include "listobjectversionsrequest.h"
#include "listobjectversionsresponse.h"
#include "listobjectsrequest.h"
#include "listobjectsresponse.h"
#include "listobjectsv2request.h"
#include "listobjectsv2response.h"
#include "listpartsrequest.h"
#include "listpartsresponse.h"
#include "putbucketaccelerateconfigurationrequest.h"
#include "putbucketaccelerateconfigurationresponse.h"
#include "putbucketaclrequest.h"
#include "putbucketaclresponse.h"
#include "putbucketanalyticsconfigurationrequest.h"
#include "putbucketanalyticsconfigurationresponse.h"
#include "putbucketcorsrequest.h"
#include "putbucketcorsresponse.h"
#include "putbucketencryptionrequest.h"
#include "putbucketencryptionresponse.h"
#include "putbucketinventoryconfigurationrequest.h"
#include "putbucketinventoryconfigurationresponse.h"
#include "putbucketlifecyclerequest.h"
#include "putbucketlifecycleresponse.h"
#include "putbucketlifecycleconfigurationrequest.h"
#include "putbucketlifecycleconfigurationresponse.h"
#include "putbucketloggingrequest.h"
#include "putbucketloggingresponse.h"
#include "putbucketmetricsconfigurationrequest.h"
#include "putbucketmetricsconfigurationresponse.h"
#include "putbucketnotificationrequest.h"
#include "putbucketnotificationresponse.h"
#include "putbucketnotificationconfigurationrequest.h"
#include "putbucketnotificationconfigurationresponse.h"
#include "putbucketpolicyrequest.h"
#include "putbucketpolicyresponse.h"
#include "putbucketreplicationrequest.h"
#include "putbucketreplicationresponse.h"
#include "putbucketrequestpaymentrequest.h"
#include "putbucketrequestpaymentresponse.h"
#include "putbuckettaggingrequest.h"
#include "putbuckettaggingresponse.h"
#include "putbucketversioningrequest.h"
#include "putbucketversioningresponse.h"
#include "putbucketwebsiterequest.h"
#include "putbucketwebsiteresponse.h"
#include "putobjectrequest.h"
#include "putobjectresponse.h"
#include "putobjectaclrequest.h"
#include "putobjectaclresponse.h"
#include "putobjecttaggingrequest.h"
#include "putobjecttaggingresponse.h"
#include "restoreobjectrequest.h"
#include "restoreobjectresponse.h"
#include "selectobjectcontentrequest.h"
#include "selectobjectcontentresponse.h"
#include "uploadpartrequest.h"
#include "uploadpartresponse.h"
#include "uploadpartcopyrequest.h"
#include "uploadpartcopyresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::S3
 * \brief Contains classess for accessing Amazon Simple Storage Service ( S3).
 *
 * \inmodule QtAwsS3
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::S3Client
 * \brief The S3Client class provides access to the Amazon Simple Storage Service ( S3) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsS3
 *
 */

/*!
 * \brief Constructs a S3Client object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
S3Client::S3Client(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new S3ClientPrivate(this), parent)
{
    Q_D(S3Client);
    d->apiVersion = QStringLiteral("2006-03-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("s3");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Simple Storage Service");
    d->serviceName = QStringLiteral("s3");
}

/*!
 * \overload S3Client()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
S3Client::S3Client(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new S3ClientPrivate(this), parent)
{
    Q_D(S3Client);
    d->apiVersion = QStringLiteral("2006-03-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("s3");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Simple Storage Service");
    d->serviceName = QStringLiteral("s3");
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * AbortMultipartUploadResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Aborts a multipart
 *
 * upload>
 *
 * To verify that all parts have been removed, so you don't get charged for the part storage, you should call the List
 * Parts operation and ensure the parts list is
 */
AbortMultipartUploadResponse * S3Client::abortMultipartUpload(const AbortMultipartUploadRequest &request)
{
    return qobject_cast<AbortMultipartUploadResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * CompleteMultipartUploadResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Completes a multipart upload by assembling previously uploaded
 */
CompleteMultipartUploadResponse * S3Client::completeMultipartUpload(const CompleteMultipartUploadRequest &request)
{
    return qobject_cast<CompleteMultipartUploadResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * CopyObjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a copy of an object that is already stored in Amazon
 */
CopyObjectResponse * S3Client::copyObject(const CopyObjectRequest &request)
{
    return qobject_cast<CopyObjectResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * CreateBucketResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new
 */
CreateBucketResponse * S3Client::createBucket(const CreateBucketRequest &request)
{
    return qobject_cast<CreateBucketResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * CreateMultipartUploadResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Initiates a multipart upload and returns an upload
 *
 * ID>
 *
 * <b>Note:</b> After you initiate multipart upload and upload one or more parts, you must either complete or abort
 * multipart upload in order to stop getting charged for storage of the uploaded parts. Only after you either complete or
 * abort multipart upload, Amazon S3 frees up the parts storage and stops charging you for the parts
 */
CreateMultipartUploadResponse * S3Client::createMultipartUpload(const CreateMultipartUploadRequest &request)
{
    return qobject_cast<CreateMultipartUploadResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * DeleteBucketResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the bucket. All objects (including all object versions and Delete Markers) in the bucket must be deleted before
 * the bucket itself can be
 */
DeleteBucketResponse * S3Client::deleteBucket(const DeleteBucketRequest &request)
{
    return qobject_cast<DeleteBucketResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * DeleteBucketAnalyticsConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an analytics configuration for the bucket (specified by the analytics configuration
 */
DeleteBucketAnalyticsConfigurationResponse * S3Client::deleteBucketAnalyticsConfiguration(const DeleteBucketAnalyticsConfigurationRequest &request)
{
    return qobject_cast<DeleteBucketAnalyticsConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * DeleteBucketCorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the cors configuration information set for the
 */
DeleteBucketCorsResponse * S3Client::deleteBucketCors(const DeleteBucketCorsRequest &request)
{
    return qobject_cast<DeleteBucketCorsResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * DeleteBucketEncryptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the server-side encryption configuration from the
 */
DeleteBucketEncryptionResponse * S3Client::deleteBucketEncryption(const DeleteBucketEncryptionRequest &request)
{
    return qobject_cast<DeleteBucketEncryptionResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * DeleteBucketInventoryConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an inventory configuration (identified by the inventory ID) from the
 */
DeleteBucketInventoryConfigurationResponse * S3Client::deleteBucketInventoryConfiguration(const DeleteBucketInventoryConfigurationRequest &request)
{
    return qobject_cast<DeleteBucketInventoryConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * DeleteBucketLifecycleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the lifecycle configuration from the
 */
DeleteBucketLifecycleResponse * S3Client::deleteBucketLifecycle(const DeleteBucketLifecycleRequest &request)
{
    return qobject_cast<DeleteBucketLifecycleResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * DeleteBucketMetricsConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a metrics configuration (specified by the metrics configuration ID) from the
 */
DeleteBucketMetricsConfigurationResponse * S3Client::deleteBucketMetricsConfiguration(const DeleteBucketMetricsConfigurationRequest &request)
{
    return qobject_cast<DeleteBucketMetricsConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * DeleteBucketPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the policy from the
 */
DeleteBucketPolicyResponse * S3Client::deleteBucketPolicy(const DeleteBucketPolicyRequest &request)
{
    return qobject_cast<DeleteBucketPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * DeleteBucketReplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the replication configuration from the
 */
DeleteBucketReplicationResponse * S3Client::deleteBucketReplication(const DeleteBucketReplicationRequest &request)
{
    return qobject_cast<DeleteBucketReplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * DeleteBucketTaggingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the tags from the
 */
DeleteBucketTaggingResponse * S3Client::deleteBucketTagging(const DeleteBucketTaggingRequest &request)
{
    return qobject_cast<DeleteBucketTaggingResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * DeleteBucketWebsiteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation removes the website configuration from the
 */
DeleteBucketWebsiteResponse * S3Client::deleteBucketWebsite(const DeleteBucketWebsiteRequest &request)
{
    return qobject_cast<DeleteBucketWebsiteResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * DeleteObjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the null version (if there is one) of an object and inserts a delete marker, which becomes the latest version of
 * the object. If there isn't a null version, Amazon S3 does not remove any
 */
DeleteObjectResponse * S3Client::deleteObject(const DeleteObjectRequest &request)
{
    return qobject_cast<DeleteObjectResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * DeleteObjectTaggingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the tag-set from an existing
 */
DeleteObjectTaggingResponse * S3Client::deleteObjectTagging(const DeleteObjectTaggingRequest &request)
{
    return qobject_cast<DeleteObjectTaggingResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * DeleteObjectsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation enables you to delete multiple objects from a bucket using a single HTTP request. You may specify up to
 * 1000
 */
DeleteObjectsResponse * S3Client::deleteObjects(const DeleteObjectsRequest &request)
{
    return qobject_cast<DeleteObjectsResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetBucketAccelerateConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the accelerate configuration of a
 */
GetBucketAccelerateConfigurationResponse * S3Client::getBucketAccelerateConfiguration(const GetBucketAccelerateConfigurationRequest &request)
{
    return qobject_cast<GetBucketAccelerateConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetBucketAclResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the access control policy for the
 */
GetBucketAclResponse * S3Client::getBucketAcl(const GetBucketAclRequest &request)
{
    return qobject_cast<GetBucketAclResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetBucketAnalyticsConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an analytics configuration for the bucket (specified by the analytics configuration
 */
GetBucketAnalyticsConfigurationResponse * S3Client::getBucketAnalyticsConfiguration(const GetBucketAnalyticsConfigurationRequest &request)
{
    return qobject_cast<GetBucketAnalyticsConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetBucketCorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the cors configuration for the
 */
GetBucketCorsResponse * S3Client::getBucketCors(const GetBucketCorsRequest &request)
{
    return qobject_cast<GetBucketCorsResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetBucketEncryptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the server-side encryption configuration of a
 */
GetBucketEncryptionResponse * S3Client::getBucketEncryption(const GetBucketEncryptionRequest &request)
{
    return qobject_cast<GetBucketEncryptionResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetBucketInventoryConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an inventory configuration (identified by the inventory ID) from the
 */
GetBucketInventoryConfigurationResponse * S3Client::getBucketInventoryConfiguration(const GetBucketInventoryConfigurationRequest &request)
{
    return qobject_cast<GetBucketInventoryConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetBucketLifecycleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deprecated, see the GetBucketLifecycleConfiguration
 */
GetBucketLifecycleResponse * S3Client::getBucketLifecycle(const GetBucketLifecycleRequest &request)
{
    return qobject_cast<GetBucketLifecycleResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetBucketLifecycleConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the lifecycle configuration information set on the
 */
GetBucketLifecycleConfigurationResponse * S3Client::getBucketLifecycleConfiguration(const GetBucketLifecycleConfigurationRequest &request)
{
    return qobject_cast<GetBucketLifecycleConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetBucketLocationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the region the bucket resides
 */
GetBucketLocationResponse * S3Client::getBucketLocation(const GetBucketLocationRequest &request)
{
    return qobject_cast<GetBucketLocationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetBucketLoggingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the logging status of a bucket and the permissions users have to view and modify that status. To use GET, you
 * must be the bucket
 */
GetBucketLoggingResponse * S3Client::getBucketLogging(const GetBucketLoggingRequest &request)
{
    return qobject_cast<GetBucketLoggingResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetBucketMetricsConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a metrics configuration (specified by the metrics configuration ID) from the
 */
GetBucketMetricsConfigurationResponse * S3Client::getBucketMetricsConfiguration(const GetBucketMetricsConfigurationRequest &request)
{
    return qobject_cast<GetBucketMetricsConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetBucketNotificationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deprecated, see the GetBucketNotificationConfiguration
 */
GetBucketNotificationResponse * S3Client::getBucketNotification(const GetBucketNotificationRequest &request)
{
    return qobject_cast<GetBucketNotificationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetBucketNotificationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the notification configuration of a
 */
GetBucketNotificationConfigurationResponse * S3Client::getBucketNotificationConfiguration(const GetBucketNotificationConfigurationRequest &request)
{
    return qobject_cast<GetBucketNotificationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetBucketPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the policy of a specified
 */
GetBucketPolicyResponse * S3Client::getBucketPolicy(const GetBucketPolicyRequest &request)
{
    return qobject_cast<GetBucketPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetBucketReplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the replication configuration of a
 */
GetBucketReplicationResponse * S3Client::getBucketReplication(const GetBucketReplicationRequest &request)
{
    return qobject_cast<GetBucketReplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetBucketRequestPaymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the request payment configuration of a
 */
GetBucketRequestPaymentResponse * S3Client::getBucketRequestPayment(const GetBucketRequestPaymentRequest &request)
{
    return qobject_cast<GetBucketRequestPaymentResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetBucketTaggingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the tag set associated with the
 */
GetBucketTaggingResponse * S3Client::getBucketTagging(const GetBucketTaggingRequest &request)
{
    return qobject_cast<GetBucketTaggingResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetBucketVersioningResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the versioning state of a
 */
GetBucketVersioningResponse * S3Client::getBucketVersioning(const GetBucketVersioningRequest &request)
{
    return qobject_cast<GetBucketVersioningResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetBucketWebsiteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the website configuration for a
 */
GetBucketWebsiteResponse * S3Client::getBucketWebsite(const GetBucketWebsiteRequest &request)
{
    return qobject_cast<GetBucketWebsiteResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetObjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves objects from Amazon
 */
GetObjectResponse * S3Client::getObject(const GetObjectRequest &request)
{
    return qobject_cast<GetObjectResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetObjectAclResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the access control list (ACL) of an
 */
GetObjectAclResponse * S3Client::getObjectAcl(const GetObjectAclRequest &request)
{
    return qobject_cast<GetObjectAclResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetObjectTaggingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the tag-set of an
 */
GetObjectTaggingResponse * S3Client::getObjectTagging(const GetObjectTaggingRequest &request)
{
    return qobject_cast<GetObjectTaggingResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetObjectTorrentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Return torrent files from a
 */
GetObjectTorrentResponse * S3Client::getObjectTorrent(const GetObjectTorrentRequest &request)
{
    return qobject_cast<GetObjectTorrentResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * HeadBucketResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation is useful to determine if a bucket exists and you have permission to access
 */
HeadBucketResponse * S3Client::headBucket(const HeadBucketRequest &request)
{
    return qobject_cast<HeadBucketResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * HeadObjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The HEAD operation retrieves metadata from an object without returning the object itself. This operation is useful if
 * you're only interested in an object's metadata. To use HEAD, you must have READ access to the
 */
HeadObjectResponse * S3Client::headObject(const HeadObjectRequest &request)
{
    return qobject_cast<HeadObjectResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * ListBucketAnalyticsConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the analytics configurations for the
 */
ListBucketAnalyticsConfigurationsResponse * S3Client::listBucketAnalyticsConfigurations(const ListBucketAnalyticsConfigurationsRequest &request)
{
    return qobject_cast<ListBucketAnalyticsConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * ListBucketInventoryConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of inventory configurations for the
 */
ListBucketInventoryConfigurationsResponse * S3Client::listBucketInventoryConfigurations(const ListBucketInventoryConfigurationsRequest &request)
{
    return qobject_cast<ListBucketInventoryConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * ListBucketMetricsConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the metrics configurations for the
 */
ListBucketMetricsConfigurationsResponse * S3Client::listBucketMetricsConfigurations(const ListBucketMetricsConfigurationsRequest &request)
{
    return qobject_cast<ListBucketMetricsConfigurationsResponse *>(send(request));
}

/*!
 * Sends a ListBuckets request to the S3Client service, and returns a pointer to an
 * ListBucketsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all buckets owned by the authenticated sender of the
 */
ListBucketsResponse * S3Client::listBuckets()
{
    return qobject_cast<ListBucketsResponse *>(send());
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * ListMultipartUploadsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation lists in-progress multipart
 */
ListMultipartUploadsResponse * S3Client::listMultipartUploads(const ListMultipartUploadsRequest &request)
{
    return qobject_cast<ListMultipartUploadsResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * ListObjectVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns metadata about all of the versions of objects in a
 */
ListObjectVersionsResponse * S3Client::listObjectVersions(const ListObjectVersionsRequest &request)
{
    return qobject_cast<ListObjectVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * ListObjectsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns some or all (up to 1000) of the objects in a bucket. You can use the request parameters as selection criteria to
 * return a subset of the objects in a
 */
ListObjectsResponse * S3Client::listObjects(const ListObjectsRequest &request)
{
    return qobject_cast<ListObjectsResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * ListObjectsV2Response object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns some or all (up to 1000) of the objects in a bucket. You can use the request parameters as selection criteria to
 * return a subset of the objects in a bucket. Note: ListObjectsV2 is the revised List Objects API and we recommend you use
 * this revised API for new application
 */
ListObjectsV2Response * S3Client::listObjectsV2(const ListObjectsV2Request &request)
{
    return qobject_cast<ListObjectsV2Response *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * ListPartsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the parts that have been uploaded for a specific multipart
 */
ListPartsResponse * S3Client::listParts(const ListPartsRequest &request)
{
    return qobject_cast<ListPartsResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutBucketAccelerateConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the accelerate configuration of an existing
 */
PutBucketAccelerateConfigurationResponse * S3Client::putBucketAccelerateConfiguration(const PutBucketAccelerateConfigurationRequest &request)
{
    return qobject_cast<PutBucketAccelerateConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutBucketAclResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the permissions on a bucket using access control lists
 */
PutBucketAclResponse * S3Client::putBucketAcl(const PutBucketAclRequest &request)
{
    return qobject_cast<PutBucketAclResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutBucketAnalyticsConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets an analytics configuration for the bucket (specified by the analytics configuration
 */
PutBucketAnalyticsConfigurationResponse * S3Client::putBucketAnalyticsConfiguration(const PutBucketAnalyticsConfigurationRequest &request)
{
    return qobject_cast<PutBucketAnalyticsConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutBucketCorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the cors configuration for a
 */
PutBucketCorsResponse * S3Client::putBucketCors(const PutBucketCorsRequest &request)
{
    return qobject_cast<PutBucketCorsResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutBucketEncryptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new server-side encryption configuration (or replaces an existing one, if
 */
PutBucketEncryptionResponse * S3Client::putBucketEncryption(const PutBucketEncryptionRequest &request)
{
    return qobject_cast<PutBucketEncryptionResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutBucketInventoryConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds an inventory configuration (identified by the inventory ID) from the
 */
PutBucketInventoryConfigurationResponse * S3Client::putBucketInventoryConfiguration(const PutBucketInventoryConfigurationRequest &request)
{
    return qobject_cast<PutBucketInventoryConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutBucketLifecycleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deprecated, see the PutBucketLifecycleConfiguration
 */
PutBucketLifecycleResponse * S3Client::putBucketLifecycle(const PutBucketLifecycleRequest &request)
{
    return qobject_cast<PutBucketLifecycleResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutBucketLifecycleConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets lifecycle configuration for your bucket. If a lifecycle configuration exists, it replaces
 */
PutBucketLifecycleConfigurationResponse * S3Client::putBucketLifecycleConfiguration(const PutBucketLifecycleConfigurationRequest &request)
{
    return qobject_cast<PutBucketLifecycleConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutBucketLoggingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Set the logging parameters for a bucket and to specify permissions for who can view and modify the logging parameters.
 * To set the logging status of a bucket, you must be the bucket
 */
PutBucketLoggingResponse * S3Client::putBucketLogging(const PutBucketLoggingRequest &request)
{
    return qobject_cast<PutBucketLoggingResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutBucketMetricsConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets a metrics configuration (specified by the metrics configuration ID) for the
 */
PutBucketMetricsConfigurationResponse * S3Client::putBucketMetricsConfiguration(const PutBucketMetricsConfigurationRequest &request)
{
    return qobject_cast<PutBucketMetricsConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutBucketNotificationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deprecated, see the PutBucketNotificationConfiguraiton
 */
PutBucketNotificationResponse * S3Client::putBucketNotification(const PutBucketNotificationRequest &request)
{
    return qobject_cast<PutBucketNotificationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutBucketNotificationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables notifications of specified events for a
 */
PutBucketNotificationConfigurationResponse * S3Client::putBucketNotificationConfiguration(const PutBucketNotificationConfigurationRequest &request)
{
    return qobject_cast<PutBucketNotificationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutBucketPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Replaces a policy on a bucket. If the bucket already has a policy, the one in this request completely replaces
 */
PutBucketPolicyResponse * S3Client::putBucketPolicy(const PutBucketPolicyRequest &request)
{
    return qobject_cast<PutBucketPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutBucketReplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new replication configuration (or replaces an existing one, if
 */
PutBucketReplicationResponse * S3Client::putBucketReplication(const PutBucketReplicationRequest &request)
{
    return qobject_cast<PutBucketReplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutBucketRequestPaymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the request payment configuration for a bucket. By default, the bucket owner pays for downloads from the bucket.
 * This configuration parameter enables the bucket owner (only) to specify that the person requesting the download will be
 * charged for the download. Documentation on requester pays buckets can be found at
 */
PutBucketRequestPaymentResponse * S3Client::putBucketRequestPayment(const PutBucketRequestPaymentRequest &request)
{
    return qobject_cast<PutBucketRequestPaymentResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutBucketTaggingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the tags for a
 */
PutBucketTaggingResponse * S3Client::putBucketTagging(const PutBucketTaggingRequest &request)
{
    return qobject_cast<PutBucketTaggingResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutBucketVersioningResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the versioning state of an existing bucket. To set the versioning state, you must be the bucket
 */
PutBucketVersioningResponse * S3Client::putBucketVersioning(const PutBucketVersioningRequest &request)
{
    return qobject_cast<PutBucketVersioningResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutBucketWebsiteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Set the website configuration for a
 */
PutBucketWebsiteResponse * S3Client::putBucketWebsite(const PutBucketWebsiteRequest &request)
{
    return qobject_cast<PutBucketWebsiteResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutObjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds an object to a
 */
PutObjectResponse * S3Client::putObject(const PutObjectRequest &request)
{
    return qobject_cast<PutObjectResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutObjectAclResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * uses the acl subresource to set the access control list (ACL) permissions for an object that already exists in a
 */
PutObjectAclResponse * S3Client::putObjectAcl(const PutObjectAclRequest &request)
{
    return qobject_cast<PutObjectAclResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutObjectTaggingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the supplied tag-set to an object that already exists in a
 */
PutObjectTaggingResponse * S3Client::putObjectTagging(const PutObjectTaggingRequest &request)
{
    return qobject_cast<PutObjectTaggingResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * RestoreObjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Restores an archived copy of an object back into Amazon
 */
RestoreObjectResponse * S3Client::restoreObject(const RestoreObjectRequest &request)
{
    return qobject_cast<RestoreObjectResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * SelectObjectContentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation filters the contents of an Amazon S3 object based on a simple Structured Query Language (SQL) statement.
 * In the request, along with the SQL expression, you must also specify a data serialization format (JSON or CSV) of the
 * object. Amazon S3 uses this to parse object data into records, and returns only records that match the specified SQL
 * expression. You must also specify the data serialization format for the
 */
SelectObjectContentResponse * S3Client::selectObjectContent(const SelectObjectContentRequest &request)
{
    return qobject_cast<SelectObjectContentResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * UploadPartResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Uploads a part in a multipart
 *
 * upload>
 *
 * <b>Note:</b> After you initiate multipart upload and upload one or more parts, you must either complete or abort
 * multipart upload in order to stop getting charged for storage of the uploaded parts. Only after you either complete or
 * abort multipart upload, Amazon S3 frees up the parts storage and stops charging you for the parts
 */
UploadPartResponse * S3Client::uploadPart(const UploadPartRequest &request)
{
    return qobject_cast<UploadPartResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * UploadPartCopyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Uploads a part by copying data from an existing object as data
 */
UploadPartCopyResponse * S3Client::uploadPartCopy(const UploadPartCopyRequest &request)
{
    return qobject_cast<UploadPartCopyResponse *>(send(request));
}

/*!
 * \class QtAws::S3::S3ClientPrivate
 * \brief The S3ClientPrivate class provides private implementation for S3Client.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a S3ClientPrivate object with public implementation \a q.
 */
S3ClientPrivate::S3ClientPrivate(S3Client * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureS3();
}

} // namespace S3
} // namespace QtAws
