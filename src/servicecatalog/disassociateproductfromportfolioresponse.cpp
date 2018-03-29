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

#include "disassociateproductfromportfolioresponse.h"
#include "disassociateproductfromportfolioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  DisassociateProductFromPortfolioResponse
 *
 * @brief  Handles ServiceCatalog DisassociateProductFromPortfolio responses.
 *
 * @see    ServiceCatalogClient::disassociateProductFromPortfolio
 */

/**
 * @brief  Constructs a new DisassociateProductFromPortfolioResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateProductFromPortfolioResponse::DisassociateProductFromPortfolioResponse(
        const DisassociateProductFromPortfolioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DisassociateProductFromPortfolioResponsePrivate(this), parent)
{
    setRequest(new DisassociateProductFromPortfolioRequest(request));
    setReply(reply);
}

const DisassociateProductFromPortfolioRequest * DisassociateProductFromPortfolioResponse::request() const
{
    Q_D(const DisassociateProductFromPortfolioResponse);
    return static_cast<const DisassociateProductFromPortfolioRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog DisassociateProductFromPortfolio response.
 *
 * @param  response  Response to parse.
 */
void DisassociateProductFromPortfolioResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisassociateProductFromPortfolioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisassociateProductFromPortfolioResponsePrivate
 *
 * @brief  Private implementation for DisassociateProductFromPortfolioResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateProductFromPortfolioResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociateProductFromPortfolioResponse instance.
 */
DisassociateProductFromPortfolioResponsePrivate::DisassociateProductFromPortfolioResponsePrivate(
    DisassociateProductFromPortfolioResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog DisassociateProductFromPortfolioResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociateProductFromPortfolioResponsePrivate::parseDisassociateProductFromPortfolioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateProductFromPortfolioResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
