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

#include "modifyreservedinstancesresponse.h"
#include "modifyreservedinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  ModifyReservedInstancesResponse
 *
 * @brief  Handles EC2 ModifyReservedInstances responses.
 *
 * @see    EC2Client::modifyReservedInstances
 */

/**
 * @brief  Constructs a new ModifyReservedInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyReservedInstancesResponse::ModifyReservedInstancesResponse(
        const ModifyReservedInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ModifyReservedInstancesResponsePrivate(this), parent)
{
    setRequest(new ModifyReservedInstancesRequest(request));
    setReply(reply);
}

const ModifyReservedInstancesRequest * ModifyReservedInstancesResponse::request() const
{
    Q_D(const ModifyReservedInstancesResponse);
    return static_cast<const ModifyReservedInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ModifyReservedInstances response.
 *
 * @param  response  Response to parse.
 */
void ModifyReservedInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyReservedInstancesResponsePrivate
 *
 * @brief  Private implementation for ModifyReservedInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyReservedInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyReservedInstancesResponse instance.
 */
ModifyReservedInstancesResponsePrivate::ModifyReservedInstancesResponsePrivate(
    ModifyReservedInstancesQueueResponse * const q) : ModifyReservedInstancesPrivate(q)
{

}

/**
 * @brief  Parse an EC2 ModifyReservedInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyReservedInstancesResponsePrivate::ModifyReservedInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyReservedInstancesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
