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

#include "updatestreamresponse.h"
#include "updatestreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideo {

/**
 * @class  UpdateStreamResponse
 *
 * @brief  Handles KinesisVideo UpdateStream responses.
 *
 * @see    KinesisVideoClient::updateStream
 */

/**
 * @brief  Constructs a new UpdateStreamResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateStreamResponse::UpdateStreamResponse(
        const UpdateStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateStreamResponse(new UpdateStreamResponsePrivate(this), parent)
{
    setRequest(new UpdateStreamRequest(request));
    setReply(reply);
}

const UpdateStreamRequest * UpdateStreamResponse::request() const
{
    Q_D(const UpdateStreamResponse);
    return static_cast<const UpdateStreamRequest *>(d->request);
}

/**
 * @brief  Parse a KinesisVideo UpdateStream response.
 *
 * @param  response  Response to parse.
 */
void UpdateStreamResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateStreamResponsePrivate
 *
 * @brief  Private implementation for UpdateStreamResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateStreamResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateStreamResponse instance.
 */
UpdateStreamResponsePrivate::UpdateStreamResponsePrivate(
    UpdateStreamResponse * const q) : KinesisVideoResponsePrivate(q)
{

}

/**
 * @brief  Parse an KinesisVideo UpdateStreamResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateStreamResponsePrivate::parseUpdateStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateStreamResponse"));
    /// @todo
}

} // namespace KinesisVideo
} // namespace QtAws
