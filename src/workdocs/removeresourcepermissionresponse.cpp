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

#include "removeresourcepermissionresponse.h"
#include "removeresourcepermissionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkDocs {

/**
 * @class  RemoveResourcePermissionResponse
 *
 * @brief  Handles WorkDocs RemoveResourcePermission responses.
 *
 * @see    WorkDocsClient::removeResourcePermission
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemoveResourcePermissionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new RemoveResourcePermissionResponsePrivate(this), parent)
{
    setRequest(new RemoveResourcePermissionRequest(request));
    setReply(reply);
}

const RemoveResourcePermissionRequest * RemoveResourcePermissionResponse::request() const
{
    Q_D(const RemoveResourcePermissionResponse);
    return static_cast<const RemoveResourcePermissionRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs RemoveResourcePermission response.
 *
 * @param  response  Response to parse.
 */
void RemoveResourcePermissionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RemoveResourcePermissionResponsePrivate
 *
 * @brief  Private implementation for RemoveResourcePermissionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveResourcePermissionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RemoveResourcePermissionResponse instance.
 */
RemoveResourcePermissionResponsePrivate::RemoveResourcePermissionResponsePrivate(
    RemoveResourcePermissionQueueResponse * const q) : RemoveResourcePermissionPrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs RemoveResourcePermissionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RemoveResourcePermissionResponsePrivate::RemoveResourcePermissionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveResourcePermissionResponse"));
    /// @todo
}
