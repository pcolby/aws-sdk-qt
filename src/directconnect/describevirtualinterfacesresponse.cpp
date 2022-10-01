// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describevirtualinterfacesresponse.h"
#include "describevirtualinterfacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeVirtualInterfacesResponse
 * \brief The DescribeVirtualInterfacesResponse class provides an interace for DirectConnect DescribeVirtualInterfaces responses.
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
 * \sa DirectConnectClient::describeVirtualInterfaces
 */

/*!
 * Constructs a DescribeVirtualInterfacesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeVirtualInterfacesResponse::DescribeVirtualInterfacesResponse(
        const DescribeVirtualInterfacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DescribeVirtualInterfacesResponsePrivate(this), parent)
{
    setRequest(new DescribeVirtualInterfacesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeVirtualInterfacesRequest * DescribeVirtualInterfacesResponse::request() const
{
    Q_D(const DescribeVirtualInterfacesResponse);
    return static_cast<const DescribeVirtualInterfacesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect DescribeVirtualInterfaces \a response.
 */
void DescribeVirtualInterfacesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeVirtualInterfacesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::DescribeVirtualInterfacesResponsePrivate
 * \brief The DescribeVirtualInterfacesResponsePrivate class provides private implementation for DescribeVirtualInterfacesResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DescribeVirtualInterfacesResponsePrivate object with public implementation \a q.
 */
DescribeVirtualInterfacesResponsePrivate::DescribeVirtualInterfacesResponsePrivate(
    DescribeVirtualInterfacesResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect DescribeVirtualInterfaces response element from \a xml.
 */
void DescribeVirtualInterfacesResponsePrivate::parseDescribeVirtualInterfacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVirtualInterfacesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
