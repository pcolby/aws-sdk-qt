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

#include "deletevocabularyfilterresponse.h"
#include "deletevocabularyfilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::DeleteVocabularyFilterResponse
 * \brief The DeleteVocabularyFilterResponse class provides an interace for TranscribeService DeleteVocabularyFilter responses.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::deleteVocabularyFilter
 */

/*!
 * Constructs a DeleteVocabularyFilterResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteVocabularyFilterResponse::DeleteVocabularyFilterResponse(
        const DeleteVocabularyFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new DeleteVocabularyFilterResponsePrivate(this), parent)
{
    setRequest(new DeleteVocabularyFilterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteVocabularyFilterRequest * DeleteVocabularyFilterResponse::request() const
{
    return static_cast<const DeleteVocabularyFilterRequest *>(TranscribeServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful TranscribeService DeleteVocabularyFilter \a response.
 */
void DeleteVocabularyFilterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteVocabularyFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TranscribeService::DeleteVocabularyFilterResponsePrivate
 * \brief The DeleteVocabularyFilterResponsePrivate class provides private implementation for DeleteVocabularyFilterResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a DeleteVocabularyFilterResponsePrivate object with public implementation \a q.
 */
DeleteVocabularyFilterResponsePrivate::DeleteVocabularyFilterResponsePrivate(
    DeleteVocabularyFilterResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/*!
 * Parses a TranscribeService DeleteVocabularyFilter response element from \a xml.
 */
void DeleteVocabularyFilterResponsePrivate::parseDeleteVocabularyFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVocabularyFilterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TranscribeService
} // namespace QtAws
