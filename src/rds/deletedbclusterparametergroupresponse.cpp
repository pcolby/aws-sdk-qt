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

#include "deletedbclusterparametergroupresponse.h"
#include "deletedbclusterparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  DeleteDBClusterParameterGroupResponse
 *
 * @brief  Handles RDS DeleteDBClusterParameterGroup responses.
 *
 * @see    RDSClient::deleteDBClusterParameterGroup
 */

/**
 * @brief  Constructs a new DeleteDBClusterParameterGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDBClusterParameterGroupResponse::DeleteDBClusterParameterGroupResponse(
        const DeleteDBClusterParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DeleteDBClusterParameterGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteDBClusterParameterGroupRequest(request));
    setReply(reply);
}

const DeleteDBClusterParameterGroupRequest * DeleteDBClusterParameterGroupResponse::request() const
{
    Q_D(const DeleteDBClusterParameterGroupResponse);
    return static_cast<const DeleteDBClusterParameterGroupRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DeleteDBClusterParameterGroup response.
 *
 * @param  response  Response to parse.
 */
void DeleteDBClusterParameterGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDBClusterParameterGroupResponsePrivate
 *
 * @brief  Private implementation for DeleteDBClusterParameterGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDBClusterParameterGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDBClusterParameterGroupResponse instance.
 */
DeleteDBClusterParameterGroupResponsePrivate::DeleteDBClusterParameterGroupResponsePrivate(
    DeleteDBClusterParameterGroupQueueResponse * const q) : DeleteDBClusterParameterGroupPrivate(q)
{

}

/**
 * @brief  Parse an RDS DeleteDBClusterParameterGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDBClusterParameterGroupResponsePrivate::DeleteDBClusterParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDBClusterParameterGroupResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
