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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
