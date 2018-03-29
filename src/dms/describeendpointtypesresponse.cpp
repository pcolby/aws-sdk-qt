/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeendpointtypesresponse.h"
#include "describeendpointtypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/**
 * @class  DescribeEndpointTypesResponse
 *
 * @brief  Handles DatabaseMigrationService DescribeEndpointTypes responses.
 *
 * @see    DatabaseMigrationServiceClient::describeEndpointTypes
 */

/**
 * @brief  Constructs a new DescribeEndpointTypesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEndpointTypesResponse::DescribeEndpointTypesResponse(
        const DescribeEndpointTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeEndpointTypesResponse(new DescribeEndpointTypesResponsePrivate(this), parent)
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
    Q_D(DescribeEndpointTypesResponse);
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
    DescribeEndpointTypesResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService DescribeEndpointTypesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEndpointTypesResponsePrivate::parseDescribeEndpointTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEndpointTypesResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
