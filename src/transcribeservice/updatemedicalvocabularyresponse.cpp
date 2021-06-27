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

#include "updatemedicalvocabularyresponse.h"
#include "updatemedicalvocabularyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::UpdateMedicalVocabularyResponse
 * \brief The UpdateMedicalVocabularyResponse class provides an interace for TranscribeService UpdateMedicalVocabulary responses.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::updateMedicalVocabulary
 */

/*!
 * Constructs a UpdateMedicalVocabularyResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateMedicalVocabularyResponse::UpdateMedicalVocabularyResponse(
        const UpdateMedicalVocabularyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new UpdateMedicalVocabularyResponsePrivate(this), parent)
{
    setRequest(new UpdateMedicalVocabularyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateMedicalVocabularyRequest * UpdateMedicalVocabularyResponse::request() const
{
    return static_cast<const UpdateMedicalVocabularyRequest *>(TranscribeServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful TranscribeService UpdateMedicalVocabulary \a response.
 */
void UpdateMedicalVocabularyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateMedicalVocabularyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TranscribeService::UpdateMedicalVocabularyResponsePrivate
 * \brief The UpdateMedicalVocabularyResponsePrivate class provides private implementation for UpdateMedicalVocabularyResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a UpdateMedicalVocabularyResponsePrivate object with public implementation \a q.
 */
UpdateMedicalVocabularyResponsePrivate::UpdateMedicalVocabularyResponsePrivate(
    UpdateMedicalVocabularyResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/*!
 * Parses a TranscribeService UpdateMedicalVocabulary response element from \a xml.
 */
void UpdateMedicalVocabularyResponsePrivate::parseUpdateMedicalVocabularyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMedicalVocabularyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TranscribeService
} // namespace QtAws
