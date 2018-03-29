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

#include "deleteimagebuilderresponse.h"
#include "deleteimagebuilderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/**
 * @class  DeleteImageBuilderResponse
 *
 * @brief  Handles AppStream DeleteImageBuilder responses.
 *
 * @see    AppStreamClient::deleteImageBuilder
 */

/**
 * @brief  Constructs a new DeleteImageBuilderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteImageBuilderResponse::DeleteImageBuilderResponse(
        const DeleteImageBuilderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new DeleteImageBuilderResponsePrivate(this), parent)
{
    setRequest(new DeleteImageBuilderRequest(request));
    setReply(reply);
}

const DeleteImageBuilderRequest * DeleteImageBuilderResponse::request() const
{
    Q_D(const DeleteImageBuilderResponse);
    return static_cast<const DeleteImageBuilderRequest *>(d->request);
}

/**
 * @brief  Parse a AppStream DeleteImageBuilder response.
 *
 * @param  response  Response to parse.
 */
void DeleteImageBuilderResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteImageBuilderResponsePrivate
 *
 * @brief  Private implementation for DeleteImageBuilderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteImageBuilderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteImageBuilderResponse instance.
 */
DeleteImageBuilderResponsePrivate::DeleteImageBuilderResponsePrivate(
    DeleteImageBuilderQueueResponse * const q) : DeleteImageBuilderPrivate(q)
{

}

/**
 * @brief  Parse an AppStream DeleteImageBuilderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteImageBuilderResponsePrivate::DeleteImageBuilderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteImageBuilderResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace QtAws
