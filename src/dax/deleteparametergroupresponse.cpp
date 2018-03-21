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

#include "deleteparametergroupresponse.h"
#include "deleteparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DAX {

/**
 * @class  DeleteParameterGroupResponse
 *
 * @brief  Handles DAX DeleteParameterGroup responses.
 *
 * @see    DAXClient::deleteParameterGroup
 */

/**
 * @brief  Constructs a new DeleteParameterGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteParameterGroupResponse::DeleteParameterGroupResponse(
        const DeleteParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DAXResponse(new DeleteParameterGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteParameterGroupRequest(request));
    setReply(reply);
}

const DeleteParameterGroupRequest * DeleteParameterGroupResponse::request() const
{
    Q_D(const DeleteParameterGroupResponse);
    return static_cast<const DeleteParameterGroupRequest *>(d->request);
}

/**
 * @brief  Parse a DAX DeleteParameterGroup response.
 *
 * @param  response  Response to parse.
 */
void DeleteParameterGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteParameterGroupResponsePrivate
 *
 * @brief  Private implementation for DeleteParameterGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteParameterGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteParameterGroupResponse instance.
 */
DeleteParameterGroupResponsePrivate::DeleteParameterGroupResponsePrivate(
    DeleteParameterGroupQueueResponse * const q) : DeleteParameterGroupPrivate(q)
{

}

/**
 * @brief  Parse an DAX DeleteParameterGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteParameterGroupResponsePrivate::DeleteParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteParameterGroupResponse"));
    /// @todo
}

} // namespace DAX
} // namespace AWS
