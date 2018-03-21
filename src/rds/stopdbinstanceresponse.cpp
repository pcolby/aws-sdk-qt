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

#include "stopdbinstanceresponse.h"
#include "stopdbinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  StopDBInstanceResponse
 *
 * @brief  Handles RDS StopDBInstance responses.
 *
 * @see    RDSClient::stopDBInstance
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopDBInstanceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new StopDBInstanceResponsePrivate(this), parent)
{
    setRequest(new StopDBInstanceRequest(request));
    setReply(reply);
}

const StopDBInstanceRequest * StopDBInstanceResponse::request() const
{
    Q_D(const StopDBInstanceResponse);
    return static_cast<const StopDBInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a RDS StopDBInstance response.
 *
 * @param  response  Response to parse.
 */
void StopDBInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopDBInstanceResponsePrivate
 *
 * @brief  Private implementation for StopDBInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopDBInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopDBInstanceResponse instance.
 */
StopDBInstanceResponsePrivate::StopDBInstanceResponsePrivate(
    StopDBInstanceQueueResponse * const q) : StopDBInstancePrivate(q)
{

}

/**
 * @brief  Parse an RDS StopDBInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopDBInstanceResponsePrivate::StopDBInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopDBInstanceResponse"));
    /// @todo
}

} // namespace RDS
} // namespace AWS
