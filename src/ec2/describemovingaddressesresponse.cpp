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

#include "describemovingaddressesresponse.h"
#include "describemovingaddressesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeMovingAddressesResponse
 *
 * @brief  Handles EC2 DescribeMovingAddresses responses.
 *
 * @see    EC2Client::describeMovingAddresses
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeMovingAddressesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeMovingAddressesResponsePrivate(this), parent)
{
    setRequest(new DescribeMovingAddressesRequest(request));
    setReply(reply);
}

const DescribeMovingAddressesRequest * DescribeMovingAddressesResponse::request() const
{
    Q_D(const DescribeMovingAddressesResponse);
    return static_cast<const DescribeMovingAddressesRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeMovingAddresses response.
 *
 * @param  response  Response to parse.
 */
void DescribeMovingAddressesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeMovingAddressesResponsePrivate
 *
 * @brief  Private implementation for DescribeMovingAddressesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMovingAddressesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeMovingAddressesResponse instance.
 */
DescribeMovingAddressesResponsePrivate::DescribeMovingAddressesResponsePrivate(
    DescribeMovingAddressesQueueResponse * const q) : DescribeMovingAddressesPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeMovingAddressesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeMovingAddressesResponsePrivate::DescribeMovingAddressesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMovingAddressesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
