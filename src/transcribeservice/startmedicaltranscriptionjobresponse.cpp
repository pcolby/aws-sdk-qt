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

#include "startmedicaltranscriptionjobresponse.h"
#include "startmedicaltranscriptionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::StartMedicalTranscriptionJobResponse
 * \brief The StartMedicalTranscriptionJobResponse class provides an interace for TranscribeService StartMedicalTranscriptionJob responses.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::startMedicalTranscriptionJob
 */

/*!
 * Constructs a StartMedicalTranscriptionJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartMedicalTranscriptionJobResponse::StartMedicalTranscriptionJobResponse(
        const StartMedicalTranscriptionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new StartMedicalTranscriptionJobResponsePrivate(this), parent)
{
    setRequest(new StartMedicalTranscriptionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartMedicalTranscriptionJobRequest * StartMedicalTranscriptionJobResponse::request() const
{
    Q_D(const StartMedicalTranscriptionJobResponse);
    return static_cast<const StartMedicalTranscriptionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful TranscribeService StartMedicalTranscriptionJob \a response.
 */
void StartMedicalTranscriptionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartMedicalTranscriptionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TranscribeService::StartMedicalTranscriptionJobResponsePrivate
 * \brief The StartMedicalTranscriptionJobResponsePrivate class provides private implementation for StartMedicalTranscriptionJobResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a StartMedicalTranscriptionJobResponsePrivate object with public implementation \a q.
 */
StartMedicalTranscriptionJobResponsePrivate::StartMedicalTranscriptionJobResponsePrivate(
    StartMedicalTranscriptionJobResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/*!
 * Parses a TranscribeService StartMedicalTranscriptionJob response element from \a xml.
 */
void StartMedicalTranscriptionJobResponsePrivate::parseStartMedicalTranscriptionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartMedicalTranscriptionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TranscribeService
} // namespace QtAws
