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

#include "deletepresetresponse.h"
#include "deletepresetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MediaConvert {

/**
 * @class  DeletePresetResponse
 *
 * @brief  Handles MediaConvert DeletePreset responses.
 *
 * @see    MediaConvertClient::deletePreset
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeletePresetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new DeletePresetResponsePrivate(this), parent)
{
    setRequest(new DeletePresetRequest(request));
    setReply(reply);
}

const DeletePresetRequest * DeletePresetResponse::request() const
{
    Q_D(const DeletePresetResponse);
    return static_cast<const DeletePresetRequest *>(d->request);
}

/**
 * @brief  Parse a MediaConvert DeletePreset response.
 *
 * @param  response  Response to parse.
 */
void DeletePresetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeletePresetResponsePrivate
 *
 * @brief  Private implementation for DeletePresetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeletePresetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeletePresetResponse instance.
 */
DeletePresetResponsePrivate::DeletePresetResponsePrivate(
    DeletePresetQueueResponse * const q) : DeletePresetPrivate(q)
{

}

/**
 * @brief  Parse an MediaConvert DeletePresetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeletePresetResponsePrivate::DeletePresetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePresetResponse"));
    /// @todo
}
