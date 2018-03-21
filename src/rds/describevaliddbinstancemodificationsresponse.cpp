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

#include "describevaliddbinstancemodificationsresponse.h"
#include "describevaliddbinstancemodificationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  DescribeValidDBInstanceModificationsResponse
 *
 * @brief  Handles RDS DescribeValidDBInstanceModifications responses.
 *
 * @see    RDSClient::describeValidDBInstanceModifications
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeValidDBInstanceModificationsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DescribeValidDBInstanceModificationsResponsePrivate(this), parent)
{
    setRequest(new DescribeValidDBInstanceModificationsRequest(request));
    setReply(reply);
}

const DescribeValidDBInstanceModificationsRequest * DescribeValidDBInstanceModificationsResponse::request() const
{
    Q_D(const DescribeValidDBInstanceModificationsResponse);
    return static_cast<const DescribeValidDBInstanceModificationsRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DescribeValidDBInstanceModifications response.
 *
 * @param  response  Response to parse.
 */
void DescribeValidDBInstanceModificationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeValidDBInstanceModificationsResponsePrivate
 *
 * @brief  Private implementation for DescribeValidDBInstanceModificationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeValidDBInstanceModificationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeValidDBInstanceModificationsResponse instance.
 */
DescribeValidDBInstanceModificationsResponsePrivate::DescribeValidDBInstanceModificationsResponsePrivate(
    DescribeValidDBInstanceModificationsQueueResponse * const q) : DescribeValidDBInstanceModificationsPrivate(q)
{

}

/**
 * @brief  Parse an RDS DescribeValidDBInstanceModificationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeValidDBInstanceModificationsResponsePrivate::DescribeValidDBInstanceModificationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeValidDBInstanceModificationsResponse"));
    /// @todo
}

} // namespace RDS
} // namespace AWS
