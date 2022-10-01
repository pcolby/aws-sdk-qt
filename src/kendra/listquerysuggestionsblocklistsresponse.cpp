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
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListQuerySuggestionsBlockListsResponse
 * \brief The ListQuerySuggestionsBlockListsResponse class provides an interace for Kendra ListQuerySuggestionsBlockLists responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listQuerySuggestionsBlockLists
 */

/*!
 * Constructs a ListQuerySuggestionsBlockListsResponse object for \a reply to \a request, with parent \a parent.
 */
ListQuerySuggestionsBlockListsResponse::ListQuerySuggestionsBlockListsResponse(
        const ListQuerySuggestionsBlockListsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new ListQuerySuggestionsBlockListsResponsePrivate(this), parent)
{
    setRequest(new ListQuerySuggestionsBlockListsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListQuerySuggestionsBlockListsRequest * ListQuerySuggestionsBlockListsResponse::request() const
{
    Q_D(const ListQuerySuggestionsBlockListsResponse);
    return static_cast<const ListQuerySuggestionsBlockListsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra ListQuerySuggestionsBlockLists \a response.
 */
void ListQuerySuggestionsBlockListsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListQuerySuggestionsBlockListsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::ListQuerySuggestionsBlockListsResponsePrivate
 * \brief The ListQuerySuggestionsBlockListsResponsePrivate class provides private implementation for ListQuerySuggestionsBlockListsResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListQuerySuggestionsBlockListsResponsePrivate object with public implementation \a q.
 */
ListQuerySuggestionsBlockListsResponsePrivate::ListQuerySuggestionsBlockListsResponsePrivate(
    ListQuerySuggestionsBlockListsResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra ListQuerySuggestionsBlockLists response element from \a xml.
 */
void ListQuerySuggestionsBlockListsResponsePrivate::parseListQuerySuggestionsBlockListsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListQuerySuggestionsBlockListsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
