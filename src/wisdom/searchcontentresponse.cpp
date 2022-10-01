// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchcontentresponse.h"
#include "searchcontentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::SearchContentResponse
 * \brief The SearchContentResponse class provides an interace for Wisdom SearchContent responses.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::searchContent
 */

/*!
 * Constructs a SearchContentResponse object for \a reply to \a request, with parent \a parent.
 */
SearchContentResponse::SearchContentResponse(
        const SearchContentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WisdomResponse(new SearchContentResponsePrivate(this), parent)
{
    setRequest(new SearchContentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchContentRequest * SearchContentResponse::request() const
{
    Q_D(const SearchContentResponse);
    return static_cast<const SearchContentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Wisdom SearchContent \a response.
 */
void SearchContentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchContentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Wisdom::SearchContentResponsePrivate
 * \brief The SearchContentResponsePrivate class provides private implementation for SearchContentResponse.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a SearchContentResponsePrivate object with public implementation \a q.
 */
SearchContentResponsePrivate::SearchContentResponsePrivate(
    SearchContentResponse * const q) : WisdomResponsePrivate(q)
{

}

/*!
 * Parses a Wisdom SearchContent response element from \a xml.
 */
void SearchContentResponsePrivate::parseSearchContentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchContentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Wisdom
} // namespace QtAws
