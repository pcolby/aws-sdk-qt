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

#include "gettelemetrymetadataresponse.h"
#include "gettelemetrymetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Inspector {

/**
 * @class  GetTelemetryMetadataResponse
 *
 * @brief  Handles Inspector GetTelemetryMetadata responses.
 *
 * @see    InspectorClient::getTelemetryMetadata
 */

/**
 * @brief  Constructs a new GetTelemetryMetadataResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetTelemetryMetadataResponse::GetTelemetryMetadataResponse(
        const GetTelemetryMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new GetTelemetryMetadataResponsePrivate(this), parent)
{
    setRequest(new GetTelemetryMetadataRequest(request));
    setReply(reply);
}

const GetTelemetryMetadataRequest * GetTelemetryMetadataResponse::request() const
{
    Q_D(const GetTelemetryMetadataResponse);
    return static_cast<const GetTelemetryMetadataRequest *>(d->request);
}

/**
 * @brief  Parse a Inspector GetTelemetryMetadata response.
 *
 * @param  response  Response to parse.
 */
void GetTelemetryMetadataResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetTelemetryMetadataResponsePrivate
 *
 * @brief  Private implementation for GetTelemetryMetadataResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTelemetryMetadataResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetTelemetryMetadataResponse instance.
 */
GetTelemetryMetadataResponsePrivate::GetTelemetryMetadataResponsePrivate(
    GetTelemetryMetadataQueueResponse * const q) : GetTelemetryMetadataPrivate(q)
{

}

/**
 * @brief  Parse an Inspector GetTelemetryMetadataResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetTelemetryMetadataResponsePrivate::GetTelemetryMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTelemetryMetadataResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace AWS
