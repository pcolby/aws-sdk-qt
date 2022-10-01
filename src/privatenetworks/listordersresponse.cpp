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
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::ListOrdersResponse
 * \brief The ListOrdersResponse class provides an interace for PrivateNetworks ListOrders responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::listOrders
 */

/*!
 * Constructs a ListOrdersResponse object for \a reply to \a request, with parent \a parent.
 */
ListOrdersResponse::ListOrdersResponse(
        const ListOrdersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new ListOrdersResponsePrivate(this), parent)
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
 * Parses a successful PrivateNetworks ListOrders \a response.
 */
void ListOrdersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListOrdersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::ListOrdersResponsePrivate
 * \brief The ListOrdersResponsePrivate class provides private implementation for ListOrdersResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a ListOrdersResponsePrivate object with public implementation \a q.
 */
ListOrdersResponsePrivate::ListOrdersResponsePrivate(
    ListOrdersResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks ListOrders response element from \a xml.
 */
void ListOrdersResponsePrivate::parseListOrdersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOrdersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
