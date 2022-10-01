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

#include "getconnectpeerassociationsresponse.h"
#include "getconnectpeerassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetConnectPeerAssociationsResponse
 * \brief The GetConnectPeerAssociationsResponse class provides an interace for NetworkManager GetConnectPeerAssociations responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getConnectPeerAssociations
 */

/*!
 * Constructs a GetConnectPeerAssociationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetConnectPeerAssociationsResponse::GetConnectPeerAssociationsResponse(
        const GetConnectPeerAssociationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetConnectPeerAssociationsResponsePrivate(this), parent)
{
    setRequest(new GetConnectPeerAssociationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetConnectPeerAssociationsRequest * GetConnectPeerAssociationsResponse::request() const
{
    Q_D(const GetConnectPeerAssociationsResponse);
    return static_cast<const GetConnectPeerAssociationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetConnectPeerAssociations \a response.
 */
void GetConnectPeerAssociationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetConnectPeerAssociationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetConnectPeerAssociationsResponsePrivate
 * \brief The GetConnectPeerAssociationsResponsePrivate class provides private implementation for GetConnectPeerAssociationsResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetConnectPeerAssociationsResponsePrivate object with public implementation \a q.
 */
GetConnectPeerAssociationsResponsePrivate::GetConnectPeerAssociationsResponsePrivate(
    GetConnectPeerAssociationsResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetConnectPeerAssociations response element from \a xml.
 */
void GetConnectPeerAssociationsResponsePrivate::parseGetConnectPeerAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConnectPeerAssociationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
