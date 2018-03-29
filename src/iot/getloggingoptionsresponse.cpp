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

#include "getloggingoptionsresponse.h"
#include "getloggingoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  GetLoggingOptionsResponse
 *
 * @brief  Handles IoT GetLoggingOptions responses.
 *
 * @see    IoTClient::getLoggingOptions
 */

/**
 * @brief  Constructs a new GetLoggingOptionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetLoggingOptionsResponse::GetLoggingOptionsResponse(
        const GetLoggingOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new GetLoggingOptionsResponsePrivate(this), parent)
{
    setRequest(new GetLoggingOptionsRequest(request));
    setReply(reply);
}

const GetLoggingOptionsRequest * GetLoggingOptionsResponse::request() const
{
    Q_D(const GetLoggingOptionsResponse);
    return static_cast<const GetLoggingOptionsRequest *>(d->request);
}

/**
 * @brief  Parse a IoT GetLoggingOptions response.
 *
 * @param  response  Response to parse.
 */
void GetLoggingOptionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetLoggingOptionsResponsePrivate
 *
 * @brief  Private implementation for GetLoggingOptionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetLoggingOptionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetLoggingOptionsResponse instance.
 */
GetLoggingOptionsResponsePrivate::GetLoggingOptionsResponsePrivate(
    GetLoggingOptionsQueueResponse * const q) : GetLoggingOptionsPrivate(q)
{

}

/**
 * @brief  Parse an IoT GetLoggingOptionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetLoggingOptionsResponsePrivate::GetLoggingOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLoggingOptionsResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
