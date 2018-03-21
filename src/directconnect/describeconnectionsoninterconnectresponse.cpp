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

#include "describeconnectionsoninterconnectresponse.h"
#include "describeconnectionsoninterconnectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectConnect {

/**
 * @class  DescribeConnectionsOnInterconnectResponse
 *
 * @brief  Handles DirectConnect DescribeConnectionsOnInterconnect responses.
 *
 * @see    DirectConnectClient::describeConnectionsOnInterconnect
 */

/**
 * @brief  Constructs a new DescribeConnectionsOnInterconnectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeConnectionsOnInterconnectResponse::DescribeConnectionsOnInterconnectResponse(
        const DescribeConnectionsOnInterconnectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DescribeConnectionsOnInterconnectResponsePrivate(this), parent)
{
    setRequest(new DescribeConnectionsOnInterconnectRequest(request));
    setReply(reply);
}

const DescribeConnectionsOnInterconnectRequest * DescribeConnectionsOnInterconnectResponse::request() const
{
    Q_D(const DescribeConnectionsOnInterconnectResponse);
    return static_cast<const DescribeConnectionsOnInterconnectRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect DescribeConnectionsOnInterconnect response.
 *
 * @param  response  Response to parse.
 */
void DescribeConnectionsOnInterconnectResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeConnectionsOnInterconnectResponsePrivate
 *
 * @brief  Private implementation for DescribeConnectionsOnInterconnectResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConnectionsOnInterconnectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeConnectionsOnInterconnectResponse instance.
 */
DescribeConnectionsOnInterconnectResponsePrivate::DescribeConnectionsOnInterconnectResponsePrivate(
    DescribeConnectionsOnInterconnectQueueResponse * const q) : DescribeConnectionsOnInterconnectPrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect DescribeConnectionsOnInterconnectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeConnectionsOnInterconnectResponsePrivate::DescribeConnectionsOnInterconnectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConnectionsOnInterconnectResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace AWS
