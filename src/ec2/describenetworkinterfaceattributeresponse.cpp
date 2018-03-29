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

#include "describenetworkinterfaceattributeresponse.h"
#include "describenetworkinterfaceattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeNetworkInterfaceAttributeResponse
 *
 * @brief  Handles EC2 DescribeNetworkInterfaceAttribute responses.
 *
 * @see    EC2Client::describeNetworkInterfaceAttribute
 */

/**
 * @brief  Constructs a new DescribeNetworkInterfaceAttributeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeNetworkInterfaceAttributeResponse::DescribeNetworkInterfaceAttributeResponse(
        const DescribeNetworkInterfaceAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeNetworkInterfaceAttributeResponsePrivate(this), parent)
{
    setRequest(new DescribeNetworkInterfaceAttributeRequest(request));
    setReply(reply);
}

const DescribeNetworkInterfaceAttributeRequest * DescribeNetworkInterfaceAttributeResponse::request() const
{
    Q_D(const DescribeNetworkInterfaceAttributeResponse);
    return static_cast<const DescribeNetworkInterfaceAttributeRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeNetworkInterfaceAttribute response.
 *
 * @param  response  Response to parse.
 */
void DescribeNetworkInterfaceAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeNetworkInterfaceAttributeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeNetworkInterfaceAttributeResponsePrivate
 *
 * @brief  Private implementation for DescribeNetworkInterfaceAttributeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeNetworkInterfaceAttributeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeNetworkInterfaceAttributeResponse instance.
 */
DescribeNetworkInterfaceAttributeResponsePrivate::DescribeNetworkInterfaceAttributeResponsePrivate(
    DescribeNetworkInterfaceAttributeResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeNetworkInterfaceAttributeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeNetworkInterfaceAttributeResponsePrivate::parseDescribeNetworkInterfaceAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeNetworkInterfaceAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
