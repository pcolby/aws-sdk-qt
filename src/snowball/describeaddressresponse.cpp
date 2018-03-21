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

#include "describeaddressresponse.h"
#include "describeaddressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Snowball {

/**
 * @class  DescribeAddressResponse
 *
 * @brief  Handles Snowball DescribeAddress responses.
 *
 * @see    SnowballClient::describeAddress
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAddressResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new DescribeAddressResponsePrivate(this), parent)
{
    setRequest(new DescribeAddressRequest(request));
    setReply(reply);
}

const DescribeAddressRequest * DescribeAddressResponse::request() const
{
    Q_D(const DescribeAddressResponse);
    return static_cast<const DescribeAddressRequest *>(d->request);
}

/**
 * @brief  Parse a Snowball DescribeAddress response.
 *
 * @param  response  Response to parse.
 */
void DescribeAddressResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAddressResponsePrivate
 *
 * @brief  Private implementation for DescribeAddressResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAddressResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAddressResponse instance.
 */
DescribeAddressResponsePrivate::DescribeAddressResponsePrivate(
    DescribeAddressQueueResponse * const q) : DescribeAddressPrivate(q)
{

}

/**
 * @brief  Parse an Snowball DescribeAddressResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAddressResponsePrivate::DescribeAddressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAddressResponse"));
    /// @todo
}

} // namespace Snowball
} // namespace AWS
