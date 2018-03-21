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

#include "modifydbinstanceresponse.h"
#include "modifydbinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  ModifyDBInstanceResponse
 *
 * @brief  Handles RDS ModifyDBInstance responses.
 *
 * @see    RDSClient::modifyDBInstance
 */

/**
 * @brief  Constructs a new ModifyDBInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyDBInstanceResponse::ModifyDBInstanceResponse(
        const ModifyDBInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new ModifyDBInstanceResponsePrivate(this), parent)
{
    setRequest(new ModifyDBInstanceRequest(request));
    setReply(reply);
}

const ModifyDBInstanceRequest * ModifyDBInstanceResponse::request() const
{
    Q_D(const ModifyDBInstanceResponse);
    return static_cast<const ModifyDBInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a RDS ModifyDBInstance response.
 *
 * @param  response  Response to parse.
 */
void ModifyDBInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyDBInstanceResponsePrivate
 *
 * @brief  Private implementation for ModifyDBInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyDBInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyDBInstanceResponse instance.
 */
ModifyDBInstanceResponsePrivate::ModifyDBInstanceResponsePrivate(
    ModifyDBInstanceQueueResponse * const q) : ModifyDBInstancePrivate(q)
{

}

/**
 * @brief  Parse an RDS ModifyDBInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyDBInstanceResponsePrivate::ModifyDBInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyDBInstanceResponse"));
    /// @todo
}

} // namespace RDS
} // namespace AWS
