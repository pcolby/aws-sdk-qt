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

#include "describegamesessionsresponse.h"
#include "describegamesessionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  DescribeGameSessionsResponse
 *
 * @brief  Handles GameLift DescribeGameSessions responses.
 *
 * @see    GameLiftClient::describeGameSessions
 */

/**
 * @brief  Constructs a new DescribeGameSessionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeGameSessionsResponse::DescribeGameSessionsResponse(
        const DescribeGameSessionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new DescribeGameSessionsResponsePrivate(this), parent)
{
    setRequest(new DescribeGameSessionsRequest(request));
    setReply(reply);
}

const DescribeGameSessionsRequest * DescribeGameSessionsResponse::request() const
{
    Q_D(const DescribeGameSessionsResponse);
    return static_cast<const DescribeGameSessionsRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift DescribeGameSessions response.
 *
 * @param  response  Response to parse.
 */
void DescribeGameSessionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeGameSessionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeGameSessionsResponsePrivate
 *
 * @brief  Private implementation for DescribeGameSessionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeGameSessionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeGameSessionsResponse instance.
 */
DescribeGameSessionsResponsePrivate::DescribeGameSessionsResponsePrivate(
    DescribeGameSessionsResponse * const q) : GameLiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an GameLift DescribeGameSessionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeGameSessionsResponsePrivate::parseDescribeGameSessionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeGameSessionsResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws
