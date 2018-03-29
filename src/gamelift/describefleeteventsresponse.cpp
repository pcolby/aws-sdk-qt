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

#include "describefleeteventsresponse.h"
#include "describefleeteventsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  DescribeFleetEventsResponse
 *
 * @brief  Handles GameLift DescribeFleetEvents responses.
 *
 * @see    GameLiftClient::describeFleetEvents
 */

/**
 * @brief  Constructs a new DescribeFleetEventsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeFleetEventsResponse::DescribeFleetEventsResponse(
        const DescribeFleetEventsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new DescribeFleetEventsResponsePrivate(this), parent)
{
    setRequest(new DescribeFleetEventsRequest(request));
    setReply(reply);
}

const DescribeFleetEventsRequest * DescribeFleetEventsResponse::request() const
{
    Q_D(const DescribeFleetEventsResponse);
    return static_cast<const DescribeFleetEventsRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift DescribeFleetEvents response.
 *
 * @param  response  Response to parse.
 */
void DescribeFleetEventsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeFleetEventsResponsePrivate
 *
 * @brief  Private implementation for DescribeFleetEventsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFleetEventsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeFleetEventsResponse instance.
 */
DescribeFleetEventsResponsePrivate::DescribeFleetEventsResponsePrivate(
    DescribeFleetEventsQueueResponse * const q) : DescribeFleetEventsPrivate(q)
{

}

/**
 * @brief  Parse an GameLift DescribeFleetEventsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeFleetEventsResponsePrivate::DescribeFleetEventsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFleetEventsResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace AWS
