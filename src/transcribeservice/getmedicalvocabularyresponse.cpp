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

#include "getmedicalvocabularyresponse.h"
#include "getmedicalvocabularyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::GetMedicalVocabularyResponse
 * \brief The GetMedicalVocabularyResponse class provides an interace for TranscribeService GetMedicalVocabulary responses.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::getMedicalVocabulary
 */

/*!
 * Constructs a GetMedicalVocabularyResponse object for \a reply to \a request, with parent \a parent.
 */
GetMedicalVocabularyResponse::GetMedicalVocabularyResponse(
        const GetMedicalVocabularyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new GetMedicalVocabularyResponsePrivate(this), parent)
{
    setRequest(new GetMedicalVocabularyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMedicalVocabularyRequest * GetMedicalVocabularyResponse::request() const
{
    return static_cast<const GetMedicalVocabularyRequest *>(TranscribeServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful TranscribeService GetMedicalVocabulary \a response.
 */
void GetMedicalVocabularyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMedicalVocabularyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TranscribeService::GetMedicalVocabularyResponsePrivate
 * \brief The GetMedicalVocabularyResponsePrivate class provides private implementation for GetMedicalVocabularyResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a GetMedicalVocabularyResponsePrivate object with public implementation \a q.
 */
GetMedicalVocabularyResponsePrivate::GetMedicalVocabularyResponsePrivate(
    GetMedicalVocabularyResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/*!
 * Parses a TranscribeService GetMedicalVocabulary response element from \a xml.
 */
void GetMedicalVocabularyResponsePrivate::parseGetMedicalVocabularyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMedicalVocabularyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TranscribeService
} // namespace QtAws
