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

#include "enableenhancedmonitoringresponse.h"
#include "enableenhancedmonitoringresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Kinesis {

/**
 * @class  EnableEnhancedMonitoringResponse
 *
 * @brief  Handles Kinesis EnableEnhancedMonitoring responses.
 *
 * @see    KinesisClient::enableEnhancedMonitoring
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnableEnhancedMonitoringResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new EnableEnhancedMonitoringResponsePrivate(this), parent)
{
    setRequest(new EnableEnhancedMonitoringRequest(request));
    setReply(reply);
}

const EnableEnhancedMonitoringRequest * EnableEnhancedMonitoringResponse::request() const
{
    Q_D(const EnableEnhancedMonitoringResponse);
    return static_cast<const EnableEnhancedMonitoringRequest *>(d->request);
}

/**
 * @brief  Parse a Kinesis EnableEnhancedMonitoring response.
 *
 * @param  response  Response to parse.
 */
void EnableEnhancedMonitoringResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  EnableEnhancedMonitoringResponsePrivate
 *
 * @brief  Private implementation for EnableEnhancedMonitoringResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableEnhancedMonitoringResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EnableEnhancedMonitoringResponse instance.
 */
EnableEnhancedMonitoringResponsePrivate::EnableEnhancedMonitoringResponsePrivate(
    EnableEnhancedMonitoringQueueResponse * const q) : EnableEnhancedMonitoringPrivate(q)
{

}

/**
 * @brief  Parse an Kinesis EnableEnhancedMonitoringResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void EnableEnhancedMonitoringResponsePrivate::EnableEnhancedMonitoringResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableEnhancedMonitoringResponse"));
    /// @todo
}

} // namespace Kinesis
} // namespace AWS
