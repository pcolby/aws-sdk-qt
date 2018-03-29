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

#include "deletecontainerresponse.h"
#include "deletecontainerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/**
 * @class  DeleteContainerResponse
 *
 * @brief  Handles MediaStore DeleteContainer responses.
 *
 * @see    MediaStoreClient::deleteContainer
 */

/**
 * @brief  Constructs a new DeleteContainerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteContainerResponse::DeleteContainerResponse(
        const DeleteContainerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new DeleteContainerResponsePrivate(this), parent)
{
    setRequest(new DeleteContainerRequest(request));
    setReply(reply);
}

const DeleteContainerRequest * DeleteContainerResponse::request() const
{
    Q_D(const DeleteContainerResponse);
    return static_cast<const DeleteContainerRequest *>(d->request);
}

/**
 * @brief  Parse a MediaStore DeleteContainer response.
 *
 * @param  response  Response to parse.
 */
void DeleteContainerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteContainerResponsePrivate
 *
 * @brief  Private implementation for DeleteContainerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteContainerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteContainerResponse instance.
 */
DeleteContainerResponsePrivate::DeleteContainerResponsePrivate(
    DeleteContainerResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/**
 * @brief  Parse an MediaStore DeleteContainerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteContainerResponsePrivate::DeleteContainerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteContainerResponse"));
    /// @todo
}

} // namespace MediaStore
} // namespace QtAws
