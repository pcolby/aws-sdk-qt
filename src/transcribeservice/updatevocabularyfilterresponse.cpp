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

#include "updatevocabularyfilterresponse.h"
#include "updatevocabularyfilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::UpdateVocabularyFilterResponse
 * \brief The UpdateVocabularyFilterResponse class provides an interace for TranscribeService UpdateVocabularyFilter responses.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::updateVocabularyFilter
 */

/*!
 * Constructs a UpdateVocabularyFilterResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateVocabularyFilterResponse::UpdateVocabularyFilterResponse(
        const UpdateVocabularyFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new UpdateVocabularyFilterResponsePrivate(this), parent)
{
    setRequest(new UpdateVocabularyFilterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateVocabularyFilterRequest * UpdateVocabularyFilterResponse::request() const
{
    Q_D(const UpdateVocabularyFilterResponse);
    return static_cast<const UpdateVocabularyFilterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful TranscribeService UpdateVocabularyFilter \a response.
 */
void UpdateVocabularyFilterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateVocabularyFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TranscribeService::UpdateVocabularyFilterResponsePrivate
 * \brief The UpdateVocabularyFilterResponsePrivate class provides private implementation for UpdateVocabularyFilterResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a UpdateVocabularyFilterResponsePrivate object with public implementation \a q.
 */
UpdateVocabularyFilterResponsePrivate::UpdateVocabularyFilterResponsePrivate(
    UpdateVocabularyFilterResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/*!
 * Parses a TranscribeService UpdateVocabularyFilter response element from \a xml.
 */
void UpdateVocabularyFilterResponsePrivate::parseUpdateVocabularyFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateVocabularyFilterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TranscribeService
} // namespace QtAws
