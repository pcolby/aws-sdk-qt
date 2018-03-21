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

#include "describeorderabledbinstanceoptionsresponse.h"
#include "describeorderabledbinstanceoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  DescribeOrderableDBInstanceOptionsResponse
 *
 * @brief  Handles RDS DescribeOrderableDBInstanceOptions responses.
 *
 * @see    RDSClient::describeOrderableDBInstanceOptions
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeOrderableDBInstanceOptionsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DescribeOrderableDBInstanceOptionsResponsePrivate(this), parent)
{
    setRequest(new DescribeOrderableDBInstanceOptionsRequest(request));
    setReply(reply);
}

const DescribeOrderableDBInstanceOptionsRequest * DescribeOrderableDBInstanceOptionsResponse::request() const
{
    Q_D(const DescribeOrderableDBInstanceOptionsResponse);
    return static_cast<const DescribeOrderableDBInstanceOptionsRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DescribeOrderableDBInstanceOptions response.
 *
 * @param  response  Response to parse.
 */
void DescribeOrderableDBInstanceOptionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeOrderableDBInstanceOptionsResponsePrivate
 *
 * @brief  Private implementation for DescribeOrderableDBInstanceOptionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeOrderableDBInstanceOptionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeOrderableDBInstanceOptionsResponse instance.
 */
DescribeOrderableDBInstanceOptionsResponsePrivate::DescribeOrderableDBInstanceOptionsResponsePrivate(
    DescribeOrderableDBInstanceOptionsQueueResponse * const q) : DescribeOrderableDBInstanceOptionsPrivate(q)
{

}

/**
 * @brief  Parse an RDS DescribeOrderableDBInstanceOptionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeOrderableDBInstanceOptionsResponsePrivate::DescribeOrderableDBInstanceOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeOrderableDBInstanceOptionsResponse"));
    /// @todo
}

} // namespace RDS
} // namespace AWS
