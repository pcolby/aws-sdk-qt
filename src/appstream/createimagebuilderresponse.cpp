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

#include "createimagebuilderresponse.h"
#include "createimagebuilderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AppStream {

/**
 * @class  CreateImageBuilderResponse
 *
 * @brief  Handles AppStream CreateImageBuilder responses.
 *
 * @see    AppStreamClient::createImageBuilder
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateImageBuilderResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new CreateImageBuilderResponsePrivate(this), parent)
{
    setRequest(new CreateImageBuilderRequest(request));
    setReply(reply);
}

const CreateImageBuilderRequest * CreateImageBuilderResponse::request() const
{
    Q_D(const CreateImageBuilderResponse);
    return static_cast<const CreateImageBuilderRequest *>(d->request);
}

/**
 * @brief  Parse a AppStream CreateImageBuilder response.
 *
 * @param  response  Response to parse.
 */
void CreateImageBuilderResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateImageBuilderResponsePrivate
 *
 * @brief  Private implementation for CreateImageBuilderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateImageBuilderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateImageBuilderResponse instance.
 */
CreateImageBuilderResponsePrivate::CreateImageBuilderResponsePrivate(
    CreateImageBuilderQueueResponse * const q) : CreateImageBuilderPrivate(q)
{

}

/**
 * @brief  Parse an AppStream CreateImageBuilderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateImageBuilderResponsePrivate::CreateImageBuilderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateImageBuilderResponse"));
    /// @todo
}
