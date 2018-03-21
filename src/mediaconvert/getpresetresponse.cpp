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

#include "getpresetresponse.h"
#include "getpresetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MediaConvert {

/**
 * @class  GetPresetResponse
 *
 * @brief  Handles MediaConvert GetPreset responses.
 *
 * @see    MediaConvertClient::getPreset
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetPresetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new GetPresetResponsePrivate(this), parent)
{
    setRequest(new GetPresetRequest(request));
    setReply(reply);
}

const GetPresetRequest * GetPresetResponse::request() const
{
    Q_D(const GetPresetResponse);
    return static_cast<const GetPresetRequest *>(d->request);
}

/**
 * @brief  Parse a MediaConvert GetPreset response.
 *
 * @param  response  Response to parse.
 */
void GetPresetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetPresetResponsePrivate
 *
 * @brief  Private implementation for GetPresetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPresetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetPresetResponse instance.
 */
GetPresetResponsePrivate::GetPresetResponsePrivate(
    GetPresetQueueResponse * const q) : GetPresetPrivate(q)
{

}

/**
 * @brief  Parse an MediaConvert GetPresetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetPresetResponsePrivate::GetPresetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPresetResponse"));
    /// @todo
}

} // namespace MediaConvert
} // namespace AWS
