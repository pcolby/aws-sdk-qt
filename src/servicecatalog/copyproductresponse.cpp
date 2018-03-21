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

#include "copyproductresponse.h"
#include "copyproductresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  CopyProductResponse
 *
 * @brief  Handles ServiceCatalog CopyProduct responses.
 *
 * @see    ServiceCatalogClient::copyProduct
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CopyProductResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new CopyProductResponsePrivate(this), parent)
{
    setRequest(new CopyProductRequest(request));
    setReply(reply);
}

const CopyProductRequest * CopyProductResponse::request() const
{
    Q_D(const CopyProductResponse);
    return static_cast<const CopyProductRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog CopyProduct response.
 *
 * @param  response  Response to parse.
 */
void CopyProductResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CopyProductResponsePrivate
 *
 * @brief  Private implementation for CopyProductResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CopyProductResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CopyProductResponse instance.
 */
CopyProductResponsePrivate::CopyProductResponsePrivate(
    CopyProductQueueResponse * const q) : CopyProductPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog CopyProductResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CopyProductResponsePrivate::CopyProductResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CopyProductResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace AWS
