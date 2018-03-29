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

#include "readpresetresponse.h"
#include "readpresetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticTranscoder {

/**
 * @class  ReadPresetResponse
 *
 * @brief  Handles ElasticTranscoder ReadPreset responses.
 *
 * @see    ElasticTranscoderClient::readPreset
 */

/**
 * @brief  Constructs a new ReadPresetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ReadPresetResponse::ReadPresetResponse(
        const ReadPresetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticTranscoderResponse(new ReadPresetResponsePrivate(this), parent)
{
    setRequest(new ReadPresetRequest(request));
    setReply(reply);
}

const ReadPresetRequest * ReadPresetResponse::request() const
{
    Q_D(const ReadPresetResponse);
    return static_cast<const ReadPresetRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticTranscoder ReadPreset response.
 *
 * @param  response  Response to parse.
 */
void ReadPresetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ReadPresetResponsePrivate
 *
 * @brief  Private implementation for ReadPresetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReadPresetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ReadPresetResponse instance.
 */
ReadPresetResponsePrivate::ReadPresetResponsePrivate(
    ReadPresetQueueResponse * const q) : ReadPresetPrivate(q)
{

}

/**
 * @brief  Parse an ElasticTranscoder ReadPresetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ReadPresetResponsePrivate::ReadPresetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReadPresetResponse"));
    /// @todo
}

} // namespace ElasticTranscoder
} // namespace AWS
