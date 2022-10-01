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
#include "deletebucketintelligenttieringconfigurationrequest.h"
#include "deletebucketintelligenttieringconfigurationresponse.h"
#include "deletebucketinventoryconfigurationrequest.h"
#include "deletebucketinventoryconfigurationresponse.h"
#include "deletebucketlifecyclerequest.h"
#include "deletebucketlifecycleresponse.h"
#include "deletebucketmetricsconfigurationrequest.h"
#include "deletebucketmetricsconfigurationresponse.h"
#include "deletebucketownershipcontrolsrequest.h"
#include "deletebucketownershipcontrolsresponse.h"
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
#include "deletepublicaccessblockrequest.h"
#include "deletepublicaccessblockresponse.h"
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
#include "getbucketintelligenttieringconfigurationrequest.h"
#include "getbucketintelligenttieringconfigurationresponse.h"
#include "getbucketinventoryconfigurationrequest.h"
#include "getbucketinventoryconfigurationresponse.h"
#include "getbucketlifecycleconfigurationrequest.h"
#include "getbucketlifecycleconfigurationresponse.h"
#include "getbucketlocationrequest.h"
#include "getbucketlocationresponse.h"
#include "getbucketloggingrequest.h"
#include "getbucketloggingresponse.h"
#include "getbucketmetricsconfigurationrequest.h"
#include "getbucketmetricsconfigurationresponse.h"
#include "getbucketnotificationconfigurationrequest.h"
#include "getbucketnotificationconfigurationresponse.h"
#include "getbucketownershipcontrolsrequest.h"
#include "getbucketownershipcontrolsresponse.h"
#include "getbucketpolicyrequest.h"
#include "getbucketpolicyresponse.h"
#include "getbucketpolicystatusrequest.h"
#include "getbucketpolicystatusresponse.h"
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
#include "getobjectattributesrequest.h"
#include "getobjectattributesresponse.h"
#include "getobjectlegalholdrequest.h"
#include "getobjectlegalholdresponse.h"
#include "getobjectlockconfigurationrequest.h"
#include "getobjectlockconfigurationresponse.h"
#include "getobjectretentionrequest.h"
#include "getobjectretentionresponse.h"
#include "getobjecttaggingrequest.h"
#include "getobjecttaggingresponse.h"
#include "getobjecttorrentrequest.h"
#include "getobjecttorrentresponse.h"
#include "getpublicaccessblockrequest.h"
#include "getpublicaccessblockresponse.h"
#include "headbucketrequest.h"
#include "headbucketresponse.h"
#include "headobjectrequest.h"
#include "headobjectresponse.h"
#include "listbucketanalyticsconfigurationsrequest.h"
#include "listbucketanalyticsconfigurationsresponse.h"
#include "listbucketintelligenttieringconfigurationsrequest.h"
#include "listbucketintelligenttieringconfigurationsresponse.h"
#include "listbucketinventoryconfigurationsrequest.h"
#include "listbucketinventoryconfigurationsresponse.h"
#include "listbucketmetricsconfigurationsrequest.h"
#include "listbucketmetricsconfigurationsresponse.h"
#include "listbucketsrequest.h"
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
#include "putbucketintelligenttieringconfigurationrequest.h"
#include "putbucketintelligenttieringconfigurationresponse.h"
#include "putbucketinventoryconfigurationrequest.h"
#include "putbucketinventoryconfigurationresponse.h"
#include "putbucketlifecycleconfigurationrequest.h"
#include "putbucketlifecycleconfigurationresponse.h"
#include "putbucketloggingrequest.h"
#include "putbucketloggingresponse.h"
#include "putbucketmetricsconfigurationrequest.h"
#include "putbucketmetricsconfigurationresponse.h"
#include "putbucketnotificationconfigurationrequest.h"
#include "putbucketnotificationconfigurationresponse.h"
#include "putbucketownershipcontrolsrequest.h"
#include "putbucketownershipcontrolsresponse.h"
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
#include "putobjectlegalholdrequest.h"
#include "putobjectlegalholdresponse.h"
#include "putobjectlockconfigurationrequest.h"
#include "putobjectlockconfigurationresponse.h"
#include "putobjectretentionrequest.h"
#include "putobjectretentionresponse.h"
#include "putobjecttaggingrequest.h"
#include "putobjecttaggingresponse.h"
#include "putpublicaccessblockrequest.h"
#include "putpublicaccessblockresponse.h"
#include "restoreobjectrequest.h"
#include "restoreobjectresponse.h"
#include "selectobjectcontentrequest.h"
#include "selectobjectcontentresponse.h"
#include "uploadpartrequest.h"
#include "uploadpartresponse.h"
#include "uploadpartcopyrequest.h"
#include "uploadpartcopyresponse.h"
#include "writegetobjectresponserequest.h"
#include "writegetobjectresponseresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::S3
 * \brief Contains classess for accessing Amazon Simple Storage Service.
 *
 * \inmodule QtAwsS3
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::S3Client
 * \brief The S3Client class provides access to the Amazon Simple Storage Service service.
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
 * This action aborts a multipart upload. After a multipart upload is aborted, no additional parts can be uploaded using
 * that upload ID. The storage consumed by any previously uploaded parts will be freed. However, if any part uploads are
 * currently in progress, those part uploads might or might not succeed. As a result, it might be necessary to abort a
 * given multipart upload multiple times in order to completely free all storage consumed by all parts.
 *
 * </p
 *
 * To verify that all parts have been removed, so you don't get charged for the part storage, you should call the <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a> action and ensure that the parts
 * list is
 *
 * empty>
 *
 * For information about permissions required to use the multipart upload, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuAndPermissions.html">Multipart Upload and
 *
 * Permissions</a>>
 *
 * The following operations are related to
 *
 * <code>AbortMultipartUpload</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CompleteMultipartUpload.html">CompleteMultipartUpload</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListMultipartUploads.html">ListMultipartUploads</a>
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
 *
 * parts>
 *
 * You first initiate the multipart upload and then upload all parts using the <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a> operation. After successfully
 * uploading all relevant parts of an upload, you call this action to complete the upload. Upon receiving this request,
 * Amazon S3 concatenates all the parts in ascending order by part number to create a new object. In the Complete Multipart
 * Upload request, you must provide the parts list. You must ensure that the parts list is complete. This action
 * concatenates the parts that you provide in the list. For each part in the list, you must provide the part number and the
 * <code>ETag</code> value, returned after that part was
 *
 * uploaded>
 *
 * Processing of a Complete Multipart Upload request could take several minutes to complete. After Amazon S3 begins
 * processing the request, it sends an HTTP response header that specifies a 200 OK response. While processing is in
 * progress, Amazon S3 periodically sends white space characters to keep the connection from timing out. Because a request
 * could fail after the initial 200 OK response has been sent, it is important that you check the response body to
 * determine whether the request
 *
 * succeeded>
 *
 * Note that if <code>CompleteMultipartUpload</code> fails, applications should be prepared to retry the failed requests.
 * For more information, see <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/ErrorBestPractices.html">Amazon S3
 * Error Best
 *
 * Practices</a>> <b>
 *
 * You cannot use <code>Content-Type: application/x-www-form-urlencoded</code> with Complete Multipart Upload requests.
 * Also, if you do not provide a <code>Content-Type</code> header, <code>CompleteMultipartUpload</code> returns a 200 OK
 *
 * response> </b>
 *
 * For more information about multipart uploads, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/uploadobjusingmpu.html">Uploading Objects Using Multipart
 *
 * Upload</a>>
 *
 * For information about permissions required to use the multipart upload API, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuAndPermissions.html">Multipart Upload and
 *
 * Permissions</a>>
 *
 * <code>CompleteMultipartUpload</code> has the following special
 *
 * errors> <ul> <li>
 *
 * Error code: <code>EntityTooSmall</code>
 *
 * </p <ul> <li>
 *
 * Description: Your proposed upload is smaller than the minimum allowed object size. Each part must be at least 5 MB in
 * size, except the last
 *
 * part> </li> <li>
 *
 * 400 Bad
 *
 * Reques> </li> </ul> </li> <li>
 *
 * Error code: <code>InvalidPart</code>
 *
 * </p <ul> <li>
 *
 * Description: One or more of the specified parts could not be found. The part might not have been uploaded, or the
 * specified entity tag might not have matched the part's entity
 *
 * tag> </li> <li>
 *
 * 400 Bad
 *
 * Reques> </li> </ul> </li> <li>
 *
 * Error code: <code>InvalidPartOrder</code>
 *
 * </p <ul> <li>
 *
 * Description: The list of parts was not in ascending order. The parts list must be specified in order by part
 *
 * number> </li> <li>
 *
 * 400 Bad
 *
 * Reques> </li> </ul> </li> <li>
 *
 * Error code: <code>NoSuchUpload</code>
 *
 * </p <ul> <li>
 *
 * Description: The specified multipart upload does not exist. The upload ID might be invalid, or the multipart upload
 * might have been aborted or
 *
 * completed> </li> <li>
 *
 * 404 Not
 *
 * Foun> </li> </ul> </li> </ul>
 *
 * The following operations are related to
 *
 * <code>CompleteMultipartUpload</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_AbortMultipartUpload.html">AbortMultipartUpload</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListMultipartUploads.html">ListMultipartUploads</a>
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
 *
 * S3> <note>
 *
 * You can store individual objects of up to 5 TB in Amazon S3. You create a copy of your object up to 5 GB in size in a
 * single atomic action using this API. However, to copy an object greater than 5 GB, you must use the multipart upload
 * Upload Part - Copy (UploadPartCopy) API. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/CopyingObjctsUsingRESTMPUapi.html">Copy Object Using the REST
 * Multipart Upload
 *
 * API</a>> </note>
 *
 * All copy requests must be authenticated. Additionally, you must have <i>read</i> access to the source object and
 * <i>write</i> access to the destination bucket. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/RESTAuthentication.html">REST Authentication</a>. Both the Region
 * that you want to copy the object from and the Region that you want to copy the object to must be enabled for your
 *
 * account>
 *
 * A copy request might return an error when Amazon S3 receives the copy request or while Amazon S3 is copying the files.
 * If the error occurs before the copy action starts, you receive a standard Amazon S3 error. If the error occurs during
 * the copy operation, the error response is embedded in the <code>200 OK</code> response. This means that a <code>200
 * OK</code> response can contain either a success or an error. Design your application to parse the contents of the
 * response and handle it
 *
 * appropriately>
 *
 * If the copy is successful, you receive a response with information about the copied
 *
 * object> <note>
 *
 * If the request is an HTTP 1.1 request, the response is chunk encoded. If it were not, it would not contain the
 * content-length, and you would need to read the entire
 *
 * body> </note>
 *
 * The copy request charge is based on the storage class and Region that you specify for the destination object. For
 * pricing information, see <a href="http://aws.amazon.com/s3/pricing/">Amazon S3
 *
 * pricing</a>> <b>
 *
 * Amazon S3 transfer acceleration does not support cross-Region copies. If you request a cross-Region copy using a
 * transfer acceleration endpoint, you get a 400 <code>Bad Request</code> error. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/transfer-acceleration.html">Transfer
 *
 * Acceleration</a>> </b>
 *
 * <b>Metadata</b>
 *
 * </p
 *
 * When copying an object, you can preserve all metadata (default) or specify new metadata. However, the ACL is not
 * preserved and is set to private for the user making the request. To override the default ACL setting, specify a new ACL
 * when generating a copy request. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3_ACLs_UsingACLs.html">Using ACLs</a>.
 *
 * </p
 *
 * To specify whether you want the object metadata copied from the source object or replaced with metadata provided in the
 * request, you can optionally add the <code>x-amz-metadata-directive</code> header. When you grant permissions, you can
 * use the <code>s3:x-amz-metadata-directive</code> condition key to enforce certain metadata behavior when objects are
 * uploaded. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/amazon-s3-policy-keys.html">Specifying Conditions in a Policy</a>
 * in the <i>Amazon S3 User Guide</i>. For a complete list of Amazon S3-specific condition keys, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/list_amazons3.html">Actions, Resources, and Condition Keys for
 * Amazon
 *
 * S3</a>>
 *
 * <b>x-amz-copy-source-if Headers</b>
 *
 * </p
 *
 * To only copy an object under certain conditions, such as whether the <code>Etag</code> matches or whether the object was
 * modified before or after a specified date, use the following request
 *
 * parameters> <ul> <li>
 *
 * <code>x-amz-copy-source-if-match</code>
 *
 * </p </li> <li>
 *
 * <code>x-amz-copy-source-if-none-match</code>
 *
 * </p </li> <li>
 *
 * <code>x-amz-copy-source-if-unmodified-since</code>
 *
 * </p </li> <li>
 *
 * <code>x-amz-copy-source-if-modified-since</code>
 *
 * </p </li> </ul>
 *
 * If both the <code>x-amz-copy-source-if-match</code> and <code>x-amz-copy-source-if-unmodified-since</code> headers are
 * present in the request and evaluate as follows, Amazon S3 returns <code>200 OK</code> and copies the
 *
 * data> <ul> <li>
 *
 * <code>x-amz-copy-source-if-match</code> condition evaluates to
 *
 * tru> </li> <li>
 *
 * <code>x-amz-copy-source-if-unmodified-since</code> condition evaluates to
 *
 * fals> </li> </ul>
 *
 * If both the <code>x-amz-copy-source-if-none-match</code> and <code>x-amz-copy-source-if-modified-since</code> headers
 * are present in the request and evaluate as follows, Amazon S3 returns the <code>412 Precondition Failed</code> response
 *
 * code> <ul> <li>
 *
 * <code>x-amz-copy-source-if-none-match</code> condition evaluates to
 *
 * fals> </li> <li>
 *
 * <code>x-amz-copy-source-if-modified-since</code> condition evaluates to
 *
 * tru> </li> </ul> <note>
 *
 * All headers with the <code>x-amz-</code> prefix, including <code>x-amz-copy-source</code>, must be
 *
 * signed> </note>
 *
 * <b>Server-side encryption</b>
 *
 * </p
 *
 * When you perform a CopyObject operation, you can optionally use the appropriate encryption-related headers to encrypt
 * the object using server-side encryption with Amazon Web Services managed encryption keys (SSE-S3 or SSE-KMS) or a
 * customer-provided encryption key. With server-side encryption, Amazon S3 encrypts your data as it writes it to disks in
 * its data centers and decrypts the data when you access it. For more information about server-side encryption, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html">Using Server-Side
 *
 * Encryption</a>>
 *
 * If a target object uses SSE-KMS, you can enable an S3 Bucket Key for the object. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/bucket-key.html">Amazon S3 Bucket Keys</a> in the <i>Amazon S3
 * User
 *
 * Guide</i>>
 *
 * <b>Access Control List (ACL)-Specific Request Headers</b>
 *
 * </p
 *
 * When copying an object, you can optionally use headers to grant ACL-based permissions. By default, all objects are
 * private. Only the owner has full access control. When adding a new object, you can grant permissions to individual
 * Amazon Web Services accounts or to predefined groups defined by Amazon S3. These permissions are then added to the ACL
 * on the object. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access Control List (ACL) Overview</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-using-rest-api.html">Managing ACLs Using the REST API</a>.
 *
 * </p
 *
 * If the bucket that you're copying objects to uses the bucket owner enforced setting for S3 Object Ownership, ACLs are
 * disabled and no longer affect permissions. Buckets that use this setting only accept PUT requests that don't specify an
 * ACL or PUT requests that specify bucket owner full control ACLs, such as the <code>bucket-owner-full-control</code>
 * canned ACL or an equivalent form of this ACL expressed in the XML
 *
 * format>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/about-object-ownership.html">
 * Controlling ownership of objects and disabling ACLs</a> in the <i>Amazon S3 User
 *
 * Guide</i>> <note>
 *
 * If your bucket uses the bucket owner enforced setting for Object Ownership, all objects written to the bucket by any
 * account will be owned by the bucket
 *
 * owner> </note>
 *
 * <b>Checksums</b>
 *
 * </p
 *
 * When copying an object, if it has a checksum, that checksum will be copied to the new object by default. When you copy
 * the object over, you may optionally specify a different checksum algorithm to use with the
 * <code>x-amz-checksum-algorithm</code>
 *
 * header>
 *
 * <b>Storage Class Options</b>
 *
 * </p
 *
 * You can use the <code>CopyObject</code> action to change the storage class of an object that is already stored in Amazon
 * S3 using the <code>StorageClass</code> parameter. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html">Storage Classes</a> in the <i>Amazon S3
 * User
 *
 * Guide</i>>
 *
 * <b>Versioning</b>
 *
 * </p
 *
 * By default, <code>x-amz-copy-source</code> identifies the current version of an object to copy. If the current version
 * is a delete marker, Amazon S3 behaves as if the object was deleted. To copy a different version, use the
 * <code>versionId</code>
 *
 * subresource>
 *
 * If you enable versioning on the target bucket, Amazon S3 generates a unique version ID for the object being copied. This
 * version ID is different from the version ID of the source object. Amazon S3 returns the version ID of the copied object
 * in the <code>x-amz-version-id</code> response header in the
 *
 * response>
 *
 * If you do not enable versioning or suspend it on the target bucket, the version ID that Amazon S3 generates is always
 *
 * null>
 *
 * If the source object's storage class is GLACIER, you must restore a copy of this object before you can use it as a
 * source object for the copy operation. For more information, see <a
 *
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_RestoreObject.html">RestoreObject</a>>
 *
 * The following operations are related to
 *
 * <code>CopyObject</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
 *
 * </p </li> </ul>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/CopyingObjectsExamples.html">Copying
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
 * Creates a new S3 bucket. To create a bucket, you must register with Amazon S3 and have a valid Amazon Web Services
 * Access Key ID to authenticate requests. Anonymous requests are never allowed to create buckets. By creating the bucket,
 * you become the bucket
 *
 * owner>
 *
 * Not every string is an acceptable bucket name. For information about bucket naming restrictions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/bucketnamingrules.html">Bucket naming
 *
 * rules</a>>
 *
 * If you want to create an Amazon S3 on Outposts bucket, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateBucket.html">Create Bucket</a>.
 *
 * </p
 *
 * By default, the bucket is created in the US East (N. Virginia) Region. You can optionally specify a Region in the
 * request body. You might choose a Region to optimize latency, minimize costs, or address regulatory requirements. For
 * example, if you reside in Europe, you will probably find it advantageous to create buckets in the Europe (Ireland)
 * Region. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingBucket.html#access-bucket-intro">Accessing a
 *
 * bucket</a>> <note>
 *
 * If you send your create bucket request to the <code>s3.amazonaws.com</code> endpoint, the request goes to the us-east-1
 * Region. Accordingly, the signature calculations in Signature Version 4 must use us-east-1 as the Region, even if the
 * location constraint in the request specifies another Region where the bucket is to be created. If you create a bucket in
 * a Region other than US East (N. Virginia), your application must be able to handle 307 redirect. For more information,
 * see <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/VirtualHosting.html">Virtual hosting of
 *
 * buckets</a>> </note>
 *
 * <b>Access control lists (ACLs)</b>
 *
 * </p
 *
 * When creating a bucket using this operation, you can optionally configure the bucket ACL to specify the accounts or
 * groups that should be granted specific permissions on the
 *
 * bucket> <b>
 *
 * If your CreateBucket request sets bucket owner enforced for S3 Object Ownership and specifies a bucket ACL that provides
 * access to an external Amazon Web Services account, your request fails with a <code>400</code> error and returns the
 * <code>InvalidBucketAclWithObjectOwnership</code> error code. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/about-object-ownership.html">Controlling object
 * ownership</a> in the <i>Amazon S3 User
 *
 * Guide</i>> </b>
 *
 * There are two ways to grant the appropriate permissions using the request
 *
 * headers> <ul> <li>
 *
 * Specify a canned ACL using the <code>x-amz-acl</code> request header. Amazon S3 supports a set of predefined ACLs, known
 * as <i>canned ACLs</i>. Each canned ACL has a predefined set of grantees and permissions. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#CannedACL">Canned
 *
 * ACL</a>> </li> <li>
 *
 * Specify access permissions explicitly using the <code>x-amz-grant-read</code>, <code>x-amz-grant-write</code>,
 * <code>x-amz-grant-read-acp</code>, <code>x-amz-grant-write-acp</code>, and <code>x-amz-grant-full-control</code>
 * headers. These headers map to the set of permissions Amazon S3 supports in an ACL. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/acl-overview.html">Access control list (ACL)
 *
 * overview</a>>
 *
 * You specify each grantee as a type=value pair, where the type is one of the
 *
 * following> <ul> <li>
 *
 * <code>id</code> – if the value specified is the canonical user ID of an Amazon Web Services
 *
 * accoun> </li> <li>
 *
 * <code>uri</code> – if you are granting permissions to a predefined
 *
 * grou> </li> <li>
 *
 * <code>emailAddress</code> – if the value specified is the email address of an Amazon Web Services
 *
 * accoun> <note>
 *
 * Using email addresses to specify a grantee is only supported in the following Amazon Web Services Regions:
 *
 * </p <ul> <li>
 *
 * US East (N.
 *
 * Virginia> </li> <li>
 *
 * US West (N.
 *
 * California> </li> <li>
 *
 * US West
 *
 * (Oregon> </li> <li>
 *
 * Asia Pacific
 *
 * (Singapore> </li> <li>
 *
 * Asia Pacific
 *
 * (Sydney> </li> <li>
 *
 * Asia Pacific
 *
 * (Tokyo> </li> <li>
 *
 * Europe
 *
 * (Ireland> </li> <li>
 *
 * South America (São
 *
 * Paulo> </li> </ul>
 *
 * For a list of all the Amazon S3 supported Regions and endpoints, see <a
 * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#s3_region">Regions and Endpoints</a> in the Amazon Web
 * Services General
 *
 * Reference> </note> </li> </ul>
 *
 * For example, the following <code>x-amz-grant-read</code> header grants the Amazon Web Services accounts identified by
 * account IDs permissions to read object data and its
 *
 * metadata>
 *
 * <code>x-amz-grant-read: id="11112222333", id="444455556666" </code>
 *
 * </p </li> </ul> <note>
 *
 * You can use either a canned ACL or specify access permissions explicitly. You cannot do
 *
 * both> </note>
 *
 * <b>Permissions</b>
 *
 * </p
 *
 * In addition to <code>s3:CreateBucket</code>, the following permissions are required when your CreateBucket includes
 * specific
 *
 * headers> <ul> <li>
 *
 * <b>ACLs</b> - If your <code>CreateBucket</code> request specifies ACL permissions and the ACL is public-read,
 * public-read-write, authenticated-read, or if you specify access permissions explicitly through any other ACL, both
 * <code>s3:CreateBucket</code> and <code>s3:PutBucketAcl</code> permissions are needed. If the ACL the
 * <code>CreateBucket</code> request is private or doesn't specify any ACLs, only <code>s3:CreateBucket</code> permission
 * is needed.
 *
 * </p </li> <li>
 *
 * <b>Object Lock</b> - If <code>ObjectLockEnabledForBucket</code> is set to true in your <code>CreateBucket</code>
 * request, <code>s3:PutBucketObjectLockConfiguration</code> and <code>s3:PutBucketVersioning</code> permissions are
 *
 * required> </li> <li>
 *
 * <b>S3 Object Ownership</b> - If your CreateBucket request includes the the <code>x-amz-object-ownership</code> header,
 * <code>s3:PutBucketOwnershipControls</code> permission is
 *
 * required> </li> </ul>
 *
 * The following operations are related to
 *
 * <code>CreateBucket</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucket.html">DeleteBucket</a>
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
 * This action initiates a multipart upload and returns an upload ID. This upload ID is used to associate all of the parts
 * in the specific multipart upload. You specify this upload ID in each of your subsequent upload part requests (see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>). You also include this upload
 * ID in the final request to either complete or abort the multipart upload
 *
 * request>
 *
 * For more information about multipart uploads, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuoverview.html">Multipart Upload
 *
 * Overview</a>>
 *
 * If you have configured a lifecycle rule to abort incomplete multipart uploads, the upload must complete within the
 * number of days specified in the bucket lifecycle configuration. Otherwise, the incomplete multipart upload becomes
 * eligible for an abort action and Amazon S3 aborts the multipart upload. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuoverview.html#mpu-abort-incomplete-mpu-lifecycle-config">Aborting
 * Incomplete Multipart Uploads Using a Bucket Lifecycle
 *
 * Policy</a>>
 *
 * For information about the permissions required to use the multipart upload API, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuAndPermissions.html">Multipart Upload and
 *
 * Permissions</a>>
 *
 * For request signing, multipart upload is just a series of regular requests. You initiate a multipart upload, send one or
 * more requests to upload parts, and then complete the multipart upload process. You sign each request individually. There
 * is nothing special about signing multipart upload requests. For more information about signing, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sig-v4-authenticating-requests.html">Authenticating Requests
 * (Amazon Web Services Signature Version
 *
 * 4)</a>> <note>
 *
 * After you initiate a multipart upload and upload one or more parts, to stop being charged for storing the uploaded
 * parts, you must either complete or abort the multipart upload. Amazon S3 frees up the space used to store the parts and
 * stop charging you for storing them only after you either complete or abort a multipart upload.
 *
 * </p </note>
 *
 * You can optionally request server-side encryption. For server-side encryption, Amazon S3 encrypts your data as it writes
 * it to disks in its data centers and decrypts it when you access it. You can provide your own encryption key, or use
 * Amazon Web Services KMS keys or Amazon S3-managed encryption keys. If you choose to provide your own encryption key, the
 * request headers you provide in <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPartCopy.html">UploadPartCopy</a> requests must match
 * the headers you used in the request to initiate the upload by using <code>CreateMultipartUpload</code>.
 *
 * </p
 *
 * To perform a multipart upload with encryption using an Amazon Web Services KMS key, the requester must have permission
 * to the <code>kms:Decrypt</code> and <code>kms:GenerateDataKey*</code> actions on the key. These permissions are required
 * because Amazon S3 must decrypt and read data from the encrypted file parts before it completes the multipart upload. For
 * more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/mpuoverview.html#mpuAndPermissions">Multipart upload API and
 * permissions</a> in the <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * If your Identity and Access Management (IAM) user or role is in the same Amazon Web Services account as the KMS key,
 * then you must have these permissions on the key policy. If your IAM user or role belongs to a different account than the
 * key, then you must have the permissions on both the key policy and your IAM user or
 *
 * role>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html">Protecting
 * Data Using Server-Side
 *
 * Encryption</a>> <dl> <dt>Access Permissions</dt> <dd>
 *
 * When copying an object, you can optionally specify the accounts or groups that should be granted specific permissions on
 * the new object. There are two ways to grant the permissions using the request
 *
 * headers> <ul> <li>
 *
 * Specify a canned ACL with the <code>x-amz-acl</code> request header. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#CannedACL">Canned
 *
 * ACL</a>> </li> <li>
 *
 * Specify access permissions explicitly with the <code>x-amz-grant-read</code>, <code>x-amz-grant-read-acp</code>,
 * <code>x-amz-grant-write-acp</code>, and <code>x-amz-grant-full-control</code> headers. These parameters map to the set
 * of permissions that Amazon S3 supports in an ACL. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access Control List (ACL)
 *
 * Overview</a>> </li> </ul>
 *
 * You can use either a canned ACL or specify access permissions explicitly. You cannot do
 *
 * both> </dd> <dt>Server-Side- Encryption-Specific Request Headers</dt> <dd>
 *
 * You can optionally tell Amazon S3 to encrypt data at rest using server-side encryption. Server-side encryption is for
 * data encryption at rest. Amazon S3 encrypts your data as it writes it to disks in its data centers and decrypts it when
 * you access it. The option you use depends on whether you want to use Amazon Web Services managed encryption keys or
 * provide your own encryption key.
 *
 * </p <ul> <li>
 *
 * Use encryption keys managed by Amazon S3 or customer managed key stored in Amazon Web Services Key Management Service
 * (Amazon Web Services KMS) – If you want Amazon Web Services to manage the keys used to encrypt data, specify the
 * following headers in the
 *
 * request> <ul> <li>
 *
 * <code>x-amz-server-side-encryption</code>
 *
 * </p </li> <li>
 *
 * <code>x-amz-server-side-encryption-aws-kms-key-id</code>
 *
 * </p </li> <li>
 *
 * <code>x-amz-server-side-encryption-context</code>
 *
 * </p </li> </ul> <note>
 *
 * If you specify <code>x-amz-server-side-encryption:aws:kms</code>, but don't provide
 * <code>x-amz-server-side-encryption-aws-kms-key-id</code>, Amazon S3 uses the Amazon Web Services managed key in Amazon
 * Web Services KMS to protect the
 *
 * data> </note> <b>
 *
 * All GET and PUT requests for an object protected by Amazon Web Services KMS fail if you don't make them with SSL or by
 * using
 *
 * SigV4> </b>
 *
 * For more information about server-side encryption with KMS key (SSE-KMS), see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">Protecting Data Using Server-Side
 * Encryption with KMS
 *
 * keys</a>> </li> <li>
 *
 * Use customer-provided encryption keys – If you want to manage your own encryption keys, provide all the following
 * headers in the
 *
 * request> <ul> <li>
 *
 * <code>x-amz-server-side-encryption-customer-algorithm</code>
 *
 * </p </li> <li>
 *
 * <code>x-amz-server-side-encryption-customer-key</code>
 *
 * </p </li> <li>
 *
 * <code>x-amz-server-side-encryption-customer-key-MD5</code>
 *
 * </p </li> </ul>
 *
 * For more information about server-side encryption with KMS keys (SSE-KMS), see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">Protecting Data Using Server-Side
 * Encryption with KMS
 *
 * keys</a>> </li> </ul> </dd> <dt>Access-Control-List (ACL)-Specific Request Headers</dt> <dd>
 *
 * You also can use the following access control–related headers with this operation. By default, all objects are private.
 * Only the owner has full access control. When adding a new object, you can grant permissions to individual Amazon Web
 * Services accounts or to predefined groups defined by Amazon S3. These permissions are then added to the access control
 * list (ACL) on the object. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3_ACLs_UsingACLs.html">Using ACLs</a>. With this operation, you
 * can grant access permissions using one of the following two
 *
 * methods> <ul> <li>
 *
 * Specify a canned ACL (<code>x-amz-acl</code>) — Amazon S3 supports a set of predefined ACLs, known as <i>canned
 * ACLs</i>. Each canned ACL has a predefined set of grantees and permissions. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#CannedACL">Canned
 *
 * ACL</a>> </li> <li>
 *
 * Specify access permissions explicitly — To explicitly grant access permissions to specific Amazon Web Services accounts
 * or groups, use the following headers. Each header maps to specific permissions that Amazon S3 supports in an ACL. For
 * more information, see <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access Control List
 * (ACL) Overview</a>. In the header, you specify a list of grantees who get the specific permission. To grant permissions
 * explicitly,
 *
 * use> <ul> <li>
 *
 * <code>x-amz-grant-read</code>
 *
 * </p </li> <li>
 *
 * <code>x-amz-grant-write</code>
 *
 * </p </li> <li>
 *
 * <code>x-amz-grant-read-acp</code>
 *
 * </p </li> <li>
 *
 * <code>x-amz-grant-write-acp</code>
 *
 * </p </li> <li>
 *
 * <code>x-amz-grant-full-control</code>
 *
 * </p </li> </ul>
 *
 * You specify each grantee as a type=value pair, where the type is one of the
 *
 * following> <ul> <li>
 *
 * <code>id</code> – if the value specified is the canonical user ID of an Amazon Web Services
 *
 * accoun> </li> <li>
 *
 * <code>uri</code> – if you are granting permissions to a predefined
 *
 * grou> </li> <li>
 *
 * <code>emailAddress</code> – if the value specified is the email address of an Amazon Web Services
 *
 * accoun> <note>
 *
 * Using email addresses to specify a grantee is only supported in the following Amazon Web Services Regions:
 *
 * </p <ul> <li>
 *
 * US East (N.
 *
 * Virginia> </li> <li>
 *
 * US West (N.
 *
 * California> </li> <li>
 *
 * US West
 *
 * (Oregon> </li> <li>
 *
 * Asia Pacific
 *
 * (Singapore> </li> <li>
 *
 * Asia Pacific
 *
 * (Sydney> </li> <li>
 *
 * Asia Pacific
 *
 * (Tokyo> </li> <li>
 *
 * Europe
 *
 * (Ireland> </li> <li>
 *
 * South America (São
 *
 * Paulo> </li> </ul>
 *
 * For a list of all the Amazon S3 supported Regions and endpoints, see <a
 * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#s3_region">Regions and Endpoints</a> in the Amazon Web
 * Services General
 *
 * Reference> </note> </li> </ul>
 *
 * For example, the following <code>x-amz-grant-read</code> header grants the Amazon Web Services accounts identified by
 * account IDs permissions to read object data and its
 *
 * metadata>
 *
 * <code>x-amz-grant-read: id="11112222333", id="444455556666" </code>
 *
 * </p </li> </ul> </dd> </dl>
 *
 * The following operations are related to
 *
 * <code>CreateMultipartUpload</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CompleteMultipartUpload.html">CompleteMultipartUpload</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_AbortMultipartUpload.html">AbortMultipartUpload</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListMultipartUploads.html">ListMultipartUploads</a>
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
 * Deletes the S3 bucket. All objects (including all object versions and delete markers) in the bucket must be deleted
 * before the bucket itself can be
 *
 * deleted> <p class="title"> <b>Related Resources</b>
 *
 * </p <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObject.html">DeleteObject</a>
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
 *
 * ID)>
 *
 * To use this operation, you must have permissions to perform the <code>s3:PutAnalyticsConfiguration</code> action. The
 * bucket owner has this permission by default. The bucket owner can grant this permission to others. For more information
 * about permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
 * Related to Bucket Subresource Operations</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing Access Permissions to Your
 * Amazon S3
 *
 * Resources</a>>
 *
 * For information about the Amazon S3 analytics feature, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/analytics-storage-class.html">Amazon S3 Analytics – Storage Class
 * Analysis</a>.
 *
 * </p
 *
 * The following operations are related to
 *
 * <code>DeleteBucketAnalyticsConfiguration</code>> <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketAnalyticsConfiguration.html">GetBucketAnalyticsConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketAnalyticsConfigurations.html">ListBucketAnalyticsConfigurations</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketAnalyticsConfiguration.html">PutBucketAnalyticsConfiguration</a>
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
 * Deletes the <code>cors</code> configuration information set for the
 *
 * bucket>
 *
 * To use this operation, you must have permission to perform the <code>s3:PutBucketCORS</code> action. The bucket owner
 * has this permission by default and can grant this permission to others.
 *
 * </p
 *
 * For information about <code>cors</code>, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cors.html">Enabling Cross-Origin Resource Sharing</a> in the
 * <i>Amazon S3 User
 *
 * Guide</i>> <p class="title"> <b>Related Resources:</b>
 *
 * </p <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketCors.html">PutBucketCors</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTOPTIONSobject.html">RESTOPTIONSobject</a>
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
 * This implementation of the DELETE action removes default encryption from the bucket. For information about the Amazon S3
 * default encryption feature, see <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/bucket-encryption.html">Amazon
 * S3 Default Bucket Encryption</a> in the <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * To use this operation, you must have permissions to perform the <code>s3:PutEncryptionConfiguration</code> action. The
 * bucket owner has this permission by default. The bucket owner can grant this permission to others. For more information
 * about permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
 * Related to Bucket Subresource Operations</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing Access Permissions to your
 * Amazon S3 Resources</a> in the <i>Amazon S3 User
 *
 * Guide</i>> <p class="title"> <b>Related Resources</b>
 *
 * </p <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketEncryption.html">PutBucketEncryption</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketEncryption.html">GetBucketEncryption</a>
 */
DeleteBucketEncryptionResponse * S3Client::deleteBucketEncryption(const DeleteBucketEncryptionRequest &request)
{
    return qobject_cast<DeleteBucketEncryptionResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * DeleteBucketIntelligentTieringConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the S3 Intelligent-Tiering configuration from the specified
 *
 * bucket>
 *
 * The S3 Intelligent-Tiering storage class is designed to optimize storage costs by automatically moving data to the most
 * cost-effective storage access tier, without performance impact or operational overhead. S3 Intelligent-Tiering delivers
 * automatic cost savings in three low latency and high throughput access tiers. To get the lowest storage cost on data
 * that can be accessed in minutes to hours, you can choose to activate additional archiving
 *
 * capabilities>
 *
 * The S3 Intelligent-Tiering storage class is the ideal storage class for data with unknown, changing, or unpredictable
 * access patterns, independent of object size or retention period. If the size of an object is less than 128 KB, it is not
 * monitored and not eligible for auto-tiering. Smaller objects can be stored, but they are always charged at the Frequent
 * Access tier rates in the S3 Intelligent-Tiering storage
 *
 * class>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html#sc-dynamic-data-access">Storage class for
 * automatically optimizing frequently and infrequently accessed
 *
 * objects</a>>
 *
 * Operations related to <code>DeleteBucketIntelligentTieringConfiguration</code> include:
 *
 * </p <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketIntelligentTieringConfiguration.html">GetBucketIntelligentTieringConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketIntelligentTieringConfiguration.html">PutBucketIntelligentTieringConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketIntelligentTieringConfigurations.html">ListBucketIntelligentTieringConfigurations</a>
 */
DeleteBucketIntelligentTieringConfigurationResponse * S3Client::deleteBucketIntelligentTieringConfiguration(const DeleteBucketIntelligentTieringConfigurationRequest &request)
{
    return qobject_cast<DeleteBucketIntelligentTieringConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * DeleteBucketInventoryConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an inventory configuration (identified by the inventory ID) from the
 *
 * bucket>
 *
 * To use this operation, you must have permissions to perform the <code>s3:PutInventoryConfiguration</code> action. The
 * bucket owner has this permission by default. The bucket owner can grant this permission to others. For more information
 * about permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
 * Related to Bucket Subresource Operations</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing Access Permissions to Your
 * Amazon S3
 *
 * Resources</a>>
 *
 * For information about the Amazon S3 inventory feature, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-inventory.html">Amazon S3
 *
 * Inventory</a>>
 *
 * Operations related to <code>DeleteBucketInventoryConfiguration</code> include:
 *
 * </p <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketInventoryConfiguration.html">GetBucketInventoryConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketInventoryConfiguration.html">PutBucketInventoryConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketInventoryConfigurations.html">ListBucketInventoryConfigurations</a>
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
 * Deletes the lifecycle configuration from the specified bucket. Amazon S3 removes all the lifecycle configuration rules
 * in the lifecycle subresource associated with the bucket. Your objects never expire, and Amazon S3 no longer
 * automatically deletes any objects on the basis of rules contained in the deleted lifecycle
 *
 * configuration>
 *
 * To use this operation, you must have permission to perform the <code>s3:PutLifecycleConfiguration</code> action. By
 * default, the bucket owner has this permission and the bucket owner can grant this permission to
 *
 * others>
 *
 * There is usually some time lag before lifecycle configuration deletion is fully propagated to all the Amazon S3
 *
 * systems>
 *
 * For more information about the object expiration, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/intro-lifecycle-rules.html#intro-lifecycle-rules-actions">Elements
 * to Describe Lifecycle
 *
 * Actions</a>>
 *
 * Related actions
 *
 * include> <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
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
 * Deletes a metrics configuration for the Amazon CloudWatch request metrics (specified by the metrics configuration ID)
 * from the bucket. Note that this doesn't include the daily storage
 *
 * metrics>
 *
 * To use this operation, you must have permissions to perform the <code>s3:PutMetricsConfiguration</code> action. The
 * bucket owner has this permission by default. The bucket owner can grant this permission to others. For more information
 * about permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
 * Related to Bucket Subresource Operations</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing Access Permissions to Your
 * Amazon S3
 *
 * Resources</a>>
 *
 * For information about CloudWatch request metrics for Amazon S3, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cloudwatch-monitoring.html">Monitoring Metrics with Amazon
 * CloudWatch</a>.
 *
 * </p
 *
 * The following operations are related to
 *
 * <code>DeleteBucketMetricsConfiguration</code>> <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketMetricsConfiguration.html">GetBucketMetricsConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketMetricsConfiguration.html">PutBucketMetricsConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketMetricsConfigurations.html">ListBucketMetricsConfigurations</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cloudwatch-monitoring.html">Monitoring Metrics with Amazon
 * CloudWatch</a>
 */
DeleteBucketMetricsConfigurationResponse * S3Client::deleteBucketMetricsConfiguration(const DeleteBucketMetricsConfigurationRequest &request)
{
    return qobject_cast<DeleteBucketMetricsConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * DeleteBucketOwnershipControlsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes <code>OwnershipControls</code> for an Amazon S3 bucket. To use this operation, you must have the
 * <code>s3:PutBucketOwnershipControls</code> permission. For more information about Amazon S3 permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying Permissions in a
 *
 * Policy</a>>
 *
 * For information about Amazon S3 Object Ownership, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/about-object-ownership.html">Using Object Ownership</a>.
 *
 * </p
 *
 * The following operations are related to
 *
 * <code>DeleteBucketOwnershipControls</code>> <ul> <li>
 *
 * <a>GetBucketOwnershipControls</a>
 *
 * </p </li> <li>
 *
 * <a>PutBucketOwnershipControls</a>
 */
DeleteBucketOwnershipControlsResponse * S3Client::deleteBucketOwnershipControls(const DeleteBucketOwnershipControlsRequest &request)
{
    return qobject_cast<DeleteBucketOwnershipControlsResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * DeleteBucketPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This implementation of the DELETE action uses the policy subresource to delete the policy of a specified bucket. If you
 * are using an identity other than the root user of the Amazon Web Services account that owns the bucket, the calling
 * identity must have the <code>DeleteBucketPolicy</code> permissions on the specified bucket and belong to the bucket
 * owner's account to use this operation.
 *
 * </p
 *
 * If you don't have <code>DeleteBucketPolicy</code> permissions, Amazon S3 returns a <code>403 Access Denied</code> error.
 * If you have the correct permissions, but you're not using an identity that belongs to the bucket owner's account, Amazon
 * S3 returns a <code>405 Method Not Allowed</code> error.
 *
 * </p <b>
 *
 * As a security precaution, the root user of the Amazon Web Services account that owns a bucket can always use this
 * operation, even if the policy explicitly denies the root user the ability to perform this
 *
 * action> </b>
 *
 * For more information about bucket policies, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using Bucket Policies and
 * UserPolicies</a>.
 *
 * </p
 *
 * The following operations are related to <code>DeleteBucketPolicy</code>
 *
 * </p <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObject.html">DeleteObject</a>
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
 *
 * bucket>
 *
 * To use this operation, you must have permissions to perform the <code>s3:PutReplicationConfiguration</code> action. The
 * bucket owner has these permissions by default and can grant it to others. For more information about permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
 * Related to Bucket Subresource Operations</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing Access Permissions to Your
 * Amazon S3 Resources</a>.
 *
 * </p <note>
 *
 * It can take a while for the deletion of a replication configuration to fully
 *
 * propagate> </note>
 *
 * For information about replication configuration, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/replication.html">Replication</a> in the <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * The following operations are related to
 *
 * <code>DeleteBucketReplication</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketReplication.html">PutBucketReplication</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketReplication.html">GetBucketReplication</a>
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
 *
 * bucket>
 *
 * To use this operation, you must have permission to perform the <code>s3:PutBucketTagging</code> action. By default, the
 * bucket owner has this permission and can grant this permission to others.
 *
 * </p
 *
 * The following operations are related to
 *
 * <code>DeleteBucketTagging</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketTagging.html">GetBucketTagging</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketTagging.html">PutBucketTagging</a>
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
 * This action removes the website configuration for a bucket. Amazon S3 returns a <code>200 OK</code> response upon
 * successfully deleting a website configuration on the specified bucket. You will get a <code>200 OK</code> response if
 * the website configuration you are trying to delete does not exist on the bucket. Amazon S3 returns a <code>404</code>
 * response if the bucket specified in the request does not
 *
 * exist>
 *
 * This DELETE action requires the <code>S3:DeleteBucketWebsite</code> permission. By default, only the bucket owner can
 * delete the website configuration attached to a bucket. However, bucket owners can grant other users permission to delete
 * the website configuration by writing a bucket policy granting them the <code>S3:DeleteBucketWebsite</code> permission.
 *
 * </p
 *
 * For more information about hosting websites, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/WebsiteHosting.html">Hosting Websites on Amazon S3</a>.
 *
 * </p
 *
 * The following operations are related to
 *
 * <code>DeleteBucketWebsite</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketWebsite.html">GetBucketWebsite</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketWebsite.html">PutBucketWebsite</a>
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
 * the object. If there isn't a null version, Amazon S3 does not remove any objects but will still respond that the command
 * was
 *
 * successful>
 *
 * To remove a specific version, you must be the bucket owner and you must use the version Id subresource. Using this
 * subresource permanently deletes the version. If the object deleted is a delete marker, Amazon S3 sets the response
 * header, <code>x-amz-delete-marker</code>, to true.
 *
 * </p
 *
 * If the object you want to delete is in a bucket where the bucket versioning configuration is MFA Delete enabled, you
 * must include the <code>x-amz-mfa</code> request header in the DELETE <code>versionId</code> request. Requests that
 * include <code>x-amz-mfa</code> must use HTTPS.
 *
 * </p
 *
 * For more information about MFA Delete, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMFADelete.html">Using MFA Delete</a>. To see sample requests
 * that use versioning, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTObjectDELETE.html#ExampleVersionObjectDelete">Sample
 * Request</a>.
 *
 * </p
 *
 * You can delete objects by explicitly calling DELETE Object or configure its lifecycle (<a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycle.html">PutBucketLifecycle</a>) to enable
 * Amazon S3 to remove them for you. If you want to block users or accounts from removing or deleting objects from your
 * bucket, you must deny them the <code>s3:DeleteObject</code>, <code>s3:DeleteObjectVersion</code>, and
 * <code>s3:PutLifeCycleConfiguration</code> actions.
 *
 * </p
 *
 * The following action is related to
 *
 * <code>DeleteObject</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
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
 * Removes the entire tag set from the specified object. For more information about managing object tags, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-tagging.html"> Object
 *
 * Tagging</a>>
 *
 * To use this operation, you must have permission to perform the <code>s3:DeleteObjectTagging</code>
 *
 * action>
 *
 * To delete tags of a specific object version, add the <code>versionId</code> query parameter in the request. You will
 * need permission for the <code>s3:DeleteObjectVersionTagging</code>
 *
 * action>
 *
 * The following operations are related to
 *
 * <code>DeleteBucketMetricsConfiguration</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObjectTagging.html">PutObjectTagging</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectTagging.html">GetObjectTagging</a>
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
 * This action enables you to delete multiple objects from a bucket using a single HTTP request. If you know the object
 * keys that you want to delete, then this action provides a suitable alternative to sending individual delete requests,
 * reducing per-request
 *
 * overhead>
 *
 * The request contains a list of up to 1000 keys that you want to delete. In the XML, you provide the object key names,
 * and optionally, version IDs if you want to delete a specific version of the object from a versioning-enabled bucket. For
 * each key, Amazon S3 performs a delete action and returns the result of that delete, success, or failure, in the
 * response. Note that if the object specified in the request is not found, Amazon S3 returns the result as
 *
 * deleted>
 *
 * The action supports two modes for the response: verbose and quiet. By default, the action uses verbose mode in which the
 * response includes the result of deletion of each key in your request. In quiet mode the response includes only keys
 * where the delete action encountered an error. For a successful deletion, the action does not return any information
 * about the delete in the response
 *
 * body>
 *
 * When performing this action on an MFA Delete enabled bucket, that attempts to delete any versioned objects, you must
 * include an MFA token. If you do not provide one, the entire request will fail, even if there are non-versioned objects
 * you are trying to delete. If you provide an invalid token, whether there are versioned keys in the request or not, the
 * entire Multi-Object Delete request will fail. For information about MFA Delete, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/Versioning.html#MultiFactorAuthenticationDelete"> MFA
 *
 * Delete</a>>
 *
 * Finally, the Content-MD5 header is required for all Multi-Object Delete requests. Amazon S3 uses the header value to
 * ensure that your request body has not been altered in
 *
 * transit>
 *
 * The following operations are related to
 *
 * <code>DeleteObjects</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CompleteMultipartUpload.html">CompleteMultipartUpload</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_AbortMultipartUpload.html">AbortMultipartUpload</a>
 */
DeleteObjectsResponse * S3Client::deleteObjects(const DeleteObjectsRequest &request)
{
    return qobject_cast<DeleteObjectsResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * DeletePublicAccessBlockResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the <code>PublicAccessBlock</code> configuration for an Amazon S3 bucket. To use this operation, you must have
 * the <code>s3:PutBucketPublicAccessBlock</code> permission. For more information about permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
 * Related to Bucket Subresource Operations</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing Access Permissions to Your
 * Amazon S3
 *
 * Resources</a>>
 *
 * The following operations are related to
 *
 * <code>DeletePublicAccessBlock</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">Using Amazon S3 Block
 * Public Access</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetPublicAccessBlock.html">GetPublicAccessBlock</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutPublicAccessBlock.html">PutPublicAccessBlock</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketPolicyStatus.html">GetBucketPolicyStatus</a>
 */
DeletePublicAccessBlockResponse * S3Client::deletePublicAccessBlock(const DeletePublicAccessBlockRequest &request)
{
    return qobject_cast<DeletePublicAccessBlockResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetBucketAccelerateConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This implementation of the GET action uses the <code>accelerate</code> subresource to return the Transfer Acceleration
 * state of a bucket, which is either <code>Enabled</code> or <code>Suspended</code>. Amazon S3 Transfer Acceleration is a
 * bucket-level feature that enables you to perform faster data transfers to and from Amazon
 *
 * S3>
 *
 * To use this operation, you must have permission to perform the <code>s3:GetAccelerateConfiguration</code> action. The
 * bucket owner has this permission by default. The bucket owner can grant this permission to others. For more information
 * about permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
 * Related to Bucket Subresource Operations</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing Access Permissions to your
 * Amazon S3 Resources</a> in the <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * You set the Transfer Acceleration state of an existing bucket to <code>Enabled</code> or <code>Suspended</code> by using
 * the <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketAccelerateConfiguration.html">PutBucketAccelerateConfiguration</a>
 * operation.
 *
 * </p
 *
 * A GET <code>accelerate</code> request does not return a state value for a bucket that has no transfer acceleration
 * state. A bucket has no Transfer Acceleration state if a state has never been set on the bucket.
 *
 * </p
 *
 * For more information about transfer acceleration, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/transfer-acceleration.html">Transfer Acceleration</a> in the
 * Amazon S3 User
 *
 * Guide> <p class="title"> <b>Related Resources</b>
 *
 * </p <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketAccelerateConfiguration.html">PutBucketAccelerateConfiguration</a>
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
 * This implementation of the <code>GET</code> action uses the <code>acl</code> subresource to return the access control
 * list (ACL) of a bucket. To use <code>GET</code> to return the ACL of the bucket, you must have <code>READ_ACP</code>
 * access to the bucket. If <code>READ_ACP</code> permission is granted to the anonymous user, you can return the ACL of
 * the bucket without using an authorization
 *
 * header> <note>
 *
 * If your bucket uses the bucket owner enforced setting for S3 Object Ownership, requests to read ACLs are still supported
 * and return the <code>bucket-owner-full-control</code> ACL with the owner being the account that created the bucket. For
 * more information, see <a href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/about-object-ownership.html">
 * Controlling object ownership and disabling ACLs</a> in the <i>Amazon S3 User
 *
 * Guide</i>> </note> <p class="title"> <b>Related Resources</b>
 *
 * </p <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjects.html">ListObjects</a>
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
 * This implementation of the GET action returns an analytics configuration (identified by the analytics configuration ID)
 * from the
 *
 * bucket>
 *
 * To use this operation, you must have permissions to perform the <code>s3:GetAnalyticsConfiguration</code> action. The
 * bucket owner has this permission by default. The bucket owner can grant this permission to others. For more information
 * about permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">
 * Permissions Related to Bucket Subresource Operations</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing Access Permissions to Your
 * Amazon S3 Resources</a> in the <i>Amazon S3 User Guide</i>.
 *
 * </p
 *
 * For information about Amazon S3 analytics feature, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/analytics-storage-class.html">Amazon S3 Analytics – Storage Class
 * Analysis</a> in the <i>Amazon S3 User
 *
 * Guide</i>> <p class="title"> <b>Related Resources</b>
 *
 * </p <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketAnalyticsConfiguration.html">DeleteBucketAnalyticsConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketAnalyticsConfigurations.html">ListBucketAnalyticsConfigurations</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketAnalyticsConfiguration.html">PutBucketAnalyticsConfiguration</a>
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
 * Returns the Cross-Origin Resource Sharing (CORS) configuration information set for the
 *
 * bucket>
 *
 * To use this operation, you must have permission to perform the <code>s3:GetBucketCORS</code> action. By default, the
 * bucket owner has this permission and can grant it to
 *
 * others>
 *
 * For more information about CORS, see <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cors.html"> Enabling
 * Cross-Origin Resource
 *
 * Sharing</a>>
 *
 * The following operations are related to
 *
 * <code>GetBucketCors</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketCors.html">PutBucketCors</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketCors.html">DeleteBucketCors</a>
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
 * Returns the default encryption configuration for an Amazon S3 bucket. If the bucket does not have a default encryption
 * configuration, GetBucketEncryption returns <code>ServerSideEncryptionConfigurationNotFoundError</code>.
 *
 * </p
 *
 * For information about the Amazon S3 default encryption feature, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/bucket-encryption.html">Amazon S3 Default Bucket
 *
 * Encryption</a>>
 *
 * To use this operation, you must have permission to perform the <code>s3:GetEncryptionConfiguration</code> action. The
 * bucket owner has this permission by default. The bucket owner can grant this permission to others. For more information
 * about permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
 * Related to Bucket Subresource Operations</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing Access Permissions to Your
 * Amazon S3
 *
 * Resources</a>>
 *
 * The following operations are related to
 *
 * <code>GetBucketEncryption</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketEncryption.html">PutBucketEncryption</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketEncryption.html">DeleteBucketEncryption</a>
 */
GetBucketEncryptionResponse * S3Client::getBucketEncryption(const GetBucketEncryptionRequest &request)
{
    return qobject_cast<GetBucketEncryptionResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetBucketIntelligentTieringConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the S3 Intelligent-Tiering configuration from the specified
 *
 * bucket>
 *
 * The S3 Intelligent-Tiering storage class is designed to optimize storage costs by automatically moving data to the most
 * cost-effective storage access tier, without performance impact or operational overhead. S3 Intelligent-Tiering delivers
 * automatic cost savings in three low latency and high throughput access tiers. To get the lowest storage cost on data
 * that can be accessed in minutes to hours, you can choose to activate additional archiving
 *
 * capabilities>
 *
 * The S3 Intelligent-Tiering storage class is the ideal storage class for data with unknown, changing, or unpredictable
 * access patterns, independent of object size or retention period. If the size of an object is less than 128 KB, it is not
 * monitored and not eligible for auto-tiering. Smaller objects can be stored, but they are always charged at the Frequent
 * Access tier rates in the S3 Intelligent-Tiering storage
 *
 * class>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html#sc-dynamic-data-access">Storage class for
 * automatically optimizing frequently and infrequently accessed
 *
 * objects</a>>
 *
 * Operations related to <code>GetBucketIntelligentTieringConfiguration</code> include:
 *
 * </p <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketIntelligentTieringConfiguration.html">DeleteBucketIntelligentTieringConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketIntelligentTieringConfiguration.html">PutBucketIntelligentTieringConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketIntelligentTieringConfigurations.html">ListBucketIntelligentTieringConfigurations</a>
 */
GetBucketIntelligentTieringConfigurationResponse * S3Client::getBucketIntelligentTieringConfiguration(const GetBucketIntelligentTieringConfigurationRequest &request)
{
    return qobject_cast<GetBucketIntelligentTieringConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetBucketInventoryConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an inventory configuration (identified by the inventory configuration ID) from the
 *
 * bucket>
 *
 * To use this operation, you must have permissions to perform the <code>s3:GetInventoryConfiguration</code> action. The
 * bucket owner has this permission by default and can grant this permission to others. For more information about
 * permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
 * Related to Bucket Subresource Operations</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing Access Permissions to Your
 * Amazon S3
 *
 * Resources</a>>
 *
 * For information about the Amazon S3 inventory feature, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-inventory.html">Amazon S3
 *
 * Inventory</a>>
 *
 * The following operations are related to
 *
 * <code>GetBucketInventoryConfiguration</code>> <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketInventoryConfiguration.html">DeleteBucketInventoryConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketInventoryConfigurations.html">ListBucketInventoryConfigurations</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketInventoryConfiguration.html">PutBucketInventoryConfiguration</a>
 */
GetBucketInventoryConfigurationResponse * S3Client::getBucketInventoryConfiguration(const GetBucketInventoryConfigurationRequest &request)
{
    return qobject_cast<GetBucketInventoryConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetBucketLifecycleConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * Bucket lifecycle configuration now supports specifying a lifecycle rule using an object key name prefix, one or more
 * object tags, or a combination of both. Accordingly, this section describes the latest API. The response describes the
 * new filter element that you can use to specify a filter to select a subset of objects to which the rule applies. If you
 * are using a previous version of the lifecycle configuration, it still works. For the earlier action, see <a
 *
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLifecycle.html">GetBucketLifecycle</a>> </note>
 *
 * Returns the lifecycle configuration information set on the bucket. For information about lifecycle configuration, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lifecycle-mgmt.html">Object Lifecycle
 *
 * Management</a>>
 *
 * To use this operation, you must have permission to perform the <code>s3:GetLifecycleConfiguration</code> action. The
 * bucket owner has this permission, by default. The bucket owner can grant this permission to others. For more information
 * about permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
 * Related to Bucket Subresource Operations</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing Access Permissions to Your
 * Amazon S3
 *
 * Resources</a>>
 *
 * <code>GetBucketLifecycleConfiguration</code> has the following special
 *
 * error> <ul> <li>
 *
 * Error code: <code>NoSuchLifecycleConfiguration</code>
 *
 * </p <ul> <li>
 *
 * Description: The lifecycle configuration does not
 *
 * exist> </li> <li>
 *
 * HTTP Status Code: 404 Not
 *
 * Foun> </li> <li>
 *
 * SOAP Fault Code Prefix:
 *
 * Clien> </li> </ul> </li> </ul>
 *
 * The following operations are related to
 *
 * <code>GetBucketLifecycleConfiguration</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLifecycle.html">GetBucketLifecycle</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycle.html">PutBucketLifecycle</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketLifecycle.html">DeleteBucketLifecycle</a>
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
 * Returns the Region the bucket resides in. You set the bucket's Region using the <code>LocationConstraint</code> request
 * parameter in a <code>CreateBucket</code> request. For more information, see <a
 *
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>>
 *
 * To use this implementation of the operation, you must be the bucket
 *
 * owner>
 *
 * To use this API against an access point, provide the alias of the access point in place of the bucket
 *
 * name>
 *
 * The following operations are related to
 *
 * <code>GetBucketLocation</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
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
 *
 * owner>
 *
 * The following operations are related to
 *
 * <code>GetBucketLogging</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLogging.html">PutBucketLogging</a>
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
 * Gets a metrics configuration (specified by the metrics configuration ID) from the bucket. Note that this doesn't include
 * the daily storage
 *
 * metrics>
 *
 * To use this operation, you must have permissions to perform the <code>s3:GetMetricsConfiguration</code> action. The
 * bucket owner has this permission by default. The bucket owner can grant this permission to others. For more information
 * about permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
 * Related to Bucket Subresource Operations</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing Access Permissions to Your
 * Amazon S3
 *
 * Resources</a>>
 *
 * For information about CloudWatch request metrics for Amazon S3, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cloudwatch-monitoring.html">Monitoring Metrics with Amazon
 *
 * CloudWatch</a>>
 *
 * The following operations are related to
 *
 * <code>GetBucketMetricsConfiguration</code>> <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketMetricsConfiguration.html">PutBucketMetricsConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketMetricsConfiguration.html">DeleteBucketMetricsConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketMetricsConfigurations.html">ListBucketMetricsConfigurations</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cloudwatch-monitoring.html">Monitoring Metrics with Amazon
 * CloudWatch</a>
 */
GetBucketMetricsConfigurationResponse * S3Client::getBucketMetricsConfiguration(const GetBucketMetricsConfigurationRequest &request)
{
    return qobject_cast<GetBucketMetricsConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetBucketNotificationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the notification configuration of a
 *
 * bucket>
 *
 * If notifications are not enabled on the bucket, the action returns an empty <code>NotificationConfiguration</code>
 *
 * element>
 *
 * By default, you must be the bucket owner to read the notification configuration of a bucket. However, the bucket owner
 * can use a bucket policy to grant permission to other users to read this configuration with the
 * <code>s3:GetBucketNotification</code>
 *
 * permission>
 *
 * For more information about setting and reading the notification configuration on a bucket, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/NotificationHowTo.html">Setting Up Notification of Bucket
 * Events</a>. For more information about bucket policies, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using Bucket
 *
 * Policies</a>>
 *
 * The following action is related to
 *
 * <code>GetBucketNotification</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketNotification.html">PutBucketNotification</a>
 */
GetBucketNotificationConfigurationResponse * S3Client::getBucketNotificationConfiguration(const GetBucketNotificationConfigurationRequest &request)
{
    return qobject_cast<GetBucketNotificationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetBucketOwnershipControlsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves <code>OwnershipControls</code> for an Amazon S3 bucket. To use this operation, you must have the
 * <code>s3:GetBucketOwnershipControls</code> permission. For more information about Amazon S3 permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html">Specifying permissions in a
 * policy</a>.
 *
 * </p
 *
 * For information about Amazon S3 Object Ownership, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/about-object-ownership.html">Using Object Ownership</a>.
 *
 * </p
 *
 * The following operations are related to
 *
 * <code>GetBucketOwnershipControls</code>> <ul> <li>
 *
 * <a>PutBucketOwnershipControls</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteBucketOwnershipControls</a>
 */
GetBucketOwnershipControlsResponse * S3Client::getBucketOwnershipControls(const GetBucketOwnershipControlsRequest &request)
{
    return qobject_cast<GetBucketOwnershipControlsResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetBucketPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the policy of a specified bucket. If you are using an identity other than the root user of the Amazon Web
 * Services account that owns the bucket, the calling identity must have the <code>GetBucketPolicy</code> permissions on
 * the specified bucket and belong to the bucket owner's account in order to use this
 *
 * operation>
 *
 * If you don't have <code>GetBucketPolicy</code> permissions, Amazon S3 returns a <code>403 Access Denied</code> error. If
 * you have the correct permissions, but you're not using an identity that belongs to the bucket owner's account, Amazon S3
 * returns a <code>405 Method Not Allowed</code>
 *
 * error> <b>
 *
 * As a security precaution, the root user of the Amazon Web Services account that owns a bucket can always use this
 * operation, even if the policy explicitly denies the root user the ability to perform this
 *
 * action> </b>
 *
 * For more information about bucket policies, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using Bucket Policies and User
 *
 * Policies</a>>
 *
 * The following action is related to
 *
 * <code>GetBucketPolicy</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
 */
GetBucketPolicyResponse * S3Client::getBucketPolicy(const GetBucketPolicyRequest &request)
{
    return qobject_cast<GetBucketPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetBucketPolicyStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the policy status for an Amazon S3 bucket, indicating whether the bucket is public. In order to use this
 * operation, you must have the <code>s3:GetBucketPolicyStatus</code> permission. For more information about Amazon S3
 * permissions, see <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
 * Permissions in a
 *
 * Policy</a>>
 *
 * For more information about when Amazon S3 considers a bucket public, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html#access-control-block-public-access-policy-status">The
 * Meaning of "Public"</a>.
 *
 * </p
 *
 * The following operations are related to
 *
 * <code>GetBucketPolicyStatus</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">Using Amazon S3 Block
 * Public Access</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetPublicAccessBlock.html">GetPublicAccessBlock</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutPublicAccessBlock.html">PutPublicAccessBlock</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeletePublicAccessBlock.html">DeletePublicAccessBlock</a>
 */
GetBucketPolicyStatusResponse * S3Client::getBucketPolicyStatus(const GetBucketPolicyStatusRequest &request)
{
    return qobject_cast<GetBucketPolicyStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetBucketReplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the replication configuration of a
 *
 * bucket> <note>
 *
 * It can take a while to propagate the put or delete a replication configuration to all Amazon S3 systems. Therefore, a
 * get request soon after put or delete can return a wrong result.
 *
 * </p </note>
 *
 * For information about replication configuration, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/replication.html">Replication</a> in the <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * This action requires permissions for the <code>s3:GetReplicationConfiguration</code> action. For more information about
 * permissions, see <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using Bucket Policies
 * and User
 *
 * Policies</a>>
 *
 * If you include the <code>Filter</code> element in a replication configuration, you must also include the
 * <code>DeleteMarkerReplication</code> and <code>Priority</code> elements. The response also returns those
 *
 * elements>
 *
 * For information about <code>GetBucketReplication</code> errors, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html#ReplicationErrorCodeList">List of
 * replication-related error codes</a>
 *
 * </p
 *
 * The following operations are related to
 *
 * <code>GetBucketReplication</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketReplication.html">PutBucketReplication</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketReplication.html">DeleteBucketReplication</a>
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
 * Returns the request payment configuration of a bucket. To use this version of the operation, you must be the bucket
 * owner. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/RequesterPaysBuckets.html">Requester Pays
 *
 * Buckets</a>>
 *
 * The following operations are related to
 *
 * <code>GetBucketRequestPayment</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjects.html">ListObjects</a>
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
 *
 * bucket>
 *
 * To use this operation, you must have permission to perform the <code>s3:GetBucketTagging</code> action. By default, the
 * bucket owner has this permission and can grant this permission to
 *
 * others>
 *
 * <code>GetBucketTagging</code> has the following special
 *
 * error> <ul> <li>
 *
 * Error code: <code>NoSuchTagSet</code>
 *
 * </p <ul> <li>
 *
 * Description: There is no tag set associated with the
 *
 * bucket> </li> </ul> </li> </ul>
 *
 * The following operations are related to
 *
 * <code>GetBucketTagging</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketTagging.html">PutBucketTagging</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketTagging.html">DeleteBucketTagging</a>
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
 *
 * bucket>
 *
 * To retrieve the versioning state of a bucket, you must be the bucket
 *
 * owner>
 *
 * This implementation also returns the MFA Delete status of the versioning state. If the MFA Delete status is
 * <code>enabled</code>, the bucket owner must use an authentication device to change the versioning state of the
 *
 * bucket>
 *
 * The following operations are related to
 *
 * <code>GetBucketVersioning</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObject.html">DeleteObject</a>
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
 * Returns the website configuration for a bucket. To host website on Amazon S3, you can configure a bucket as website by
 * adding a website configuration. For more information about hosting websites, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/WebsiteHosting.html">Hosting Websites on Amazon S3</a>.
 *
 * </p
 *
 * This GET action requires the <code>S3:GetBucketWebsite</code> permission. By default, only the bucket owner can read the
 * bucket website configuration. However, bucket owners can allow other users to read the website configuration by writing
 * a bucket policy granting them the <code>S3:GetBucketWebsite</code>
 *
 * permission>
 *
 * The following operations are related to
 *
 * <code>DeleteBucketWebsite</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketWebsite.html">DeleteBucketWebsite</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketWebsite.html">PutBucketWebsite</a>
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
 * Retrieves objects from Amazon S3. To use <code>GET</code>, you must have <code>READ</code> access to the object. If you
 * grant <code>READ</code> access to the anonymous user, you can return the object without using an authorization
 *
 * header>
 *
 * An Amazon S3 bucket has no directory hierarchy such as you would find in a typical computer file system. You can,
 * however, create a logical hierarchy by using object key names that imply a folder structure. For example, instead of
 * naming an object <code>sample.jpg</code>, you can name it
 *
 * <code>photos/2006/February/sample.jpg</code>>
 *
 * To get an object from such a logical hierarchy, specify the full key name for the object in the <code>GET</code>
 * operation. For a virtual hosted-style request example, if you have the object
 * <code>photos/2006/February/sample.jpg</code>, specify the resource as <code>/photos/2006/February/sample.jpg</code>. For
 * a path-style request example, if you have the object <code>photos/2006/February/sample.jpg</code> in the bucket named
 * <code>examplebucket</code>, specify the resource as <code>/examplebucket/photos/2006/February/sample.jpg</code>. For
 * more information about request types, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/VirtualHosting.html#VirtualHostingSpecifyBucket">HTTP Host Header
 * Bucket
 *
 * Specification</a>>
 *
 * For more information about returning the ACL of an object, see <a
 *
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectAcl.html">GetObjectAcl</a>>
 *
 * If the object you are retrieving is stored in the S3 Glacier or S3 Glacier Deep Archive storage class, or S3
 * Intelligent-Tiering Archive or S3 Intelligent-Tiering Deep Archive tiers, before you can retrieve the object you must
 * first restore a copy using <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_RestoreObject.html">RestoreObject</a>. Otherwise, this action
 * returns an <code>InvalidObjectStateError</code> error. For information about restoring archived objects, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/restoring-objects.html">Restoring Archived
 *
 * Objects</a>>
 *
 * Encryption request headers, like <code>x-amz-server-side-encryption</code>, should not be sent for GET requests if your
 * object uses server-side encryption with KMS keys (SSE-KMS) or server-side encryption with Amazon S3–managed encryption
 * keys (SSE-S3). If your object does use these types of keys, you’ll get an HTTP 400 BadRequest
 *
 * error>
 *
 * If you encrypt an object by using server-side encryption with customer-provided encryption keys (SSE-C) when you store
 * the object in Amazon S3, then when you GET the object, you must use the following
 *
 * headers> <ul> <li>
 *
 * x-amz-server-side-encryption-customer-algorith> </li> <li>
 *
 * x-amz-server-side-encryption-customer-ke> </li> <li>
 *
 * x-amz-server-side-encryption-customer-key-MD> </li> </ul>
 *
 * For more information about SSE-C, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/ServerSideEncryptionCustomerKeys.html">Server-Side Encryption
 * (Using Customer-Provided Encryption
 *
 * Keys)</a>>
 *
 * Assuming you have the relevant permission to read object tags, the response also returns the
 * <code>x-amz-tagging-count</code> header that provides the count of number of tags associated with the object. You can
 * use <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectTagging.html">GetObjectTagging</a> to retrieve
 * the tag set associated with an
 *
 * object>
 *
 * <b>Permissions</b>
 *
 * </p
 *
 * You need the relevant read object (or version) permission for this operation. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying Permissions in a
 * Policy</a>. If the object you request does not exist, the error Amazon S3 returns depends on whether you also have the
 * <code>s3:ListBucket</code>
 *
 * permission> <ul> <li>
 *
 * If you have the <code>s3:ListBucket</code> permission on the bucket, Amazon S3 will return an HTTP status code 404 ("no
 * such key")
 *
 * error> </li> <li>
 *
 * If you don’t have the <code>s3:ListBucket</code> permission, Amazon S3 will return an HTTP status code 403 ("access
 * denied")
 *
 * error> </li> </ul>
 *
 * <b>Versioning</b>
 *
 * </p
 *
 * By default, the GET action returns the current version of an object. To return a different version, use the
 * <code>versionId</code>
 *
 * subresource> <note> <ul> <li>
 *
 * If you supply a <code>versionId</code>, you need the <code>s3:GetObjectVersion</code> permission to access a specific
 * version of an object. If you request a specific version, you do not need to have the <code>s3:GetObject</code>
 * permission.
 *
 * </p </li> <li>
 *
 * If the current version of the object is a delete marker, Amazon S3 behaves as if the object was deleted and includes
 * <code>x-amz-delete-marker: true</code> in the
 *
 * response> </li> </ul> </note>
 *
 * For more information about versioning, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketVersioning.html">PutBucketVersioning</a>.
 *
 * </p
 *
 * <b>Overriding Response Header Values</b>
 *
 * </p
 *
 * There are times when you want to override certain response header values in a GET response. For example, you might
 * override the <code>Content-Disposition</code> response header value in your GET
 *
 * request>
 *
 * You can override values for a set of response headers using the following query parameters. These response header values
 * are sent only on a successful request, that is, when status code 200 OK is returned. The set of headers you can override
 * using these parameters is a subset of the headers that Amazon S3 accepts when you create an object. The response headers
 * that you can override for the GET response are <code>Content-Type</code>, <code>Content-Language</code>,
 * <code>Expires</code>, <code>Cache-Control</code>, <code>Content-Disposition</code>, and <code>Content-Encoding</code>.
 * To override these header values in the GET response, you use the following request
 *
 * parameters> <note>
 *
 * You must sign the request, either using an Authorization header or a presigned URL, when using these parameters. They
 * cannot be used with an unsigned (anonymous)
 *
 * request> </note> <ul> <li>
 *
 * <code>response-content-type</code>
 *
 * </p </li> <li>
 *
 * <code>response-content-language</code>
 *
 * </p </li> <li>
 *
 * <code>response-expires</code>
 *
 * </p </li> <li>
 *
 * <code>response-cache-control</code>
 *
 * </p </li> <li>
 *
 * <code>response-content-disposition</code>
 *
 * </p </li> <li>
 *
 * <code>response-content-encoding</code>
 *
 * </p </li> </ul>
 *
 * <b>Additional Considerations about Request Headers</b>
 *
 * </p
 *
 * If both of the <code>If-Match</code> and <code>If-Unmodified-Since</code> headers are present in the request as follows:
 * <code>If-Match</code> condition evaluates to <code>true</code>, and; <code>If-Unmodified-Since</code> condition
 * evaluates to <code>false</code>; then, S3 returns 200 OK and the data requested.
 *
 * </p
 *
 * If both of the <code>If-None-Match</code> and <code>If-Modified-Since</code> headers are present in the request as
 * follows:<code> If-None-Match</code> condition evaluates to <code>false</code>, and; <code>If-Modified-Since</code>
 * condition evaluates to <code>true</code>; then, S3 returns 304 Not Modified response
 *
 * code>
 *
 * For more information about conditional requests, see <a href="https://tools.ietf.org/html/rfc7232">RFC
 *
 * 7232</a>>
 *
 * The following operations are related to
 *
 * <code>GetObject</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBuckets.html">ListBuckets</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectAcl.html">GetObjectAcl</a>
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
 * Returns the access control list (ACL) of an object. To use this operation, you must have <code>s3:GetObjectAcl</code>
 * permissions or <code>READ_ACP</code> access to the object. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/acl-overview.html#acl-access-policy-permission-mapping">Mapping
 * of ACL permissions and access policy permissions</a> in the <i>Amazon S3 User Guide</i>
 *
 * </p
 *
 * This action is not supported by Amazon S3 on
 *
 * Outposts>
 *
 * <b>Versioning</b>
 *
 * </p
 *
 * By default, GET returns ACL information about the current version of an object. To return ACL information about a
 * different version, use the versionId
 *
 * subresource> <note>
 *
 * If your bucket uses the bucket owner enforced setting for S3 Object Ownership, requests to read ACLs are still supported
 * and return the <code>bucket-owner-full-control</code> ACL with the owner being the account that created the bucket. For
 * more information, see <a href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/about-object-ownership.html">
 * Controlling object ownership and disabling ACLs</a> in the <i>Amazon S3 User
 *
 * Guide</i>> </note>
 *
 * The following operations are related to
 *
 * <code>GetObjectAcl</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectAttributes.html">GetObjectAttributes</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObject.html">DeleteObject</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
 */
GetObjectAclResponse * S3Client::getObjectAcl(const GetObjectAclRequest &request)
{
    return qobject_cast<GetObjectAclResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetObjectAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves all the metadata from an object without returning the object itself. This action is useful if you're
 * interested only in an object's metadata. To use <code>GetObjectAttributes</code>, you must have READ access to the
 *
 * object>
 *
 * <code>GetObjectAttributes</code> combines the functionality of <code>GetObjectAcl</code>,
 * <code>GetObjectLegalHold</code>, <code>GetObjectLockConfiguration</code>, <code>GetObjectRetention</code>,
 * <code>GetObjectTagging</code>, <code>HeadObject</code>, and <code>ListParts</code>. All of the data returned with each
 * of those individual calls can be returned with a single call to
 *
 * <code>GetObjectAttributes</code>>
 *
 * If you encrypt an object by using server-side encryption with customer-provided encryption keys (SSE-C) when you store
 * the object in Amazon S3, then when you retrieve the metadata from the object, you must use the following
 *
 * headers> <ul> <li>
 *
 * <code>x-amz-server-side-encryption-customer-algorithm</code>
 *
 * </p </li> <li>
 *
 * <code>x-amz-server-side-encryption-customer-key</code>
 *
 * </p </li> <li>
 *
 * <code>x-amz-server-side-encryption-customer-key-MD5</code>
 *
 * </p </li> </ul>
 *
 * For more information about SSE-C, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/ServerSideEncryptionCustomerKeys.html">Server-Side Encryption
 * (Using Customer-Provided Encryption Keys)</a> in the <i>Amazon S3 User
 *
 * Guide</i>> <note> <ul> <li>
 *
 * Encryption request headers, such as <code>x-amz-server-side-encryption</code>, should not be sent for GET requests if
 * your object uses server-side encryption with Amazon Web Services KMS keys stored in Amazon Web Services Key Management
 * Service (SSE-KMS) or server-side encryption with Amazon S3 managed encryption keys (SSE-S3). If your object does use
 * these types of keys, you'll get an HTTP <code>400 Bad Request</code>
 *
 * error> </li> <li>
 *
 * The last modified property in this case is the creation date of the
 *
 * object> </li> </ul> </note>
 *
 * Consider the following when using request
 *
 * headers> <ul> <li>
 *
 * If both of the <code>If-Match</code> and <code>If-Unmodified-Since</code> headers are present in the request as follows,
 * then Amazon S3 returns the HTTP status code <code>200 OK</code> and the data
 *
 * requested> <ul> <li>
 *
 * <code>If-Match</code> condition evaluates to
 *
 * <code>true</code>> </li> <li>
 *
 * <code>If-Unmodified-Since</code> condition evaluates to
 *
 * <code>false</code>> </li> </ul> </li> <li>
 *
 * If both of the <code>If-None-Match</code> and <code>If-Modified-Since</code> headers are present in the request as
 * follows, then Amazon S3 returns the HTTP status code <code>304 Not
 *
 * Modified</code>> <ul> <li>
 *
 * <code>If-None-Match</code> condition evaluates to
 *
 * <code>false</code>> </li> <li>
 *
 * <code>If-Modified-Since</code> condition evaluates to
 *
 * <code>true</code>> </li> </ul> </li> </ul>
 *
 * For more information about conditional requests, see <a href="https://tools.ietf.org/html/rfc7232">RFC
 *
 * 7232</a>>
 *
 * <b>Permissions</b>
 *
 * </p
 *
 * The permissions that you need to use this operation depend on whether the bucket is versioned. If the bucket is
 * versioned, you need both the <code>s3:GetObjectVersion</code> and <code>s3:GetObjectVersionAttributes</code> permissions
 * for this operation. If the bucket is not versioned, you need the <code>s3:GetObject</code> and
 * <code>s3:GetObjectAttributes</code> permissions. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying Permissions in a Policy</a>
 * in the <i>Amazon S3 User Guide</i>. If the object that you request does not exist, the error Amazon S3 returns depends
 * on whether you also have the <code>s3:ListBucket</code>
 *
 * permission> <ul> <li>
 *
 * If you have the <code>s3:ListBucket</code> permission on the bucket, Amazon S3 returns an HTTP status code <code>404 Not
 * Found</code> ("no such key")
 *
 * error> </li> <li>
 *
 * If you don't have the <code>s3:ListBucket</code> permission, Amazon S3 returns an HTTP status code <code>403
 * Forbidden</code> ("access denied")
 *
 * error> </li> </ul>
 *
 * The following actions are related to
 *
 * <code>GetObjectAttributes</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectAcl.html">GetObjectAcl</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectLegalHold.html">GetObjectLegalHold</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectLockConfiguration.html">GetObjectLockConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectRetention.html">GetObjectRetention</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectTagging.html">GetObjectTagging</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_HeadObject.html">HeadObject</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
 */
GetObjectAttributesResponse * S3Client::getObjectAttributes(const GetObjectAttributesRequest &request)
{
    return qobject_cast<GetObjectAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetObjectLegalHoldResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an object's current legal hold status. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock.html">Locking
 *
 * Objects</a>>
 *
 * This action is not supported by Amazon S3 on
 *
 * Outposts>
 *
 * The following action is related to
 *
 * <code>GetObjectLegalHold</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectAttributes.html">GetObjectAttributes</a>
 */
GetObjectLegalHoldResponse * S3Client::getObjectLegalHold(const GetObjectLegalHoldRequest &request)
{
    return qobject_cast<GetObjectLegalHoldResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetObjectLockConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the Object Lock configuration for a bucket. The rule specified in the Object Lock configuration will be applied by
 * default to every new object placed in the specified bucket. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock.html">Locking
 *
 * Objects</a>>
 *
 * The following action is related to
 *
 * <code>GetObjectLockConfiguration</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectAttributes.html">GetObjectAttributes</a>
 */
GetObjectLockConfigurationResponse * S3Client::getObjectLockConfiguration(const GetObjectLockConfigurationRequest &request)
{
    return qobject_cast<GetObjectLockConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetObjectRetentionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves an object's retention settings. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock.html">Locking
 *
 * Objects</a>>
 *
 * This action is not supported by Amazon S3 on
 *
 * Outposts>
 *
 * The following action is related to
 *
 * <code>GetObjectRetention</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectAttributes.html">GetObjectAttributes</a>
 */
GetObjectRetentionResponse * S3Client::getObjectRetention(const GetObjectRetentionRequest &request)
{
    return qobject_cast<GetObjectRetentionResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetObjectTaggingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the tag-set of an object. You send the GET request against the tagging subresource associated with the
 *
 * object>
 *
 * To use this operation, you must have permission to perform the <code>s3:GetObjectTagging</code> action. By default, the
 * GET action returns information about current version of an object. For a versioned bucket, you can have multiple
 * versions of an object in your bucket. To retrieve tags of any other version, use the versionId query parameter. You also
 * need permission for the <code>s3:GetObjectVersionTagging</code>
 *
 * action>
 *
 * By default, the bucket owner has this permission and can grant this permission to
 *
 * others>
 *
 * For information about the Amazon S3 object tagging feature, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-tagging.html">Object
 *
 * Tagging</a>>
 *
 * The following actions are related to
 *
 * <code>GetObjectTagging</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObjectTagging.html">DeleteObjectTagging</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectAttributes.html">GetObjectAttributes</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObjectTagging.html">PutObjectTagging</a>
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
 * Returns torrent files from a bucket. BitTorrent can save you bandwidth when you're distributing large files. For more
 * information about BitTorrent, see <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3Torrent.html">Using
 * BitTorrent with Amazon
 *
 * S3</a>> <note>
 *
 * You can get torrent only for objects that are less than 5 GB in size, and that are not encrypted using server-side
 * encryption with a customer-provided encryption
 *
 * key> </note>
 *
 * To use GET, you must have READ access to the
 *
 * object>
 *
 * This action is not supported by Amazon S3 on
 *
 * Outposts>
 *
 * The following action is related to
 *
 * <code>GetObjectTorrent</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
 */
GetObjectTorrentResponse * S3Client::getObjectTorrent(const GetObjectTorrentRequest &request)
{
    return qobject_cast<GetObjectTorrentResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * GetPublicAccessBlockResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the <code>PublicAccessBlock</code> configuration for an Amazon S3 bucket. To use this operation, you must have
 * the <code>s3:GetBucketPublicAccessBlock</code> permission. For more information about Amazon S3 permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying Permissions in a
 *
 * Policy</a>> <b>
 *
 * When Amazon S3 evaluates the <code>PublicAccessBlock</code> configuration for a bucket or an object, it checks the
 * <code>PublicAccessBlock</code> configuration for both the bucket (or the bucket that contains the object) and the bucket
 * owner's account. If the <code>PublicAccessBlock</code> settings are different between the bucket and the account, Amazon
 * S3 uses the most restrictive combination of the bucket-level and account-level
 *
 * settings> </b>
 *
 * For more information about when Amazon S3 considers a bucket or an object public, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html#access-control-block-public-access-policy-status">The
 * Meaning of
 *
 * "Public"</a>>
 *
 * The following operations are related to
 *
 * <code>GetPublicAccessBlock</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">Using Amazon S3 Block
 * Public Access</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutPublicAccessBlock.html">PutPublicAccessBlock</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetPublicAccessBlock.html">GetPublicAccessBlock</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeletePublicAccessBlock.html">DeletePublicAccessBlock</a>
 */
GetPublicAccessBlockResponse * S3Client::getPublicAccessBlock(const GetPublicAccessBlockRequest &request)
{
    return qobject_cast<GetPublicAccessBlockResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * HeadBucketResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This action is useful to determine if a bucket exists and you have permission to access it. The action returns a
 * <code>200 OK</code> if the bucket exists and you have permission to access
 *
 * it>
 *
 * If the bucket does not exist or you do not have permission to access it, the <code>HEAD</code> request returns a generic
 * <code>404 Not Found</code> or <code>403 Forbidden</code> code. A message body is not included, so you cannot determine
 * the exception beyond these error
 *
 * codes>
 *
 * To use this operation, you must have permissions to perform the <code>s3:ListBucket</code> action. The bucket owner has
 * this permission by default and can grant this permission to others. For more information about permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
 * Related to Bucket Subresource Operations</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing Access Permissions to Your
 * Amazon S3
 *
 * Resources</a>>
 *
 * To use this API against an access point, you must provide the alias of the access point in place of the bucket name or
 * specify the access point ARN. When using the access point ARN, you must direct requests to the access point hostname.
 * The access point hostname takes the form AccessPointName-AccountId.s3-accesspoint.Region.amazonaws.com. When using the
 * Amazon Web Services SDKs, you provide the ARN in place of the bucket name. For more information see, <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-access-points.html">Using access
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
 * The HEAD action retrieves metadata from an object without returning the object itself. This action is useful if you're
 * only interested in an object's metadata. To use HEAD, you must have READ access to the
 *
 * object>
 *
 * A <code>HEAD</code> request has the same options as a <code>GET</code> action on an object. The response is identical to
 * the <code>GET</code> response except that there is no response body. Because of this, if the <code>HEAD</code> request
 * generates an error, it returns a generic <code>404 Not Found</code> or <code>403 Forbidden</code> code. It is not
 * possible to retrieve the exact exception beyond these error
 *
 * codes>
 *
 * If you encrypt an object by using server-side encryption with customer-provided encryption keys (SSE-C) when you store
 * the object in Amazon S3, then when you retrieve the metadata from the object, you must use the following
 *
 * headers> <ul> <li>
 *
 * x-amz-server-side-encryption-customer-algorith> </li> <li>
 *
 * x-amz-server-side-encryption-customer-ke> </li> <li>
 *
 * x-amz-server-side-encryption-customer-key-MD> </li> </ul>
 *
 * For more information about SSE-C, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/ServerSideEncryptionCustomerKeys.html">Server-Side Encryption
 * (Using Customer-Provided Encryption
 *
 * Keys)</a>> <note> <ul> <li>
 *
 * Encryption request headers, like <code>x-amz-server-side-encryption</code>, should not be sent for GET requests if your
 * object uses server-side encryption with KMS keys (SSE-KMS) or server-side encryption with Amazon S3–managed encryption
 * keys (SSE-S3). If your object does use these types of keys, you’ll get an HTTP 400 BadRequest
 *
 * error> </li> <li>
 *
 * The last modified property in this case is the creation date of the
 *
 * object> </li> </ul> </note>
 *
 * Request headers are limited to 8 KB in size. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTCommonRequestHeaders.html">Common Request
 *
 * Headers</a>>
 *
 * Consider the following when using request
 *
 * headers> <ul> <li>
 *
 * Consideration 1 – If both of the <code>If-Match</code> and <code>If-Unmodified-Since</code> headers are present in the
 * request as
 *
 * follows> <ul> <li>
 *
 * <code>If-Match</code> condition evaluates to <code>true</code>,
 *
 * and> </li> <li>
 *
 * <code>If-Unmodified-Since</code> condition evaluates to
 *
 * <code>false</code>> </li> </ul>
 *
 * Then Amazon S3 returns <code>200 OK</code> and the data
 *
 * requested> </li> <li>
 *
 * Consideration 2 – If both of the <code>If-None-Match</code> and <code>If-Modified-Since</code> headers are present in
 * the request as
 *
 * follows> <ul> <li>
 *
 * <code>If-None-Match</code> condition evaluates to <code>false</code>,
 *
 * and> </li> <li>
 *
 * <code>If-Modified-Since</code> condition evaluates to
 *
 * <code>true</code>> </li> </ul>
 *
 * Then Amazon S3 returns the <code>304 Not Modified</code> response
 *
 * code> </li> </ul>
 *
 * For more information about conditional requests, see <a href="https://tools.ietf.org/html/rfc7232">RFC
 *
 * 7232</a>>
 *
 * <b>Permissions</b>
 *
 * </p
 *
 * You need the relevant read object (or version) permission for this operation. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying Permissions in a
 * Policy</a>. If the object you request does not exist, the error Amazon S3 returns depends on whether you also have the
 * s3:ListBucket
 *
 * permission> <ul> <li>
 *
 * If you have the <code>s3:ListBucket</code> permission on the bucket, Amazon S3 returns an HTTP status code 404 ("no such
 * key")
 *
 * error> </li> <li>
 *
 * If you don’t have the <code>s3:ListBucket</code> permission, Amazon S3 returns an HTTP status code 403 ("access denied")
 *
 * error> </li> </ul>
 *
 * The following actions are related to
 *
 * <code>HeadObject</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectAttributes.html">GetObjectAttributes</a>
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
 * Lists the analytics configurations for the bucket. You can have up to 1,000 analytics configurations per
 *
 * bucket>
 *
 * This action supports list pagination and does not return more than 100 configurations at a time. You should always check
 * the <code>IsTruncated</code> element in the response. If there are no more configurations to list,
 * <code>IsTruncated</code> is set to false. If there are more configurations to list, <code>IsTruncated</code> is set to
 * true, and there will be a value in <code>NextContinuationToken</code>. You use the <code>NextContinuationToken</code>
 * value to continue the pagination of the list by passing the value in continuation-token in the request to
 * <code>GET</code> the next
 *
 * page>
 *
 * To use this operation, you must have permissions to perform the <code>s3:GetAnalyticsConfiguration</code> action. The
 * bucket owner has this permission by default. The bucket owner can grant this permission to others. For more information
 * about permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
 * Related to Bucket Subresource Operations</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing Access Permissions to Your
 * Amazon S3
 *
 * Resources</a>>
 *
 * For information about Amazon S3 analytics feature, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/analytics-storage-class.html">Amazon S3 Analytics – Storage Class
 * Analysis</a>.
 *
 * </p
 *
 * The following operations are related to
 *
 * <code>ListBucketAnalyticsConfigurations</code>> <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketAnalyticsConfiguration.html">GetBucketAnalyticsConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketAnalyticsConfiguration.html">DeleteBucketAnalyticsConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketAnalyticsConfiguration.html">PutBucketAnalyticsConfiguration</a>
 */
ListBucketAnalyticsConfigurationsResponse * S3Client::listBucketAnalyticsConfigurations(const ListBucketAnalyticsConfigurationsRequest &request)
{
    return qobject_cast<ListBucketAnalyticsConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * ListBucketIntelligentTieringConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the S3 Intelligent-Tiering configuration from the specified
 *
 * bucket>
 *
 * The S3 Intelligent-Tiering storage class is designed to optimize storage costs by automatically moving data to the most
 * cost-effective storage access tier, without performance impact or operational overhead. S3 Intelligent-Tiering delivers
 * automatic cost savings in three low latency and high throughput access tiers. To get the lowest storage cost on data
 * that can be accessed in minutes to hours, you can choose to activate additional archiving
 *
 * capabilities>
 *
 * The S3 Intelligent-Tiering storage class is the ideal storage class for data with unknown, changing, or unpredictable
 * access patterns, independent of object size or retention period. If the size of an object is less than 128 KB, it is not
 * monitored and not eligible for auto-tiering. Smaller objects can be stored, but they are always charged at the Frequent
 * Access tier rates in the S3 Intelligent-Tiering storage
 *
 * class>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html#sc-dynamic-data-access">Storage class for
 * automatically optimizing frequently and infrequently accessed
 *
 * objects</a>>
 *
 * Operations related to <code>ListBucketIntelligentTieringConfigurations</code> include:
 *
 * </p <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketIntelligentTieringConfiguration.html">DeleteBucketIntelligentTieringConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketIntelligentTieringConfiguration.html">PutBucketIntelligentTieringConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketIntelligentTieringConfiguration.html">GetBucketIntelligentTieringConfiguration</a>
 */
ListBucketIntelligentTieringConfigurationsResponse * S3Client::listBucketIntelligentTieringConfigurations(const ListBucketIntelligentTieringConfigurationsRequest &request)
{
    return qobject_cast<ListBucketIntelligentTieringConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * ListBucketInventoryConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of inventory configurations for the bucket. You can have up to 1,000 analytics configurations per
 *
 * bucket>
 *
 * This action supports list pagination and does not return more than 100 configurations at a time. Always check the
 * <code>IsTruncated</code> element in the response. If there are no more configurations to list, <code>IsTruncated</code>
 * is set to false. If there are more configurations to list, <code>IsTruncated</code> is set to true, and there is a value
 * in <code>NextContinuationToken</code>. You use the <code>NextContinuationToken</code> value to continue the pagination
 * of the list by passing the value in continuation-token in the request to <code>GET</code> the next
 *
 * page>
 *
 * To use this operation, you must have permissions to perform the <code>s3:GetInventoryConfiguration</code> action. The
 * bucket owner has this permission by default. The bucket owner can grant this permission to others. For more information
 * about permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
 * Related to Bucket Subresource Operations</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing Access Permissions to Your
 * Amazon S3
 *
 * Resources</a>>
 *
 * For information about the Amazon S3 inventory feature, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-inventory.html">Amazon S3 Inventory</a>
 *
 * </p
 *
 * The following operations are related to
 *
 * <code>ListBucketInventoryConfigurations</code>> <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketInventoryConfiguration.html">GetBucketInventoryConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketInventoryConfiguration.html">DeleteBucketInventoryConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketInventoryConfiguration.html">PutBucketInventoryConfiguration</a>
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
 * Lists the metrics configurations for the bucket. The metrics configurations are only for the request metrics of the
 * bucket and do not provide information on daily storage metrics. You can have up to 1,000 configurations per
 *
 * bucket>
 *
 * This action supports list pagination and does not return more than 100 configurations at a time. Always check the
 * <code>IsTruncated</code> element in the response. If there are no more configurations to list, <code>IsTruncated</code>
 * is set to false. If there are more configurations to list, <code>IsTruncated</code> is set to true, and there is a value
 * in <code>NextContinuationToken</code>. You use the <code>NextContinuationToken</code> value to continue the pagination
 * of the list by passing the value in <code>continuation-token</code> in the request to <code>GET</code> the next
 *
 * page>
 *
 * To use this operation, you must have permissions to perform the <code>s3:GetMetricsConfiguration</code> action. The
 * bucket owner has this permission by default. The bucket owner can grant this permission to others. For more information
 * about permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
 * Related to Bucket Subresource Operations</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing Access Permissions to Your
 * Amazon S3
 *
 * Resources</a>>
 *
 * For more information about metrics configurations and CloudWatch request metrics, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cloudwatch-monitoring.html">Monitoring Metrics with Amazon
 *
 * CloudWatch</a>>
 *
 * The following operations are related to
 *
 * <code>ListBucketMetricsConfigurations</code>> <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketMetricsConfiguration.html">PutBucketMetricsConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketMetricsConfiguration.html">GetBucketMetricsConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketMetricsConfiguration.html">DeleteBucketMetricsConfiguration</a>
 */
ListBucketMetricsConfigurationsResponse * S3Client::listBucketMetricsConfigurations(const ListBucketMetricsConfigurationsRequest &request)
{
    return qobject_cast<ListBucketMetricsConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * ListBucketsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all buckets owned by the authenticated sender of the request. To use this operation, you must have the
 * <code>s3:ListAllMyBuckets</code>
 */
ListBucketsResponse * S3Client::listBuckets(const ListBucketsRequest &request)
{
    return qobject_cast<ListBucketsResponse *>(send(request));
}

/*!
 * Sends a ListBuckets request to the S3Client service, and returns a pointer to an
 * ListBucketsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all buckets owned by the authenticated sender of the request. To use this operation, you must have the
 * <code>s3:ListAllMyBuckets</code>
 */
ListBucketsResponse * S3Client::listBuckets()
{
    return listBuckets(ListBucketsRequest());
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * ListMultipartUploadsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This action lists in-progress multipart uploads. An in-progress multipart upload is a multipart upload that has been
 * initiated using the Initiate Multipart Upload request, but has not yet been completed or
 *
 * aborted>
 *
 * This action returns at most 1,000 multipart uploads in the response. 1,000 multipart uploads is the maximum number of
 * uploads a response can include, which is also the default value. You can further limit the number of uploads in a
 * response by specifying the <code>max-uploads</code> parameter in the response. If additional multipart uploads satisfy
 * the list criteria, the response will contain an <code>IsTruncated</code> element with the value true. To list the
 * additional multipart uploads, use the <code>key-marker</code> and <code>upload-id-marker</code> request
 *
 * parameters>
 *
 * In the response, the uploads are sorted by key. If your application has initiated more than one multipart upload using
 * the same object key, then uploads in the response are first sorted by key. Additionally, uploads are sorted in ascending
 * order within each key by the upload initiation
 *
 * time>
 *
 * For more information on multipart uploads, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/uploadobjusingmpu.html">Uploading Objects Using Multipart
 *
 * Upload</a>>
 *
 * For information on permissions required to use the multipart upload API, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuAndPermissions.html">Multipart Upload and
 *
 * Permissions</a>>
 *
 * The following operations are related to
 *
 * <code>ListMultipartUploads</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CompleteMultipartUpload.html">CompleteMultipartUpload</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_AbortMultipartUpload.html">AbortMultipartUpload</a>
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
 * Returns metadata about all versions of the objects in a bucket. You can also use request parameters as selection
 * criteria to return metadata about a subset of all the object
 *
 * versions> <b>
 *
 * To use this operation, you must have permissions to perform the <code>s3:ListBucketVersions</code> action. Be aware of
 * the name difference.
 *
 * </p </b> <note>
 *
 * A 200 OK response can contain valid or invalid XML. Make sure to design your application to parse the contents of the
 * response and handle it
 *
 * appropriately> </note>
 *
 * To use this operation, you must have READ access to the
 *
 * bucket>
 *
 * This action is not supported by Amazon S3 on
 *
 * Outposts>
 *
 * The following operations are related to
 *
 * <code>ListObjectVersions</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjectsV2.html">ListObjectsV2</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObject.html">DeleteObject</a>
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
 * Returns some or all (up to 1,000) of the objects in a bucket. You can use the request parameters as selection criteria
 * to return a subset of the objects in a bucket. A 200 OK response can contain valid or invalid XML. Be sure to design
 * your application to parse the contents of the response and handle it
 *
 * appropriately> <b>
 *
 * This action has been revised. We recommend that you use the newer version, <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjectsV2.html">ListObjectsV2</a>, when developing
 * applications. For backward compatibility, Amazon S3 continues to support
 *
 * <code>ListObjects</code>> </b>
 *
 * The following operations are related to
 *
 * <code>ListObjects</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjectsV2.html">ListObjectsV2</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBuckets.html">ListBuckets</a>
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
 * Returns some or all (up to 1,000) of the objects in a bucket with each request. You can use the request parameters as
 * selection criteria to return a subset of the objects in a bucket. A <code>200 OK</code> response can contain valid or
 * invalid XML. Make sure to design your application to parse the contents of the response and handle it appropriately.
 * Objects are returned sorted in an ascending order of the respective key names in the list. For more information about
 * listing objects, see <a href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/ListingKeysUsingAPIs.html">Listing
 * object keys programmatically</a>
 *
 * </p
 *
 * To use this operation, you must have READ access to the
 *
 * bucket>
 *
 * To use this action in an Identity and Access Management (IAM) policy, you must have permissions to perform the
 * <code>s3:ListBucket</code> action. The bucket owner has this permission by default and can grant this permission to
 * others. For more information about permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
 * Related to Bucket Subresource Operations</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing Access Permissions to Your
 * Amazon S3
 *
 * Resources</a>> <b>
 *
 * This section describes the latest revision of this action. We recommend that you use this revised API for application
 * development. For backward compatibility, Amazon S3 continues to support the prior version of this API, <a
 *
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjects.html">ListObjects</a>> </b>
 *
 * To get a list of your buckets, see <a
 *
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBuckets.html">ListBuckets</a>>
 *
 * The following operations are related to
 *
 * <code>ListObjectsV2</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
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
 * Lists the parts that have been uploaded for a specific multipart upload. This operation must include the upload ID,
 * which you obtain by sending the initiate multipart upload request (see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>). This
 * request returns a maximum of 1,000 uploaded parts. The default number of parts returned is 1,000 parts. You can restrict
 * the number of parts returned by specifying the <code>max-parts</code> request parameter. If your multipart upload
 * consists of more than 1,000 parts, the response returns an <code>IsTruncated</code> field with the value of true, and a
 * <code>NextPartNumberMarker</code> element. In subsequent <code>ListParts</code> requests you can include the
 * part-number-marker query string parameter and set its value to the <code>NextPartNumberMarker</code> field value from
 * the previous
 *
 * response>
 *
 * If the upload was created using a checksum algorithm, you will need to have permission to the <code>kms:Decrypt</code>
 * action for the request to succeed.
 *
 * </p
 *
 * For more information on multipart uploads, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/uploadobjusingmpu.html">Uploading Objects Using Multipart
 *
 * Upload</a>>
 *
 * For information on permissions required to use the multipart upload API, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuAndPermissions.html">Multipart Upload and
 *
 * Permissions</a>>
 *
 * The following operations are related to
 *
 * <code>ListParts</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CompleteMultipartUpload.html">CompleteMultipartUpload</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_AbortMultipartUpload.html">AbortMultipartUpload</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectAttributes.html">GetObjectAttributes</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListMultipartUploads.html">ListMultipartUploads</a>
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
 * Sets the accelerate configuration of an existing bucket. Amazon S3 Transfer Acceleration is a bucket-level feature that
 * enables you to perform faster data transfers to Amazon
 *
 * S3>
 *
 * To use this operation, you must have permission to perform the <code>s3:PutAccelerateConfiguration</code> action. The
 * bucket owner has this permission by default. The bucket owner can grant this permission to others. For more information
 * about permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
 * Related to Bucket Subresource Operations</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing Access Permissions to Your
 * Amazon S3
 *
 * Resources</a>>
 *
 * The Transfer Acceleration state of a bucket can be set to one of the following two
 *
 * values> <ul> <li>
 *
 * Enabled – Enables accelerated data transfers to the
 *
 * bucket> </li> <li>
 *
 * Suspended – Disables accelerated data transfers to the
 *
 * bucket> </li> </ul>
 *
 * The <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketAccelerateConfiguration.html">GetBucketAccelerateConfiguration</a>
 * action returns the transfer acceleration state of a
 *
 * bucket>
 *
 * After setting the Transfer Acceleration state of a bucket to Enabled, it might take up to thirty minutes before the data
 * transfer rates to the bucket
 *
 * increase>
 *
 * The name of the bucket used for Transfer Acceleration must be DNS-compliant and must not contain periods
 *
 * (".")>
 *
 * For more information about transfer acceleration, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/transfer-acceleration.html">Transfer
 *
 * Acceleration</a>>
 *
 * The following operations are related to
 *
 * <code>PutBucketAccelerateConfiguration</code>> <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketAccelerateConfiguration.html">GetBucketAccelerateConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
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
 * Sets the permissions on an existing bucket using access control lists (ACL). For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3_ACLs_UsingACLs.html">Using ACLs</a>. To set the ACL of a
 * bucket, you must have <code>WRITE_ACP</code>
 *
 * permission>
 *
 * You can use one of the following two ways to set a bucket's
 *
 * permissions> <ul> <li>
 *
 * Specify the ACL in the request
 *
 * bod> </li> <li>
 *
 * Specify permissions using request
 *
 * header> </li> </ul> <note>
 *
 * You cannot specify access permission using both the body and the request
 *
 * headers> </note>
 *
 * Depending on your application needs, you may choose to set the ACL on a bucket using either the request body or the
 * headers. For example, if you have an existing application that updates a bucket ACL using the request body, then you can
 * continue to use that
 *
 * approach> <b>
 *
 * If your bucket uses the bucket owner enforced setting for S3 Object Ownership, ACLs are disabled and no longer affect
 * permissions. You must use policies to grant access to your bucket and the objects in it. Requests to set ACLs or update
 * ACLs fail and return the <code>AccessControlListNotSupported</code> error code. Requests to read ACLs are still
 * supported. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/about-object-ownership.html">Controlling object
 * ownership</a> in the <i>Amazon S3 User
 *
 * Guide</i>> </b>
 *
 * <b>Access Permissions</b>
 *
 * </p
 *
 * You can set access permissions using one of the following
 *
 * methods> <ul> <li>
 *
 * Specify a canned ACL with the <code>x-amz-acl</code> request header. Amazon S3 supports a set of predefined ACLs, known
 * as <i>canned ACLs</i>. Each canned ACL has a predefined set of grantees and permissions. Specify the canned ACL name as
 * the value of <code>x-amz-acl</code>. If you use this header, you cannot use other access control-specific headers in
 * your request. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#CannedACL">Canned
 *
 * ACL</a>> </li> <li>
 *
 * Specify access permissions explicitly with the <code>x-amz-grant-read</code>, <code>x-amz-grant-read-acp</code>,
 * <code>x-amz-grant-write-acp</code>, and <code>x-amz-grant-full-control</code> headers. When using these headers, you
 * specify explicit access permissions and grantees (Amazon Web Services accounts or Amazon S3 groups) who will receive the
 * permission. If you use these ACL-specific headers, you cannot use the <code>x-amz-acl</code> header to set a canned ACL.
 * These parameters map to the set of permissions that Amazon S3 supports in an ACL. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access Control List (ACL)
 *
 * Overview</a>>
 *
 * You specify each grantee as a type=value pair, where the type is one of the
 *
 * following> <ul> <li>
 *
 * <code>id</code> – if the value specified is the canonical user ID of an Amazon Web Services
 *
 * accoun> </li> <li>
 *
 * <code>uri</code> – if you are granting permissions to a predefined
 *
 * grou> </li> <li>
 *
 * <code>emailAddress</code> – if the value specified is the email address of an Amazon Web Services
 *
 * accoun> <note>
 *
 * Using email addresses to specify a grantee is only supported in the following Amazon Web Services Regions:
 *
 * </p <ul> <li>
 *
 * US East (N.
 *
 * Virginia> </li> <li>
 *
 * US West (N.
 *
 * California> </li> <li>
 *
 * US West
 *
 * (Oregon> </li> <li>
 *
 * Asia Pacific
 *
 * (Singapore> </li> <li>
 *
 * Asia Pacific
 *
 * (Sydney> </li> <li>
 *
 * Asia Pacific
 *
 * (Tokyo> </li> <li>
 *
 * Europe
 *
 * (Ireland> </li> <li>
 *
 * South America (São
 *
 * Paulo> </li> </ul>
 *
 * For a list of all the Amazon S3 supported Regions and endpoints, see <a
 * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#s3_region">Regions and Endpoints</a> in the Amazon Web
 * Services General
 *
 * Reference> </note> </li> </ul>
 *
 * For example, the following <code>x-amz-grant-write</code> header grants create, overwrite, and delete objects permission
 * to LogDelivery group predefined by Amazon S3 and two Amazon Web Services accounts identified by their email
 *
 * addresses>
 *
 * <code>x-amz-grant-write: uri="http://acs.amazonaws.com/groups/s3/LogDelivery", id="111122223333", id="555566667777"
 * </code>
 *
 * </p </li> </ul>
 *
 * You can use either a canned ACL or specify access permissions explicitly. You cannot do
 *
 * both>
 *
 * <b>Grantee Values</b>
 *
 * </p
 *
 * You can specify the person (grantee) to whom you're assigning access rights (using request elements) in the following
 *
 * ways> <ul> <li>
 *
 * By the person's
 *
 * ID>
 *
 * <code><Grantee xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
 * xsi:type="CanonicalUser"><ID><>ID<></ID><DisplayName><>GranteesEmail<></DisplayName> </Grantee></code>
 *
 * </p
 *
 * DisplayName is optional and ignored in the
 *
 * reques> </li> <li>
 *
 * By
 *
 * URI>
 *
 * <code><Grantee xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
 * xsi:type="Group"><URI><>http://acs.amazonaws.com/groups/global/AuthenticatedUsers<></URI></Grantee></code>
 *
 * </p </li> <li>
 *
 * By Email
 *
 * address>
 *
 * <code><Grantee xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
 * xsi:type="AmazonCustomerByEmail"><EmailAddress><>Grantees@email.com<></EmailAddress>lt;/Grantee></code>
 *
 * </p
 *
 * The grantee is resolved to the CanonicalUser and, in a response to a GET Object acl request, appears as the
 * CanonicalUser.
 *
 * </p <note>
 *
 * Using email addresses to specify a grantee is only supported in the following Amazon Web Services Regions:
 *
 * </p <ul> <li>
 *
 * US East (N.
 *
 * Virginia> </li> <li>
 *
 * US West (N.
 *
 * California> </li> <li>
 *
 * US West
 *
 * (Oregon> </li> <li>
 *
 * Asia Pacific
 *
 * (Singapore> </li> <li>
 *
 * Asia Pacific
 *
 * (Sydney> </li> <li>
 *
 * Asia Pacific
 *
 * (Tokyo> </li> <li>
 *
 * Europe
 *
 * (Ireland> </li> <li>
 *
 * South America (São
 *
 * Paulo> </li> </ul>
 *
 * For a list of all the Amazon S3 supported Regions and endpoints, see <a
 * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#s3_region">Regions and Endpoints</a> in the Amazon Web
 * Services General
 *
 * Reference> </note> </li> </ul> <p class="title"> <b>Related Resources</b>
 *
 * </p <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucket.html">DeleteBucket</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectAcl.html">GetObjectAcl</a>
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
 * Sets an analytics configuration for the bucket (specified by the analytics configuration ID). You can have up to 1,000
 * analytics configurations per
 *
 * bucket>
 *
 * You can choose to have storage class analysis export analysis reports sent to a comma-separated values (CSV) flat file.
 * See the <code>DataExport</code> request element. Reports are updated daily and are based on the object filters that you
 * configure. When selecting data export, you specify a destination bucket and an optional destination prefix where the
 * file is written. You can export the data to a destination bucket in a different account. However, the destination bucket
 * must be in the same Region as the bucket that you are making the PUT analytics configuration to. For more information,
 * see <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/analytics-storage-class.html">Amazon S3 Analytics – Storage
 * Class Analysis</a>.
 *
 * </p <b>
 *
 * You must create a bucket policy on the destination bucket where the exported file is written to grant permissions to
 * Amazon S3 to write objects to the bucket. For an example policy, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/example-bucket-policies.html#example-bucket-policies-use-case-9">Granting
 * Permissions for Amazon S3 Inventory and Storage Class
 *
 * Analysis</a>> </b>
 *
 * To use this operation, you must have permissions to perform the <code>s3:PutAnalyticsConfiguration</code> action. The
 * bucket owner has this permission by default. The bucket owner can grant this permission to others. For more information
 * about permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
 * Related to Bucket Subresource Operations</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing Access Permissions to Your
 * Amazon S3
 *
 * Resources</a>> <p class="title"> <b>Special Errors</b>
 *
 * </p <ul> <li> <ul> <li>
 *
 * <i>HTTP Error: HTTP 400 Bad Request</i>
 *
 * </p </li> <li>
 *
 * <i>Code: InvalidArgument</i>
 *
 * </p </li> <li>
 *
 * <i>Cause: Invalid argument.</i>
 *
 * </p </li> </ul> </li> <li> <ul> <li>
 *
 * <i>HTTP Error: HTTP 400 Bad Request</i>
 *
 * </p </li> <li>
 *
 * <i>Code: TooManyConfigurations</i>
 *
 * </p </li> <li>
 *
 * <i>Cause: You are attempting to create a new configuration but have already reached the 1,000-configuration limit.</i>
 *
 * </p </li> </ul> </li> <li> <ul> <li>
 *
 * <i>HTTP Error: HTTP 403 Forbidden</i>
 *
 * </p </li> <li>
 *
 * <i>Code: AccessDenied</i>
 *
 * </p </li> <li>
 *
 * <i>Cause: You are not the owner of the specified bucket, or you do not have the s3:PutAnalyticsConfiguration bucket
 * permission to set the configuration on the bucket.</i>
 *
 * </p </li> </ul> </li> </ul> <p class="title"> <b>Related Resources</b>
 *
 * </p <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketAnalyticsConfiguration.html">GetBucketAnalyticsConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketAnalyticsConfiguration.html">DeleteBucketAnalyticsConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketAnalyticsConfigurations.html">ListBucketAnalyticsConfigurations</a>
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
 * Sets the <code>cors</code> configuration for your bucket. If the configuration exists, Amazon S3 replaces
 *
 * it>
 *
 * To use this operation, you must be allowed to perform the <code>s3:PutBucketCORS</code> action. By default, the bucket
 * owner has this permission and can grant it to
 *
 * others>
 *
 * You set this configuration on a bucket so that the bucket can service cross-origin requests. For example, you might want
 * to enable a request whose origin is <code>http://www.example.com</code> to access your Amazon S3 bucket at
 * <code>my.example.bucket.com</code> by using the browser's <code>XMLHttpRequest</code>
 *
 * capability>
 *
 * To enable cross-origin resource sharing (CORS) on a bucket, you add the <code>cors</code> subresource to the bucket. The
 * <code>cors</code> subresource is an XML document in which you configure rules that identify origins and the HTTP methods
 * that can be executed on your bucket. The document is limited to 64 KB in size.
 *
 * </p
 *
 * When Amazon S3 receives a cross-origin request (or a pre-flight OPTIONS request) against a bucket, it evaluates the
 * <code>cors</code> configuration on the bucket and uses the first <code>CORSRule</code> rule that matches the incoming
 * browser request to enable a cross-origin request. For a rule to match, the following conditions must be
 *
 * met> <ul> <li>
 *
 * The request's <code>Origin</code> header must match <code>AllowedOrigin</code>
 *
 * elements> </li> <li>
 *
 * The request method (for example, GET, PUT, HEAD, and so on) or the <code>Access-Control-Request-Method</code> header in
 * case of a pre-flight <code>OPTIONS</code> request must be one of the <code>AllowedMethod</code> elements.
 *
 * </p </li> <li>
 *
 * Every header specified in the <code>Access-Control-Request-Headers</code> request header of a pre-flight request must
 * match an <code>AllowedHeader</code> element.
 *
 * </p </li> </ul>
 *
 * For more information about CORS, go to <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cors.html">Enabling
 * Cross-Origin Resource Sharing</a> in the <i>Amazon S3 User
 *
 * Guide</i>> <p class="title"> <b>Related Resources</b>
 *
 * </p <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketCors.html">GetBucketCors</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketCors.html">DeleteBucketCors</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTOPTIONSobject.html">RESTOPTIONSobject</a>
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
 * This action uses the <code>encryption</code> subresource to configure default encryption and Amazon S3 Bucket Key for an
 * existing
 *
 * bucket>
 *
 * Default encryption for a bucket can use server-side encryption with Amazon S3-managed keys (SSE-S3) or customer managed
 * keys (SSE-KMS). If you specify default encryption using SSE-KMS, you can also configure Amazon S3 Bucket Key. When the
 * default encryption is SSE-KMS, if you upload an object to the bucket and do not specify the KMS key to use for
 * encryption, Amazon S3 uses the default Amazon Web Services managed KMS key for your account. For information about
 * default encryption, see <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/bucket-encryption.html">Amazon S3
 * default bucket encryption</a> in the <i>Amazon S3 User Guide</i>. For more information about S3 Bucket Keys, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/bucket-key.html">Amazon S3 Bucket Keys</a> in the <i>Amazon S3
 * User
 *
 * Guide</i>> <b>
 *
 * This action requires Amazon Web Services Signature Version 4. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sig-v4-authenticating-requests.html"> Authenticating Requests
 * (Amazon Web Services Signature Version 4)</a>.
 *
 * </p </b>
 *
 * To use this operation, you must have permissions to perform the <code>s3:PutEncryptionConfiguration</code> action. The
 * bucket owner has this permission by default. The bucket owner can grant this permission to others. For more information
 * about permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
 * Related to Bucket Subresource Operations</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing Access Permissions to Your
 * Amazon S3 Resources</a> in the Amazon S3 User Guide.
 *
 * </p <p class="title"> <b>Related Resources</b>
 *
 * </p <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketEncryption.html">GetBucketEncryption</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketEncryption.html">DeleteBucketEncryption</a>
 */
PutBucketEncryptionResponse * S3Client::putBucketEncryption(const PutBucketEncryptionRequest &request)
{
    return qobject_cast<PutBucketEncryptionResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutBucketIntelligentTieringConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Puts a S3 Intelligent-Tiering configuration to the specified bucket. You can have up to 1,000 S3 Intelligent-Tiering
 * configurations per
 *
 * bucket>
 *
 * The S3 Intelligent-Tiering storage class is designed to optimize storage costs by automatically moving data to the most
 * cost-effective storage access tier, without performance impact or operational overhead. S3 Intelligent-Tiering delivers
 * automatic cost savings in three low latency and high throughput access tiers. To get the lowest storage cost on data
 * that can be accessed in minutes to hours, you can choose to activate additional archiving
 *
 * capabilities>
 *
 * The S3 Intelligent-Tiering storage class is the ideal storage class for data with unknown, changing, or unpredictable
 * access patterns, independent of object size or retention period. If the size of an object is less than 128 KB, it is not
 * monitored and not eligible for auto-tiering. Smaller objects can be stored, but they are always charged at the Frequent
 * Access tier rates in the S3 Intelligent-Tiering storage
 *
 * class>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html#sc-dynamic-data-access">Storage class for
 * automatically optimizing frequently and infrequently accessed
 *
 * objects</a>>
 *
 * Operations related to <code>PutBucketIntelligentTieringConfiguration</code> include:
 *
 * </p <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketIntelligentTieringConfiguration.html">DeleteBucketIntelligentTieringConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketIntelligentTieringConfiguration.html">GetBucketIntelligentTieringConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketIntelligentTieringConfigurations.html">ListBucketIntelligentTieringConfigurations</a>
 *
 * </p </li> </ul> <note>
 *
 * You only need S3 Intelligent-Tiering enabled on a bucket if you want to automatically move objects stored in the S3
 * Intelligent-Tiering storage class to the Archive Access or Deep Archive Access
 *
 * tier> </note> <p class="title"> <b>Special Errors</b>
 *
 * </p <ul> <li> <p class="title"> <b>HTTP 400 Bad Request Error</b>
 *
 * </p <ul> <li>
 *
 * <i>Code:</i>
 *
 * InvalidArgumen> </li> <li>
 *
 * <i>Cause:</i> Invalid
 *
 * Argumen> </li> </ul> </li> <li> <p class="title"> <b>HTTP 400 Bad Request Error</b>
 *
 * </p <ul> <li>
 *
 * <i>Code:</i>
 *
 * TooManyConfiguration> </li> <li>
 *
 * <i>Cause:</i> You are attempting to create a new configuration but have already reached the 1,000-configuration limit.
 *
 * </p </li> </ul> </li> <li> <p class="title"> <b>HTTP 403 Forbidden Error</b>
 *
 * </p <ul> <li>
 *
 * <i>Code:</i>
 *
 * AccessDenie> </li> <li>
 *
 * <i>Cause:</i> You are not the owner of the specified bucket, or you do not have the
 * <code>s3:PutIntelligentTieringConfiguration</code> bucket permission to set the configuration on the bucket.
 */
PutBucketIntelligentTieringConfigurationResponse * S3Client::putBucketIntelligentTieringConfiguration(const PutBucketIntelligentTieringConfigurationRequest &request)
{
    return qobject_cast<PutBucketIntelligentTieringConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutBucketInventoryConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This implementation of the <code>PUT</code> action adds an inventory configuration (identified by the inventory ID) to
 * the bucket. You can have up to 1,000 inventory configurations per bucket.
 *
 * </p
 *
 * Amazon S3 inventory generates inventories of the objects in the bucket on a daily or weekly basis, and the results are
 * published to a flat file. The bucket that is inventoried is called the <i>source</i> bucket, and the bucket where the
 * inventory flat file is stored is called the <i>destination</i> bucket. The <i>destination</i> bucket must be in the same
 * Amazon Web Services Region as the <i>source</i> bucket.
 *
 * </p
 *
 * When you configure an inventory for a <i>source</i> bucket, you specify the <i>destination</i> bucket where you want the
 * inventory to be stored, and whether to generate the inventory daily or weekly. You can also configure what object
 * metadata to include and whether to inventory all object versions or only current versions. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-inventory.html">Amazon S3 Inventory</a> in the Amazon S3
 * User
 *
 * Guide> <b>
 *
 * You must create a bucket policy on the <i>destination</i> bucket to grant permissions to Amazon S3 to write objects to
 * the bucket in the defined location. For an example policy, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/example-bucket-policies.html#example-bucket-policies-use-case-9">
 * Granting Permissions for Amazon S3 Inventory and Storage Class
 *
 * Analysis</a>> </b>
 *
 * To use this operation, you must have permissions to perform the <code>s3:PutInventoryConfiguration</code> action. The
 * bucket owner has this permission by default and can grant this permission to others. For more information about
 * permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
 * Related to Bucket Subresource Operations</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing Access Permissions to Your
 * Amazon S3 Resources</a> in the Amazon S3 User
 *
 * Guide> <p class="title"> <b>Special Errors</b>
 *
 * </p <ul> <li> <p class="title"> <b>HTTP 400 Bad Request Error</b>
 *
 * </p <ul> <li>
 *
 * <i>Code:</i>
 *
 * InvalidArgumen> </li> <li>
 *
 * <i>Cause:</i> Invalid
 *
 * Argumen> </li> </ul> </li> <li> <p class="title"> <b>HTTP 400 Bad Request Error</b>
 *
 * </p <ul> <li>
 *
 * <i>Code:</i>
 *
 * TooManyConfiguration> </li> <li>
 *
 * <i>Cause:</i> You are attempting to create a new configuration but have already reached the 1,000-configuration limit.
 *
 * </p </li> </ul> </li> <li> <p class="title"> <b>HTTP 403 Forbidden Error</b>
 *
 * </p <ul> <li>
 *
 * <i>Code:</i>
 *
 * AccessDenie> </li> <li>
 *
 * <i>Cause:</i> You are not the owner of the specified bucket, or you do not have the
 * <code>s3:PutInventoryConfiguration</code> bucket permission to set the configuration on the bucket.
 *
 * </p </li> </ul> </li> </ul> <p class="title"> <b>Related Resources</b>
 *
 * </p <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketInventoryConfiguration.html">GetBucketInventoryConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketInventoryConfiguration.html">DeleteBucketInventoryConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketInventoryConfigurations.html">ListBucketInventoryConfigurations</a>
 */
PutBucketInventoryConfigurationResponse * S3Client::putBucketInventoryConfiguration(const PutBucketInventoryConfigurationRequest &request)
{
    return qobject_cast<PutBucketInventoryConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutBucketLifecycleConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new lifecycle configuration for the bucket or replaces an existing lifecycle configuration. Keep in mind that
 * this will overwrite an existing lifecycle configuration, so if you want to retain any configuration details, they must
 * be included in the new lifecycle configuration. For information about lifecycle configuration, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-lifecycle-mgmt.html">Managing your storage
 *
 * lifecycle</a>> <note>
 *
 * Bucket lifecycle configuration now supports specifying a lifecycle rule using an object key name prefix, one or more
 * object tags, or a combination of both. Accordingly, this section describes the latest API. The previous version of the
 * API supported filtering based only on an object key name prefix, which is supported for backward compatibility. For the
 * related API description, see <a
 *
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycle.html">PutBucketLifecycle</a>> </note>
 *
 * <b>Rules</b>
 *
 * </p
 *
 * You specify the lifecycle configuration in your request body. The lifecycle configuration is specified as XML consisting
 * of one or more rules. An Amazon S3 Lifecycle configuration can have up to 1,000 rules. This limit is not adjustable.
 * Each rule consists of the
 *
 * following> <ul> <li>
 *
 * Filter identifying a subset of objects to which the rule applies. The filter can be based on a key name prefix, object
 * tags, or a combination of
 *
 * both> </li> <li>
 *
 * Status whether the rule is in
 *
 * effect> </li> <li>
 *
 * One or more lifecycle transition and expiration actions that you want Amazon S3 to perform on the objects identified by
 * the filter. If the state of your bucket is versioning-enabled or versioning-suspended, you can have many versions of the
 * same object (one current version and zero or more noncurrent versions). Amazon S3 provides predefined actions that you
 * can specify for current and noncurrent object
 *
 * versions> </li> </ul>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lifecycle-mgmt.html">Object
 * Lifecycle Management</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/intro-lifecycle-rules.html">Lifecycle Configuration
 *
 * Elements</a>>
 *
 * <b>Permissions</b>
 *
 * </p
 *
 * By default, all Amazon S3 resources are private, including buckets, objects, and related subresources (for example,
 * lifecycle configuration and website configuration). Only the resource owner (that is, the Amazon Web Services account
 * that created it) can access the resource. The resource owner can optionally grant access permissions to others by
 * writing an access policy. For this operation, a user must get the <code>s3:PutLifecycleConfiguration</code>
 *
 * permission>
 *
 * You can also explicitly deny permissions. Explicit deny also supersedes any other permissions. If you want to block
 * users or accounts from removing or deleting objects from your bucket, you must deny them permissions for the following
 *
 * actions> <ul> <li>
 *
 * <code>s3:DeleteObject</code>
 *
 * </p </li> <li>
 *
 * <code>s3:DeleteObjectVersion</code>
 *
 * </p </li> <li>
 *
 * <code>s3:PutLifecycleConfiguration</code>
 *
 * </p </li> </ul>
 *
 * For more information about permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing Access Permissions to Your
 * Amazon S3
 *
 * Resources</a>>
 *
 * The following are related to
 *
 * <code>PutBucketLifecycleConfiguration</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/lifecycle-configuration-examples.html">Examples of Lifecycle
 * Configuration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketLifecycle.html">DeleteBucketLifecycle</a>
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
 * All logs are saved to buckets in the same Amazon Web Services Region as the source bucket. To set the logging status of
 * a bucket, you must be the bucket
 *
 * owner>
 *
 * The bucket owner is automatically granted FULL_CONTROL to all logs. You use the <code>Grantee</code> request element to
 * grant access to other people. The <code>Permissions</code> request element specifies the kind of access the grantee has
 * to the
 *
 * logs> <b>
 *
 * If the target bucket for log delivery uses the bucket owner enforced setting for S3 Object Ownership, you can't use the
 * <code>Grantee</code> request element to grant access to others. Permissions can only be granted using policies. For more
 * information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/enable-server-access-logging.html#grant-log-delivery-permissions-general">Permissions
 * for server access log delivery</a> in the <i>Amazon S3 User
 *
 * Guide</i>> </b>
 *
 * <b>Grantee Values</b>
 *
 * </p
 *
 * You can specify the person (grantee) to whom you're assigning access rights (using request elements) in the following
 *
 * ways> <ul> <li>
 *
 * By the person's
 *
 * ID>
 *
 * <code><Grantee xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
 * xsi:type="CanonicalUser"><ID><>ID<></ID><DisplayName><>GranteesEmail<></DisplayName> </Grantee></code>
 *
 * </p
 *
 * DisplayName is optional and ignored in the
 *
 * request> </li> <li>
 *
 * By Email
 *
 * address>
 *
 * <code> <Grantee xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
 * xsi:type="AmazonCustomerByEmail"><EmailAddress><>Grantees@email.com<></EmailAddress></Grantee></code>
 *
 * </p
 *
 * The grantee is resolved to the CanonicalUser and, in a response to a GET Object acl request, appears as the
 *
 * CanonicalUser> </li> <li>
 *
 * By
 *
 * URI>
 *
 * <code><Grantee xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
 * xsi:type="Group"><URI><>http://acs.amazonaws.com/groups/global/AuthenticatedUsers<></URI></Grantee></code>
 *
 * </p </li> </ul>
 *
 * To enable logging, you use LoggingEnabled and its children request elements. To disable logging, you use an empty
 * BucketLoggingStatus request
 *
 * element>
 *
 * <code><BucketLoggingStatus xmlns="http://doc.s3.amazonaws.com/2006-03-01" /></code>
 *
 * </p
 *
 * For more information about server access logging, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/ServerLogs.html">Server Access Logging</a> in the <i>Amazon
 * S3 User Guide</i>.
 *
 * </p
 *
 * For more information about creating a bucket, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>. For more information
 * about returning the logging status of a bucket, see <a
 *
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLogging.html">GetBucketLogging</a>>
 *
 * The following operations are related to
 *
 * <code>PutBucketLogging</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucket.html">DeleteBucket</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLogging.html">GetBucketLogging</a>
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
 * Sets a metrics configuration (specified by the metrics configuration ID) for the bucket. You can have up to 1,000
 * metrics configurations per bucket. If you're updating an existing metrics configuration, note that this is a full
 * replacement of the existing metrics configuration. If you don't include the elements you want to keep, they are
 *
 * erased>
 *
 * To use this operation, you must have permissions to perform the <code>s3:PutMetricsConfiguration</code> action. The
 * bucket owner has this permission by default. The bucket owner can grant this permission to others. For more information
 * about permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
 * Related to Bucket Subresource Operations</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing Access Permissions to Your
 * Amazon S3
 *
 * Resources</a>>
 *
 * For information about CloudWatch request metrics for Amazon S3, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cloudwatch-monitoring.html">Monitoring Metrics with Amazon
 *
 * CloudWatch</a>>
 *
 * The following operations are related to
 *
 * <code>PutBucketMetricsConfiguration</code>> <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketMetricsConfiguration.html">DeleteBucketMetricsConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketMetricsConfiguration.html">GetBucketMetricsConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketMetricsConfigurations.html">ListBucketMetricsConfigurations</a>
 *
 * </p </li> </ul>
 *
 * <code>GetBucketLifecycle</code> has the following special
 *
 * error> <ul> <li>
 *
 * Error code: <code>TooManyConfigurations</code>
 *
 * </p <ul> <li>
 *
 * Description: You are attempting to create a new configuration but have already reached the 1,000-configuration
 *
 * limit> </li> <li>
 *
 * HTTP Status Code: HTTP 400 Bad
 */
PutBucketMetricsConfigurationResponse * S3Client::putBucketMetricsConfiguration(const PutBucketMetricsConfigurationRequest &request)
{
    return qobject_cast<PutBucketMetricsConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutBucketNotificationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables notifications of specified events for a bucket. For more information about event notifications, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/NotificationHowTo.html">Configuring Event
 *
 * Notifications</a>>
 *
 * Using this API, you can replace an existing notification configuration. The configuration is an XML file that defines
 * the event types that you want Amazon S3 to publish and the destination where you want Amazon S3 to publish an event
 * notification when it detects an event of the specified
 *
 * type>
 *
 * By default, your bucket has no event notifications configured. That is, the notification configuration will be an empty
 *
 * <code>NotificationConfiguration</code>>
 *
 * <code><NotificationConfiguration></code>
 *
 * </p
 *
 * <code></NotificationConfiguration></code>
 *
 * </p
 *
 * This action replaces the existing notification configuration with the configuration you include in the request
 *
 * body>
 *
 * After Amazon S3 receives this request, it first verifies that any Amazon Simple Notification Service (Amazon SNS) or
 * Amazon Simple Queue Service (Amazon SQS) destination exists, and that the bucket owner has permission to publish to it
 * by sending a test notification. In the case of Lambda destinations, Amazon S3 verifies that the Lambda function
 * permissions grant Amazon S3 permission to invoke the function from the Amazon S3 bucket. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/NotificationHowTo.html">Configuring Notifications for Amazon S3
 *
 * Events</a>>
 *
 * You can disable notifications by adding the empty NotificationConfiguration
 *
 * element>
 *
 * For more information about the number of event notification configurations that you can create per bucket, see <a
 * href="https://docs.aws.amazon.com/general/latest/gr/s3.html#limits_s3">Amazon S3 service quotas</a> in <i>Amazon Web
 * Services General
 *
 * Reference</i>>
 *
 * By default, only the bucket owner can configure notifications on a bucket. However, bucket owners can use a bucket
 * policy to grant permission to other users to set this configuration with <code>s3:PutBucketNotification</code>
 *
 * permission> <note>
 *
 * The PUT notification is an atomic operation. For example, suppose your notification configuration includes SNS topic,
 * SQS queue, and Lambda function configurations. When you send a PUT request with this configuration, Amazon S3 sends test
 * messages to your SNS topic. If the message fails, the entire PUT action will fail, and Amazon S3 will not add the
 * configuration to your
 *
 * bucket> </note>
 *
 * <b>Responses</b>
 *
 * </p
 *
 * If the configuration in the request body includes only one <code>TopicConfiguration</code> specifying only the
 * <code>s3:ReducedRedundancyLostObject</code> event type, the response will also include the
 * <code>x-amz-sns-test-message-id</code> header containing the message ID of the test notification sent to the
 *
 * topic>
 *
 * The following action is related to
 *
 * <code>PutBucketNotificationConfiguration</code>> <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketNotificationConfiguration.html">GetBucketNotificationConfiguration</a>
 */
PutBucketNotificationConfigurationResponse * S3Client::putBucketNotificationConfiguration(const PutBucketNotificationConfigurationRequest &request)
{
    return qobject_cast<PutBucketNotificationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutBucketOwnershipControlsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or modifies <code>OwnershipControls</code> for an Amazon S3 bucket. To use this operation, you must have the
 * <code>s3:PutBucketOwnershipControls</code> permission. For more information about Amazon S3 permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/user-guide/using-with-s3-actions.html">Specifying permissions in a
 * policy</a>.
 *
 * </p
 *
 * For information about Amazon S3 Object Ownership, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/user-guide/about-object-ownership.html">Using object ownership</a>.
 *
 * </p
 *
 * The following operations are related to
 *
 * <code>PutBucketOwnershipControls</code>> <ul> <li>
 *
 * <a>GetBucketOwnershipControls</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteBucketOwnershipControls</a>
 */
PutBucketOwnershipControlsResponse * S3Client::putBucketOwnershipControls(const PutBucketOwnershipControlsRequest &request)
{
    return qobject_cast<PutBucketOwnershipControlsResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutBucketPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies an Amazon S3 bucket policy to an Amazon S3 bucket. If you are using an identity other than the root user of the
 * Amazon Web Services account that owns the bucket, the calling identity must have the <code>PutBucketPolicy</code>
 * permissions on the specified bucket and belong to the bucket owner's account in order to use this
 *
 * operation>
 *
 * If you don't have <code>PutBucketPolicy</code> permissions, Amazon S3 returns a <code>403 Access Denied</code> error. If
 * you have the correct permissions, but you're not using an identity that belongs to the bucket owner's account, Amazon S3
 * returns a <code>405 Method Not Allowed</code>
 *
 * error> <b>
 *
 * As a security precaution, the root user of the Amazon Web Services account that owns a bucket can always use this
 * operation, even if the policy explicitly denies the root user the ability to perform this action.
 *
 * </p </b>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/example-bucket-policies.html">Bucket policy
 *
 * examples</a>>
 *
 * The following operations are related to
 *
 * <code>PutBucketPolicy</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucket.html">DeleteBucket</a>
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
 * Creates a replication configuration or replaces an existing one. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/replication.html">Replication</a> in the <i>Amazon S3 User
 * Guide</i>.
 *
 * </p
 *
 * Specify the replication configuration in the request body. In the replication configuration, you provide the name of the
 * destination bucket or buckets where you want Amazon S3 to replicate objects, the IAM role that Amazon S3 can assume to
 * replicate objects on your behalf, and other relevant
 *
 * information>
 *
 * A replication configuration must include at least one rule, and can contain a maximum of 1,000. Each rule identifies a
 * subset of objects to replicate by filtering the objects in the source bucket. To choose additional subsets of objects to
 * replicate, add a rule for each
 *
 * subset>
 *
 * To specify a subset of the objects in the source bucket to apply a replication rule to, add the Filter element as a
 * child of the Rule element. You can filter objects based on an object key prefix, one or more object tags, or both. When
 * you add the Filter element in the configuration, you must also add the following elements:
 * <code>DeleteMarkerReplication</code>, <code>Status</code>, and
 *
 * <code>Priority</code>> <note>
 *
 * If you are using an earlier version of the replication configuration, Amazon S3 handles replication of delete markers
 * differently. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/replication-add-config.html#replication-backward-compat-considerations">Backward
 *
 * Compatibility</a>> </note>
 *
 * For information about enabling versioning on a bucket, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/Versioning.html">Using
 *
 * Versioning</a>>
 *
 * <b>Handling Replication of Encrypted Objects</b>
 *
 * </p
 *
 * By default, Amazon S3 doesn't replicate objects that are stored at rest using server-side encryption with KMS keys. To
 * replicate Amazon Web Services KMS-encrypted objects, add the following: <code>SourceSelectionCriteria</code>,
 * <code>SseKmsEncryptedObjects</code>, <code>Status</code>, <code>EncryptionConfiguration</code>, and
 * <code>ReplicaKmsKeyID</code>. For information about replication configuration, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/replication-config-for-kms-objects.html">Replicating Objects
 * Created with SSE Using KMS
 *
 * keys</a>>
 *
 * For information on <code>PutBucketReplication</code> errors, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html#ReplicationErrorCodeList">List of
 * replication-related error codes</a>
 *
 * </p
 *
 * <b>Permissions</b>
 *
 * </p
 *
 * To create a <code>PutBucketReplication</code> request, you must have <code>s3:PutReplicationConfiguration</code>
 * permissions for the bucket.
 *
 * </p
 *
 * By default, a resource owner, in this case the Amazon Web Services account that created the bucket, can perform this
 * operation. The resource owner can also grant others permissions to perform the operation. For more information about
 * permissions, see <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
 * Permissions in a Policy</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing Access Permissions to Your
 * Amazon S3
 *
 * Resources</a>> <note>
 *
 * To perform this operation, the user or role performing the action must have the <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use_passrole.html">iam:PassRole</a>
 *
 * permission> </note>
 *
 * The following operations are related to
 *
 * <code>PutBucketReplication</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketReplication.html">GetBucketReplication</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketReplication.html">DeleteBucketReplication</a>
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
 * charged for the download. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/RequesterPaysBuckets.html">Requester Pays
 *
 * Buckets</a>>
 *
 * The following operations are related to
 *
 * <code>PutBucketRequestPayment</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketRequestPayment.html">GetBucketRequestPayment</a>
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
 *
 * bucket>
 *
 * Use tags to organize your Amazon Web Services bill to reflect your own cost structure. To do this, sign up to get your
 * Amazon Web Services account bill with tag key values included. Then, to see the cost of combined resources, organize
 * your billing information according to resources with the same tag key values. For example, you can tag several resources
 * with a specific application name, and then organize your billing information to see the total cost of that application
 * across several services. For more information, see <a
 * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Cost Allocation and Tagging</a>
 * and <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/CostAllocTagging.html">Using Cost Allocation in Amazon S3
 * Bucket
 *
 * Tags</a>> <note>
 *
 * When this operation sets the tags for a bucket, it will overwrite any current tags the bucket already has. You cannot
 * use this operation to add tags to an existing list of
 *
 * tags> </note>
 *
 * To use this operation, you must have permissions to perform the <code>s3:PutBucketTagging</code> action. The bucket
 * owner has this permission by default and can grant this permission to others. For more information about permissions,
 * see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
 * Related to Bucket Subresource Operations</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing Access Permissions to Your
 * Amazon S3
 *
 * Resources</a>>
 *
 * <code>PutBucketTagging</code> has the following special
 *
 * errors> <ul> <li>
 *
 * Error code: <code>InvalidTagError</code>
 *
 * </p <ul> <li>
 *
 * Description: The tag provided was not a valid tag. This error can occur if the tag did not pass input validation. For
 * information about tag restrictions, see <a
 * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-Defined Tag
 * Restrictions</a> and <a
 * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/aws-tag-restrictions.html">Amazon Web
 * Services-Generated Cost Allocation Tag
 *
 * Restrictions</a>> </li> </ul> </li> <li>
 *
 * Error code: <code>MalformedXMLError</code>
 *
 * </p <ul> <li>
 *
 * Description: The XML provided does not match the
 *
 * schema> </li> </ul> </li> <li>
 *
 * Error code: <code>OperationAbortedError </code>
 *
 * </p <ul> <li>
 *
 * Description: A conflicting conditional action is currently in progress against this resource. Please try
 *
 * again> </li> </ul> </li> <li>
 *
 * Error code: <code>InternalError</code>
 *
 * </p <ul> <li>
 *
 * Description: The service was unable to apply the provided tag to the
 *
 * bucket> </li> </ul> </li> </ul>
 *
 * The following operations are related to
 *
 * <code>PutBucketTagging</code>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketTagging.html">GetBucketTagging</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketTagging.html">DeleteBucketTagging</a>
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
 * Sets the versioning state of an existing
 *
 * bucket>
 *
 * You can set the versioning state with one of the following
 *
 * values>
 *
 * <b>Enabled</b>—Enables versioning for the objects in the bucket. All objects added to the bucket receive a unique
 * version
 *
 * ID>
 *
 * <b>Suspended</b>—Disables versioning for the objects in the bucket. All objects added to the bucket receive the version
 * ID
 *
 * null>
 *
 * If the versioning state has never been set on a bucket, it has no versioning state; a <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketVersioning.html">GetBucketVersioning</a> request does
 * not return a versioning state
 *
 * value>
 *
 * In order to enable MFA Delete, you must be the bucket owner. If you are the bucket owner and want to enable MFA Delete
 * in the bucket versioning configuration, you must include the <code>x-amz-mfa request</code> header and the
 * <code>Status</code> and the <code>MfaDelete</code> request elements in a request to set the versioning state of the
 *
 * bucket> <b>
 *
 * If you have an object expiration lifecycle policy in your non-versioned bucket and you want to maintain the same
 * permanent delete behavior when you enable versioning, you must add a noncurrent expiration policy. The noncurrent
 * expiration lifecycle policy will manage the deletes of the noncurrent object versions in the version-enabled bucket. (A
 * version-enabled bucket maintains one current and zero or more noncurrent object versions.) For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lifecycle-mgmt.html#lifecycle-and-other-bucket-config">Lifecycle
 * and
 *
 * Versioning</a>> </b> <p class="title"> <b>Related Resources</b>
 *
 * </p <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucket.html">DeleteBucket</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketVersioning.html">GetBucketVersioning</a>
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
 * Sets the configuration of the website that is specified in the <code>website</code> subresource. To configure a bucket
 * as a website, you can add this subresource on the bucket with website configuration information such as the file name of
 * the index document and any redirect rules. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/WebsiteHosting.html">Hosting Websites on Amazon
 *
 * S3</a>>
 *
 * This PUT action requires the <code>S3:PutBucketWebsite</code> permission. By default, only the bucket owner can
 * configure the website attached to a bucket; however, bucket owners can allow other users to set the website
 * configuration by writing a bucket policy that grants them the <code>S3:PutBucketWebsite</code>
 *
 * permission>
 *
 * To redirect all website requests sent to the bucket's website endpoint, you add a website configuration with the
 * following elements. Because all requests are sent to another website, you don't need to provide index document name for
 * the
 *
 * bucket> <ul> <li>
 *
 * <code>WebsiteConfiguration</code>
 *
 * </p </li> <li>
 *
 * <code>RedirectAllRequestsTo</code>
 *
 * </p </li> <li>
 *
 * <code>HostName</code>
 *
 * </p </li> <li>
 *
 * <code>Protocol</code>
 *
 * </p </li> </ul>
 *
 * If you want granular control over redirects, you can use the following elements to add routing rules that describe
 * conditions for redirecting requests and information about the redirect destination. In this case, the website
 * configuration must provide an index document for the bucket, because some requests might not be redirected.
 *
 * </p <ul> <li>
 *
 * <code>WebsiteConfiguration</code>
 *
 * </p </li> <li>
 *
 * <code>IndexDocument</code>
 *
 * </p </li> <li>
 *
 * <code>Suffix</code>
 *
 * </p </li> <li>
 *
 * <code>ErrorDocument</code>
 *
 * </p </li> <li>
 *
 * <code>Key</code>
 *
 * </p </li> <li>
 *
 * <code>RoutingRules</code>
 *
 * </p </li> <li>
 *
 * <code>RoutingRule</code>
 *
 * </p </li> <li>
 *
 * <code>Condition</code>
 *
 * </p </li> <li>
 *
 * <code>HttpErrorCodeReturnedEquals</code>
 *
 * </p </li> <li>
 *
 * <code>KeyPrefixEquals</code>
 *
 * </p </li> <li>
 *
 * <code>Redirect</code>
 *
 * </p </li> <li>
 *
 * <code>Protocol</code>
 *
 * </p </li> <li>
 *
 * <code>HostName</code>
 *
 * </p </li> <li>
 *
 * <code>ReplaceKeyPrefixWith</code>
 *
 * </p </li> <li>
 *
 * <code>ReplaceKeyWith</code>
 *
 * </p </li> <li>
 *
 * <code>HttpRedirectCode</code>
 *
 * </p </li> </ul>
 *
 * Amazon S3 has a limitation of 50 routing rules per website configuration. If you require more than 50 routing rules, you
 * can use object redirect. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/how-to-page-redirect.html">Configuring an Object Redirect</a> in
 * the <i>Amazon S3 User
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
 * Adds an object to a bucket. You must have WRITE permissions on a bucket to add an object to
 *
 * it>
 *
 * Amazon S3 never adds partial objects; if you receive a success response, Amazon S3 added the entire object to the
 *
 * bucket>
 *
 * Amazon S3 is a distributed system. If it receives multiple write requests for the same object simultaneously, it
 * overwrites all but the last object written. Amazon S3 does not provide object locking; if you need this, make sure to
 * build it into your application layer or use versioning
 *
 * instead>
 *
 * To ensure that data is not corrupted traversing the network, use the <code>Content-MD5</code> header. When you use this
 * header, Amazon S3 checks the object against the provided MD5 value and, if they do not match, returns an error.
 * Additionally, you can calculate the MD5 while putting an object to Amazon S3 and compare the returned ETag to the
 * calculated MD5
 *
 * value> <note> <ul> <li>
 *
 * To successfully complete the <code>PutObject</code> request, you must have the <code>s3:PutObject</code> in your IAM
 *
 * permissions> </li> <li>
 *
 * To successfully change the objects acl of your <code>PutObject</code> request, you must have the
 * <code>s3:PutObjectAcl</code> in your IAM
 *
 * permissions> </li> <li>
 *
 * The <code>Content-MD5</code> header is required for any request to upload an object with a retention period configured
 * using Amazon S3 Object Lock. For more information about Amazon S3 Object Lock, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock-overview.html">Amazon S3 Object Lock Overview</a> in
 * the <i>Amazon S3 User Guide</i>.
 *
 * </p </li> </ul> </note>
 *
 * <b>Server-side Encryption</b>
 *
 * </p
 *
 * You can optionally request server-side encryption. With server-side encryption, Amazon S3 encrypts your data as it
 * writes it to disks in its data centers and decrypts the data when you access it. You have the option to provide your own
 * encryption key or use Amazon Web Services managed encryption keys (SSE-S3 or SSE-KMS). For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingServerSideEncryption.html">Using Server-Side
 *
 * Encryption</a>>
 *
 * If you request server-side encryption using Amazon Web Services Key Management Service (SSE-KMS), you can enable an S3
 * Bucket Key at the object-level. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/bucket-key.html">Amazon S3 Bucket Keys</a> in the <i>Amazon S3
 * User
 *
 * Guide</i>>
 *
 * <b>Access Control List (ACL)-Specific Request Headers</b>
 *
 * </p
 *
 * You can use headers to grant ACL- based permissions. By default, all objects are private. Only the owner has full access
 * control. When adding a new object, you can grant permissions to individual Amazon Web Services accounts or to predefined
 * groups defined by Amazon S3. These permissions are then added to the ACL on the object. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access Control List (ACL) Overview</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-using-rest-api.html">Managing ACLs Using the REST API</a>.
 *
 * </p
 *
 * If the bucket that you're uploading objects to uses the bucket owner enforced setting for S3 Object Ownership, ACLs are
 * disabled and no longer affect permissions. Buckets that use this setting only accept PUT requests that don't specify an
 * ACL or PUT requests that specify bucket owner full control ACLs, such as the <code>bucket-owner-full-control</code>
 * canned ACL or an equivalent form of this ACL expressed in the XML format. PUT requests that contain other ACLs (for
 * example, custom grants to certain Amazon Web Services accounts) fail and return a <code>400</code> error with the error
 * code
 *
 * <code>AccessControlListNotSupported</code>>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/about-object-ownership.html">
 * Controlling ownership of objects and disabling ACLs</a> in the <i>Amazon S3 User
 *
 * Guide</i>> <note>
 *
 * If your bucket uses the bucket owner enforced setting for Object Ownership, all objects written to the bucket by any
 * account will be owned by the bucket
 *
 * owner> </note>
 *
 * <b>Storage Class Options</b>
 *
 * </p
 *
 * By default, Amazon S3 uses the STANDARD Storage Class to store newly created objects. The STANDARD storage class
 * provides high durability and high availability. Depending on performance needs, you can specify a different Storage
 * Class. Amazon S3 on Outposts only uses the OUTPOSTS Storage Class. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html">Storage Classes</a> in the <i>Amazon S3
 * User
 *
 * Guide</i>>
 *
 * <b>Versioning</b>
 *
 * </p
 *
 * If you enable versioning for a bucket, Amazon S3 automatically generates a unique version ID for the object being
 * stored. Amazon S3 returns this ID in the response. When you enable versioning for a bucket, if Amazon S3 receives
 * multiple write requests for the same object simultaneously, it stores all of the
 *
 * objects>
 *
 * For more information about versioning, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/AddingObjectstoVersioningEnabledBuckets.html">Adding Objects to
 * Versioning Enabled Buckets</a>. For information about returning the versioning state of a bucket, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketVersioning.html">GetBucketVersioning</a>.
 *
 * </p <p class="title"> <b>Related Resources</b>
 *
 * </p <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CopyObject.html">CopyObject</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObject.html">DeleteObject</a>
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
 * Uses the <code>acl</code> subresource to set the access control list (ACL) permissions for a new or existing object in
 * an S3 bucket. You must have <code>WRITE_ACP</code> permission to set the ACL of an object. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#permissions">What permissions can I grant?</a>
 * in the <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * This action is not supported by Amazon S3 on
 *
 * Outposts>
 *
 * Depending on your application needs, you can choose to set the ACL on an object using either the request body or the
 * headers. For example, if you have an existing application that updates a bucket ACL using the request body, you can
 * continue to use that approach. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access Control List (ACL) Overview</a> in the
 * <i>Amazon S3 User
 *
 * Guide</i>> <b>
 *
 * If your bucket uses the bucket owner enforced setting for S3 Object Ownership, ACLs are disabled and no longer affect
 * permissions. You must use policies to grant access to your bucket and the objects in it. Requests to set ACLs or update
 * ACLs fail and return the <code>AccessControlListNotSupported</code> error code. Requests to read ACLs are still
 * supported. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/about-object-ownership.html">Controlling object
 * ownership</a> in the <i>Amazon S3 User
 *
 * Guide</i>> </b>
 *
 * <b>Access Permissions</b>
 *
 * </p
 *
 * You can set access permissions using one of the following
 *
 * methods> <ul> <li>
 *
 * Specify a canned ACL with the <code>x-amz-acl</code> request header. Amazon S3 supports a set of predefined ACLs, known
 * as canned ACLs. Each canned ACL has a predefined set of grantees and permissions. Specify the canned ACL name as the
 * value of <code>x-amz-ac</code>l. If you use this header, you cannot use other access control-specific headers in your
 * request. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#CannedACL">Canned
 *
 * ACL</a>> </li> <li>
 *
 * Specify access permissions explicitly with the <code>x-amz-grant-read</code>, <code>x-amz-grant-read-acp</code>,
 * <code>x-amz-grant-write-acp</code>, and <code>x-amz-grant-full-control</code> headers. When using these headers, you
 * specify explicit access permissions and grantees (Amazon Web Services accounts or Amazon S3 groups) who will receive the
 * permission. If you use these ACL-specific headers, you cannot use <code>x-amz-acl</code> header to set a canned ACL.
 * These parameters map to the set of permissions that Amazon S3 supports in an ACL. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access Control List (ACL)
 *
 * Overview</a>>
 *
 * You specify each grantee as a type=value pair, where the type is one of the
 *
 * following> <ul> <li>
 *
 * <code>id</code> – if the value specified is the canonical user ID of an Amazon Web Services
 *
 * accoun> </li> <li>
 *
 * <code>uri</code> – if you are granting permissions to a predefined
 *
 * grou> </li> <li>
 *
 * <code>emailAddress</code> – if the value specified is the email address of an Amazon Web Services
 *
 * accoun> <note>
 *
 * Using email addresses to specify a grantee is only supported in the following Amazon Web Services Regions:
 *
 * </p <ul> <li>
 *
 * US East (N.
 *
 * Virginia> </li> <li>
 *
 * US West (N.
 *
 * California> </li> <li>
 *
 * US West
 *
 * (Oregon> </li> <li>
 *
 * Asia Pacific
 *
 * (Singapore> </li> <li>
 *
 * Asia Pacific
 *
 * (Sydney> </li> <li>
 *
 * Asia Pacific
 *
 * (Tokyo> </li> <li>
 *
 * Europe
 *
 * (Ireland> </li> <li>
 *
 * South America (São
 *
 * Paulo> </li> </ul>
 *
 * For a list of all the Amazon S3 supported Regions and endpoints, see <a
 * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#s3_region">Regions and Endpoints</a> in the Amazon Web
 * Services General
 *
 * Reference> </note> </li> </ul>
 *
 * For example, the following <code>x-amz-grant-read</code> header grants list objects permission to the two Amazon Web
 * Services accounts identified by their email
 *
 * addresses>
 *
 * <code>x-amz-grant-read: emailAddress="xyz@amazon.com", emailAddress="abc@amazon.com" </code>
 *
 * </p </li> </ul>
 *
 * You can use either a canned ACL or specify access permissions explicitly. You cannot do
 *
 * both>
 *
 * <b>Grantee Values</b>
 *
 * </p
 *
 * You can specify the person (grantee) to whom you're assigning access rights (using request elements) in the following
 *
 * ways> <ul> <li>
 *
 * By the person's
 *
 * ID>
 *
 * <code><Grantee xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
 * xsi:type="CanonicalUser"><ID><>ID<></ID><DisplayName><>GranteesEmail<></DisplayName> </Grantee></code>
 *
 * </p
 *
 * DisplayName is optional and ignored in the
 *
 * request> </li> <li>
 *
 * By
 *
 * URI>
 *
 * <code><Grantee xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
 * xsi:type="Group"><URI><>http://acs.amazonaws.com/groups/global/AuthenticatedUsers<></URI></Grantee></code>
 *
 * </p </li> <li>
 *
 * By Email
 *
 * address>
 *
 * <code><Grantee xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
 * xsi:type="AmazonCustomerByEmail"><EmailAddress><>Grantees@email.com<></EmailAddress>lt;/Grantee></code>
 *
 * </p
 *
 * The grantee is resolved to the CanonicalUser and, in a response to a GET Object acl request, appears as the
 *
 * CanonicalUser> <note>
 *
 * Using email addresses to specify a grantee is only supported in the following Amazon Web Services Regions:
 *
 * </p <ul> <li>
 *
 * US East (N.
 *
 * Virginia> </li> <li>
 *
 * US West (N.
 *
 * California> </li> <li>
 *
 * US West
 *
 * (Oregon> </li> <li>
 *
 * Asia Pacific
 *
 * (Singapore> </li> <li>
 *
 * Asia Pacific
 *
 * (Sydney> </li> <li>
 *
 * Asia Pacific
 *
 * (Tokyo> </li> <li>
 *
 * Europe
 *
 * (Ireland> </li> <li>
 *
 * South America (São
 *
 * Paulo> </li> </ul>
 *
 * For a list of all the Amazon S3 supported Regions and endpoints, see <a
 * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#s3_region">Regions and Endpoints</a> in the Amazon Web
 * Services General
 *
 * Reference> </note> </li> </ul>
 *
 * <b>Versioning</b>
 *
 * </p
 *
 * The ACL of an object is set at the object version level. By default, PUT sets the ACL of the current version of an
 * object. To set the ACL of a different version, use the <code>versionId</code>
 *
 * subresource> <p class="title"> <b>Related Resources</b>
 *
 * </p <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CopyObject.html">CopyObject</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
 */
PutObjectAclResponse * S3Client::putObjectAcl(const PutObjectAclRequest &request)
{
    return qobject_cast<PutObjectAclResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutObjectLegalHoldResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies a legal hold configuration to the specified object. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock.html">Locking
 *
 * Objects</a>>
 *
 * This action is not supported by Amazon S3 on
 */
PutObjectLegalHoldResponse * S3Client::putObjectLegalHold(const PutObjectLegalHoldRequest &request)
{
    return qobject_cast<PutObjectLegalHoldResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutObjectLockConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Places an Object Lock configuration on the specified bucket. The rule specified in the Object Lock configuration will be
 * applied by default to every new object placed in the specified bucket. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock.html">Locking Objects</a>.
 *
 * </p <note> <ul> <li>
 *
 * The <code>DefaultRetention</code> settings require both a mode and a
 *
 * period> </li> <li>
 *
 * The <code>DefaultRetention</code> period can be either <code>Days</code> or <code>Years</code> but you must select one.
 * You cannot specify <code>Days</code> and <code>Years</code> at the same
 *
 * time> </li> <li>
 *
 * You can only enable Object Lock for new buckets. If you want to turn on Object Lock for an existing bucket, contact
 * Amazon Web Services
 */
PutObjectLockConfigurationResponse * S3Client::putObjectLockConfiguration(const PutObjectLockConfigurationRequest &request)
{
    return qobject_cast<PutObjectLockConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutObjectRetentionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Places an Object Retention configuration on an object. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock.html">Locking Objects</a>. Users or accounts require
 * the <code>s3:PutObjectRetention</code> permission in order to place an Object Retention configuration on objects.
 * Bypassing a Governance Retention configuration requires the <code>s3:BypassGovernanceRetention</code> permission.
 *
 * </p
 *
 * This action is not supported by Amazon S3 on
 */
PutObjectRetentionResponse * S3Client::putObjectRetention(const PutObjectRetentionRequest &request)
{
    return qobject_cast<PutObjectRetentionResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutObjectTaggingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the supplied tag-set to an object that already exists in a
 *
 * bucket>
 *
 * A tag is a key-value pair. You can associate tags with an object by sending a PUT request against the tagging
 * subresource that is associated with the object. You can retrieve tags by sending a GET request. For more information,
 * see <a
 *
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectTagging.html">GetObjectTagging</a>>
 *
 * For tagging-related restrictions related to characters and encodings, see <a
 * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">Tag
 * Restrictions</a>. Note that Amazon S3 limits the maximum number of tags to 10 tags per
 *
 * object>
 *
 * To use this operation, you must have permission to perform the <code>s3:PutObjectTagging</code> action. By default, the
 * bucket owner has this permission and can grant this permission to
 *
 * others>
 *
 * To put tags of any other version, use the <code>versionId</code> query parameter. You also need permission for the
 * <code>s3:PutObjectVersionTagging</code>
 *
 * action>
 *
 * For information about the Amazon S3 object tagging feature, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-tagging.html">Object
 *
 * Tagging</a>> <p class="title"> <b>Special Errors</b>
 *
 * </p <ul> <li> <ul> <li>
 *
 * <i>Code: InvalidTagError </i>
 *
 * </p </li> <li>
 *
 * <i>Cause: The tag provided was not a valid tag. This error can occur if the tag did not pass input validation. For more
 * information, see <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-tagging.html">Object Tagging</a>.</i>
 *
 * </p </li> </ul> </li> <li> <ul> <li>
 *
 * <i>Code: MalformedXMLError </i>
 *
 * </p </li> <li>
 *
 * <i>Cause: The XML provided does not match the schema.</i>
 *
 * </p </li> </ul> </li> <li> <ul> <li>
 *
 * <i>Code: OperationAbortedError </i>
 *
 * </p </li> <li>
 *
 * <i>Cause: A conflicting conditional action is currently in progress against this resource. Please try again.</i>
 *
 * </p </li> </ul> </li> <li> <ul> <li>
 *
 * <i>Code: InternalError</i>
 *
 * </p </li> <li>
 *
 * <i>Cause: The service was unable to apply the provided tag to the object.</i>
 *
 * </p </li> </ul> </li> </ul> <p class="title"> <b>Related Resources</b>
 *
 * </p <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectTagging.html">GetObjectTagging</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObjectTagging.html">DeleteObjectTagging</a>
 */
PutObjectTaggingResponse * S3Client::putObjectTagging(const PutObjectTaggingRequest &request)
{
    return qobject_cast<PutObjectTaggingResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * PutPublicAccessBlockResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or modifies the <code>PublicAccessBlock</code> configuration for an Amazon S3 bucket. To use this operation, you
 * must have the <code>s3:PutBucketPublicAccessBlock</code> permission. For more information about Amazon S3 permissions,
 * see <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying Permissions in a
 *
 * Policy</a>> <b>
 *
 * When Amazon S3 evaluates the <code>PublicAccessBlock</code> configuration for a bucket or an object, it checks the
 * <code>PublicAccessBlock</code> configuration for both the bucket (or the bucket that contains the object) and the bucket
 * owner's account. If the <code>PublicAccessBlock</code> configurations are different between the bucket and the account,
 * Amazon S3 uses the most restrictive combination of the bucket-level and account-level
 *
 * settings> </b>
 *
 * For more information about when Amazon S3 considers a bucket or an object public, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html#access-control-block-public-access-policy-status">The
 * Meaning of
 *
 * "Public"</a>> <p class="title"> <b>Related Resources</b>
 *
 * </p <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetPublicAccessBlock.html">GetPublicAccessBlock</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeletePublicAccessBlock.html">DeletePublicAccessBlock</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketPolicyStatus.html">GetBucketPolicyStatus</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">Using Amazon S3 Block
 * Public Access</a>
 */
PutPublicAccessBlockResponse * S3Client::putPublicAccessBlock(const PutPublicAccessBlockRequest &request)
{
    return qobject_cast<PutPublicAccessBlockResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * RestoreObjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Restores an archived copy of an object back into Amazon
 *
 * S>
 *
 * This action is not supported by Amazon S3 on
 *
 * Outposts>
 *
 * This action performs the following types of requests:
 *
 * </p <ul> <li>
 *
 * <code>select</code> - Perform a select query on an archived
 *
 * objec> </li> <li>
 *
 * <code>restore an archive</code> - Restore an archived
 *
 * objec> </li> </ul>
 *
 * To use this operation, you must have permissions to perform the <code>s3:RestoreObject</code> action. The bucket owner
 * has this permission by default and can grant this permission to others. For more information about permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
 * Related to Bucket Subresource Operations</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing Access Permissions to Your
 * Amazon S3 Resources</a> in the <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * <b>Querying Archives with Select Requests</b>
 *
 * </p
 *
 * You use a select type of request to perform SQL queries on archived objects. The archived objects that are being queried
 * by the select request must be formatted as uncompressed comma-separated values (CSV) files. You can run queries and
 * custom analytics on your archived data without having to restore your data to a hotter Amazon S3 tier. For an overview
 * about select requests, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/querying-glacier-archives.html">Querying Archived Objects</a> in
 * the <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * When making a select request, do the
 *
 * following> <ul> <li>
 *
 * Define an output location for the select query's output. This must be an Amazon S3 bucket in the same Amazon Web
 * Services Region as the bucket that contains the archive object that is being queried. The Amazon Web Services account
 * that initiates the job must have permissions to write to the S3 bucket. You can specify the storage class and encryption
 * for the output objects stored in the bucket. For more information about output, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/querying-glacier-archives.html">Querying Archived Objects</a> in
 * the <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * For more information about the <code>S3</code> structure in the request body, see the
 *
 * following> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3_ACLs_UsingACLs.html">Managing Access with ACLs</a> in the
 * <i>Amazon S3 User Guide</i>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html">Protecting Data Using Server-Side
 * Encryption</a> in the <i>Amazon S3 User Guide</i>
 *
 * </p </li> </ul> </li> <li>
 *
 * Define the SQL expression for the <code>SELECT</code> type of restoration for your query in the request body's
 * <code>SelectParameters</code> structure. You can use expressions like the following
 *
 * examples> <ul> <li>
 *
 * The following expression returns all records from the specified
 *
 * object>
 *
 * <code>SELECT * FROM Object</code>
 *
 * </p </li> <li>
 *
 * Assuming that you are not using any headers for data stored in the object, you can specify columns with positional
 *
 * headers>
 *
 * <code>SELECT s._1, s._2 FROM Object s WHERE s._3 > 100</code>
 *
 * </p </li> <li>
 *
 * If you have headers and you set the <code>fileHeaderInfo</code> in the <code>CSV</code> structure in the request body to
 * <code>USE</code>, you can specify headers in the query. (If you set the <code>fileHeaderInfo</code> field to
 * <code>IGNORE</code>, the first row is skipped for the query.) You cannot mix ordinal positions with header column names.
 *
 * </p
 *
 * <code>SELECT s.Id, s.FirstName, s.SSN FROM S3Object s</code>
 *
 * </p </li> </ul> </li> </ul>
 *
 * For more information about using SQL with S3 Glacier Select restore, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-glacier-select-sql-reference.html">SQL Reference for Amazon S3
 * Select and S3 Glacier Select</a> in the <i>Amazon S3 User Guide</i>.
 *
 * </p
 *
 * When making a select request, you can also do the
 *
 * following> <ul> <li>
 *
 * To expedite your queries, specify the <code>Expedited</code> tier. For more information about tiers, see "Restoring
 * Archives," later in this
 *
 * topic> </li> <li>
 *
 * Specify details about the data serialization format of both the input object that is being queried and the serialization
 * of the CSV-encoded query
 *
 * results> </li> </ul>
 *
 * The following are additional important facts about the select
 *
 * feature> <ul> <li>
 *
 * The output results are new Amazon S3 objects. Unlike archive retrievals, they are stored until explicitly
 * deleted-manually or through a lifecycle
 *
 * policy> </li> <li>
 *
 * You can issue more than one select request on the same Amazon S3 object. Amazon S3 doesn't deduplicate requests, so
 * avoid issuing duplicate
 *
 * requests> </li> <li>
 *
 * Amazon S3 accepts a select request even if the object has already been restored. A select request doesn’t return error
 * response
 *
 * <code>409</code>> </li> </ul>
 *
 * <b>Restoring objects</b>
 *
 * </p
 *
 * Objects that you archive to the S3 Glacier or S3 Glacier Deep Archive storage class, and S3 Intelligent-Tiering Archive
 * or S3 Intelligent-Tiering Deep Archive tiers are not accessible in real time. For objects in Archive Access or Deep
 * Archive Access tiers you must first initiate a restore request, and then wait until the object is moved into the
 * Frequent Access tier. For objects in S3 Glacier or S3 Glacier Deep Archive storage classes you must first initiate a
 * restore request, and then wait until a temporary copy of the object is available. To access an archived object, you must
 * restore the object for the duration (number of days) that you
 *
 * specify>
 *
 * To restore a specific object version, you can provide a version ID. If you don't provide a version ID, Amazon S3
 * restores the current
 *
 * version>
 *
 * When restoring an archived object (or using a select request), you can specify one of the following data access tier
 * options in the <code>Tier</code> element of the request body:
 *
 * </p <ul> <li>
 *
 * <code>Expedited</code> - Expedited retrievals allow you to quickly access your data stored in the S3 Glacier storage
 * class or S3 Intelligent-Tiering Archive tier when occasional urgent requests for a subset of archives are required. For
 * all but the largest archived objects (250 MB+), data accessed using Expedited retrievals is typically made available
 * within 1–5 minutes. Provisioned capacity ensures that retrieval capacity for Expedited retrievals is available when you
 * need it. Expedited retrievals and provisioned capacity are not available for objects stored in the S3 Glacier Deep
 * Archive storage class or S3 Intelligent-Tiering Deep Archive
 *
 * tier> </li> <li>
 *
 * <code>Standard</code> - Standard retrievals allow you to access any of your archived objects within several hours. This
 * is the default option for retrieval requests that do not specify the retrieval option. Standard retrievals typically
 * finish within 3–5 hours for objects stored in the S3 Glacier storage class or S3 Intelligent-Tiering Archive tier. They
 * typically finish within 12 hours for objects stored in the S3 Glacier Deep Archive storage class or S3
 * Intelligent-Tiering Deep Archive tier. Standard retrievals are free for objects stored in S3
 *
 * Intelligent-Tiering> </li> <li>
 *
 * <code>Bulk</code> - Bulk retrievals are the lowest-cost retrieval option in S3 Glacier, enabling you to retrieve large
 * amounts, even petabytes, of data inexpensively. Bulk retrievals typically finish within 5–12 hours for objects stored in
 * the S3 Glacier storage class or S3 Intelligent-Tiering Archive tier. They typically finish within 48 hours for objects
 * stored in the S3 Glacier Deep Archive storage class or S3 Intelligent-Tiering Deep Archive tier. Bulk retrievals are
 * free for objects stored in S3
 *
 * Intelligent-Tiering> </li> </ul>
 *
 * For more information about archive retrieval options and provisioned capacity for <code>Expedited</code> data access,
 * see <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/restoring-objects.html">Restoring Archived Objects</a> in
 * the <i>Amazon S3 User Guide</i>.
 *
 * </p
 *
 * You can use Amazon S3 restore speed upgrade to change the restore speed to a faster speed while it is in progress. For
 * more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/restoring-objects.html#restoring-objects-upgrade-tier.title.html">
 * Upgrading the speed of an in-progress restore</a> in the <i>Amazon S3 User Guide</i>.
 *
 * </p
 *
 * To get the status of object restoration, you can send a <code>HEAD</code> request. Operations return the
 * <code>x-amz-restore</code> header, which provides information about the restoration status, in the response. You can use
 * Amazon S3 event notifications to notify you when a restore is initiated or completed. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/NotificationHowTo.html">Configuring Amazon S3 Event
 * Notifications</a> in the <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * After restoring an archived object, you can update the restoration period by reissuing the request with a new period.
 * Amazon S3 updates the restoration period relative to the current time and charges only for the request-there are no data
 * transfer charges. You cannot update the restoration period when Amazon S3 is actively processing your current restore
 * request for the
 *
 * object>
 *
 * If your bucket has a lifecycle configuration with a rule that includes an expiration action, the object expiration
 * overrides the life span that you specify in a restore request. For example, if you restore an object copy for 10 days,
 * but the object is scheduled to expire in 3 days, Amazon S3 deletes the object in 3 days. For more information about
 * lifecycle configuration, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
 * and <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lifecycle-mgmt.html">Object Lifecycle Management</a>
 * in <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * <b>Responses</b>
 *
 * </p
 *
 * A successful action returns either the <code>200 OK</code> or <code>202 Accepted</code> status code.
 *
 * </p <ul> <li>
 *
 * If the object is not previously restored, then Amazon S3 returns <code>202 Accepted</code> in the response.
 *
 * </p </li> <li>
 *
 * If the object is previously restored, Amazon S3 returns <code>200 OK</code> in the response.
 *
 * </p </li> </ul> <p class="title"> <b>Special Errors</b>
 *
 * </p <ul> <li> <ul> <li>
 *
 * <i>Code: RestoreAlreadyInProgress</i>
 *
 * </p </li> <li>
 *
 * <i>Cause: Object restore is already in progress. (This error does not apply to SELECT type requests.)</i>
 *
 * </p </li> <li>
 *
 * <i>HTTP Status Code: 409 Conflict</i>
 *
 * </p </li> <li>
 *
 * <i>SOAP Fault Code Prefix: Client</i>
 *
 * </p </li> </ul> </li> <li> <ul> <li>
 *
 * <i>Code: GlacierExpeditedRetrievalNotAvailable</i>
 *
 * </p </li> <li>
 *
 * <i>Cause: expedited retrievals are currently not available. Try again later. (Returned if there is insufficient capacity
 * to process the Expedited request. This error applies only to Expedited retrievals and not to S3 Standard or Bulk
 * retrievals.)</i>
 *
 * </p </li> <li>
 *
 * <i>HTTP Status Code: 503</i>
 *
 * </p </li> <li>
 *
 * <i>SOAP Fault Code Prefix: N/A</i>
 *
 * </p </li> </ul> </li> </ul> <p class="title"> <b>Related Resources</b>
 *
 * </p <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketNotificationConfiguration.html">GetBucketNotificationConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-glacier-select-sql-reference.html">SQL Reference for Amazon
 * S3 Select and S3 Glacier Select </a> in the <i>Amazon S3 User Guide</i>
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
 * This action filters the contents of an Amazon S3 object based on a simple structured query language (SQL) statement. In
 * the request, along with the SQL expression, you must also specify a data serialization format (JSON, CSV, or Apache
 * Parquet) of the object. Amazon S3 uses this format to parse object data into records, and returns only records that
 * match the specified SQL expression. You must also specify the data serialization format for the
 *
 * response>
 *
 * This action is not supported by Amazon S3 on
 *
 * Outposts>
 *
 * For more information about Amazon S3 Select, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/selecting-content-from-objects.html">Selecting Content from
 * Objects</a> and <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-glacier-select-sql-reference-select.html">SELECT
 * Command</a> in the <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * For more information about using SQL with Amazon S3 Select, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-glacier-select-sql-reference.html"> SQL Reference for Amazon S3
 * Select and S3 Glacier Select</a> in the <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * </p
 *
 * <b>Permissions</b>
 *
 * </p
 *
 * You must have <code>s3:GetObject</code> permission for this operation. Amazon S3 Select does not support anonymous
 * access. For more information about permissions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying Permissions in a Policy</a>
 * in the <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * </p
 *
 * <i>Object Data Formats</i>
 *
 * </p
 *
 * You can use Amazon S3 Select to query objects that have the following format
 *
 * properties> <ul> <li>
 *
 * <i>CSV, JSON, and Parquet</i> - Objects must be in CSV, JSON, or Parquet
 *
 * format> </li> <li>
 *
 * <i>UTF-8</i> - UTF-8 is the only encoding type Amazon S3 Select
 *
 * supports> </li> <li>
 *
 * <i>GZIP or BZIP2</i> - CSV and JSON files can be compressed using GZIP or BZIP2. GZIP and BZIP2 are the only compression
 * formats that Amazon S3 Select supports for CSV and JSON files. Amazon S3 Select supports columnar compression for
 * Parquet using GZIP or Snappy. Amazon S3 Select does not support whole-object compression for Parquet
 *
 * objects> </li> <li>
 *
 * <i>Server-side encryption</i> - Amazon S3 Select supports querying objects that are protected with server-side
 *
 * encryption>
 *
 * For objects that are encrypted with customer-provided encryption keys (SSE-C), you must use HTTPS, and you must use the
 * headers that are documented in the <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>. For more information about
 * SSE-C, see <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/ServerSideEncryptionCustomerKeys.html">Server-Side
 * Encryption (Using Customer-Provided Encryption Keys)</a> in the <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * For objects that are encrypted with Amazon S3 managed encryption keys (SSE-S3) and Amazon Web Services KMS keys
 * (SSE-KMS), server-side encryption is handled transparently, so you don't need to specify anything. For more information
 * about server-side encryption, including SSE-S3 and SSE-KMS, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html">Protecting Data Using Server-Side
 * Encryption</a> in the <i>Amazon S3 User
 *
 * Guide</i>> </li> </ul>
 *
 * <b>Working with the Response Body</b>
 *
 * </p
 *
 * Given the response size is unknown, Amazon S3 Select streams the response as a series of messages and includes a
 * <code>Transfer-Encoding</code> header with <code>chunked</code> as its value in the response. For more information, see
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTSelectObjectAppendix.html">Appendix: SelectObjectContent
 *
 * Response</a>>
 *
 * </p
 *
 * <b>GetObject Support</b>
 *
 * </p
 *
 * The <code>SelectObjectContent</code> action does not support the following <code>GetObject</code> functionality. For
 * more information, see <a
 *
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>> <ul> <li>
 *
 * <code>Range</code>: Although you can specify a scan range for an Amazon S3 Select request (see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_SelectObjectContent.html#AmazonS3-SelectObjectContent-request-ScanRange">SelectObjectContentRequest
 * - ScanRange</a> in the request parameters), you cannot specify the range of bytes of an object to return.
 *
 * </p </li> <li>
 *
 * GLACIER, DEEP_ARCHIVE and REDUCED_REDUNDANCY storage classes: You cannot specify the GLACIER, DEEP_ARCHIVE, or
 * <code>REDUCED_REDUNDANCY</code> storage classes. For more information, about storage classes see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#storage-class-intro">Storage Classes</a> in the
 * <i>Amazon S3 User
 *
 * Guide</i>> </li> </ul>
 *
 * </p
 *
 * <b>Special Errors</b>
 *
 * </p
 *
 * For a list of special errors for this operation, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html#SelectObjectContentErrorCodeList">List of
 * SELECT Object Content Error Codes</a>
 *
 * </p <p class="title"> <b>Related Resources</b>
 *
 * </p <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
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
 * upload> <note>
 *
 * In this operation, you provide part data in your request. However, you have an option to specify your existing Amazon S3
 * object as a data source for the part you are uploading. To upload a part from an existing object, you use the <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPartCopy.html">UploadPartCopy</a> operation.
 *
 * </p </note>
 *
 * You must initiate a multipart upload (see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>) before
 * you can upload any part. In response to your initiate request, Amazon S3 returns an upload ID, a unique identifier, that
 * you must include in your upload part
 *
 * request>
 *
 * Part numbers can be any number from 1 to 10,000, inclusive. A part number uniquely identifies a part and also defines
 * its position within the object being created. If you upload a new part using the same part number that was used with a
 * previous part, the previously uploaded part is
 *
 * overwritten>
 *
 * For information about maximum and minimum part sizes and other multipart upload specifications, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/qfacts.html">Multipart upload limits</a> in the <i>Amazon S3
 * User
 *
 * Guide</i>>
 *
 * To ensure that data is not corrupted when traversing the network, specify the <code>Content-MD5</code> header in the
 * upload part request. Amazon S3 checks the part data against the provided MD5 value. If they do not match, Amazon S3
 * returns an error.
 *
 * </p
 *
 * If the upload request is signed with Signature Version 4, then Amazon Web Services S3 uses the
 * <code>x-amz-content-sha256</code> header as a checksum instead of <code>Content-MD5</code>. For more information see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-auth-using-authorization-header.html">Authenticating
 * Requests: Using the Authorization Header (Amazon Web Services Signature Version 4)</a>.
 *
 * </p
 *
 * <b>Note:</b> After you initiate multipart upload and upload one or more parts, you must either complete or abort
 * multipart upload in order to stop getting charged for storage of the uploaded parts. Only after you either complete or
 * abort multipart upload, Amazon S3 frees up the parts storage and stops charging you for the parts
 *
 * storage>
 *
 * For more information on multipart uploads, go to <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuoverview.html">Multipart Upload Overview</a> in the <i>Amazon
 * S3 User Guide
 *
 * </i>>
 *
 * For information on the permissions required to use the multipart upload API, go to <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuAndPermissions.html">Multipart Upload and Permissions</a> in
 * the <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * You can optionally request server-side encryption where Amazon S3 encrypts your data as it writes it to disks in its
 * data centers and decrypts it for you when you access it. You have the option of providing your own encryption key, or
 * you can use the Amazon Web Services managed encryption keys. If you choose to provide your own encryption key, the
 * request headers you provide in the request must match the headers you used in the request to initiate the upload by
 * using <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>. For
 * more information, go to <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingServerSideEncryption.html">Using
 * Server-Side Encryption</a> in the <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * Server-side encryption is supported by the S3 Multipart Upload actions. Unless you are using a customer-provided
 * encryption key, you don't need to specify the encryption parameters in each UploadPart request. Instead, you only need
 * to specify the server-side encryption parameters in the initial Initiate Multipart request. For more information, see <a
 *
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>>
 *
 * If you requested server-side encryption using a customer-provided encryption key in your initiate multipart upload
 * request, you must provide identical encryption information in each part upload using the following
 *
 * headers> <ul> <li>
 *
 * x-amz-server-side-encryption-customer-algorith> </li> <li>
 *
 * x-amz-server-side-encryption-customer-ke> </li> <li>
 *
 * x-amz-server-side-encryption-customer-key-MD> </li> </ul> <p class="title"> <b>Special Errors</b>
 *
 * </p <ul> <li> <ul> <li>
 *
 * <i>Code: NoSuchUpload</i>
 *
 * </p </li> <li>
 *
 * <i>Cause: The specified multipart upload does not exist. The upload ID might be invalid, or the multipart upload might
 * have been aborted or completed.</i>
 *
 * </p </li> <li>
 *
 * <i> HTTP Status Code: 404 Not Found </i>
 *
 * </p </li> <li>
 *
 * <i>SOAP Fault Code Prefix: Client</i>
 *
 * </p </li> </ul> </li> </ul> <p class="title"> <b>Related Resources</b>
 *
 * </p <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CompleteMultipartUpload.html">CompleteMultipartUpload</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_AbortMultipartUpload.html">AbortMultipartUpload</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListMultipartUploads.html">ListMultipartUploads</a>
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
 * Uploads a part by copying data from an existing object as data source. You specify the data source by adding the request
 * header <code>x-amz-copy-source</code> in your request and a byte range by adding the request header
 * <code>x-amz-copy-source-range</code> in your request.
 *
 * </p
 *
 * For information about maximum and minimum part sizes and other multipart upload specifications, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/qfacts.html">Multipart upload limits</a> in the <i>Amazon S3
 * User Guide</i>.
 *
 * </p <note>
 *
 * Instead of using an existing object as part data, you might use the <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a> action and provide data in
 * your
 *
 * request> </note>
 *
 * You must initiate a multipart upload before you can upload any part. In response to your initiate request. Amazon S3
 * returns a unique identifier, the upload ID, that you must include in your upload part
 *
 * request>
 *
 * For more information about using the <code>UploadPartCopy</code> operation, see the
 *
 * following> <ul> <li>
 *
 * For conceptual information about multipart uploads, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/uploadobjusingmpu.html">Uploading Objects Using Multipart
 * Upload</a> in the <i>Amazon S3 User
 *
 * Guide</i>> </li> <li>
 *
 * For information about permissions required to use the multipart upload API, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuAndPermissions.html">Multipart Upload and Permissions</a> in
 * the <i>Amazon S3 User
 *
 * Guide</i>> </li> <li>
 *
 * For information about copying objects using a single atomic action vs. a multipart upload, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/ObjectOperations.html">Operations on Objects</a> in the <i>Amazon
 * S3 User
 *
 * Guide</i>> </li> <li>
 *
 * For information about using server-side encryption with customer-provided encryption keys with the
 * <code>UploadPartCopy</code> operation, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CopyObject.html">CopyObject</a> and <a
 *
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>> </li> </ul>
 *
 * Note the following additional considerations about the request headers <code>x-amz-copy-source-if-match</code>,
 * <code>x-amz-copy-source-if-none-match</code>, <code>x-amz-copy-source-if-unmodified-since</code>, and
 *
 * <code>x-amz-copy-source-if-modified-since</code>>
 *
 *
 * </p <ul> <li>
 *
 * <b>Consideration 1</b> - If both of the <code>x-amz-copy-source-if-match</code> and
 * <code>x-amz-copy-source-if-unmodified-since</code> headers are present in the request as
 *
 * follows>
 *
 * <code>x-amz-copy-source-if-match</code> condition evaluates to <code>true</code>,
 *
 * and>
 *
 * <code>x-amz-copy-source-if-unmodified-since</code> condition evaluates to
 *
 * <code>false</code>>
 *
 * Amazon S3 returns <code>200 OK</code> and copies the data.
 *
 * </p </li> <li>
 *
 * <b>Consideration 2</b> - If both of the <code>x-amz-copy-source-if-none-match</code> and
 * <code>x-amz-copy-source-if-modified-since</code> headers are present in the request as
 *
 * follows>
 *
 * <code>x-amz-copy-source-if-none-match</code> condition evaluates to <code>false</code>,
 *
 * and>
 *
 * <code>x-amz-copy-source-if-modified-since</code> condition evaluates to
 *
 * <code>true</code>>
 *
 * Amazon S3 returns <code>412 Precondition Failed</code> response code.
 *
 * </p </li> </ul>
 *
 * <b>Versioning</b>
 *
 * </p
 *
 * If your bucket has versioning enabled, you could have multiple versions of the same object. By default,
 * <code>x-amz-copy-source</code> identifies the current version of the object to copy. If the current version is a delete
 * marker and you don't specify a versionId in the <code>x-amz-copy-source</code>, Amazon S3 returns a 404 error, because
 * the object does not exist. If you specify versionId in the <code>x-amz-copy-source</code> and the versionId is a delete
 * marker, Amazon S3 returns an HTTP 400 error, because you are not allowed to specify a delete marker as a version for the
 * <code>x-amz-copy-source</code>.
 *
 * </p
 *
 * You can optionally specify a specific version of the source object to copy by adding the <code>versionId</code>
 * subresource as shown in the following
 *
 * example>
 *
 * <code>x-amz-copy-source: /bucket/object?versionId=version id</code>
 *
 * </p <p class="title"> <b>Special Errors</b>
 *
 * </p <ul> <li> <ul> <li>
 *
 * <i>Code: NoSuchUpload</i>
 *
 * </p </li> <li>
 *
 * <i>Cause: The specified multipart upload does not exist. The upload ID might be invalid, or the multipart upload might
 * have been aborted or completed.</i>
 *
 * </p </li> <li>
 *
 * <i>HTTP Status Code: 404 Not Found</i>
 *
 * </p </li> </ul> </li> <li> <ul> <li>
 *
 * <i>Code: InvalidRequest</i>
 *
 * </p </li> <li>
 *
 * <i>Cause: The specified copy source is not supported as a byte-range copy source.</i>
 *
 * </p </li> <li>
 *
 * <i>HTTP Status Code: 400 Bad Request</i>
 *
 * </p </li> </ul> </li> </ul> <p class="title"> <b>Related Resources</b>
 *
 * </p <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CompleteMultipartUpload.html">CompleteMultipartUpload</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_AbortMultipartUpload.html">AbortMultipartUpload</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListMultipartUploads.html">ListMultipartUploads</a>
 */
UploadPartCopyResponse * S3Client::uploadPartCopy(const UploadPartCopyRequest &request)
{
    return qobject_cast<UploadPartCopyResponse *>(send(request));
}

/*!
 * Sends \a request to the S3Client service, and returns a pointer to an
 * WriteGetObjectResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Passes transformed objects to a <code>GetObject</code> operation when using Object Lambda access points. For information
 * about Object Lambda access points, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/transforming-objects.html">Transforming objects with Object
 * Lambda access points</a> in the <i>Amazon S3 User
 *
 * Guide</i>>
 *
 * This operation supports metadata that can be returned by <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>, in addition to
 * <code>RequestRoute</code>, <code>RequestToken</code>, <code>StatusCode</code>, <code>ErrorCode</code>, and
 * <code>ErrorMessage</code>. The <code>GetObject</code> response metadata is supported so that the
 * <code>WriteGetObjectResponse</code> caller, typically an Lambda function, can provide the same metadata when it
 * internally invokes <code>GetObject</code>. When <code>WriteGetObjectResponse</code> is called by a customer-owned Lambda
 * function, the metadata returned to the end user <code>GetObject</code> call might differ from what Amazon S3 would
 * normally
 *
 * return>
 *
 * You can include any number of metadata headers. When including a metadata header, it should be prefaced with
 * <code>x-amz-meta</code>. For example, <code>x-amz-meta-my-custom-header: MyCustomValue</code>. The primary use case for
 * this is to forward <code>GetObject</code>
 *
 * metadata>
 *
 * Amazon Web Services provides some prebuilt Lambda functions that you can use with S3 Object Lambda to detect and redact
 * personally identifiable information (PII) and decompress S3 objects. These Lambda functions are available in the Amazon
 * Web Services Serverless Application Repository, and can be selected through the Amazon Web Services Management Console
 * when you create your Object Lambda access
 *
 * point>
 *
 * Example 1: PII Access Control - This Lambda function uses Amazon Comprehend, a natural language processing (NLP) service
 * using machine learning to find insights and relationships in text. It automatically detects personally identifiable
 * information (PII) such as names, addresses, dates, credit card numbers, and social security numbers from documents in
 * your Amazon S3 bucket.
 *
 * </p
 *
 * Example 2: PII Redaction - This Lambda function uses Amazon Comprehend, a natural language processing (NLP) service
 * using machine learning to find insights and relationships in text. It automatically redacts personally identifiable
 * information (PII) such as names, addresses, dates, credit card numbers, and social security numbers from documents in
 * your Amazon S3 bucket.
 *
 * </p
 *
 * Example 3: Decompression - The Lambda function S3ObjectLambdaDecompression, is equipped to decompress objects stored in
 * S3 in one of six compressed file formats including bzip2, gzip, snappy, zlib, zstandard and ZIP.
 *
 * </p
 *
 * For information on how to view and use these functions, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/olap-examples.html">Using Amazon Web Services built Lambda
 * functions</a> in the <i>Amazon S3 User
 */
WriteGetObjectResponseResponse * S3Client::writeGetObjectResponse(const WriteGetObjectResponseRequest &request)
{
    return qobject_cast<WriteGetObjectResponseResponse *>(send(request));
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
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace S3
} // namespace QtAws
