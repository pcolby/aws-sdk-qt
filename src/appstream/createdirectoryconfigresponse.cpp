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

#include "createdirectoryconfigresponse.h"
#include "createdirectoryconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AppStream {

/**
 * @class  CreateDirectoryConfigResponse
 *
 * @brief  Handles AppStream CreateDirectoryConfig responses.
 *
 * @see    AppStreamClient::createDirectoryConfig
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDirectoryConfigResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new CreateDirectoryConfigResponsePrivate(this), parent)
{
    setRequest(new CreateDirectoryConfigRequest(request));
    setReply(reply);
}

const CreateDirectoryConfigRequest * CreateDirectoryConfigResponse::request() const
{
    Q_D(const CreateDirectoryConfigResponse);
    return static_cast<const CreateDirectoryConfigRequest *>(d->request);
}

/**
 * @brief  Parse a AppStream CreateDirectoryConfig response.
 *
 * @param  response  Response to parse.
 */
void CreateDirectoryConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDirectoryConfigResponsePrivate
 *
 * @brief  Private implementation for CreateDirectoryConfigResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDirectoryConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDirectoryConfigResponse instance.
 */
CreateDirectoryConfigResponsePrivate::CreateDirectoryConfigResponsePrivate(
    CreateDirectoryConfigQueueResponse * const q) : CreateDirectoryConfigPrivate(q)
{

}

/**
 * @brief  Parse an AppStream CreateDirectoryConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDirectoryConfigResponsePrivate::CreateDirectoryConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDirectoryConfigResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace AWS
