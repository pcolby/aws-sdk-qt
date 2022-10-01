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

#include "transcribestreamingclient.h"
#include "transcribestreamingclient_p.h"

#include "core/awssignaturev4.h"
#include "startmedicalstreamtranscriptionrequest.h"
#include "startmedicalstreamtranscriptionresponse.h"
#include "startstreamtranscriptionrequest.h"
#include "startstreamtranscriptionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::TranscribeStreaming
 * \brief Contains classess for accessing Amazon Transcribe Streaming Service.
 *
 * \inmodule QtAwsTranscribeStreaming
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace TranscribeStreaming {

/*!
 * \class QtAws::TranscribeStreaming::TranscribeStreamingClient
 * \brief The TranscribeStreamingClient class provides access to the Amazon Transcribe Streaming Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsTranscribeStreaming
 *
 *  Operations and objects for transcribing streaming speech to
 */

/*!
 * \brief Constructs a TranscribeStreamingClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
TranscribeStreamingClient::TranscribeStreamingClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new TranscribeStreamingClientPrivate(this), parent)
{
    Q_D(TranscribeStreamingClient);
    d->apiVersion = QStringLiteral("2017-10-26");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("transcribestreaming");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Transcribe Streaming Service");
    d->serviceName = QStringLiteral("transcribe");
}

/*!
 * \overload TranscribeStreamingClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
TranscribeStreamingClient::TranscribeStreamingClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new TranscribeStreamingClientPrivate(this), parent)
{
    Q_D(TranscribeStreamingClient);
    d->apiVersion = QStringLiteral("2017-10-26");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("transcribestreaming");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Transcribe Streaming Service");
    d->serviceName = QStringLiteral("transcribe");
}

/*!
 * Sends \a request to the TranscribeStreamingClient service, and returns a pointer to an
 * StartMedicalStreamTranscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a bidirectional HTTP/2 stream where audio is streamed to Amazon Transcribe Medical and the transcription results
 * are streamed to your
 */
StartMedicalStreamTranscriptionResponse * TranscribeStreamingClient::startMedicalStreamTranscription(const StartMedicalStreamTranscriptionRequest &request)
{
    return qobject_cast<StartMedicalStreamTranscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the TranscribeStreamingClient service, and returns a pointer to an
 * StartStreamTranscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a bidirectional HTTP/2 stream where audio is streamed to Amazon Transcribe and the transcription results are
 * streamed to your
 *
 * application>
 *
 * The following are encoded as HTTP/2
 *
 * headers> <ul> <li>
 *
 * x-amzn-transcribe-language-cod> </li> <li>
 *
 * x-amzn-transcribe-media-encodin> </li> <li>
 *
 * x-amzn-transcribe-sample-rat> </li> <li>
 *
 * x-amzn-transcribe-session-i> </li> </ul>
 *
 * See the <a
 * href="https://docs.aws.amazon.com/sdk-for-go/api/service/transcribestreamingservice/#TranscribeStreamingService.StartStreamTranscription">
 * SDK for Go API Reference</a> for more
 */
StartStreamTranscriptionResponse * TranscribeStreamingClient::startStreamTranscription(const StartStreamTranscriptionRequest &request)
{
    return qobject_cast<StartStreamTranscriptionResponse *>(send(request));
}

/*!
 * \class QtAws::TranscribeStreaming::TranscribeStreamingClientPrivate
 * \brief The TranscribeStreamingClientPrivate class provides private implementation for TranscribeStreamingClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsTranscribeStreaming
 */

/*!
 * Constructs a TranscribeStreamingClientPrivate object with public implementation \a q.
 */
TranscribeStreamingClientPrivate::TranscribeStreamingClientPrivate(TranscribeStreamingClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace TranscribeStreaming
} // namespace QtAws
