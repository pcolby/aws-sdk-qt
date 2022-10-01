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

#include "deletepeeringresponse.h"
#include "deletepeeringresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeletePeeringResponse
 * \brief The DeletePeeringResponse class provides an interace for NetworkManager DeletePeering responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::deletePeering
 */

/*!
 * Constructs a DeletePeeringResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePeeringResponse::DeletePeeringResponse(
        const DeletePeeringRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new DeletePeeringResponsePrivate(this), parent)
{
    setRequest(new DeletePeeringRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePeeringRequest * DeletePeeringResponse::request() const
{
    Q_D(const DeletePeeringResponse);
    return static_cast<const DeletePeeringRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager DeletePeering \a response.
 */
void DeletePeeringResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePeeringResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::DeletePeeringResponsePrivate
 * \brief The DeletePeeringResponsePrivate class provides private implementation for DeletePeeringResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeletePeeringResponsePrivate object with public implementation \a q.
 */
DeletePeeringResponsePrivate::DeletePeeringResponsePrivate(
    DeletePeeringResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager DeletePeering response element from \a xml.
 */
void DeletePeeringResponsePrivate::parseDeletePeeringResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePeeringResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
