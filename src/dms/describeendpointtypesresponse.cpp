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

#include "describeendpointtypesresponse.h"
#include "describeendpointtypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  DescribeEndpointTypesResponse
 *
 * @brief  Handles DatabaseMigrationService DescribeEndpointTypes responses.
 *
 * @see    DatabaseMigrationServiceClient::describeEndpointTypes
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEndpointTypesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new DescribeEndpointTypesResponsePrivate(this), parent)
{
    setRequest(new DescribeEndpointTypesRequest(request));
    setReply(reply);
}

const DescribeEndpointTypesRequest * DescribeEndpointTypesResponse::request() const
{
    Q_D(const DescribeEndpointTypesResponse);
    return static_cast<const DescribeEndpointTypesRequest *>(d->request);
}

/**
 * @brief  Parse a DatabaseMigrationService DescribeEndpointTypes response.
 *
 * @param  response  Response to parse.
 */
void DescribeEndpointTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeEndpointTypesResponsePrivate
 *
 * @brief  Private implementation for DescribeEndpointTypesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEndpointTypesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEndpointTypesResponse instance.
 */
DescribeEndpointTypesResponsePrivate::DescribeEndpointTypesResponsePrivate(
    DescribeEndpointTypesQueueResponse * const q) : DescribeEndpointTypesPrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService DescribeEndpointTypesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEndpointTypesResponsePrivate::DescribeEndpointTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEndpointTypesResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace AWS
