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

#include "deleteprojectresponse.h"
#include "deleteprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeBuild {

/**
 * @class  DeleteProjectResponse
 *
 * @brief  Handles CodeBuild DeleteProject responses.
 *
 * @see    CodeBuildClient::deleteProject
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteProjectResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new DeleteProjectResponsePrivate(this), parent)
{
    setRequest(new DeleteProjectRequest(request));
    setReply(reply);
}

const DeleteProjectRequest * DeleteProjectResponse::request() const
{
    Q_D(const DeleteProjectResponse);
    return static_cast<const DeleteProjectRequest *>(d->request);
}

/**
 * @brief  Parse a CodeBuild DeleteProject response.
 *
 * @param  response  Response to parse.
 */
void DeleteProjectResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteProjectResponsePrivate
 *
 * @brief  Private implementation for DeleteProjectResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteProjectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteProjectResponse instance.
 */
DeleteProjectResponsePrivate::DeleteProjectResponsePrivate(
    DeleteProjectQueueResponse * const q) : DeleteProjectPrivate(q)
{

}

/**
 * @brief  Parse an CodeBuild DeleteProjectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteProjectResponsePrivate::DeleteProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteProjectResponse"));
    /// @todo
}
