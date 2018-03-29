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

#include "modifydbsnapshotattributeresponse.h"
#include "modifydbsnapshotattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  ModifyDBSnapshotAttributeResponse
 *
 * @brief  Handles RDS ModifyDBSnapshotAttribute responses.
 *
 * @see    RDSClient::modifyDBSnapshotAttribute
 */

/**
 * @brief  Constructs a new ModifyDBSnapshotAttributeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyDBSnapshotAttributeResponse::ModifyDBSnapshotAttributeResponse(
        const ModifyDBSnapshotAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ModifyDBSnapshotAttributeResponse(new ModifyDBSnapshotAttributeResponsePrivate(this), parent)
{
    setRequest(new ModifyDBSnapshotAttributeRequest(request));
    setReply(reply);
}

const ModifyDBSnapshotAttributeRequest * ModifyDBSnapshotAttributeResponse::request() const
{
    Q_D(const ModifyDBSnapshotAttributeResponse);
    return static_cast<const ModifyDBSnapshotAttributeRequest *>(d->request);
}

/**
 * @brief  Parse a RDS ModifyDBSnapshotAttribute response.
 *
 * @param  response  Response to parse.
 */
void ModifyDBSnapshotAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(ModifyDBSnapshotAttributeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyDBSnapshotAttributeResponsePrivate
 *
 * @brief  Private implementation for ModifyDBSnapshotAttributeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyDBSnapshotAttributeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyDBSnapshotAttributeResponse instance.
 */
ModifyDBSnapshotAttributeResponsePrivate::ModifyDBSnapshotAttributeResponsePrivate(
    ModifyDBSnapshotAttributeResponse * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS ModifyDBSnapshotAttributeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyDBSnapshotAttributeResponsePrivate::parseModifyDBSnapshotAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyDBSnapshotAttributeResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
