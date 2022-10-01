// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchtablesresponse.h"
#include "searchtablesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::SearchTablesResponse
 * \brief The SearchTablesResponse class provides an interace for Glue SearchTables responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::searchTables
 */

/*!
 * Constructs a SearchTablesResponse object for \a reply to \a request, with parent \a parent.
 */
SearchTablesResponse::SearchTablesResponse(
        const SearchTablesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new SearchTablesResponsePrivate(this), parent)
{
    setRequest(new SearchTablesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchTablesRequest * SearchTablesResponse::request() const
{
    Q_D(const SearchTablesResponse);
    return static_cast<const SearchTablesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue SearchTables \a response.
 */
void SearchTablesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchTablesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::SearchTablesResponsePrivate
 * \brief The SearchTablesResponsePrivate class provides private implementation for SearchTablesResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a SearchTablesResponsePrivate object with public implementation \a q.
 */
SearchTablesResponsePrivate::SearchTablesResponsePrivate(
    SearchTablesResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue SearchTables response element from \a xml.
 */
void SearchTablesResponsePrivate::parseSearchTablesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchTablesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
