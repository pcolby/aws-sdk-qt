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

#include "getv2loggingoptionsresponse.h"
#include "getv2loggingoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  GetV2LoggingOptionsResponse
 *
 * @brief  Handles IoT GetV2LoggingOptions responses.
 *
 * @see    IoTClient::getV2LoggingOptions
 */

/**
 * @brief  Constructs a new GetV2LoggingOptionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetV2LoggingOptionsResponse::GetV2LoggingOptionsResponse(
        const GetV2LoggingOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new GetV2LoggingOptionsResponsePrivate(this), parent)
{
    setRequest(new GetV2LoggingOptionsRequest(request));
    setReply(reply);
}

const GetV2LoggingOptionsRequest * GetV2LoggingOptionsResponse::request() const
{
    Q_D(const GetV2LoggingOptionsResponse);
    return static_cast<const GetV2LoggingOptionsRequest *>(d->request);
}

/**
 * @brief  Parse a IoT GetV2LoggingOptions response.
 *
 * @param  response  Response to parse.
 */
void GetV2LoggingOptionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetV2LoggingOptionsResponsePrivate
 *
 * @brief  Private implementation for GetV2LoggingOptionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetV2LoggingOptionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetV2LoggingOptionsResponse instance.
 */
GetV2LoggingOptionsResponsePrivate::GetV2LoggingOptionsResponsePrivate(
    GetV2LoggingOptionsQueueResponse * const q) : GetV2LoggingOptionsPrivate(q)
{

}

/**
 * @brief  Parse an IoT GetV2LoggingOptionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetV2LoggingOptionsResponsePrivate::GetV2LoggingOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetV2LoggingOptionsResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS
