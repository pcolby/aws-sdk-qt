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

#include "listquerysuggestionsblocklistsresponse.h"
#include "listquerysuggestionsblocklistsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::ListQuerySuggestionsBlockListsResponse
 * \brief The ListQuerySuggestionsBlockListsResponse class provides an interace for kendra ListQuerySuggestionsBlockLists responses.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::listQuerySuggestionsBlockLists
 */

/*!
 * Constructs a ListQuerySuggestionsBlockListsResponse object for \a reply to \a request, with parent \a parent.
 */
ListQuerySuggestionsBlockListsResponse::ListQuerySuggestionsBlockListsResponse(
        const ListQuerySuggestionsBlockListsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : kendraResponse(new ListQuerySuggestionsBlockListsResponsePrivate(this), parent)
{
    setRequest(new ListQuerySuggestionsBlockListsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListQuerySuggestionsBlockListsRequest * ListQuerySuggestionsBlockListsResponse::request() const
{
    return static_cast<const ListQuerySuggestionsBlockListsRequest *>(kendraResponse::request());
}

/*!
 * \reimp
 * Parses a successful kendra ListQuerySuggestionsBlockLists \a response.
 */
void ListQuerySuggestionsBlockListsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListQuerySuggestionsBlockListsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::kendra::ListQuerySuggestionsBlockListsResponsePrivate
 * \brief The ListQuerySuggestionsBlockListsResponsePrivate class provides private implementation for ListQuerySuggestionsBlockListsResponse.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a ListQuerySuggestionsBlockListsResponsePrivate object with public implementation \a q.
 */
ListQuerySuggestionsBlockListsResponsePrivate::ListQuerySuggestionsBlockListsResponsePrivate(
    ListQuerySuggestionsBlockListsResponse * const q) : kendraResponsePrivate(q)
{

}

/*!
 * Parses a kendra ListQuerySuggestionsBlockLists response element from \a xml.
 */
void ListQuerySuggestionsBlockListsResponsePrivate::parseListQuerySuggestionsBlockListsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListQuerySuggestionsBlockListsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace kendra
} // namespace QtAws
