// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startmedicalstreamtranscriptionresponse.h"
#include "startmedicalstreamtranscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeStreaming {

/*!
 * \class QtAws::TranscribeStreaming::StartMedicalStreamTranscriptionResponse
 * \brief The StartMedicalStreamTranscriptionResponse class provides an interace for TranscribeStreaming StartMedicalStreamTranscription responses.
 *
 * \inmodule QtAwsTranscribeStreaming
 *
 *  Operations and objects for transcribing streaming speech to
 *
 * \sa TranscribeStreamingClient::startMedicalStreamTranscription
 */

/*!
 * Constructs a StartMedicalStreamTranscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
StartMedicalStreamTranscriptionResponse::StartMedicalStreamTranscriptionResponse(
        const StartMedicalStreamTranscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeStreamingResponse(new StartMedicalStreamTranscriptionResponsePrivate(this), parent)
{
    setRequest(new StartMedicalStreamTranscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartMedicalStreamTranscriptionRequest * StartMedicalStreamTranscriptionResponse::request() const
{
    Q_D(const StartMedicalStreamTranscriptionResponse);
    return static_cast<const StartMedicalStreamTranscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful TranscribeStreaming StartMedicalStreamTranscription \a response.
 */
void StartMedicalStreamTranscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartMedicalStreamTranscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TranscribeStreaming::StartMedicalStreamTranscriptionResponsePrivate
 * \brief The StartMedicalStreamTranscriptionResponsePrivate class provides private implementation for StartMedicalStreamTranscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribeStreaming
 */

/*!
 * Constructs a StartMedicalStreamTranscriptionResponsePrivate object with public implementation \a q.
 */
StartMedicalStreamTranscriptionResponsePrivate::StartMedicalStreamTranscriptionResponsePrivate(
    StartMedicalStreamTranscriptionResponse * const q) : TranscribeStreamingResponsePrivate(q)
{

}

/*!
 * Parses a TranscribeStreaming StartMedicalStreamTranscription response element from \a xml.
 */
void StartMedicalStreamTranscriptionResponsePrivate::parseStartMedicalStreamTranscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartMedicalStreamTranscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TranscribeStreaming
} // namespace QtAws
