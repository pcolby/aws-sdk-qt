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

#include "describeaddressesresponse.h"
#include "describeaddressesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/**
 * @class  DescribeAddressesResponse
 *
 * @brief  Handles Snowball DescribeAddresses responses.
 *
 * @see    SnowballClient::describeAddresses
 */

/**
 * @brief  Constructs a new DescribeAddressesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAddressesResponse::DescribeAddressesResponse(
        const DescribeAddressesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new DescribeAddressesResponsePrivate(this), parent)
{
    setRequest(new DescribeAddressesRequest(request));
    setReply(reply);
}

const DescribeAddressesRequest * DescribeAddressesResponse::request() const
{
    Q_D(const DescribeAddressesResponse);
    return static_cast<const DescribeAddressesRequest *>(d->request);
}

/**
 * @brief  Parse a Snowball DescribeAddresses response.
 *
 * @param  response  Response to parse.
 */
void DescribeAddressesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAddressesResponsePrivate
 *
 * @brief  Private implementation for DescribeAddressesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAddressesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAddressesResponse instance.
 */
DescribeAddressesResponsePrivate::DescribeAddressesResponsePrivate(
    DescribeAddressesResponse * const q) : SnowballResponsePrivate(q)
{

}

/**
 * @brief  Parse an Snowball DescribeAddressesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAddressesResponsePrivate::DescribeAddressesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAddressesResponse"));
    /// @todo
}

} // namespace Snowball
} // namespace QtAws
