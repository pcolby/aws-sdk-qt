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

#include "createendpointresponse.h"
#include "createendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  CreateEndpointResponse
 *
 * @brief  Handles DatabaseMigrationService CreateEndpoint responses.
 *
 * @see    DatabaseMigrationServiceClient::createEndpoint
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateEndpointResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new CreateEndpointResponsePrivate(this), parent)
{
    setRequest(new CreateEndpointRequest(request));
    setReply(reply);
}

const CreateEndpointRequest * CreateEndpointResponse::request() const
{
    Q_D(const CreateEndpointResponse);
    return static_cast<const CreateEndpointRequest *>(d->request);
}

/**
 * @brief  Parse a DatabaseMigrationService CreateEndpoint response.
 *
 * @param  response  Response to parse.
 */
void CreateEndpointResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateEndpointResponsePrivate
 *
 * @brief  Private implementation for CreateEndpointResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateEndpointResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateEndpointResponse instance.
 */
CreateEndpointResponsePrivate::CreateEndpointResponsePrivate(
    CreateEndpointQueueResponse * const q) : CreateEndpointPrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService CreateEndpointResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateEndpointResponsePrivate::CreateEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEndpointResponse"));
    /// @todo
}
