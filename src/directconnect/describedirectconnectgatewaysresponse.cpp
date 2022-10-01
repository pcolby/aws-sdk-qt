// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedirectconnectgatewaysresponse.h"
#include "describedirectconnectgatewaysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeDirectConnectGatewaysResponse
 * \brief The DescribeDirectConnectGatewaysResponse class provides an interace for DirectConnect DescribeDirectConnectGateways responses.
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
 * \sa DirectConnectClient::describeDirectConnectGateways
 */

/*!
 * Constructs a DescribeDirectConnectGatewaysResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDirectConnectGatewaysResponse::DescribeDirectConnectGatewaysResponse(
        const DescribeDirectConnectGatewaysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DescribeDirectConnectGatewaysResponsePrivate(this), parent)
{
    setRequest(new DescribeDirectConnectGatewaysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDirectConnectGatewaysRequest * DescribeDirectConnectGatewaysResponse::request() const
{
    Q_D(const DescribeDirectConnectGatewaysResponse);
    return static_cast<const DescribeDirectConnectGatewaysRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect DescribeDirectConnectGateways \a response.
 */
void DescribeDirectConnectGatewaysResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDirectConnectGatewaysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::DescribeDirectConnectGatewaysResponsePrivate
 * \brief The DescribeDirectConnectGatewaysResponsePrivate class provides private implementation for DescribeDirectConnectGatewaysResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DescribeDirectConnectGatewaysResponsePrivate object with public implementation \a q.
 */
DescribeDirectConnectGatewaysResponsePrivate::DescribeDirectConnectGatewaysResponsePrivate(
    DescribeDirectConnectGatewaysResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect DescribeDirectConnectGateways response element from \a xml.
 */
void DescribeDirectConnectGatewaysResponsePrivate::parseDescribeDirectConnectGatewaysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDirectConnectGatewaysResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
