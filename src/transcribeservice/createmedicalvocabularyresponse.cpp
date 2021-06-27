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

#include "createmedicalvocabularyresponse.h"
#include "createmedicalvocabularyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::CreateMedicalVocabularyResponse
 * \brief The CreateMedicalVocabularyResponse class provides an interace for TranscribeService CreateMedicalVocabulary responses.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::createMedicalVocabulary
 */

/*!
 * Constructs a CreateMedicalVocabularyResponse object for \a reply to \a request, with parent \a parent.
 */
CreateMedicalVocabularyResponse::CreateMedicalVocabularyResponse(
        const CreateMedicalVocabularyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new CreateMedicalVocabularyResponsePrivate(this), parent)
{
    setRequest(new CreateMedicalVocabularyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateMedicalVocabularyRequest * CreateMedicalVocabularyResponse::request() const
{
    return static_cast<const CreateMedicalVocabularyRequest *>(TranscribeServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful TranscribeService CreateMedicalVocabulary \a response.
 */
void CreateMedicalVocabularyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateMedicalVocabularyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TranscribeService::CreateMedicalVocabularyResponsePrivate
 * \brief The CreateMedicalVocabularyResponsePrivate class provides private implementation for CreateMedicalVocabularyResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a CreateMedicalVocabularyResponsePrivate object with public implementation \a q.
 */
CreateMedicalVocabularyResponsePrivate::CreateMedicalVocabularyResponsePrivate(
    CreateMedicalVocabularyResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/*!
 * Parses a TranscribeService CreateMedicalVocabulary response element from \a xml.
 */
void CreateMedicalVocabularyResponsePrivate::parseCreateMedicalVocabularyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMedicalVocabularyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TranscribeService
} // namespace QtAws
