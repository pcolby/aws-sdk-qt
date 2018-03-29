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

#include "provisionproductresponse.h"
#include "provisionproductresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  ProvisionProductResponse
 *
 * @brief  Handles ServiceCatalog ProvisionProduct responses.
 *
 * @see    ServiceCatalogClient::provisionProduct
 */

/**
 * @brief  Constructs a new ProvisionProductResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ProvisionProductResponse::ProvisionProductResponse(
        const ProvisionProductRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ProvisionProductResponsePrivate(this), parent)
{
    setRequest(new ProvisionProductRequest(request));
    setReply(reply);
}

const ProvisionProductRequest * ProvisionProductResponse::request() const
{
    Q_D(const ProvisionProductResponse);
    return static_cast<const ProvisionProductRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog ProvisionProduct response.
 *
 * @param  response  Response to parse.
 */
void ProvisionProductResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ProvisionProductResponsePrivate
 *
 * @brief  Private implementation for ProvisionProductResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ProvisionProductResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ProvisionProductResponse instance.
 */
ProvisionProductResponsePrivate::ProvisionProductResponsePrivate(
    ProvisionProductQueueResponse * const q) : ProvisionProductPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog ProvisionProductResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ProvisionProductResponsePrivate::ProvisionProductResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ProvisionProductResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace AWS
