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

#include "describehostedconnectionsresponse.h"
#include "describehostedconnectionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectConnect {

/**
 * @class  DescribeHostedConnectionsResponse
 *
 * @brief  Handles DirectConnect DescribeHostedConnections responses.
 *
 * @see    DirectConnectClient::describeHostedConnections
 */

/**
 * @brief  Constructs a new DescribeHostedConnectionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeHostedConnectionsResponse::DescribeHostedConnectionsResponse(
        const DescribeHostedConnectionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DescribeHostedConnectionsResponsePrivate(this), parent)
{
    setRequest(new DescribeHostedConnectionsRequest(request));
    setReply(reply);
}

const DescribeHostedConnectionsRequest * DescribeHostedConnectionsResponse::request() const
{
    Q_D(const DescribeHostedConnectionsResponse);
    return static_cast<const DescribeHostedConnectionsRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect DescribeHostedConnections response.
 *
 * @param  response  Response to parse.
 */
void DescribeHostedConnectionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeHostedConnectionsResponsePrivate
 *
 * @brief  Private implementation for DescribeHostedConnectionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeHostedConnectionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeHostedConnectionsResponse instance.
 */
DescribeHostedConnectionsResponsePrivate::DescribeHostedConnectionsResponsePrivate(
    DescribeHostedConnectionsQueueResponse * const q) : DescribeHostedConnectionsPrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect DescribeHostedConnectionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeHostedConnectionsResponsePrivate::DescribeHostedConnectionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeHostedConnectionsResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace AWS
