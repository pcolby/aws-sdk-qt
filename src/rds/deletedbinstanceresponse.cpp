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

#include "deletedbinstanceresponse.h"
#include "deletedbinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  DeleteDBInstanceResponse
 *
 * @brief  Handles RDS DeleteDBInstance responses.
 *
 * @see    RDSClient::deleteDBInstance
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDBInstanceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DeleteDBInstanceResponsePrivate(this), parent)
{
    setRequest(new DeleteDBInstanceRequest(request));
    setReply(reply);
}

const DeleteDBInstanceRequest * DeleteDBInstanceResponse::request() const
{
    Q_D(const DeleteDBInstanceResponse);
    return static_cast<const DeleteDBInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DeleteDBInstance response.
 *
 * @param  response  Response to parse.
 */
void DeleteDBInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDBInstanceResponsePrivate
 *
 * @brief  Private implementation for DeleteDBInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDBInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDBInstanceResponse instance.
 */
DeleteDBInstanceResponsePrivate::DeleteDBInstanceResponsePrivate(
    DeleteDBInstanceQueueResponse * const q) : DeleteDBInstancePrivate(q)
{

}

/**
 * @brief  Parse an RDS DeleteDBInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDBInstanceResponsePrivate::DeleteDBInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDBInstanceResponse"));
    /// @todo
}
