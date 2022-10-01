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

#include "listcorenetworksresponse.h"
#include "listcorenetworksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::ListCoreNetworksResponse
 * \brief The ListCoreNetworksResponse class provides an interace for NetworkManager ListCoreNetworks responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::listCoreNetworks
 */

/*!
 * Constructs a ListCoreNetworksResponse object for \a reply to \a request, with parent \a parent.
 */
ListCoreNetworksResponse::ListCoreNetworksResponse(
        const ListCoreNetworksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new ListCoreNetworksResponsePrivate(this), parent)
{
    setRequest(new ListCoreNetworksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCoreNetworksRequest * ListCoreNetworksResponse::request() const
{
    Q_D(const ListCoreNetworksResponse);
    return static_cast<const ListCoreNetworksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager ListCoreNetworks \a response.
 */
void ListCoreNetworksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCoreNetworksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::ListCoreNetworksResponsePrivate
 * \brief The ListCoreNetworksResponsePrivate class provides private implementation for ListCoreNetworksResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a ListCoreNetworksResponsePrivate object with public implementation \a q.
 */
ListCoreNetworksResponsePrivate::ListCoreNetworksResponsePrivate(
    ListCoreNetworksResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager ListCoreNetworks response element from \a xml.
 */
void ListCoreNetworksResponsePrivate::parseListCoreNetworksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCoreNetworksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
