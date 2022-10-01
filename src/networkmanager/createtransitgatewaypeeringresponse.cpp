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

#include "createtransitgatewaypeeringresponse.h"
#include "createtransitgatewaypeeringresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::CreateTransitGatewayPeeringResponse
 * \brief The CreateTransitGatewayPeeringResponse class provides an interace for NetworkManager CreateTransitGatewayPeering responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::createTransitGatewayPeering
 */

/*!
 * Constructs a CreateTransitGatewayPeeringResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTransitGatewayPeeringResponse::CreateTransitGatewayPeeringResponse(
        const CreateTransitGatewayPeeringRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new CreateTransitGatewayPeeringResponsePrivate(this), parent)
{
    setRequest(new CreateTransitGatewayPeeringRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTransitGatewayPeeringRequest * CreateTransitGatewayPeeringResponse::request() const
{
    Q_D(const CreateTransitGatewayPeeringResponse);
    return static_cast<const CreateTransitGatewayPeeringRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager CreateTransitGatewayPeering \a response.
 */
void CreateTransitGatewayPeeringResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTransitGatewayPeeringResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::CreateTransitGatewayPeeringResponsePrivate
 * \brief The CreateTransitGatewayPeeringResponsePrivate class provides private implementation for CreateTransitGatewayPeeringResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a CreateTransitGatewayPeeringResponsePrivate object with public implementation \a q.
 */
CreateTransitGatewayPeeringResponsePrivate::CreateTransitGatewayPeeringResponsePrivate(
    CreateTransitGatewayPeeringResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager CreateTransitGatewayPeering response element from \a xml.
 */
void CreateTransitGatewayPeeringResponsePrivate::parseCreateTransitGatewayPeeringResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTransitGatewayPeeringResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
