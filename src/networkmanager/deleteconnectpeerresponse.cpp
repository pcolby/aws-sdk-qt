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

#include "deleteconnectpeerresponse.h"
#include "deleteconnectpeerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeleteConnectPeerResponse
 * \brief The DeleteConnectPeerResponse class provides an interace for NetworkManager DeleteConnectPeer responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::deleteConnectPeer
 */

/*!
 * Constructs a DeleteConnectPeerResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteConnectPeerResponse::DeleteConnectPeerResponse(
        const DeleteConnectPeerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new DeleteConnectPeerResponsePrivate(this), parent)
{
    setRequest(new DeleteConnectPeerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteConnectPeerRequest * DeleteConnectPeerResponse::request() const
{
    Q_D(const DeleteConnectPeerResponse);
    return static_cast<const DeleteConnectPeerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager DeleteConnectPeer \a response.
 */
void DeleteConnectPeerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteConnectPeerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::DeleteConnectPeerResponsePrivate
 * \brief The DeleteConnectPeerResponsePrivate class provides private implementation for DeleteConnectPeerResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeleteConnectPeerResponsePrivate object with public implementation \a q.
 */
DeleteConnectPeerResponsePrivate::DeleteConnectPeerResponsePrivate(
    DeleteConnectPeerResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager DeleteConnectPeer response element from \a xml.
 */
void DeleteConnectPeerResponsePrivate::parseDeleteConnectPeerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConnectPeerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
