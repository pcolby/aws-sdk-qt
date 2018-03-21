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

#include "modifyclusterresponse.h"
#include "modifyclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Redshift {

/**
 * @class  ModifyClusterResponse
 *
 * @brief  Handles Redshift ModifyCluster responses.
 *
 * @see    RedshiftClient::modifyCluster
 */

/**
 * @brief  Constructs a new ModifyClusterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyClusterResponse::ModifyClusterResponse(
        const ModifyClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new ModifyClusterResponsePrivate(this), parent)
{
    setRequest(new ModifyClusterRequest(request));
    setReply(reply);
}

const ModifyClusterRequest * ModifyClusterResponse::request() const
{
    Q_D(const ModifyClusterResponse);
    return static_cast<const ModifyClusterRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift ModifyCluster response.
 *
 * @param  response  Response to parse.
 */
void ModifyClusterResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyClusterResponsePrivate
 *
 * @brief  Private implementation for ModifyClusterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyClusterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyClusterResponse instance.
 */
ModifyClusterResponsePrivate::ModifyClusterResponsePrivate(
    ModifyClusterQueueResponse * const q) : ModifyClusterPrivate(q)
{

}

/**
 * @brief  Parse an Redshift ModifyClusterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyClusterResponsePrivate::ModifyClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyClusterResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace AWS
