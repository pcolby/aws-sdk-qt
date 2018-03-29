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

#include "deletedbclusterresponse.h"
#include "deletedbclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  DeleteDBClusterResponse
 *
 * @brief  Handles RDS DeleteDBCluster responses.
 *
 * @see    RDSClient::deleteDBCluster
 */

/**
 * @brief  Constructs a new DeleteDBClusterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDBClusterResponse::DeleteDBClusterResponse(
        const DeleteDBClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DeleteDBClusterResponsePrivate(this), parent)
{
    setRequest(new DeleteDBClusterRequest(request));
    setReply(reply);
}

const DeleteDBClusterRequest * DeleteDBClusterResponse::request() const
{
    Q_D(const DeleteDBClusterResponse);
    return static_cast<const DeleteDBClusterRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DeleteDBCluster response.
 *
 * @param  response  Response to parse.
 */
void DeleteDBClusterResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteDBClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDBClusterResponsePrivate
 *
 * @brief  Private implementation for DeleteDBClusterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDBClusterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDBClusterResponse instance.
 */
DeleteDBClusterResponsePrivate::DeleteDBClusterResponsePrivate(
    DeleteDBClusterResponse * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS DeleteDBClusterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDBClusterResponsePrivate::parseDeleteDBClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDBClusterResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
