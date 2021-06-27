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

#include "getvocabularyfilterresponse.h"
#include "getvocabularyfilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::GetVocabularyFilterResponse
 * \brief The GetVocabularyFilterResponse class provides an interace for TranscribeService GetVocabularyFilter responses.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::getVocabularyFilter
 */

/*!
 * Constructs a GetVocabularyFilterResponse object for \a reply to \a request, with parent \a parent.
 */
GetVocabularyFilterResponse::GetVocabularyFilterResponse(
        const GetVocabularyFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new GetVocabularyFilterResponsePrivate(this), parent)
{
    setRequest(new GetVocabularyFilterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetVocabularyFilterRequest * GetVocabularyFilterResponse::request() const
{
    return static_cast<const GetVocabularyFilterRequest *>(TranscribeServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful TranscribeService GetVocabularyFilter \a response.
 */
void GetVocabularyFilterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetVocabularyFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TranscribeService::GetVocabularyFilterResponsePrivate
 * \brief The GetVocabularyFilterResponsePrivate class provides private implementation for GetVocabularyFilterResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a GetVocabularyFilterResponsePrivate object with public implementation \a q.
 */
GetVocabularyFilterResponsePrivate::GetVocabularyFilterResponsePrivate(
    GetVocabularyFilterResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/*!
 * Parses a TranscribeService GetVocabularyFilter response element from \a xml.
 */
void GetVocabularyFilterResponsePrivate::parseGetVocabularyFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetVocabularyFilterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TranscribeService
} // namespace QtAws
