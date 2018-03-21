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

#include "getmediaresponse.h"
#include "getmediaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace KinesisVideoMedia {

/**
 * @class  GetMediaResponse
 *
 * @brief  Handles KinesisVideoMedia GetMedia responses.
 *
 * @see    KinesisVideoMediaClient::getMedia
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetMediaResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoMediaResponse(new GetMediaResponsePrivate(this), parent)
{
    setRequest(new GetMediaRequest(request));
    setReply(reply);
}

const GetMediaRequest * GetMediaResponse::request() const
{
    Q_D(const GetMediaResponse);
    return static_cast<const GetMediaRequest *>(d->request);
}

/**
 * @brief  Parse a KinesisVideoMedia GetMedia response.
 *
 * @param  response  Response to parse.
 */
void GetMediaResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetMediaResponsePrivate
 *
 * @brief  Private implementation for GetMediaResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetMediaResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetMediaResponse instance.
 */
GetMediaResponsePrivate::GetMediaResponsePrivate(
    GetMediaQueueResponse * const q) : GetMediaPrivate(q)
{

}

/**
 * @brief  Parse an KinesisVideoMedia GetMediaResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetMediaResponsePrivate::GetMediaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMediaResponse"));
    /// @todo
}

} // namespace KinesisVideoMedia
} // namespace AWS
