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

#include "describevpcendpointservicesresponse.h"
#include "describevpcendpointservicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeVpcEndpointServicesResponse
 *
 * \brief The DescribeVpcEndpointServicesResponse class encapsulates EC2 DescribeVpcEndpointServices responses.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::describeVpcEndpointServices
 */

/*!
 * @brief  Constructs a new DescribeVpcEndpointServicesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeVpcEndpointServicesResponse::DescribeVpcEndpointServicesResponse(
        const DescribeVpcEndpointServicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeVpcEndpointServicesResponsePrivate(this), parent)
{
    setRequest(new DescribeVpcEndpointServicesRequest(request));
    setReply(reply);
}

const DescribeVpcEndpointServicesRequest * DescribeVpcEndpointServicesResponse::request() const
{
    Q_D(const DescribeVpcEndpointServicesResponse);
    return static_cast<const DescribeVpcEndpointServicesRequest *>(d->request);
}

/*!
 * @brief  Parse a EC2 DescribeVpcEndpointServices response.
 *
 * @param  response  Response to parse.
 */
void DescribeVpcEndpointServicesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeVpcEndpointServicesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeVpcEndpointServicesResponsePrivate
 *
 * \brief Private implementation for DescribeVpcEndpointServicesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeVpcEndpointServicesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeVpcEndpointServicesResponse instance.
 */
DescribeVpcEndpointServicesResponsePrivate::DescribeVpcEndpointServicesResponsePrivate(
    DescribeVpcEndpointServicesResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EC2 DescribeVpcEndpointServicesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeVpcEndpointServicesResponsePrivate::parseDescribeVpcEndpointServicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVpcEndpointServicesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
