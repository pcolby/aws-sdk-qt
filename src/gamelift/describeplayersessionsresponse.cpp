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

#include "describeplayersessionsresponse.h"
#include "describeplayersessionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  DescribePlayerSessionsResponse
 *
 * @brief  Handles GameLift DescribePlayerSessions responses.
 *
 * @see    GameLiftClient::describePlayerSessions
 */

/**
 * @brief  Constructs a new DescribePlayerSessionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribePlayerSessionsResponse::DescribePlayerSessionsResponse(
        const DescribePlayerSessionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new DescribePlayerSessionsResponsePrivate(this), parent)
{
    setRequest(new DescribePlayerSessionsRequest(request));
    setReply(reply);
}

const DescribePlayerSessionsRequest * DescribePlayerSessionsResponse::request() const
{
    Q_D(const DescribePlayerSessionsResponse);
    return static_cast<const DescribePlayerSessionsRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift DescribePlayerSessions response.
 *
 * @param  response  Response to parse.
 */
void DescribePlayerSessionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribePlayerSessionsResponsePrivate
 *
 * @brief  Private implementation for DescribePlayerSessionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribePlayerSessionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribePlayerSessionsResponse instance.
 */
DescribePlayerSessionsResponsePrivate::DescribePlayerSessionsResponsePrivate(
    DescribePlayerSessionsQueueResponse * const q) : DescribePlayerSessionsPrivate(q)
{

}

/**
 * @brief  Parse an GameLift DescribePlayerSessionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribePlayerSessionsResponsePrivate::DescribePlayerSessionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePlayerSessionsResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace AWS
