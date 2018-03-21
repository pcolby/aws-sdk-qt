/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describenetworkinterfacesresponse.h"
#include "describenetworkinterfacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeNetworkInterfacesResponse
 *
 * @brief  Handles EC2 DescribeNetworkInterfaces responses.
 *
 * @see    EC2Client::describeNetworkInterfaces
 */

/**
 * @brief  Constructs a new DescribeNetworkInterfacesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeNetworkInterfacesResponse::DescribeNetworkInterfacesResponse(
        const DescribeNetworkInterfacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeNetworkInterfacesResponsePrivate(this), parent)
{
    setRequest(new DescribeNetworkInterfacesRequest(request));
    setReply(reply);
}

const DescribeNetworkInterfacesRequest * DescribeNetworkInterfacesResponse::request() const
{
    Q_D(const DescribeNetworkInterfacesResponse);
    return static_cast<const DescribeNetworkInterfacesRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeNetworkInterfaces response.
 *
 * @param  response  Response to parse.
 */
void DescribeNetworkInterfacesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeNetworkInterfacesResponsePrivate
 *
 * @brief  Private implementation for DescribeNetworkInterfacesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeNetworkInterfacesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeNetworkInterfacesResponse instance.
 */
DescribeNetworkInterfacesResponsePrivate::DescribeNetworkInterfacesResponsePrivate(
    DescribeNetworkInterfacesQueueResponse * const q) : DescribeNetworkInterfacesPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeNetworkInterfacesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeNetworkInterfacesResponsePrivate::DescribeNetworkInterfacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeNetworkInterfacesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
