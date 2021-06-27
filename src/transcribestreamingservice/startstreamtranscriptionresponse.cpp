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

#include "startstreamtranscriptionresponse.h"
#include "startstreamtranscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeStreamingService {

/*!
 * \class QtAws::TranscribeStreamingService::StartStreamTranscriptionResponse
 * \brief The StartStreamTranscriptionResponse class provides an interace for TranscribeStreamingService StartStreamTranscription responses.
 *
 * \inmodule QtAwsTranscribeStreamingService
 *
 *  Operations and objects for transcribing streaming speech to
 *
 * \sa TranscribeStreamingServiceClient::startStreamTranscription
 */

/*!
 * Constructs a StartStreamTranscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
StartStreamTranscriptionResponse::StartStreamTranscriptionResponse(
        const StartStreamTranscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeStreamingServiceResponse(new StartStreamTranscriptionResponsePrivate(this), parent)
{
    setRequest(new StartStreamTranscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartStreamTranscriptionRequest * StartStreamTranscriptionResponse::request() const
{
    return static_cast<const StartStreamTranscriptionRequest *>(TranscribeStreamingServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful TranscribeStreamingService StartStreamTranscription \a response.
 */
void StartStreamTranscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartStreamTranscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TranscribeStreamingService::StartStreamTranscriptionResponsePrivate
 * \brief The StartStreamTranscriptionResponsePrivate class provides private implementation for StartStreamTranscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribeStreamingService
 */

/*!
 * Constructs a StartStreamTranscriptionResponsePrivate object with public implementation \a q.
 */
StartStreamTranscriptionResponsePrivate::StartStreamTranscriptionResponsePrivate(
    StartStreamTranscriptionResponse * const q) : TranscribeStreamingServiceResponsePrivate(q)
{

}

/*!
 * Parses a TranscribeStreamingService StartStreamTranscription response element from \a xml.
 */
void StartStreamTranscriptionResponsePrivate::parseStartStreamTranscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartStreamTranscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TranscribeStreamingService
} // namespace QtAws
