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

#include "disassociateconnectpeerresponse.h"
#include "disassociateconnectpeerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DisassociateConnectPeerResponse
 * \brief The DisassociateConnectPeerResponse class provides an interace for NetworkManager DisassociateConnectPeer responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::disassociateConnectPeer
 */

/*!
 * Constructs a DisassociateConnectPeerResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateConnectPeerResponse::DisassociateConnectPeerResponse(
        const DisassociateConnectPeerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new DisassociateConnectPeerResponsePrivate(this), parent)
{
    setRequest(new DisassociateConnectPeerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateConnectPeerRequest * DisassociateConnectPeerResponse::request() const
{
    Q_D(const DisassociateConnectPeerResponse);
    return static_cast<const DisassociateConnectPeerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager DisassociateConnectPeer \a response.
 */
void DisassociateConnectPeerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateConnectPeerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::DisassociateConnectPeerResponsePrivate
 * \brief The DisassociateConnectPeerResponsePrivate class provides private implementation for DisassociateConnectPeerResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DisassociateConnectPeerResponsePrivate object with public implementation \a q.
 */
DisassociateConnectPeerResponsePrivate::DisassociateConnectPeerResponsePrivate(
    DisassociateConnectPeerResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager DisassociateConnectPeer response element from \a xml.
 */
void DisassociateConnectPeerResponsePrivate::parseDisassociateConnectPeerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateConnectPeerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
