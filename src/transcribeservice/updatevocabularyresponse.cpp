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

#include "updatevocabularyresponse.h"
#include "updatevocabularyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::UpdateVocabularyResponse
 * \brief The UpdateVocabularyResponse class provides an interace for TranscribeService UpdateVocabulary responses.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::updateVocabulary
 */

/*!
 * Constructs a UpdateVocabularyResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateVocabularyResponse::UpdateVocabularyResponse(
        const UpdateVocabularyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new UpdateVocabularyResponsePrivate(this), parent)
{
    setRequest(new UpdateVocabularyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateVocabularyRequest * UpdateVocabularyResponse::request() const
{
    return static_cast<const UpdateVocabularyRequest *>(TranscribeServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful TranscribeService UpdateVocabulary \a response.
 */
void UpdateVocabularyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateVocabularyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TranscribeService::UpdateVocabularyResponsePrivate
 * \brief The UpdateVocabularyResponsePrivate class provides private implementation for UpdateVocabularyResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a UpdateVocabularyResponsePrivate object with public implementation \a q.
 */
UpdateVocabularyResponsePrivate::UpdateVocabularyResponsePrivate(
    UpdateVocabularyResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/*!
 * Parses a TranscribeService UpdateVocabulary response element from \a xml.
 */
void UpdateVocabularyResponsePrivate::parseUpdateVocabularyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateVocabularyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TranscribeService
} // namespace QtAws
