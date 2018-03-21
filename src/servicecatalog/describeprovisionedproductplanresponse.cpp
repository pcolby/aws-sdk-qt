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

#include "describeprovisionedproductplanresponse.h"
#include "describeprovisionedproductplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  DescribeProvisionedProductPlanResponse
 *
 * @brief  Handles ServiceCatalog DescribeProvisionedProductPlan responses.
 *
 * @see    ServiceCatalogClient::describeProvisionedProductPlan
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeProvisionedProductPlanResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DescribeProvisionedProductPlanResponsePrivate(this), parent)
{
    setRequest(new DescribeProvisionedProductPlanRequest(request));
    setReply(reply);
}

const DescribeProvisionedProductPlanRequest * DescribeProvisionedProductPlanResponse::request() const
{
    Q_D(const DescribeProvisionedProductPlanResponse);
    return static_cast<const DescribeProvisionedProductPlanRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog DescribeProvisionedProductPlan response.
 *
 * @param  response  Response to parse.
 */
void DescribeProvisionedProductPlanResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeProvisionedProductPlanResponsePrivate
 *
 * @brief  Private implementation for DescribeProvisionedProductPlanResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeProvisionedProductPlanResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeProvisionedProductPlanResponse instance.
 */
DescribeProvisionedProductPlanResponsePrivate::DescribeProvisionedProductPlanResponsePrivate(
    DescribeProvisionedProductPlanQueueResponse * const q) : DescribeProvisionedProductPlanPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog DescribeProvisionedProductPlanResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeProvisionedProductPlanResponsePrivate::DescribeProvisionedProductPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProvisionedProductPlanResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace AWS
