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

#include "modifydbclustersnapshotattributeresponse.h"
#include "modifydbclustersnapshotattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  ModifyDBClusterSnapshotAttributeResponse
 *
 * @brief  Handles RDS ModifyDBClusterSnapshotAttribute responses.
 *
 * @see    RDSClient::modifyDBClusterSnapshotAttribute
 */

/**
 * @brief  Constructs a new ModifyDBClusterSnapshotAttributeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyDBClusterSnapshotAttributeResponse::ModifyDBClusterSnapshotAttributeResponse(
        const ModifyDBClusterSnapshotAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new ModifyDBClusterSnapshotAttributeResponsePrivate(this), parent)
{
    setRequest(new ModifyDBClusterSnapshotAttributeRequest(request));
    setReply(reply);
}

const ModifyDBClusterSnapshotAttributeRequest * ModifyDBClusterSnapshotAttributeResponse::request() const
{
    Q_D(const ModifyDBClusterSnapshotAttributeResponse);
    return static_cast<const ModifyDBClusterSnapshotAttributeRequest *>(d->request);
}

/**
 * @brief  Parse a RDS ModifyDBClusterSnapshotAttribute response.
 *
 * @param  response  Response to parse.
 */
void ModifyDBClusterSnapshotAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyDBClusterSnapshotAttributeResponsePrivate
 *
 * @brief  Private implementation for ModifyDBClusterSnapshotAttributeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyDBClusterSnapshotAttributeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyDBClusterSnapshotAttributeResponse instance.
 */
ModifyDBClusterSnapshotAttributeResponsePrivate::ModifyDBClusterSnapshotAttributeResponsePrivate(
    ModifyDBClusterSnapshotAttributeQueueResponse * const q) : ModifyDBClusterSnapshotAttributePrivate(q)
{

}

/**
 * @brief  Parse an RDS ModifyDBClusterSnapshotAttributeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyDBClusterSnapshotAttributeResponsePrivate::ModifyDBClusterSnapshotAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyDBClusterSnapshotAttributeResponse"));
    /// @todo
}

} // namespace RDS
} // namespace AWS
