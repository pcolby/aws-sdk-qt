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

#include "terminateprovisionedproductresponse.h"
#include "terminateprovisionedproductresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  TerminateProvisionedProductResponse
 *
 * @brief  Handles ServiceCatalog TerminateProvisionedProduct responses.
 *
 * @see    ServiceCatalogClient::terminateProvisionedProduct
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TerminateProvisionedProductResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new TerminateProvisionedProductResponsePrivate(this), parent)
{
    setRequest(new TerminateProvisionedProductRequest(request));
    setReply(reply);
}

const TerminateProvisionedProductRequest * TerminateProvisionedProductResponse::request() const
{
    Q_D(const TerminateProvisionedProductResponse);
    return static_cast<const TerminateProvisionedProductRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog TerminateProvisionedProduct response.
 *
 * @param  response  Response to parse.
 */
void TerminateProvisionedProductResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  TerminateProvisionedProductResponsePrivate
 *
 * @brief  Private implementation for TerminateProvisionedProductResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TerminateProvisionedProductResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TerminateProvisionedProductResponse instance.
 */
TerminateProvisionedProductResponsePrivate::TerminateProvisionedProductResponsePrivate(
    TerminateProvisionedProductQueueResponse * const q) : TerminateProvisionedProductPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog TerminateProvisionedProductResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TerminateProvisionedProductResponsePrivate::TerminateProvisionedProductResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TerminateProvisionedProductResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace AWS
