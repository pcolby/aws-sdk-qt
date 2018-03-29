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

#include "describefleetcapacityresponse.h"
#include "describefleetcapacityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  DescribeFleetCapacityResponse
 *
 * @brief  Handles GameLift DescribeFleetCapacity responses.
 *
 * @see    GameLiftClient::describeFleetCapacity
 */

/**
 * @brief  Constructs a new DescribeFleetCapacityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeFleetCapacityResponse::DescribeFleetCapacityResponse(
        const DescribeFleetCapacityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new DescribeFleetCapacityResponsePrivate(this), parent)
{
    setRequest(new DescribeFleetCapacityRequest(request));
    setReply(reply);
}

const DescribeFleetCapacityRequest * DescribeFleetCapacityResponse::request() const
{
    Q_D(const DescribeFleetCapacityResponse);
    return static_cast<const DescribeFleetCapacityRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift DescribeFleetCapacity response.
 *
 * @param  response  Response to parse.
 */
void DescribeFleetCapacityResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeFleetCapacityResponsePrivate
 *
 * @brief  Private implementation for DescribeFleetCapacityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFleetCapacityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeFleetCapacityResponse instance.
 */
DescribeFleetCapacityResponsePrivate::DescribeFleetCapacityResponsePrivate(
    DescribeFleetCapacityResponse * const q) : GameLiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an GameLift DescribeFleetCapacityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeFleetCapacityResponsePrivate::DescribeFleetCapacityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFleetCapacityResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws
