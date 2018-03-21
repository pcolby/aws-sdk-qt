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

#include "modifydbclusterresponse.h"
#include "modifydbclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  ModifyDBClusterResponse
 *
 * @brief  Handles RDS ModifyDBCluster responses.
 *
 * @see    RDSClient::modifyDBCluster
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyDBClusterResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new ModifyDBClusterResponsePrivate(this), parent)
{
    setRequest(new ModifyDBClusterRequest(request));
    setReply(reply);
}

const ModifyDBClusterRequest * ModifyDBClusterResponse::request() const
{
    Q_D(const ModifyDBClusterResponse);
    return static_cast<const ModifyDBClusterRequest *>(d->request);
}

/**
 * @brief  Parse a RDS ModifyDBCluster response.
 *
 * @param  response  Response to parse.
 */
void ModifyDBClusterResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyDBClusterResponsePrivate
 *
 * @brief  Private implementation for ModifyDBClusterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyDBClusterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyDBClusterResponse instance.
 */
ModifyDBClusterResponsePrivate::ModifyDBClusterResponsePrivate(
    ModifyDBClusterQueueResponse * const q) : ModifyDBClusterPrivate(q)
{

}

/**
 * @brief  Parse an RDS ModifyDBClusterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyDBClusterResponsePrivate::ModifyDBClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyDBClusterResponse"));
    /// @todo
}
