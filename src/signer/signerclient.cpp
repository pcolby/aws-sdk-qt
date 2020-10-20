/*
    Copyright 2013-2020 Paul Colby

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
#include "cancelsigningprofilerequest.h"
#include "cancelsigningprofileresponse.h"
#include "describesigningjobrequest.h"
#include "describesigningjobresponse.h"
#include "getsigningplatformrequest.h"
#include "getsigningplatformresponse.h"
#include "getsigningprofilerequest.h"
#include "getsigningprofileresponse.h"
#include "listsigningjobsrequest.h"
#include "listsigningjobsresponse.h"
#include "listsigningplatformsrequest.h"
#include "listsigningplatformsresponse.h"
#include "listsigningprofilesrequest.h"
#include "listsigningprofilesresponse.h"
#include "putsigningprofilerequest.h"
#include "putsigningprofileresponse.h"
#include "startsigningjobrequest.h"
#include "startsigningjobresponse.h"

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
 *  You can use Code Signing for Amazon FreeRTOS (AWS Signer) to sign code that you created for any of the IoT devices that
 *  Amazon Web Services supports. AWS Signer is integrated with Amazon FreeRTOS, AWS Certificate Manager, and AWS
 *  CloudTrail. Amazon FreeRTOS customers can use AWS Signer to sign code images before making them available for
 *  microcontrollers. You can use ACM to import third-party certificates to be used by AWS Signer. For general information
 *  about using AWS Signer, see the <a href="http://docs.aws.amazon.com/signer/latest/developerguide/Welcome.html">Code
 *  Signing for Amazon FreeRTOS Developer
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
 * ListSigningJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all your signing jobs. You can use the <code>maxResults</code> parameter to limit the number of signing jobs that
 * are returned in the response. If additional jobs remain to be listed, AWS Signer returns a <code>nextToken</code> value.
 * Use this value in subsequent calls to <code>ListSigningJobs</code> to fetch the remaining values. You can continue
 * calling <code>ListSigningJobs</code> with your <code>maxResults</code> parameter and with new values that AWS Signer
 * returns in the <code>nextToken</code> parameter until all of your signing jobs have been returned.
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
 * Lists all signing platforms available in AWS Signer that match the request parameters. If additional jobs remain to be
 * listed, AWS Signer returns a <code>nextToken</code> value. Use this value in subsequent calls to
 * <code>ListSigningJobs</code> to fetch the remaining values. You can continue calling <code>ListSigningJobs</code> with
 * your <code>maxResults</code> parameter and with new values that AWS Signer returns in the <code>nextToken</code>
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
 * listed, AWS Signer returns a <code>nextToken</code> value. Use this value in subsequent calls to
 * <code>ListSigningJobs</code> to fetch the remaining values. You can continue calling <code>ListSigningJobs</code> with
 * your <code>maxResults</code> parameter and with new values that AWS Signer returns in the <code>nextToken</code>
 * parameter until all of your signing jobs have been
 */
ListSigningProfilesResponse * signerClient::listSigningProfiles(const ListSigningProfilesRequest &request)
{
    return qobject_cast<ListSigningProfilesResponse *>(send(request));
}

/*!
 * Sends \a request to the signerClient service, and returns a pointer to an
 * PutSigningProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a signing profile. A signing profile is an AWS Signer template that can be used to carry out a pre-defined
 * signing job. For more information, see <a
 * href="http://docs.aws.amazon.com/signer/latest/developerguide/gs-profile.html">http://docs.aws.amazon.com/signer/latest/developerguide/gs-profile.html</a>
 */
PutSigningProfileResponse * signerClient::putSigningProfile(const PutSigningProfileRequest &request)
{
    return qobject_cast<PutSigningProfileResponse *>(send(request));
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
 * You must create an S3 destination bucket. AWS Signer uses your S3 destination bucket to write your signed
 *
 * code> </li> <li>
 *
 * You specify the name of the source and destination buckets when calling the <code>StartSigningJob</code>
 *
 * operation> </li> <li>
 *
 * You must also specify a request token that identifies your request to AWS Signer.
 *
 * </p </li> </ul>
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
