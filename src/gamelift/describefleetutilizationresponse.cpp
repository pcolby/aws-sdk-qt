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

#include "describefleetutilizationresponse.h"
#include "describefleetutilizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  DescribeFleetUtilizationResponse
 *
 * @brief  Handles GameLift DescribeFleetUtilization responses.
 *
 * @see    GameLiftClient::describeFleetUtilization
 */

/**
 * @brief  Constructs a new DescribeFleetUtilizationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeFleetUtilizationResponse::DescribeFleetUtilizationResponse(
        const DescribeFleetUtilizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeFleetUtilizationResponse(new DescribeFleetUtilizationResponsePrivate(this), parent)
{
    setRequest(new DescribeFleetUtilizationRequest(request));
    setReply(reply);
}

const DescribeFleetUtilizationRequest * DescribeFleetUtilizationResponse::request() const
{
    Q_D(const DescribeFleetUtilizationResponse);
    return static_cast<const DescribeFleetUtilizationRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift DescribeFleetUtilization response.
 *
 * @param  response  Response to parse.
 */
void DescribeFleetUtilizationResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeFleetUtilizationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeFleetUtilizationResponsePrivate
 *
 * @brief  Private implementation for DescribeFleetUtilizationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFleetUtilizationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeFleetUtilizationResponse instance.
 */
DescribeFleetUtilizationResponsePrivate::DescribeFleetUtilizationResponsePrivate(
    DescribeFleetUtilizationResponse * const q) : GameLiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an GameLift DescribeFleetUtilizationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeFleetUtilizationResponsePrivate::parseDescribeFleetUtilizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFleetUtilizationResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws
