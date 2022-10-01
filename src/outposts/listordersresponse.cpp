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

#include "listordersresponse.h"
#include "listordersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::ListOrdersResponse
 * \brief The ListOrdersResponse class provides an interace for Outposts ListOrders responses.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::listOrders
 */

/*!
 * Constructs a ListOrdersResponse object for \a reply to \a request, with parent \a parent.
 */
ListOrdersResponse::ListOrdersResponse(
        const ListOrdersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OutpostsResponse(new ListOrdersResponsePrivate(this), parent)
{
    setRequest(new ListOrdersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListOrdersRequest * ListOrdersResponse::request() const
{
    Q_D(const ListOrdersResponse);
    return static_cast<const ListOrdersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Outposts ListOrders \a response.
 */
void ListOrdersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListOrdersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Outposts::ListOrdersResponsePrivate
 * \brief The ListOrdersResponsePrivate class provides private implementation for ListOrdersResponse.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a ListOrdersResponsePrivate object with public implementation \a q.
 */
ListOrdersResponsePrivate::ListOrdersResponsePrivate(
    ListOrdersResponse * const q) : OutpostsResponsePrivate(q)
{

}

/*!
 * Parses a Outposts ListOrders response element from \a xml.
 */
void ListOrdersResponsePrivate::parseListOrdersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOrdersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Outposts
} // namespace QtAws
