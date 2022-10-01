// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdirectconnectgatewayassociationproposalresponse.h"
#include "createdirectconnectgatewayassociationproposalresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::CreateDirectConnectGatewayAssociationProposalResponse
 * \brief The CreateDirectConnectGatewayAssociationProposalResponse class provides an interace for DirectConnect CreateDirectConnectGatewayAssociationProposal responses.
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
 * \sa DirectConnectClient::createDirectConnectGatewayAssociationProposal
 */

/*!
 * Constructs a CreateDirectConnectGatewayAssociationProposalResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDirectConnectGatewayAssociationProposalResponse::CreateDirectConnectGatewayAssociationProposalResponse(
        const CreateDirectConnectGatewayAssociationProposalRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new CreateDirectConnectGatewayAssociationProposalResponsePrivate(this), parent)
{
    setRequest(new CreateDirectConnectGatewayAssociationProposalRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDirectConnectGatewayAssociationProposalRequest * CreateDirectConnectGatewayAssociationProposalResponse::request() const
{
    Q_D(const CreateDirectConnectGatewayAssociationProposalResponse);
    return static_cast<const CreateDirectConnectGatewayAssociationProposalRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect CreateDirectConnectGatewayAssociationProposal \a response.
 */
void CreateDirectConnectGatewayAssociationProposalResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDirectConnectGatewayAssociationProposalResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::CreateDirectConnectGatewayAssociationProposalResponsePrivate
 * \brief The CreateDirectConnectGatewayAssociationProposalResponsePrivate class provides private implementation for CreateDirectConnectGatewayAssociationProposalResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a CreateDirectConnectGatewayAssociationProposalResponsePrivate object with public implementation \a q.
 */
CreateDirectConnectGatewayAssociationProposalResponsePrivate::CreateDirectConnectGatewayAssociationProposalResponsePrivate(
    CreateDirectConnectGatewayAssociationProposalResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect CreateDirectConnectGatewayAssociationProposal response element from \a xml.
 */
void CreateDirectConnectGatewayAssociationProposalResponsePrivate::parseCreateDirectConnectGatewayAssociationProposalResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDirectConnectGatewayAssociationProposalResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
