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

#include "listcatalogitemsresponse.h"
#include "listcatalogitemsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::ListCatalogItemsResponse
 * \brief The ListCatalogItemsResponse class provides an interace for Outposts ListCatalogItems responses.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::listCatalogItems
 */

/*!
 * Constructs a ListCatalogItemsResponse object for \a reply to \a request, with parent \a parent.
 */
ListCatalogItemsResponse::ListCatalogItemsResponse(
        const ListCatalogItemsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OutpostsResponse(new ListCatalogItemsResponsePrivate(this), parent)
{
    setRequest(new ListCatalogItemsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCatalogItemsRequest * ListCatalogItemsResponse::request() const
{
    Q_D(const ListCatalogItemsResponse);
    return static_cast<const ListCatalogItemsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Outposts ListCatalogItems \a response.
 */
void ListCatalogItemsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCatalogItemsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Outposts::ListCatalogItemsResponsePrivate
 * \brief The ListCatalogItemsResponsePrivate class provides private implementation for ListCatalogItemsResponse.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a ListCatalogItemsResponsePrivate object with public implementation \a q.
 */
ListCatalogItemsResponsePrivate::ListCatalogItemsResponsePrivate(
    ListCatalogItemsResponse * const q) : OutpostsResponsePrivate(q)
{

}

/*!
 * Parses a Outposts ListCatalogItems response element from \a xml.
 */
void ListCatalogItemsResponsePrivate::parseListCatalogItemsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCatalogItemsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Outposts
} // namespace QtAws
