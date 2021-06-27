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

#include "listdiscoverersresponse.h"
#include "listdiscoverersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::ListDiscoverersResponse
 * \brief The ListDiscoverersResponse class provides an interace for Schemas ListDiscoverers responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::listDiscoverers
 */

/*!
 * Constructs a ListDiscoverersResponse object for \a reply to \a request, with parent \a parent.
 */
ListDiscoverersResponse::ListDiscoverersResponse(
        const ListDiscoverersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new ListDiscoverersResponsePrivate(this), parent)
{
    setRequest(new ListDiscoverersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDiscoverersRequest * ListDiscoverersResponse::request() const
{
    return static_cast<const ListDiscoverersRequest *>(SchemasResponse::request());
}

/*!
 * \reimp
 * Parses a successful Schemas ListDiscoverers \a response.
 */
void ListDiscoverersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDiscoverersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::ListDiscoverersResponsePrivate
 * \brief The ListDiscoverersResponsePrivate class provides private implementation for ListDiscoverersResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a ListDiscoverersResponsePrivate object with public implementation \a q.
 */
ListDiscoverersResponsePrivate::ListDiscoverersResponsePrivate(
    ListDiscoverersResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas ListDiscoverers response element from \a xml.
 */
void ListDiscoverersResponsePrivate::parseListDiscoverersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDiscoverersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
