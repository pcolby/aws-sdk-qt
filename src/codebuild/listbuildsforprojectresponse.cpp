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

#include "listbuildsforprojectresponse.h"
#include "listbuildsforprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeBuild {

/**
 * @class  ListBuildsForProjectResponse
 *
 * @brief  Handles CodeBuild ListBuildsForProject responses.
 *
 * @see    CodeBuildClient::listBuildsForProject
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListBuildsForProjectResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new ListBuildsForProjectResponsePrivate(this), parent)
{
    setRequest(new ListBuildsForProjectRequest(request));
    setReply(reply);
}

const ListBuildsForProjectRequest * ListBuildsForProjectResponse::request() const
{
    Q_D(const ListBuildsForProjectResponse);
    return static_cast<const ListBuildsForProjectRequest *>(d->request);
}

/**
 * @brief  Parse a CodeBuild ListBuildsForProject response.
 *
 * @param  response  Response to parse.
 */
void ListBuildsForProjectResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListBuildsForProjectResponsePrivate
 *
 * @brief  Private implementation for ListBuildsForProjectResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListBuildsForProjectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListBuildsForProjectResponse instance.
 */
ListBuildsForProjectResponsePrivate::ListBuildsForProjectResponsePrivate(
    ListBuildsForProjectQueueResponse * const q) : ListBuildsForProjectPrivate(q)
{

}

/**
 * @brief  Parse an CodeBuild ListBuildsForProjectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListBuildsForProjectResponsePrivate::ListBuildsForProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBuildsForProjectResponse"));
    /// @todo
}
