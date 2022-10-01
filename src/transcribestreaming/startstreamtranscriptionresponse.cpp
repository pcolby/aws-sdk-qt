// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startstreamtranscriptionresponse.h"
#include "startstreamtranscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeStreaming {

/*!
 * \class QtAws::TranscribeStreaming::StartStreamTranscriptionResponse
 * \brief The StartStreamTranscriptionResponse class provides an interace for TranscribeStreaming StartStreamTranscription responses.
 *
 * \inmodule QtAwsTranscribeStreaming
 *
 *  Operations and objects for transcribing streaming speech to
 *
 * \sa TranscribeStreamingClient::startStreamTranscription
 */

/*!
 * Constructs a StartStreamTranscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
StartStreamTranscriptionResponse::StartStreamTranscriptionResponse(
        const StartStreamTranscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeStreamingResponse(new StartStreamTranscriptionResponsePrivate(this), parent)
{
    setRequest(new StartStreamTranscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartStreamTranscriptionRequest * StartStreamTranscriptionResponse::request() const
{
    Q_D(const StartStreamTranscriptionResponse);
    return static_cast<const StartStreamTranscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful TranscribeStreaming StartStreamTranscription \a response.
 */
void StartStreamTranscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartStreamTranscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TranscribeStreaming::StartStreamTranscriptionResponsePrivate
 * \brief The StartStreamTranscriptionResponsePrivate class provides private implementation for StartStreamTranscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribeStreaming
 */

/*!
 * Constructs a StartStreamTranscriptionResponsePrivate object with public implementation \a q.
 */
StartStreamTranscriptionResponsePrivate::StartStreamTranscriptionResponsePrivate(
    StartStreamTranscriptionResponse * const q) : TranscribeStreamingResponsePrivate(q)
{

}

/*!
 * Parses a TranscribeStreaming StartStreamTranscription response element from \a xml.
 */
void StartStreamTranscriptionResponsePrivate::parseStartStreamTranscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartStreamTranscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TranscribeStreaming
} // namespace QtAws
