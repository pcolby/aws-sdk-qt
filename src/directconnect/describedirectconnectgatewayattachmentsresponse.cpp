// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedirectconnectgatewayattachmentsresponse.h"
#include "describedirectconnectgatewayattachmentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeDirectConnectGatewayAttachmentsResponse
 * \brief The DescribeDirectConnectGatewayAttachmentsResponse class provides an interace for DirectConnect DescribeDirectConnectGatewayAttachments responses.
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
 * \sa DirectConnectClient::describeDirectConnectGatewayAttachments
 */

/*!
 * Constructs a DescribeDirectConnectGatewayAttachmentsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDirectConnectGatewayAttachmentsResponse::DescribeDirectConnectGatewayAttachmentsResponse(
        const DescribeDirectConnectGatewayAttachmentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DescribeDirectConnectGatewayAttachmentsResponsePrivate(this), parent)
{
    setRequest(new DescribeDirectConnectGatewayAttachmentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDirectConnectGatewayAttachmentsRequest * DescribeDirectConnectGatewayAttachmentsResponse::request() const
{
    Q_D(const DescribeDirectConnectGatewayAttachmentsResponse);
    return static_cast<const DescribeDirectConnectGatewayAttachmentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect DescribeDirectConnectGatewayAttachments \a response.
 */
void DescribeDirectConnectGatewayAttachmentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDirectConnectGatewayAttachmentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::DescribeDirectConnectGatewayAttachmentsResponsePrivate
 * \brief The DescribeDirectConnectGatewayAttachmentsResponsePrivate class provides private implementation for DescribeDirectConnectGatewayAttachmentsResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DescribeDirectConnectGatewayAttachmentsResponsePrivate object with public implementation \a q.
 */
DescribeDirectConnectGatewayAttachmentsResponsePrivate::DescribeDirectConnectGatewayAttachmentsResponsePrivate(
    DescribeDirectConnectGatewayAttachmentsResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect DescribeDirectConnectGatewayAttachments response element from \a xml.
 */
void DescribeDirectConnectGatewayAttachmentsResponsePrivate::parseDescribeDirectConnectGatewayAttachmentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDirectConnectGatewayAttachmentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
