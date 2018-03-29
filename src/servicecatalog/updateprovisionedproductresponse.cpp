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

#include "updateprovisionedproductresponse.h"
#include "updateprovisionedproductresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  UpdateProvisionedProductResponse
 *
 * @brief  Handles ServiceCatalog UpdateProvisionedProduct responses.
 *
 * @see    ServiceCatalogClient::updateProvisionedProduct
 */

/**
 * @brief  Constructs a new UpdateProvisionedProductResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateProvisionedProductResponse::UpdateProvisionedProductResponse(
        const UpdateProvisionedProductRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new UpdateProvisionedProductResponsePrivate(this), parent)
{
    setRequest(new UpdateProvisionedProductRequest(request));
    setReply(reply);
}

const UpdateProvisionedProductRequest * UpdateProvisionedProductResponse::request() const
{
    Q_D(const UpdateProvisionedProductResponse);
    return static_cast<const UpdateProvisionedProductRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog UpdateProvisionedProduct response.
 *
 * @param  response  Response to parse.
 */
void UpdateProvisionedProductResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateProvisionedProductResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateProvisionedProductResponsePrivate
 *
 * @brief  Private implementation for UpdateProvisionedProductResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateProvisionedProductResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateProvisionedProductResponse instance.
 */
UpdateProvisionedProductResponsePrivate::UpdateProvisionedProductResponsePrivate(
    UpdateProvisionedProductResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog UpdateProvisionedProductResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateProvisionedProductResponsePrivate::UpdateProvisionedProductResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateProvisionedProductResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
