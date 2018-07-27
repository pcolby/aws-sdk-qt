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

#include "starttranscriptionjobresponse.h"
#include "starttranscriptionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::StartTranscriptionJobResponse
 * \brief The StartTranscriptionJobResponse class provides an interace for TranscribeService StartTranscriptionJob responses.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::startTranscriptionJob
 */

/*!
 * Constructs a StartTranscriptionJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartTranscriptionJobResponse::StartTranscriptionJobResponse(
        const StartTranscriptionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new StartTranscriptionJobResponsePrivate(this), parent)
{
    setRequest(new StartTranscriptionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartTranscriptionJobRequest * StartTranscriptionJobResponse::request() const
{
    Q_D(const StartTranscriptionJobResponse);
    return static_cast<const StartTranscriptionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful TranscribeService StartTranscriptionJob \a response.
 */
void StartTranscriptionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartTranscriptionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TranscribeService::StartTranscriptionJobResponsePrivate
 * \brief The StartTranscriptionJobResponsePrivate class provides private implementation for StartTranscriptionJobResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a StartTranscriptionJobResponsePrivate object with public implementation \a q.
 */
StartTranscriptionJobResponsePrivate::StartTranscriptionJobResponsePrivate(
    StartTranscriptionJobResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/*!
 * Parses a TranscribeService StartTranscriptionJob response element from \a xml.
 */
void StartTranscriptionJobResponsePrivate::parseStartTranscriptionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartTranscriptionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TranscribeService
} // namespace QtAws
