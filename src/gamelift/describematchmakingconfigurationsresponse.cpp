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

#include "describematchmakingconfigurationsresponse.h"
#include "describematchmakingconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  DescribeMatchmakingConfigurationsResponse
 *
 * @brief  Handles GameLift DescribeMatchmakingConfigurations responses.
 *
 * @see    GameLiftClient::describeMatchmakingConfigurations
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeMatchmakingConfigurationsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new DescribeMatchmakingConfigurationsResponsePrivate(this), parent)
{
    setRequest(new DescribeMatchmakingConfigurationsRequest(request));
    setReply(reply);
}

const DescribeMatchmakingConfigurationsRequest * DescribeMatchmakingConfigurationsResponse::request() const
{
    Q_D(const DescribeMatchmakingConfigurationsResponse);
    return static_cast<const DescribeMatchmakingConfigurationsRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift DescribeMatchmakingConfigurations response.
 *
 * @param  response  Response to parse.
 */
void DescribeMatchmakingConfigurationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeMatchmakingConfigurationsResponsePrivate
 *
 * @brief  Private implementation for DescribeMatchmakingConfigurationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMatchmakingConfigurationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeMatchmakingConfigurationsResponse instance.
 */
DescribeMatchmakingConfigurationsResponsePrivate::DescribeMatchmakingConfigurationsResponsePrivate(
    DescribeMatchmakingConfigurationsQueueResponse * const q) : DescribeMatchmakingConfigurationsPrivate(q)
{

}

/**
 * @brief  Parse an GameLift DescribeMatchmakingConfigurationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeMatchmakingConfigurationsResponsePrivate::DescribeMatchmakingConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMatchmakingConfigurationsResponse"));
    /// @todo
}
