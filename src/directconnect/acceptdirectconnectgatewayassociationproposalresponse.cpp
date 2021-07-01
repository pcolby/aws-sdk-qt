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

#include "acceptdirectconnectgatewayassociationproposalresponse.h"
#include "acceptdirectconnectgatewayassociationproposalresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::AcceptDirectConnectGatewayAssociationProposalResponse
 * \brief The AcceptDirectConnectGatewayAssociationProposalResponse class provides an interace for DirectConnect AcceptDirectConnectGatewayAssociationProposal responses.
 *
 * \inmodule QtAwsDirectConnect
 *
 *  AWS Direct Connect links your internal network to an AWS Direct Connect location over a standard Ethernet fiber-optic
 *  cable. One end of the cable is connected to your router, the other to an AWS Direct Connect router. With this connection
 *  in place, you can create virtual interfaces directly to the AWS cloud (for example, to Amazon EC2 and Amazon S3) and to
 *  Amazon VPC, bypassing Internet service providers in your network path. A connection provides access to all AWS Regions
 *  except the China (Beijing) and (China) Ningxia Regions. AWS resources in the China Regions can only be accessed through
 *  locations associated with those
 *
 * \sa DirectConnectClient::acceptDirectConnectGatewayAssociationProposal
 */

/*!
 * Constructs a AcceptDirectConnectGatewayAssociationProposalResponse object for \a reply to \a request, with parent \a parent.
 */
AcceptDirectConnectGatewayAssociationProposalResponse::AcceptDirectConnectGatewayAssociationProposalResponse(
        const AcceptDirectConnectGatewayAssociationProposalRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new AcceptDirectConnectGatewayAssociationProposalResponsePrivate(this), parent)
{
    setRequest(new AcceptDirectConnectGatewayAssociationProposalRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AcceptDirectConnectGatewayAssociationProposalRequest * AcceptDirectConnectGatewayAssociationProposalResponse::request() const
{
    Q_D(const AcceptDirectConnectGatewayAssociationProposalResponse);
    return static_cast<const AcceptDirectConnectGatewayAssociationProposalRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect AcceptDirectConnectGatewayAssociationProposal \a response.
 */
void AcceptDirectConnectGatewayAssociationProposalResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AcceptDirectConnectGatewayAssociationProposalResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::AcceptDirectConnectGatewayAssociationProposalResponsePrivate
 * \brief The AcceptDirectConnectGatewayAssociationProposalResponsePrivate class provides private implementation for AcceptDirectConnectGatewayAssociationProposalResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a AcceptDirectConnectGatewayAssociationProposalResponsePrivate object with public implementation \a q.
 */
AcceptDirectConnectGatewayAssociationProposalResponsePrivate::AcceptDirectConnectGatewayAssociationProposalResponsePrivate(
    AcceptDirectConnectGatewayAssociationProposalResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect AcceptDirectConnectGatewayAssociationProposal response element from \a xml.
 */
void AcceptDirectConnectGatewayAssociationProposalResponsePrivate::parseAcceptDirectConnectGatewayAssociationProposalResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptDirectConnectGatewayAssociationProposalResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
