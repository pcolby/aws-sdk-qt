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

#include "deleteprojectresponse.h"
#include "deleteprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mobile {

/**
 * @class  DeleteProjectResponse
 *
 * @brief  Handles Mobile DeleteProject responses.
 *
 * @see    MobileClient::deleteProject
 */

/**
 * @brief  Constructs a new DeleteProjectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteProjectResponse::DeleteProjectResponse(
        const DeleteProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MobileResponse(new DeleteProjectResponsePrivate(this), parent)
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
 * @brief  Parse a Mobile DeleteProject response.
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
    DeleteProjectResponse * const q) : MobileResponsePrivate(q)
{

}

/**
 * @brief  Parse an Mobile DeleteProjectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteProjectResponsePrivate::DeleteProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteProjectResponse"));
    /// @todo
}

} // namespace Mobile
} // namespace QtAws
