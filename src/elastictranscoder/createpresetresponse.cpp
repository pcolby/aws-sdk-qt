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

#include "createpresetresponse.h"
#include "createpresetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticTranscoder {

/**
 * @class  CreatePresetResponse
 *
 * @brief  Handles ElasticTranscoder CreatePreset responses.
 *
 * @see    ElasticTranscoderClient::createPreset
 */

/**
 * @brief  Constructs a new CreatePresetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreatePresetResponse::CreatePresetResponse(
        const CreatePresetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticTranscoderResponse(new CreatePresetResponsePrivate(this), parent)
{
    setRequest(new CreatePresetRequest(request));
    setReply(reply);
}

const CreatePresetRequest * CreatePresetResponse::request() const
{
    Q_D(const CreatePresetResponse);
    return static_cast<const CreatePresetRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticTranscoder CreatePreset response.
 *
 * @param  response  Response to parse.
 */
void CreatePresetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreatePresetResponsePrivate
 *
 * @brief  Private implementation for CreatePresetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePresetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreatePresetResponse instance.
 */
CreatePresetResponsePrivate::CreatePresetResponsePrivate(
    CreatePresetQueueResponse * const q) : CreatePresetPrivate(q)
{

}

/**
 * @brief  Parse an ElasticTranscoder CreatePresetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreatePresetResponsePrivate::CreatePresetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePresetResponse"));
    /// @todo
}

} // namespace ElasticTranscoder
} // namespace QtAws
