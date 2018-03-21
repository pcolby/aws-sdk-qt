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

#include "deleteimageresponse.h"
#include "deleteimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AppStream {

/**
 * @class  DeleteImageResponse
 *
 * @brief  Handles AppStream DeleteImage responses.
 *
 * @see    AppStreamClient::deleteImage
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteImageResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new DeleteImageResponsePrivate(this), parent)
{
    setRequest(new DeleteImageRequest(request));
    setReply(reply);
}

const DeleteImageRequest * DeleteImageResponse::request() const
{
    Q_D(const DeleteImageResponse);
    return static_cast<const DeleteImageRequest *>(d->request);
}

/**
 * @brief  Parse a AppStream DeleteImage response.
 *
 * @param  response  Response to parse.
 */
void DeleteImageResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteImageResponsePrivate
 *
 * @brief  Private implementation for DeleteImageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteImageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteImageResponse instance.
 */
DeleteImageResponsePrivate::DeleteImageResponsePrivate(
    DeleteImageQueueResponse * const q) : DeleteImagePrivate(q)
{

}

/**
 * @brief  Parse an AppStream DeleteImageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteImageResponsePrivate::DeleteImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteImageResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace AWS
