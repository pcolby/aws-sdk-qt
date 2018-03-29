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

#include "promotereadreplicadbclusterresponse.h"
#include "promotereadreplicadbclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  PromoteReadReplicaDBClusterResponse
 *
 * @brief  Handles RDS PromoteReadReplicaDBCluster responses.
 *
 * @see    RDSClient::promoteReadReplicaDBCluster
 */

/**
 * @brief  Constructs a new PromoteReadReplicaDBClusterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PromoteReadReplicaDBClusterResponse::PromoteReadReplicaDBClusterResponse(
        const PromoteReadReplicaDBClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PromoteReadReplicaDBClusterResponse(new PromoteReadReplicaDBClusterResponsePrivate(this), parent)
{
    setRequest(new PromoteReadReplicaDBClusterRequest(request));
    setReply(reply);
}

const PromoteReadReplicaDBClusterRequest * PromoteReadReplicaDBClusterResponse::request() const
{
    Q_D(const PromoteReadReplicaDBClusterResponse);
    return static_cast<const PromoteReadReplicaDBClusterRequest *>(d->request);
}

/**
 * @brief  Parse a RDS PromoteReadReplicaDBCluster response.
 *
 * @param  response  Response to parse.
 */
void PromoteReadReplicaDBClusterResponse::parseSuccess(QIODevice &response)
{
    Q_D(PromoteReadReplicaDBClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PromoteReadReplicaDBClusterResponsePrivate
 *
 * @brief  Private implementation for PromoteReadReplicaDBClusterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PromoteReadReplicaDBClusterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PromoteReadReplicaDBClusterResponse instance.
 */
PromoteReadReplicaDBClusterResponsePrivate::PromoteReadReplicaDBClusterResponsePrivate(
    PromoteReadReplicaDBClusterResponse * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS PromoteReadReplicaDBClusterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PromoteReadReplicaDBClusterResponsePrivate::parsePromoteReadReplicaDBClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PromoteReadReplicaDBClusterResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
