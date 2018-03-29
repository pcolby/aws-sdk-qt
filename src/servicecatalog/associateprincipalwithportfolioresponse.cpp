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

#include "associateprincipalwithportfolioresponse.h"
#include "associateprincipalwithportfolioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  AssociatePrincipalWithPortfolioResponse
 *
 * @brief  Handles ServiceCatalog AssociatePrincipalWithPortfolio responses.
 *
 * @see    ServiceCatalogClient::associatePrincipalWithPortfolio
 */

/**
 * @brief  Constructs a new AssociatePrincipalWithPortfolioResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociatePrincipalWithPortfolioResponse::AssociatePrincipalWithPortfolioResponse(
        const AssociatePrincipalWithPortfolioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new AssociatePrincipalWithPortfolioResponsePrivate(this), parent)
{
    setRequest(new AssociatePrincipalWithPortfolioRequest(request));
    setReply(reply);
}

const AssociatePrincipalWithPortfolioRequest * AssociatePrincipalWithPortfolioResponse::request() const
{
    Q_D(const AssociatePrincipalWithPortfolioResponse);
    return static_cast<const AssociatePrincipalWithPortfolioRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog AssociatePrincipalWithPortfolio response.
 *
 * @param  response  Response to parse.
 */
void AssociatePrincipalWithPortfolioResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssociatePrincipalWithPortfolioResponsePrivate
 *
 * @brief  Private implementation for AssociatePrincipalWithPortfolioResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociatePrincipalWithPortfolioResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociatePrincipalWithPortfolioResponse instance.
 */
AssociatePrincipalWithPortfolioResponsePrivate::AssociatePrincipalWithPortfolioResponsePrivate(
    AssociatePrincipalWithPortfolioQueueResponse * const q) : AssociatePrincipalWithPortfolioPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog AssociatePrincipalWithPortfolioResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociatePrincipalWithPortfolioResponsePrivate::AssociatePrincipalWithPortfolioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociatePrincipalWithPortfolioResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace AWS
