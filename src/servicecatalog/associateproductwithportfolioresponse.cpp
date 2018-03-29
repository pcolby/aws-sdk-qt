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

#include "associateproductwithportfolioresponse.h"
#include "associateproductwithportfolioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  AssociateProductWithPortfolioResponse
 *
 * @brief  Handles ServiceCatalog AssociateProductWithPortfolio responses.
 *
 * @see    ServiceCatalogClient::associateProductWithPortfolio
 */

/**
 * @brief  Constructs a new AssociateProductWithPortfolioResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateProductWithPortfolioResponse::AssociateProductWithPortfolioResponse(
        const AssociateProductWithPortfolioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new AssociateProductWithPortfolioResponsePrivate(this), parent)
{
    setRequest(new AssociateProductWithPortfolioRequest(request));
    setReply(reply);
}

const AssociateProductWithPortfolioRequest * AssociateProductWithPortfolioResponse::request() const
{
    Q_D(const AssociateProductWithPortfolioResponse);
    return static_cast<const AssociateProductWithPortfolioRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog AssociateProductWithPortfolio response.
 *
 * @param  response  Response to parse.
 */
void AssociateProductWithPortfolioResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssociateProductWithPortfolioResponsePrivate
 *
 * @brief  Private implementation for AssociateProductWithPortfolioResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateProductWithPortfolioResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociateProductWithPortfolioResponse instance.
 */
AssociateProductWithPortfolioResponsePrivate::AssociateProductWithPortfolioResponsePrivate(
    AssociateProductWithPortfolioQueueResponse * const q) : AssociateProductWithPortfolioPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog AssociateProductWithPortfolioResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociateProductWithPortfolioResponsePrivate::AssociateProductWithPortfolioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateProductWithPortfolioResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace AWS
