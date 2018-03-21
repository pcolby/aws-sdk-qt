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

#include "createdbinstanceresponse.h"
#include "createdbinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  CreateDBInstanceResponse
 *
 * @brief  Handles RDS CreateDBInstance responses.
 *
 * @see    RDSClient::createDBInstance
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDBInstanceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new CreateDBInstanceResponsePrivate(this), parent)
{
    setRequest(new CreateDBInstanceRequest(request));
    setReply(reply);
}

const CreateDBInstanceRequest * CreateDBInstanceResponse::request() const
{
    Q_D(const CreateDBInstanceResponse);
    return static_cast<const CreateDBInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a RDS CreateDBInstance response.
 *
 * @param  response  Response to parse.
 */
void CreateDBInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDBInstanceResponsePrivate
 *
 * @brief  Private implementation for CreateDBInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDBInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDBInstanceResponse instance.
 */
CreateDBInstanceResponsePrivate::CreateDBInstanceResponsePrivate(
    CreateDBInstanceQueueResponse * const q) : CreateDBInstancePrivate(q)
{

}

/**
 * @brief  Parse an RDS CreateDBInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDBInstanceResponsePrivate::CreateDBInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDBInstanceResponse"));
    /// @todo
}

} // namespace RDS
} // namespace AWS
