// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedirectconnectgatewayassociationproposalsresponse.h"
#include "describedirectconnectgatewayassociationproposalsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeDirectConnectGatewayAssociationProposalsResponse
 * \brief The DescribeDirectConnectGatewayAssociationProposalsResponse class provides an interace for DirectConnect DescribeDirectConnectGatewayAssociationProposals responses.
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
 * \sa DirectConnectClient::describeDirectConnectGatewayAssociationProposals
 */

/*!
 * Constructs a DescribeDirectConnectGatewayAssociationProposalsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDirectConnectGatewayAssociationProposalsResponse::DescribeDirectConnectGatewayAssociationProposalsResponse(
        const DescribeDirectConnectGatewayAssociationProposalsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DescribeDirectConnectGatewayAssociationProposalsResponsePrivate(this), parent)
{
    setRequest(new DescribeDirectConnectGatewayAssociationProposalsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDirectConnectGatewayAssociationProposalsRequest * DescribeDirectConnectGatewayAssociationProposalsResponse::request() const
{
    Q_D(const DescribeDirectConnectGatewayAssociationProposalsResponse);
    return static_cast<const DescribeDirectConnectGatewayAssociationProposalsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect DescribeDirectConnectGatewayAssociationProposals \a response.
 */
void DescribeDirectConnectGatewayAssociationProposalsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDirectConnectGatewayAssociationProposalsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::DescribeDirectConnectGatewayAssociationProposalsResponsePrivate
 * \brief The DescribeDirectConnectGatewayAssociationProposalsResponsePrivate class provides private implementation for DescribeDirectConnectGatewayAssociationProposalsResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DescribeDirectConnectGatewayAssociationProposalsResponsePrivate object with public implementation \a q.
 */
DescribeDirectConnectGatewayAssociationProposalsResponsePrivate::DescribeDirectConnectGatewayAssociationProposalsResponsePrivate(
    DescribeDirectConnectGatewayAssociationProposalsResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect DescribeDirectConnectGatewayAssociationProposals response element from \a xml.
 */
void DescribeDirectConnectGatewayAssociationProposalsResponsePrivate::parseDescribeDirectConnectGatewayAssociationProposalsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDirectConnectGatewayAssociationProposalsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
