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

#include "deleteportfolioresponse.h"
#include "deleteportfolioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  DeletePortfolioResponse
 *
 * @brief  Handles ServiceCatalog DeletePortfolio responses.
 *
 * @see    ServiceCatalogClient::deletePortfolio
 */

/**
 * @brief  Constructs a new DeletePortfolioResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeletePortfolioResponse::DeletePortfolioResponse(
        const DeletePortfolioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeletePortfolioResponse(new DeletePortfolioResponsePrivate(this), parent)
{
    setRequest(new DeletePortfolioRequest(request));
    setReply(reply);
}

const DeletePortfolioRequest * DeletePortfolioResponse::request() const
{
    Q_D(const DeletePortfolioResponse);
    return static_cast<const DeletePortfolioRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog DeletePortfolio response.
 *
 * @param  response  Response to parse.
 */
void DeletePortfolioResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeletePortfolioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeletePortfolioResponsePrivate
 *
 * @brief  Private implementation for DeletePortfolioResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeletePortfolioResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeletePortfolioResponse instance.
 */
DeletePortfolioResponsePrivate::DeletePortfolioResponsePrivate(
    DeletePortfolioResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog DeletePortfolioResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeletePortfolioResponsePrivate::parseDeletePortfolioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePortfolioResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
