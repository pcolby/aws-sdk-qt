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

#include "deletedbparametergroupresponse.h"
#include "deletedbparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  DeleteDBParameterGroupResponse
 *
 * @brief  Handles RDS DeleteDBParameterGroup responses.
 *
 * @see    RDSClient::deleteDBParameterGroup
 */

/**
 * @brief  Constructs a new DeleteDBParameterGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDBParameterGroupResponse::DeleteDBParameterGroupResponse(
        const DeleteDBParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DeleteDBParameterGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteDBParameterGroupRequest(request));
    setReply(reply);
}

const DeleteDBParameterGroupRequest * DeleteDBParameterGroupResponse::request() const
{
    Q_D(const DeleteDBParameterGroupResponse);
    return static_cast<const DeleteDBParameterGroupRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DeleteDBParameterGroup response.
 *
 * @param  response  Response to parse.
 */
void DeleteDBParameterGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDBParameterGroupResponsePrivate
 *
 * @brief  Private implementation for DeleteDBParameterGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDBParameterGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDBParameterGroupResponse instance.
 */
DeleteDBParameterGroupResponsePrivate::DeleteDBParameterGroupResponsePrivate(
    DeleteDBParameterGroupQueueResponse * const q) : DeleteDBParameterGroupPrivate(q)
{

}

/**
 * @brief  Parse an RDS DeleteDBParameterGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDBParameterGroupResponsePrivate::DeleteDBParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDBParameterGroupResponse"));
    /// @todo
}

} // namespace RDS
} // namespace AWS
