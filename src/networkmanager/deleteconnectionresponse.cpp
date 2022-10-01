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

#include "deleteconnectionresponse.h"
#include "deleteconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeleteConnectionResponse
 * \brief The DeleteConnectionResponse class provides an interace for NetworkManager DeleteConnection responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::deleteConnection
 */

/*!
 * Constructs a DeleteConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteConnectionResponse::DeleteConnectionResponse(
        const DeleteConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new DeleteConnectionResponsePrivate(this), parent)
{
    setRequest(new DeleteConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteConnectionRequest * DeleteConnectionResponse::request() const
{
    Q_D(const DeleteConnectionResponse);
    return static_cast<const DeleteConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager DeleteConnection \a response.
 */
void DeleteConnectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::DeleteConnectionResponsePrivate
 * \brief The DeleteConnectionResponsePrivate class provides private implementation for DeleteConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeleteConnectionResponsePrivate object with public implementation \a q.
 */
DeleteConnectionResponsePrivate::DeleteConnectionResponsePrivate(
    DeleteConnectionResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager DeleteConnection response element from \a xml.
 */
void DeleteConnectionResponsePrivate::parseDeleteConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConnectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
