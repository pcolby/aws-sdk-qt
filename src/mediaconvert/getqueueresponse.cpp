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

#include "getqueueresponse.h"
#include "getqueueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MediaConvert {

/**
 * @class  GetQueueResponse
 *
 * @brief  Handles MediaConvert GetQueue responses.
 *
 * @see    MediaConvertClient::getQueue
 */

/**
 * @brief  Constructs a new GetQueueResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetQueueResponse::GetQueueResponse(
        const GetQueueRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new GetQueueResponsePrivate(this), parent)
{
    setRequest(new GetQueueRequest(request));
    setReply(reply);
}

const GetQueueRequest * GetQueueResponse::request() const
{
    Q_D(const GetQueueResponse);
    return static_cast<const GetQueueRequest *>(d->request);
}

/**
 * @brief  Parse a MediaConvert GetQueue response.
 *
 * @param  response  Response to parse.
 */
void GetQueueResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetQueueResponsePrivate
 *
 * @brief  Private implementation for GetQueueResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetQueueResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetQueueResponse instance.
 */
GetQueueResponsePrivate::GetQueueResponsePrivate(
    GetQueueQueueResponse * const q) : GetQueuePrivate(q)
{

}

/**
 * @brief  Parse an MediaConvert GetQueueResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetQueueResponsePrivate::GetQueueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetQueueResponse"));
    /// @todo
}

} // namespace MediaConvert
} // namespace AWS
