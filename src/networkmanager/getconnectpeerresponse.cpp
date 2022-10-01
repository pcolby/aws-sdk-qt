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

#include "getconnectpeerresponse.h"
#include "getconnectpeerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetConnectPeerResponse
 * \brief The GetConnectPeerResponse class provides an interace for NetworkManager GetConnectPeer responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getConnectPeer
 */

/*!
 * Constructs a GetConnectPeerResponse object for \a reply to \a request, with parent \a parent.
 */
GetConnectPeerResponse::GetConnectPeerResponse(
        const GetConnectPeerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetConnectPeerResponsePrivate(this), parent)
{
    setRequest(new GetConnectPeerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetConnectPeerRequest * GetConnectPeerResponse::request() const
{
    Q_D(const GetConnectPeerResponse);
    return static_cast<const GetConnectPeerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetConnectPeer \a response.
 */
void GetConnectPeerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetConnectPeerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetConnectPeerResponsePrivate
 * \brief The GetConnectPeerResponsePrivate class provides private implementation for GetConnectPeerResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetConnectPeerResponsePrivate object with public implementation \a q.
 */
GetConnectPeerResponsePrivate::GetConnectPeerResponsePrivate(
    GetConnectPeerResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetConnectPeer response element from \a xml.
 */
void GetConnectPeerResponsePrivate::parseGetConnectPeerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConnectPeerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
