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

#include "describeexportconfigurationsresponse.h"
#include "describeexportconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ApplicationDiscoveryService {

/**
 * @class  DescribeExportConfigurationsResponse
 *
 * @brief  Handles ApplicationDiscoveryService DescribeExportConfigurations responses.
 *
 * @see    ApplicationDiscoveryServiceClient::describeExportConfigurations
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeExportConfigurationsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationDiscoveryServiceResponse(new DescribeExportConfigurationsResponsePrivate(this), parent)
{
    setRequest(new DescribeExportConfigurationsRequest(request));
    setReply(reply);
}

const DescribeExportConfigurationsRequest * DescribeExportConfigurationsResponse::request() const
{
    Q_D(const DescribeExportConfigurationsResponse);
    return static_cast<const DescribeExportConfigurationsRequest *>(d->request);
}

/**
 * @brief  Parse a ApplicationDiscoveryService DescribeExportConfigurations response.
 *
 * @param  response  Response to parse.
 */
void DescribeExportConfigurationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeExportConfigurationsResponsePrivate
 *
 * @brief  Private implementation for DescribeExportConfigurationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeExportConfigurationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeExportConfigurationsResponse instance.
 */
DescribeExportConfigurationsResponsePrivate::DescribeExportConfigurationsResponsePrivate(
    DescribeExportConfigurationsQueueResponse * const q) : DescribeExportConfigurationsPrivate(q)
{

}

/**
 * @brief  Parse an ApplicationDiscoveryService DescribeExportConfigurationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeExportConfigurationsResponsePrivate::DescribeExportConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeExportConfigurationsResponse"));
    /// @todo
}
