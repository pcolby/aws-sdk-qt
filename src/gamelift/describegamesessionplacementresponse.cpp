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

#include "describegamesessionplacementresponse.h"
#include "describegamesessionplacementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  DescribeGameSessionPlacementResponse
 *
 * @brief  Handles GameLift DescribeGameSessionPlacement responses.
 *
 * @see    GameLiftClient::describeGameSessionPlacement
 */

/**
 * @brief  Constructs a new DescribeGameSessionPlacementResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeGameSessionPlacementResponse::DescribeGameSessionPlacementResponse(
        const DescribeGameSessionPlacementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new DescribeGameSessionPlacementResponsePrivate(this), parent)
{
    setRequest(new DescribeGameSessionPlacementRequest(request));
    setReply(reply);
}

const DescribeGameSessionPlacementRequest * DescribeGameSessionPlacementResponse::request() const
{
    Q_D(const DescribeGameSessionPlacementResponse);
    return static_cast<const DescribeGameSessionPlacementRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift DescribeGameSessionPlacement response.
 *
 * @param  response  Response to parse.
 */
void DescribeGameSessionPlacementResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeGameSessionPlacementResponsePrivate
 *
 * @brief  Private implementation for DescribeGameSessionPlacementResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeGameSessionPlacementResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeGameSessionPlacementResponse instance.
 */
DescribeGameSessionPlacementResponsePrivate::DescribeGameSessionPlacementResponsePrivate(
    DescribeGameSessionPlacementQueueResponse * const q) : DescribeGameSessionPlacementPrivate(q)
{

}

/**
 * @brief  Parse an GameLift DescribeGameSessionPlacementResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeGameSessionPlacementResponsePrivate::DescribeGameSessionPlacementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeGameSessionPlacementResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace AWS
