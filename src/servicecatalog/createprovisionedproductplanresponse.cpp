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

#include "createprovisionedproductplanresponse.h"
#include "createprovisionedproductplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  CreateProvisionedProductPlanResponse
 *
 * @brief  Handles ServiceCatalog CreateProvisionedProductPlan responses.
 *
 * @see    ServiceCatalogClient::createProvisionedProductPlan
 */

/**
 * @brief  Constructs a new CreateProvisionedProductPlanResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateProvisionedProductPlanResponse::CreateProvisionedProductPlanResponse(
        const CreateProvisionedProductPlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new CreateProvisionedProductPlanResponsePrivate(this), parent)
{
    setRequest(new CreateProvisionedProductPlanRequest(request));
    setReply(reply);
}

const CreateProvisionedProductPlanRequest * CreateProvisionedProductPlanResponse::request() const
{
    Q_D(const CreateProvisionedProductPlanResponse);
    return static_cast<const CreateProvisionedProductPlanRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog CreateProvisionedProductPlan response.
 *
 * @param  response  Response to parse.
 */
void CreateProvisionedProductPlanResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateProvisionedProductPlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateProvisionedProductPlanResponsePrivate
 *
 * @brief  Private implementation for CreateProvisionedProductPlanResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateProvisionedProductPlanResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateProvisionedProductPlanResponse instance.
 */
CreateProvisionedProductPlanResponsePrivate::CreateProvisionedProductPlanResponsePrivate(
    CreateProvisionedProductPlanResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog CreateProvisionedProductPlanResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateProvisionedProductPlanResponsePrivate::parseCreateProvisionedProductPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateProvisionedProductPlanResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
