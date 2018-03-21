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

#include "deletegroupresponse.h"
#include "deletegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  DeleteGroupResponse
 *
 * @brief  Handles Greengrass DeleteGroup responses.
 *
 * @see    GreengrassClient::deleteGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new DeleteGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteGroupRequest(request));
    setReply(reply);
}

const DeleteGroupRequest * DeleteGroupResponse::request() const
{
    Q_D(const DeleteGroupResponse);
    return static_cast<const DeleteGroupRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass DeleteGroup response.
 *
 * @param  response  Response to parse.
 */
void DeleteGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteGroupResponsePrivate
 *
 * @brief  Private implementation for DeleteGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteGroupResponse instance.
 */
DeleteGroupResponsePrivate::DeleteGroupResponsePrivate(
    DeleteGroupQueueResponse * const q) : DeleteGroupPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass DeleteGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteGroupResponsePrivate::DeleteGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGroupResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace AWS
