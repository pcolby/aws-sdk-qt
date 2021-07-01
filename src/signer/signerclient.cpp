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

#include "signerclient.h"
#include "signerclient_p.h"

#include "core/awssignaturev4.h"
#include "addprofilepermissionrequest.h"
#include "addprofilepermissionresponse.h"
#include "cancelsigningprofilerequest.h"
#include "cancelsigningprofileresponse.h"
#include "describesigningjobrequest.h"
#include "describesigningjobresponse.h"
#include "getsigningplatformrequest.h"
#include "getsigningplatformresponse.h"
#include "getsigningprofilerequest.h"
#include "getsigningprofileresponse.h"
#include "listprofilepermissionsrequest.h"
#include "listprofilepermissionsresponse.h"
#include "listsigningjobsrequest.h"
#include "listsigningjobsresponse.h"
#include "listsigningplatformsrequest.h"
#include "listsigningplatformsresponse.h"
#include "listsigningprofilesrequest.h"
#include "listsigningprofilesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putsigningprofilerequest.h"
#include "putsigningprofileresponse.h"
#include "removeprofilepermissionrequest.h"
#include "removeprofilepermissionresponse.h"
#include "revokesignaturerequest.h"
#include "revokesignatureresponse.h"
#include "revokesigningprofilerequest.h"
#include "revokesigningprofileresponse.h"
#include "startsigningjobrequest.h"
#include "startsigningjobresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::signer
 * \brief Contains classess for accessing AWS Signer (signer).
 *
 * \inmodule QtAwssigner
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace signer {

/*!
 * \class QtAws::signer::signerClient
 * \brief The signerClient class provides access to the AWS Signer (signer) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwssigner
 *
 *  AWS Signer is a fully managed code signing service to help you ensure the trust and integrity of your code.
 * 
 *  </p
 * 
 *  AWS Signer supports the following
 * 
 *  applications>
 * 
 *  With <i>code signing for AWS Lambda</i>, you can sign AWS Lambda deployment packages. Integrated support is provided for
 *  Amazon S3, Amazon CloudWatch, and AWS CloudTrail. In order to sign code, you create a signing profile and then use
 *  Signer to sign Lambda zip files in S3.
 * 
 *  </p
 * 
 *  With <i>code signing for IoT</i>, you can sign code for any IoT device that is supported by AWS. IoT code signing is
 *  available for <a href="http://docs.aws.amazon.com/freertos/latest/userguide/">Amazon FreeRTOS</a> and <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/">AWS IoT Device Management</a>, and is integrated with <a
 *  href="http://docs.aws.amazon.com/acm/latest/userguide/">AWS Certificate Manager (ACM)</a>. In order to sign code, you
 *  import a third-party code signing certificate using ACM, and use that to sign updates in Amazon FreeRTOS and AWS IoT
 *  Device Management.
 * 
 *  </p
 * 
 *  For more information about AWS Signer, see the <a
 *  href="http://docs.aws.amazon.com/signer/latest/developerguide/Welcome.html">AWS Signer Developer
 */

/*!
 * \brief Constructs a signerClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
signerClient::signerClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new signerClientPrivate(this), parent)
{
    Q_D(signerClient);
    d->apiVersion = QStringLiteral("2017-08-25");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("signer");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Signer");
    d->serviceName = QStringLiteral("signer");
}

/*!
 * \overload signerClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
signerClient::signerClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new signerClientPrivate(this), parent)
{
    Q_D(signerClient);
    d->apiVersion = QStringLiteral("2017-08-25");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("signer");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Signer");
    d->serviceName = QStringLiteral("signer");
}

/*!
 * Sends \a request to the signerClient service, and returns a pointer to an
 * AddProfilePermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds cross-account permissions to a signing
 */
AddProfilePermissionResponse * signerClient::addProfilePermission(const AddProfilePermissionRequest &request)
{
    return qobject_cast<AddProfilePermissionResponse *>(send(request));
}

/*!
 * Sends \a request to the signerClient service, and returns a pointer to an
 * CancelSigningProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the state of an <code>ACTIVE</code> signing profile to <code>CANCELED</code>. A canceled profile is still
 * viewable with the <code>ListSigningProfiles</code> operation, but it cannot perform new signing jobs, and is deleted two
 * years after
 */
CancelSigningProfileResponse * signerClient::cancelSigningProfile(const CancelSigningProfileRequest &request)
{
    return qobject_cast<CancelSigningProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the signerClient service, and returns a pointer to an
 * DescribeSigningJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a specific code signing job. You specify the job by using the <code>jobId</code> value that is
 * returned by the <a>StartSigningJob</a> operation.
 */
DescribeSigningJobResponse * signerClient::describeSigningJob(const DescribeSigningJobRequest &request)
{
    return qobject_cast<DescribeSigningJobResponse *>(send(request));
}

/*!
 * Sends \a request to the signerClient service, and returns a pointer to an
 * GetSigningPlatformResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information on a specific signing
 */
GetSigningPlatformResponse * signerClient::getSigningPlatform(const GetSigningPlatformRequest &request)
{
    return qobject_cast<GetSigningPlatformResponse *>(send(request));
}

/*!
 * Sends \a request to the signerClient service, and returns a pointer to an
 * GetSigningProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information on a specific signing
 */
GetSigningProfileResponse * signerClient::getSigningProfile(const GetSigningProfileRequest &request)
{
    return qobject_cast<GetSigningProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the signerClient service, and returns a pointer to an
 * ListProfilePermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the cross-account permissions associated with a signing
 */
ListProfilePermissionsResponse * signerClient::listProfilePermissions(const ListProfilePermissionsRequest &request)
{
    return qobject_cast<ListProfilePermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the signerClient service, and returns a pointer to an
 * ListSigningJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all your signing jobs. You can use the <code>maxResults</code> parameter to limit the number of signing jobs that
 * are returned in the response. If additional jobs remain to be listed, code signing returns a <code>nextToken</code>
 * value. Use this value in subsequent calls to <code>ListSigningJobs</code> to fetch the remaining values. You can
 * continue calling <code>ListSigningJobs</code> with your <code>maxResults</code> parameter and with new values that code
 * signing returns in the <code>nextToken</code> parameter until all of your signing jobs have been returned.
 */
ListSigningJobsResponse * signerClient::listSigningJobs(const ListSigningJobsRequest &request)
{
    return qobject_cast<ListSigningJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the signerClient service, and returns a pointer to an
 * ListSigningPlatformsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all signing platforms available in code signing that match the request parameters. If additional jobs remain to be
 * listed, code signing returns a <code>nextToken</code> value. Use this value in subsequent calls to
 * <code>ListSigningJobs</code> to fetch the remaining values. You can continue calling <code>ListSigningJobs</code> with
 * your <code>maxResults</code> parameter and with new values that code signing returns in the <code>nextToken</code>
 * parameter until all of your signing jobs have been
 */
ListSigningPlatformsResponse * signerClient::listSigningPlatforms(const ListSigningPlatformsRequest &request)
{
    return qobject_cast<ListSigningPlatformsResponse *>(send(request));
}

/*!
 * Sends \a request to the signerClient service, and returns a pointer to an
 * ListSigningProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all available signing profiles in your AWS account. Returns only profiles with an <code>ACTIVE</code> status
 * unless the <code>includeCanceled</code> request field is set to <code>true</code>. If additional jobs remain to be
 * listed, code signing returns a <code>nextToken</code> value. Use this value in subsequent calls to
 * <code>ListSigningJobs</code> to fetch the remaining values. You can continue calling <code>ListSigningJobs</code> with
 * your <code>maxResults</code> parameter and with new values that code signing returns in the <code>nextToken</code>
 * parameter until all of your signing jobs have been
 */
ListSigningProfilesResponse * signerClient::listSigningProfiles(const ListSigningProfilesRequest &request)
{
    return qobject_cast<ListSigningProfilesResponse *>(send(request));
}

/*!
 * Sends \a request to the signerClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the tags associated with a signing profile
 */
ListTagsForResourceResponse * signerClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the signerClient service, and returns a pointer to an
 * PutSigningProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a signing profile. A signing profile is a code signing template that can be used to carry out a pre-defined
 * signing job. For more information, see <a
 * href="http://docs.aws.amazon.com/signer/latest/developerguide/gs-profile.html">http://docs.aws.amazon.com/signer/latest/developerguide/gs-profile.html</a>
 */
PutSigningProfileResponse * signerClient::putSigningProfile(const PutSigningProfileRequest &request)
{
    return qobject_cast<PutSigningProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the signerClient service, and returns a pointer to an
 * RemoveProfilePermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes cross-account permissions from a signing
 */
RemoveProfilePermissionResponse * signerClient::removeProfilePermission(const RemoveProfilePermissionRequest &request)
{
    return qobject_cast<RemoveProfilePermissionResponse *>(send(request));
}

/*!
 * Sends \a request to the signerClient service, and returns a pointer to an
 * RevokeSignatureResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the state of a signing job to REVOKED. This indicates that the signature is no longer
 */
RevokeSignatureResponse * signerClient::revokeSignature(const RevokeSignatureRequest &request)
{
    return qobject_cast<RevokeSignatureResponse *>(send(request));
}

/*!
 * Sends \a request to the signerClient service, and returns a pointer to an
 * RevokeSigningProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the state of a signing profile to REVOKED. This indicates that signatures generated using the signing profile
 * after an effective start date are no longer
 */
RevokeSigningProfileResponse * signerClient::revokeSigningProfile(const RevokeSigningProfileRequest &request)
{
    return qobject_cast<RevokeSigningProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the signerClient service, and returns a pointer to an
 * StartSigningJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Initiates a signing job to be performed on the code provided. Signing jobs are viewable by the
 * <code>ListSigningJobs</code> operation for two years after they are performed. Note the following requirements:
 *
 * </p <ul> <li>
 *
 * You must create an Amazon S3 source bucket. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonS3/latest/gsg/CreatingABucket.html">Create a Bucket</a> in the <i>Amazon S3
 * Getting Started Guide</i>.
 *
 * </p </li> <li>
 *
 * Your S3 source bucket must be version
 *
 * enabled> </li> <li>
 *
 * You must create an S3 destination bucket. Code signing uses your S3 destination bucket to write your signed
 *
 * code> </li> <li>
 *
 * You specify the name of the source and destination buckets when calling the <code>StartSigningJob</code>
 *
 * operation> </li> <li>
 *
 * You must also specify a request token that identifies your request to code
 *
 * signing> </li> </ul>
 *
 * You can call the <a>DescribeSigningJob</a> and the <a>ListSigningJobs</a> actions after you call
 *
 * <code>StartSigningJob</code>>
 *
 * For a Java example that shows how to use this action, see <a
 * href="http://docs.aws.amazon.com/acm/latest/userguide/">http://docs.aws.amazon.com/acm/latest/userguide/</a>
 */
StartSigningJobResponse * signerClient::startSigningJob(const StartSigningJobRequest &request)
{
    return qobject_cast<StartSigningJobResponse *>(send(request));
}

/*!
 * Sends \a request to the signerClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more tags to a signing profile. Tags are labels that you can use to identify and organize your AWS
 * resources. Each tag consists of a key and an optional value. To specify the signing profile, use its Amazon Resource
 * Name (ARN). To specify the tag, use a key-value
 */
TagResourceResponse * signerClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the signerClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags from a signing profile. To remove the tags, specify a list of tag
 */
UntagResourceResponse * signerClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * \class QtAws::signer::signerClientPrivate
 * \brief The signerClientPrivate class provides private implementation for signerClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwssigner
 */

/*!
 * Constructs a signerClientPrivate object with public implementation \a q.
 */
signerClientPrivate::signerClientPrivate(signerClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace signer
} // namespace QtAws
