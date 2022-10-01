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
