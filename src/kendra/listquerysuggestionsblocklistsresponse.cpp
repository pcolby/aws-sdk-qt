// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
