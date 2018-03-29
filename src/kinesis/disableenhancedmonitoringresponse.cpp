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

#include "disableenhancedmonitoringresponse.h"
#include "disableenhancedmonitoringresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/**
 * @class  DisableEnhancedMonitoringResponse
 *
 * @brief  Handles Kinesis DisableEnhancedMonitoring responses.
 *
 * @see    KinesisClient::disableEnhancedMonitoring
 */

/**
 * @brief  Constructs a new DisableEnhancedMonitoringResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisableEnhancedMonitoringResponse::DisableEnhancedMonitoringResponse(
        const DisableEnhancedMonitoringRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DisableEnhancedMonitoringResponse(new DisableEnhancedMonitoringResponsePrivate(this), parent)
{
    setRequest(new DisableEnhancedMonitoringRequest(request));
    setReply(reply);
}

const DisableEnhancedMonitoringRequest * DisableEnhancedMonitoringResponse::request() const
{
    Q_D(const DisableEnhancedMonitoringResponse);
    return static_cast<const DisableEnhancedMonitoringRequest *>(d->request);
}

/**
 * @brief  Parse a Kinesis DisableEnhancedMonitoring response.
 *
 * @param  response  Response to parse.
 */
void DisableEnhancedMonitoringResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisableEnhancedMonitoringResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisableEnhancedMonitoringResponsePrivate
 *
 * @brief  Private implementation for DisableEnhancedMonitoringResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableEnhancedMonitoringResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisableEnhancedMonitoringResponse instance.
 */
DisableEnhancedMonitoringResponsePrivate::DisableEnhancedMonitoringResponsePrivate(
    DisableEnhancedMonitoringResponse * const q) : KinesisResponsePrivate(q)
{

}

/**
 * @brief  Parse an Kinesis DisableEnhancedMonitoringResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisableEnhancedMonitoringResponsePrivate::parseDisableEnhancedMonitoringResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableEnhancedMonitoringResponse"));
    /// @todo
}

} // namespace Kinesis
} // namespace QtAws
