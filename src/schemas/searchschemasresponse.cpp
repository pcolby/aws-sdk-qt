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

#include "searchschemasresponse.h"
#include "searchschemasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::SearchSchemasResponse
 * \brief The SearchSchemasResponse class provides an interace for Schemas SearchSchemas responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::searchSchemas
 */

/*!
 * Constructs a SearchSchemasResponse object for \a reply to \a request, with parent \a parent.
 */
SearchSchemasResponse::SearchSchemasResponse(
        const SearchSchemasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new SearchSchemasResponsePrivate(this), parent)
{
    setRequest(new SearchSchemasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchSchemasRequest * SearchSchemasResponse::request() const
{
    return static_cast<const SearchSchemasRequest *>(SchemasResponse::request());
}

/*!
 * \reimp
 * Parses a successful Schemas SearchSchemas \a response.
 */
void SearchSchemasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchSchemasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::SearchSchemasResponsePrivate
 * \brief The SearchSchemasResponsePrivate class provides private implementation for SearchSchemasResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a SearchSchemasResponsePrivate object with public implementation \a q.
 */
SearchSchemasResponsePrivate::SearchSchemasResponsePrivate(
    SearchSchemasResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas SearchSchemas response element from \a xml.
 */
void SearchSchemasResponsePrivate::parseSearchSchemasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchSchemasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
