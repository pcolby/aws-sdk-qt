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

#include "updatequeueresponse.h"
#include "updatequeueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/**
 * @class  UpdateQueueResponse
 *
 * @brief  Handles MediaConvert UpdateQueue responses.
 *
 * @see    MediaConvertClient::updateQueue
 */

/**
 * @brief  Constructs a new UpdateQueueResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateQueueResponse::UpdateQueueResponse(
        const UpdateQueueRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new UpdateQueueResponsePrivate(this), parent)
{
    setRequest(new UpdateQueueRequest(request));
    setReply(reply);
}

const UpdateQueueRequest * UpdateQueueResponse::request() const
{
    Q_D(const UpdateQueueResponse);
    return static_cast<const UpdateQueueRequest *>(d->request);
}

/**
 * @brief  Parse a MediaConvert UpdateQueue response.
 *
 * @param  response  Response to parse.
 */
void UpdateQueueResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateQueueResponsePrivate
 *
 * @brief  Private implementation for UpdateQueueResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateQueueResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateQueueResponse instance.
 */
UpdateQueueResponsePrivate::UpdateQueueResponsePrivate(
    UpdateQueueQueueResponse * const q) : UpdateQueuePrivate(q)
{

}

/**
 * @brief  Parse an MediaConvert UpdateQueueResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateQueueResponsePrivate::UpdateQueueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateQueueResponse"));
    /// @todo
}

} // namespace MediaConvert
} // namespace QtAws
