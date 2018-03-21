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

#include "modifyendpointresponse.h"
#include "modifyendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  ModifyEndpointResponse
 *
 * @brief  Handles DatabaseMigrationService ModifyEndpoint responses.
 *
 * @see    DatabaseMigrationServiceClient::modifyEndpoint
 */

/**
 * @brief  Constructs a new ModifyEndpointResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyEndpointResponse::ModifyEndpointResponse(
        const ModifyEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new ModifyEndpointResponsePrivate(this), parent)
{
    setRequest(new ModifyEndpointRequest(request));
    setReply(reply);
}

const ModifyEndpointRequest * ModifyEndpointResponse::request() const
{
    Q_D(const ModifyEndpointResponse);
    return static_cast<const ModifyEndpointRequest *>(d->request);
}

/**
 * @brief  Parse a DatabaseMigrationService ModifyEndpoint response.
 *
 * @param  response  Response to parse.
 */
void ModifyEndpointResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyEndpointResponsePrivate
 *
 * @brief  Private implementation for ModifyEndpointResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyEndpointResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyEndpointResponse instance.
 */
ModifyEndpointResponsePrivate::ModifyEndpointResponsePrivate(
    ModifyEndpointQueueResponse * const q) : ModifyEndpointPrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService ModifyEndpointResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyEndpointResponsePrivate::ModifyEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyEndpointResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace AWS
