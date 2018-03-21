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

#include "setv2loggingoptionsresponse.h"
#include "setv2loggingoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  SetV2LoggingOptionsResponse
 *
 * @brief  Handles IoT SetV2LoggingOptions responses.
 *
 * @see    IoTClient::setV2LoggingOptions
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetV2LoggingOptionsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new SetV2LoggingOptionsResponsePrivate(this), parent)
{
    setRequest(new SetV2LoggingOptionsRequest(request));
    setReply(reply);
}

const SetV2LoggingOptionsRequest * SetV2LoggingOptionsResponse::request() const
{
    Q_D(const SetV2LoggingOptionsResponse);
    return static_cast<const SetV2LoggingOptionsRequest *>(d->request);
}

/**
 * @brief  Parse a IoT SetV2LoggingOptions response.
 *
 * @param  response  Response to parse.
 */
void SetV2LoggingOptionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetV2LoggingOptionsResponsePrivate
 *
 * @brief  Private implementation for SetV2LoggingOptionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetV2LoggingOptionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetV2LoggingOptionsResponse instance.
 */
SetV2LoggingOptionsResponsePrivate::SetV2LoggingOptionsResponsePrivate(
    SetV2LoggingOptionsQueueResponse * const q) : SetV2LoggingOptionsPrivate(q)
{

}

/**
 * @brief  Parse an IoT SetV2LoggingOptionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetV2LoggingOptionsResponsePrivate::SetV2LoggingOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetV2LoggingOptionsResponse"));
    /// @todo
}
