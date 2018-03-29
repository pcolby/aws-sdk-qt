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

#include "describegamesessionqueuesresponse.h"
#include "describegamesessionqueuesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  DescribeGameSessionQueuesResponse
 *
 * @brief  Handles GameLift DescribeGameSessionQueues responses.
 *
 * @see    GameLiftClient::describeGameSessionQueues
 */

/**
 * @brief  Constructs a new DescribeGameSessionQueuesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeGameSessionQueuesResponse::DescribeGameSessionQueuesResponse(
        const DescribeGameSessionQueuesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new DescribeGameSessionQueuesResponsePrivate(this), parent)
{
    setRequest(new DescribeGameSessionQueuesRequest(request));
    setReply(reply);
}

const DescribeGameSessionQueuesRequest * DescribeGameSessionQueuesResponse::request() const
{
    Q_D(const DescribeGameSessionQueuesResponse);
    return static_cast<const DescribeGameSessionQueuesRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift DescribeGameSessionQueues response.
 *
 * @param  response  Response to parse.
 */
void DescribeGameSessionQueuesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeGameSessionQueuesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeGameSessionQueuesResponsePrivate
 *
 * @brief  Private implementation for DescribeGameSessionQueuesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeGameSessionQueuesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeGameSessionQueuesResponse instance.
 */
DescribeGameSessionQueuesResponsePrivate::DescribeGameSessionQueuesResponsePrivate(
    DescribeGameSessionQueuesResponse * const q) : GameLiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an GameLift DescribeGameSessionQueuesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeGameSessionQueuesResponsePrivate::parseDescribeGameSessionQueuesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeGameSessionQueuesResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws
