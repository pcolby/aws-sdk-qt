// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describevirtualgatewaysresponse.h"
#include "describevirtualgatewaysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeVirtualGatewaysResponse
 * \brief The DescribeVirtualGatewaysResponse class provides an interace for DirectConnect DescribeVirtualGateways responses.
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
 * \sa DirectConnectClient::describeVirtualGateways
 */

/*!
 * Constructs a DescribeVirtualGatewaysResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeVirtualGatewaysResponse::DescribeVirtualGatewaysResponse(
        const DescribeVirtualGatewaysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DescribeVirtualGatewaysResponsePrivate(this), parent)
{
    setRequest(new DescribeVirtualGatewaysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeVirtualGatewaysRequest * DescribeVirtualGatewaysResponse::request() const
{
    Q_D(const DescribeVirtualGatewaysResponse);
    return static_cast<const DescribeVirtualGatewaysRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect DescribeVirtualGateways \a response.
 */
void DescribeVirtualGatewaysResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeVirtualGatewaysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::DescribeVirtualGatewaysResponsePrivate
 * \brief The DescribeVirtualGatewaysResponsePrivate class provides private implementation for DescribeVirtualGatewaysResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DescribeVirtualGatewaysResponsePrivate object with public implementation \a q.
 */
DescribeVirtualGatewaysResponsePrivate::DescribeVirtualGatewaysResponsePrivate(
    DescribeVirtualGatewaysResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect DescribeVirtualGateways response element from \a xml.
 */
void DescribeVirtualGatewaysResponsePrivate::parseDescribeVirtualGatewaysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVirtualGatewaysResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
