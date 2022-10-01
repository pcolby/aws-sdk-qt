// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchsessionsresponse.h"
#include "searchsessionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::SearchSessionsResponse
 * \brief The SearchSessionsResponse class provides an interace for Wisdom SearchSessions responses.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::searchSessions
 */

/*!
 * Constructs a SearchSessionsResponse object for \a reply to \a request, with parent \a parent.
 */
SearchSessionsResponse::SearchSessionsResponse(
        const SearchSessionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WisdomResponse(new SearchSessionsResponsePrivate(this), parent)
{
    setRequest(new SearchSessionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchSessionsRequest * SearchSessionsResponse::request() const
{
    Q_D(const SearchSessionsResponse);
    return static_cast<const SearchSessionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Wisdom SearchSessions \a response.
 */
void SearchSessionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchSessionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Wisdom::SearchSessionsResponsePrivate
 * \brief The SearchSessionsResponsePrivate class provides private implementation for SearchSessionsResponse.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a SearchSessionsResponsePrivate object with public implementation \a q.
 */
SearchSessionsResponsePrivate::SearchSessionsResponsePrivate(
    SearchSessionsResponse * const q) : WisdomResponsePrivate(q)
{

}

/*!
 * Parses a Wisdom SearchSessions response element from \a xml.
 */
void SearchSessionsResponsePrivate::parseSearchSessionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchSessionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Wisdom
} // namespace QtAws
