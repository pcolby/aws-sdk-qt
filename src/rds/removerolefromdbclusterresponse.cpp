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

#include "removerolefromdbclusterresponse.h"
#include "removerolefromdbclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  RemoveRoleFromDBClusterResponse
 *
 * @brief  Handles RDS RemoveRoleFromDBCluster responses.
 *
 * @see    RDSClient::removeRoleFromDBCluster
 */

/**
 * @brief  Constructs a new RemoveRoleFromDBClusterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemoveRoleFromDBClusterResponse::RemoveRoleFromDBClusterResponse(
        const RemoveRoleFromDBClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new RemoveRoleFromDBClusterResponsePrivate(this), parent)
{
    setRequest(new RemoveRoleFromDBClusterRequest(request));
    setReply(reply);
}

const RemoveRoleFromDBClusterRequest * RemoveRoleFromDBClusterResponse::request() const
{
    Q_D(const RemoveRoleFromDBClusterResponse);
    return static_cast<const RemoveRoleFromDBClusterRequest *>(d->request);
}

/**
 * @brief  Parse a RDS RemoveRoleFromDBCluster response.
 *
 * @param  response  Response to parse.
 */
void RemoveRoleFromDBClusterResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RemoveRoleFromDBClusterResponsePrivate
 *
 * @brief  Private implementation for RemoveRoleFromDBClusterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveRoleFromDBClusterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RemoveRoleFromDBClusterResponse instance.
 */
RemoveRoleFromDBClusterResponsePrivate::RemoveRoleFromDBClusterResponsePrivate(
    RemoveRoleFromDBClusterQueueResponse * const q) : RemoveRoleFromDBClusterPrivate(q)
{

}

/**
 * @brief  Parse an RDS RemoveRoleFromDBClusterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RemoveRoleFromDBClusterResponsePrivate::RemoveRoleFromDBClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveRoleFromDBClusterResponse"));
    /// @todo
}

} // namespace RDS
} // namespace AWS
