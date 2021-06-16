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

#include "queryresponse.h"
#include "queryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::QueryResponse
 * \brief The QueryResponse class provides an interace for kendra Query responses.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::query
 */

/*!
 * Constructs a QueryResponse object for \a reply to \a request, with parent \a parent.
 */
QueryResponse::QueryResponse(
        const QueryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : kendraResponse(new QueryResponsePrivate(this), parent)
{
    setRequest(new QueryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const QueryRequest * QueryResponse::request() const
{
    Q_D(const QueryResponse);
    return static_cast<const QueryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful kendra Query \a response.
 */
void QueryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(QueryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::kendra::QueryResponsePrivate
 * \brief The QueryResponsePrivate class provides private implementation for QueryResponse.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a QueryResponsePrivate object with public implementation \a q.
 */
QueryResponsePrivate::QueryResponsePrivate(
    QueryResponse * const q) : kendraResponsePrivate(q)
{

}

/*!
 * Parses a kendra Query response element from \a xml.
 */
void QueryResponsePrivate::parseQueryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("QueryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace kendra
} // namespace QtAws
