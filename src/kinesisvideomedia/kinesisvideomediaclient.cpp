// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "kinesisvideomediaclient.h"
#include "kinesisvideomediaclient_p.h"

#include "core/awssignaturev4.h"
#include "getmediarequest.h"
#include "getmediaresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::KinesisVideoMedia
 * \brief Contains classess for accessing Amazon Kinesis Video Streams Media.
 *
 * \inmodule QtAwsKinesisVideoMedia
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace KinesisVideoMedia {

/*!
 * \class QtAws::KinesisVideoMedia::KinesisVideoMediaClient
 * \brief The KinesisVideoMediaClient class provides access to the Amazon Kinesis Video Streams Media service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKinesisVideoMedia
 *
 */

/*!
 * \brief Constructs a KinesisVideoMediaClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
KinesisVideoMediaClient::KinesisVideoMediaClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KinesisVideoMediaClientPrivate(this), parent)
{
    Q_D(KinesisVideoMediaClient);
    d->apiVersion = QStringLiteral("2017-09-30");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("kinesisvideo");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Kinesis Video Streams Media");
    d->serviceName = QStringLiteral("kinesisvideo");
}

/*!
 * \overload KinesisVideoMediaClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
KinesisVideoMediaClient::KinesisVideoMediaClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KinesisVideoMediaClientPrivate(this), parent)
{
    Q_D(KinesisVideoMediaClient);
    d->apiVersion = QStringLiteral("2017-09-30");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("kinesisvideo");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Kinesis Video Streams Media");
    d->serviceName = QStringLiteral("kinesisvideo");
}

/*!
 * Sends \a request to the KinesisVideoMediaClient service, and returns a pointer to an
 * GetMediaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use this API to retrieve media content from a Kinesis video stream. In the request, you identify the stream name or
 * stream Amazon Resource Name (ARN), and the starting chunk. Kinesis Video Streams then returns a stream of chunks in
 * order by fragment
 *
 * number> <note>
 *
 * You must first call the <code>GetDataEndpoint</code> API to get an endpoint. Then send the <code>GetMedia</code>
 * requests to this endpoint using the <a href="https://docs.aws.amazon.com/cli/latest/reference/">--endpoint-url
 * parameter</a>.
 *
 * </p </note>
 *
 * When you put media data (fragments) on a stream, Kinesis Video Streams stores each incoming fragment and related
 * metadata in what is called a "chunk." For more information, see <a
 * href="https://docs.aws.amazon.com/kinesisvideostreams/latest/dg/API_dataplane_PutMedia.html">PutMedia</a>. The
 * <code>GetMedia</code> API returns a stream of these chunks starting from the chunk that you specify in the request.
 *
 * </p
 *
 * The following limits apply when using the <code>GetMedia</code>
 *
 * API> <ul> <li>
 *
 * A client can call <code>GetMedia</code> up to five times per second per stream.
 *
 * </p </li> <li>
 *
 * Kinesis Video Streams sends media data at a rate of up to 25 megabytes per second (or 200 megabits per second) during a
 * <code>GetMedia</code> session.
 *
 * </p </li> </ul> <note>
 *
 * If an error is thrown after invoking a Kinesis Video Streams media API, in addition to the HTTP status code and the
 * response body, it includes the following pieces of information:
 *
 * </p <ul> <li>
 *
 * <code>x-amz-ErrorType</code> HTTP header – contains a more specific error type in addition to what the HTTP status code
 * provides.
 *
 * </p </li> <li>
 *
 * <code>x-amz-RequestId</code> HTTP header – if you want to report an issue to AWS, the support team can better diagnose
 * the problem if given the Request
 *
 * Id> </li> </ul>
 *
 * Both the HTTP status code and the ErrorType header can be utilized to make programmatic decisions about whether errors
 * are retry-able and under what conditions, as well as provide information on what actions the client programmer might
 * need to take in order to successfully try
 *
 * again>
 *
 * For more information, see the <b>Errors</b> section at the bottom of this topic, as well as <a
 * href="https://docs.aws.amazon.com/kinesisvideostreams/latest/dg/CommonErrors.html">Common Errors</a>.
 */
GetMediaResponse * KinesisVideoMediaClient::getMedia(const GetMediaRequest &request)
{
    return qobject_cast<GetMediaResponse *>(send(request));
}

/*!
 * \class QtAws::KinesisVideoMedia::KinesisVideoMediaClientPrivate
 * \brief The KinesisVideoMediaClientPrivate class provides private implementation for KinesisVideoMediaClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKinesisVideoMedia
 */

/*!
 * Constructs a KinesisVideoMediaClientPrivate object with public implementation \a q.
 */
KinesisVideoMediaClientPrivate::KinesisVideoMediaClientPrivate(KinesisVideoMediaClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace KinesisVideoMedia
} // namespace QtAws
