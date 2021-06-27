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

#include "getmedicaltranscriptionjobresponse.h"
#include "getmedicaltranscriptionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::GetMedicalTranscriptionJobResponse
 * \brief The GetMedicalTranscriptionJobResponse class provides an interace for TranscribeService GetMedicalTranscriptionJob responses.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::getMedicalTranscriptionJob
 */

/*!
 * Constructs a GetMedicalTranscriptionJobResponse object for \a reply to \a request, with parent \a parent.
 */
GetMedicalTranscriptionJobResponse::GetMedicalTranscriptionJobResponse(
        const GetMedicalTranscriptionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new GetMedicalTranscriptionJobResponsePrivate(this), parent)
{
    setRequest(new GetMedicalTranscriptionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMedicalTranscriptionJobRequest * GetMedicalTranscriptionJobResponse::request() const
{
    return static_cast<const GetMedicalTranscriptionJobRequest *>(TranscribeServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful TranscribeService GetMedicalTranscriptionJob \a response.
 */
void GetMedicalTranscriptionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMedicalTranscriptionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TranscribeService::GetMedicalTranscriptionJobResponsePrivate
 * \brief The GetMedicalTranscriptionJobResponsePrivate class provides private implementation for GetMedicalTranscriptionJobResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a GetMedicalTranscriptionJobResponsePrivate object with public implementation \a q.
 */
GetMedicalTranscriptionJobResponsePrivate::GetMedicalTranscriptionJobResponsePrivate(
    GetMedicalTranscriptionJobResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/*!
 * Parses a TranscribeService GetMedicalTranscriptionJob response element from \a xml.
 */
void GetMedicalTranscriptionJobResponsePrivate::parseGetMedicalTranscriptionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMedicalTranscriptionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TranscribeService
} // namespace QtAws
