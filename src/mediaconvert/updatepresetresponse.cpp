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

#include "updatepresetresponse.h"
#include "updatepresetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/**
 * @class  UpdatePresetResponse
 *
 * @brief  Handles MediaConvert UpdatePreset responses.
 *
 * @see    MediaConvertClient::updatePreset
 */

/**
 * @brief  Constructs a new UpdatePresetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdatePresetResponse::UpdatePresetResponse(
        const UpdatePresetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdatePresetResponse(new UpdatePresetResponsePrivate(this), parent)
{
    setRequest(new UpdatePresetRequest(request));
    setReply(reply);
}

const UpdatePresetRequest * UpdatePresetResponse::request() const
{
    Q_D(const UpdatePresetResponse);
    return static_cast<const UpdatePresetRequest *>(d->request);
}

/**
 * @brief  Parse a MediaConvert UpdatePreset response.
 *
 * @param  response  Response to parse.
 */
void UpdatePresetResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdatePresetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdatePresetResponsePrivate
 *
 * @brief  Private implementation for UpdatePresetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePresetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdatePresetResponse instance.
 */
UpdatePresetResponsePrivate::UpdatePresetResponsePrivate(
    UpdatePresetResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/**
 * @brief  Parse an MediaConvert UpdatePresetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdatePresetResponsePrivate::parseUpdatePresetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePresetResponse"));
    /// @todo
}

} // namespace MediaConvert
} // namespace QtAws
