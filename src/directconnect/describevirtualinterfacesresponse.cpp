/*
    Copyright 2013-2018 Paul Colby

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
 *  AWS Direct Connect links your internal network to an AWS Direct Connect location over a standard Ethernet fiber-optic
 *  cable. One end of the cable is connected to your router, the other to an AWS Direct Connect router. With this connection
 *  in place, you can create virtual interfaces directly to the AWS cloud (for example, to Amazon EC2 and Amazon S3) and to
 *  Amazon VPC, bypassing Internet service providers in your network path. A connection provides access to all AWS Regions
 *  except the China (Beijing) and (China) Ningxia Regions. AWS resources in the China Regions can only be accessed through
 *  locations associated with those
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
