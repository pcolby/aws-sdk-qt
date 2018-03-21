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

#include "describevirtualinterfacesresponse.h"
#include "describevirtualinterfacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectConnect {

/**
 * @class  DescribeVirtualInterfacesResponse
 *
 * @brief  Handles DirectConnect DescribeVirtualInterfaces responses.
 *
 * @see    DirectConnectClient::describeVirtualInterfaces
 */

/**
 * @brief  Constructs a new DescribeVirtualInterfacesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const DescribeVirtualInterfacesRequest * DescribeVirtualInterfacesResponse::request() const
{
    Q_D(const DescribeVirtualInterfacesResponse);
    return static_cast<const DescribeVirtualInterfacesRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect DescribeVirtualInterfaces response.
 *
 * @param  response  Response to parse.
 */
void DescribeVirtualInterfacesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeVirtualInterfacesResponsePrivate
 *
 * @brief  Private implementation for DescribeVirtualInterfacesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVirtualInterfacesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeVirtualInterfacesResponse instance.
 */
DescribeVirtualInterfacesResponsePrivate::DescribeVirtualInterfacesResponsePrivate(
    DescribeVirtualInterfacesQueueResponse * const q) : DescribeVirtualInterfacesPrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect DescribeVirtualInterfacesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeVirtualInterfacesResponsePrivate::DescribeVirtualInterfacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVirtualInterfacesResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace AWS
