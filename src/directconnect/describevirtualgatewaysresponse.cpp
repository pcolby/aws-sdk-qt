/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describevirtualgatewaysresponse.h"
#include "describevirtualgatewaysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeVirtualGatewaysResponse
 *
 * \brief The DescribeVirtualGatewaysResponse class encapsulates DirectConnect DescribeVirtualGateways responses.
 *
 * \ingroup DirectConnect
 *
 *  AWS Direct Connect links your internal network to an AWS Direct Connect location over a standard 1 gigabit or 10 gigabit
 *  Ethernet fiber-optic cable. One end of the cable is connected to your router, the other to an AWS Direct Connect router.
 *  With this connection in place, you can create virtual interfaces directly to the AWS cloud (for example, to Amazon
 *  Elastic Compute Cloud (Amazon EC2) and Amazon Simple Storage Service (Amazon S3)) and to Amazon Virtual Private Cloud
 *  (Amazon VPC), bypassing Internet service providers in your network path. An AWS Direct Connect location provides access
 *  to AWS in the region it is associated with, as well as access to other US regions. For example, you can provision a
 *  single connection to any AWS Direct Connect location in the US and use it to access public AWS services in all US
 *  Regions and AWS GovCloud
 *
 * \sa DirectConnectClient::describeVirtualGateways
 */

/*!
 * @brief  Constructs a new DescribeVirtualGatewaysResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const DescribeVirtualGatewaysRequest * DescribeVirtualGatewaysResponse::request() const
{
    Q_D(const DescribeVirtualGatewaysResponse);
    return static_cast<const DescribeVirtualGatewaysRequest *>(d->request);
}

/*!
 * @brief  Parse a DirectConnect DescribeVirtualGateways response.
 *
 * @param  response  Response to parse.
 */
void DescribeVirtualGatewaysResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeVirtualGatewaysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeVirtualGatewaysResponsePrivate
 *
 * \brief Private implementation for DescribeVirtualGatewaysResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeVirtualGatewaysResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeVirtualGatewaysResponse instance.
 */
DescribeVirtualGatewaysResponsePrivate::DescribeVirtualGatewaysResponsePrivate(
    DescribeVirtualGatewaysResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DirectConnect DescribeVirtualGatewaysResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeVirtualGatewaysResponsePrivate::parseDescribeVirtualGatewaysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVirtualGatewaysResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace QtAws
