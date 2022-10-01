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

#include "listpeeringsresponse.h"
#include "listpeeringsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::ListPeeringsResponse
 * \brief The ListPeeringsResponse class provides an interace for NetworkManager ListPeerings responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::listPeerings
 */

/*!
 * Constructs a ListPeeringsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPeeringsResponse::ListPeeringsResponse(
        const ListPeeringsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new ListPeeringsResponsePrivate(this), parent)
{
    setRequest(new ListPeeringsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPeeringsRequest * ListPeeringsResponse::request() const
{
    Q_D(const ListPeeringsResponse);
    return static_cast<const ListPeeringsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager ListPeerings \a response.
 */
void ListPeeringsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPeeringsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::ListPeeringsResponsePrivate
 * \brief The ListPeeringsResponsePrivate class provides private implementation for ListPeeringsResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a ListPeeringsResponsePrivate object with public implementation \a q.
 */
ListPeeringsResponsePrivate::ListPeeringsResponsePrivate(
    ListPeeringsResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager ListPeerings response element from \a xml.
 */
void ListPeeringsResponsePrivate::parseListPeeringsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPeeringsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
