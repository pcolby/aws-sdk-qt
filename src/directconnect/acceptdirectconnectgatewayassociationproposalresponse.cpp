// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Direct Connect links your internal network to an Direct Connect location over a standard Ethernet fiber-optic cable. One
 *  end of the cable is connected to your router, the other to an Direct Connect router. With this connection in place, you
 *  can create virtual interfaces directly to the Amazon Web Services Cloud (for example, to Amazon EC2 and Amazon S3) and
 *  to Amazon VPC, bypassing Internet service providers in your network path. A connection provides access to all Amazon Web
 *  Services Regions except the China (Beijing) and (China) Ningxia Regions. Amazon Web Services resources in the China
 *  Regions can only be accessed through locations associated with those
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
