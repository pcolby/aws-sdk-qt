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

#include "deletemedicalvocabularyresponse.h"
#include "deletemedicalvocabularyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::DeleteMedicalVocabularyResponse
 * \brief The DeleteMedicalVocabularyResponse class provides an interace for TranscribeService DeleteMedicalVocabulary responses.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::deleteMedicalVocabulary
 */

/*!
 * Constructs a DeleteMedicalVocabularyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMedicalVocabularyResponse::DeleteMedicalVocabularyResponse(
        const DeleteMedicalVocabularyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new DeleteMedicalVocabularyResponsePrivate(this), parent)
{
    setRequest(new DeleteMedicalVocabularyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMedicalVocabularyRequest * DeleteMedicalVocabularyResponse::request() const
{
    return static_cast<const DeleteMedicalVocabularyRequest *>(TranscribeServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful TranscribeService DeleteMedicalVocabulary \a response.
 */
void DeleteMedicalVocabularyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMedicalVocabularyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TranscribeService::DeleteMedicalVocabularyResponsePrivate
 * \brief The DeleteMedicalVocabularyResponsePrivate class provides private implementation for DeleteMedicalVocabularyResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a DeleteMedicalVocabularyResponsePrivate object with public implementation \a q.
 */
DeleteMedicalVocabularyResponsePrivate::DeleteMedicalVocabularyResponsePrivate(
    DeleteMedicalVocabularyResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/*!
 * Parses a TranscribeService DeleteMedicalVocabulary response element from \a xml.
 */
void DeleteMedicalVocabularyResponsePrivate::parseDeleteMedicalVocabularyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMedicalVocabularyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TranscribeService
} // namespace QtAws
