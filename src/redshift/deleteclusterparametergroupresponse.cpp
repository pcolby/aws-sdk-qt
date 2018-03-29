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

#include "deleteclusterparametergroupresponse.h"
#include "deleteclusterparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Redshift {

/**
 * @class  DeleteClusterParameterGroupResponse
 *
 * @brief  Handles Redshift DeleteClusterParameterGroup responses.
 *
 * @see    RedshiftClient::deleteClusterParameterGroup
 */

/**
 * @brief  Constructs a new DeleteClusterParameterGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteClusterParameterGroupResponse::DeleteClusterParameterGroupResponse(
        const DeleteClusterParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DeleteClusterParameterGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteClusterParameterGroupRequest(request));
    setReply(reply);
}

const DeleteClusterParameterGroupRequest * DeleteClusterParameterGroupResponse::request() const
{
    Q_D(const DeleteClusterParameterGroupResponse);
    return static_cast<const DeleteClusterParameterGroupRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift DeleteClusterParameterGroup response.
 *
 * @param  response  Response to parse.
 */
void DeleteClusterParameterGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteClusterParameterGroupResponsePrivate
 *
 * @brief  Private implementation for DeleteClusterParameterGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteClusterParameterGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteClusterParameterGroupResponse instance.
 */
DeleteClusterParameterGroupResponsePrivate::DeleteClusterParameterGroupResponsePrivate(
    DeleteClusterParameterGroupQueueResponse * const q) : DeleteClusterParameterGroupPrivate(q)
{

}

/**
 * @brief  Parse an Redshift DeleteClusterParameterGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteClusterParameterGroupResponsePrivate::DeleteClusterParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteClusterParameterGroupResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace AWS
