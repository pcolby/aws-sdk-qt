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

#include "listvocabularyfiltersresponse.h"
#include "listvocabularyfiltersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::ListVocabularyFiltersResponse
 * \brief The ListVocabularyFiltersResponse class provides an interace for TranscribeService ListVocabularyFilters responses.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::listVocabularyFilters
 */

/*!
 * Constructs a ListVocabularyFiltersResponse object for \a reply to \a request, with parent \a parent.
 */
ListVocabularyFiltersResponse::ListVocabularyFiltersResponse(
        const ListVocabularyFiltersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new ListVocabularyFiltersResponsePrivate(this), parent)
{
    setRequest(new ListVocabularyFiltersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListVocabularyFiltersRequest * ListVocabularyFiltersResponse::request() const
{
    return static_cast<const ListVocabularyFiltersRequest *>(TranscribeServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful TranscribeService ListVocabularyFilters \a response.
 */
void ListVocabularyFiltersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListVocabularyFiltersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TranscribeService::ListVocabularyFiltersResponsePrivate
 * \brief The ListVocabularyFiltersResponsePrivate class provides private implementation for ListVocabularyFiltersResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a ListVocabularyFiltersResponsePrivate object with public implementation \a q.
 */
ListVocabularyFiltersResponsePrivate::ListVocabularyFiltersResponsePrivate(
    ListVocabularyFiltersResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/*!
 * Parses a TranscribeService ListVocabularyFilters response element from \a xml.
 */
void ListVocabularyFiltersResponsePrivate::parseListVocabularyFiltersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListVocabularyFiltersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TranscribeService
} // namespace QtAws
