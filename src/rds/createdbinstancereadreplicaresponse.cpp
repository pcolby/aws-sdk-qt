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

#include "createdbinstancereadreplicaresponse.h"
#include "createdbinstancereadreplicaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  CreateDBInstanceReadReplicaResponse
 *
 * @brief  Handles RDS CreateDBInstanceReadReplica responses.
 *
 * @see    RDSClient::createDBInstanceReadReplica
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDBInstanceReadReplicaResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new CreateDBInstanceReadReplicaResponsePrivate(this), parent)
{
    setRequest(new CreateDBInstanceReadReplicaRequest(request));
    setReply(reply);
}

const CreateDBInstanceReadReplicaRequest * CreateDBInstanceReadReplicaResponse::request() const
{
    Q_D(const CreateDBInstanceReadReplicaResponse);
    return static_cast<const CreateDBInstanceReadReplicaRequest *>(d->request);
}

/**
 * @brief  Parse a RDS CreateDBInstanceReadReplica response.
 *
 * @param  response  Response to parse.
 */
void CreateDBInstanceReadReplicaResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDBInstanceReadReplicaResponsePrivate
 *
 * @brief  Private implementation for CreateDBInstanceReadReplicaResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDBInstanceReadReplicaResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDBInstanceReadReplicaResponse instance.
 */
CreateDBInstanceReadReplicaResponsePrivate::CreateDBInstanceReadReplicaResponsePrivate(
    CreateDBInstanceReadReplicaQueueResponse * const q) : CreateDBInstanceReadReplicaPrivate(q)
{

}

/**
 * @brief  Parse an RDS CreateDBInstanceReadReplicaResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDBInstanceReadReplicaResponsePrivate::CreateDBInstanceReadReplicaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDBInstanceReadReplicaResponse"));
    /// @todo
}
