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

#include "createcontainerresponse.h"
#include "createcontainerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/**
 * @class  CreateContainerResponse
 *
 * @brief  Handles MediaStore CreateContainer responses.
 *
 * @see    MediaStoreClient::createContainer
 */

/**
 * @brief  Constructs a new CreateContainerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateContainerResponse::CreateContainerResponse(
        const CreateContainerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new CreateContainerResponsePrivate(this), parent)
{
    setRequest(new CreateContainerRequest(request));
    setReply(reply);
}

const CreateContainerRequest * CreateContainerResponse::request() const
{
    Q_D(const CreateContainerResponse);
    return static_cast<const CreateContainerRequest *>(d->request);
}

/**
 * @brief  Parse a MediaStore CreateContainer response.
 *
 * @param  response  Response to parse.
 */
void CreateContainerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateContainerResponsePrivate
 *
 * @brief  Private implementation for CreateContainerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateContainerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateContainerResponse instance.
 */
CreateContainerResponsePrivate::CreateContainerResponsePrivate(
    CreateContainerQueueResponse * const q) : CreateContainerPrivate(q)
{

}

/**
 * @brief  Parse an MediaStore CreateContainerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateContainerResponsePrivate::CreateContainerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateContainerResponse"));
    /// @todo
}

} // namespace MediaStore
} // namespace QtAws
