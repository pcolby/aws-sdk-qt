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

#include "restoredbinstancetopointintimeresponse.h"
#include "restoredbinstancetopointintimeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  RestoreDBInstanceToPointInTimeResponse
 *
 * @brief  Handles RDS RestoreDBInstanceToPointInTime responses.
 *
 * @see    RDSClient::restoreDBInstanceToPointInTime
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RestoreDBInstanceToPointInTimeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new RestoreDBInstanceToPointInTimeResponsePrivate(this), parent)
{
    setRequest(new RestoreDBInstanceToPointInTimeRequest(request));
    setReply(reply);
}

const RestoreDBInstanceToPointInTimeRequest * RestoreDBInstanceToPointInTimeResponse::request() const
{
    Q_D(const RestoreDBInstanceToPointInTimeResponse);
    return static_cast<const RestoreDBInstanceToPointInTimeRequest *>(d->request);
}

/**
 * @brief  Parse a RDS RestoreDBInstanceToPointInTime response.
 *
 * @param  response  Response to parse.
 */
void RestoreDBInstanceToPointInTimeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RestoreDBInstanceToPointInTimeResponsePrivate
 *
 * @brief  Private implementation for RestoreDBInstanceToPointInTimeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreDBInstanceToPointInTimeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RestoreDBInstanceToPointInTimeResponse instance.
 */
RestoreDBInstanceToPointInTimeResponsePrivate::RestoreDBInstanceToPointInTimeResponsePrivate(
    RestoreDBInstanceToPointInTimeQueueResponse * const q) : RestoreDBInstanceToPointInTimePrivate(q)
{

}

/**
 * @brief  Parse an RDS RestoreDBInstanceToPointInTimeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RestoreDBInstanceToPointInTimeResponsePrivate::RestoreDBInstanceToPointInTimeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreDBInstanceToPointInTimeResponse"));
    /// @todo
}
