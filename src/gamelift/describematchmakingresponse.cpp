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

#include "describematchmakingresponse.h"
#include "describematchmakingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  DescribeMatchmakingResponse
 *
 * @brief  Handles GameLift DescribeMatchmaking responses.
 *
 * @see    GameLiftClient::describeMatchmaking
 */

/**
 * @brief  Constructs a new DescribeMatchmakingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeMatchmakingResponse::DescribeMatchmakingResponse(
        const DescribeMatchmakingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new DescribeMatchmakingResponsePrivate(this), parent)
{
    setRequest(new DescribeMatchmakingRequest(request));
    setReply(reply);
}

const DescribeMatchmakingRequest * DescribeMatchmakingResponse::request() const
{
    Q_D(const DescribeMatchmakingResponse);
    return static_cast<const DescribeMatchmakingRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift DescribeMatchmaking response.
 *
 * @param  response  Response to parse.
 */
void DescribeMatchmakingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeMatchmakingResponsePrivate
 *
 * @brief  Private implementation for DescribeMatchmakingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMatchmakingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeMatchmakingResponse instance.
 */
DescribeMatchmakingResponsePrivate::DescribeMatchmakingResponsePrivate(
    DescribeMatchmakingResponse * const q) : GameLiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an GameLift DescribeMatchmakingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeMatchmakingResponsePrivate::DescribeMatchmakingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMatchmakingResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws
