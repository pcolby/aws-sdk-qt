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

#include "createproductresponse.h"
#include "createproductresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  CreateProductResponse
 *
 * @brief  Handles ServiceCatalog CreateProduct responses.
 *
 * @see    ServiceCatalogClient::createProduct
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateProductResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new CreateProductResponsePrivate(this), parent)
{
    setRequest(new CreateProductRequest(request));
    setReply(reply);
}

const CreateProductRequest * CreateProductResponse::request() const
{
    Q_D(const CreateProductResponse);
    return static_cast<const CreateProductRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog CreateProduct response.
 *
 * @param  response  Response to parse.
 */
void CreateProductResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateProductResponsePrivate
 *
 * @brief  Private implementation for CreateProductResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateProductResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateProductResponse instance.
 */
CreateProductResponsePrivate::CreateProductResponsePrivate(
    CreateProductQueueResponse * const q) : CreateProductPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog CreateProductResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateProductResponsePrivate::CreateProductResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateProductResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace AWS
