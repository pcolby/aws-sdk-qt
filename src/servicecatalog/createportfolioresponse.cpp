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

#include "createportfolioresponse.h"
#include "createportfolioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  CreatePortfolioResponse
 *
 * @brief  Handles ServiceCatalog CreatePortfolio responses.
 *
 * @see    ServiceCatalogClient::createPortfolio
 */

/**
 * @brief  Constructs a new CreatePortfolioResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreatePortfolioResponse::CreatePortfolioResponse(
        const CreatePortfolioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreatePortfolioResponse(new CreatePortfolioResponsePrivate(this), parent)
{
    setRequest(new CreatePortfolioRequest(request));
    setReply(reply);
}

const CreatePortfolioRequest * CreatePortfolioResponse::request() const
{
    Q_D(const CreatePortfolioResponse);
    return static_cast<const CreatePortfolioRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog CreatePortfolio response.
 *
 * @param  response  Response to parse.
 */
void CreatePortfolioResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreatePortfolioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreatePortfolioResponsePrivate
 *
 * @brief  Private implementation for CreatePortfolioResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePortfolioResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreatePortfolioResponse instance.
 */
CreatePortfolioResponsePrivate::CreatePortfolioResponsePrivate(
    CreatePortfolioResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog CreatePortfolioResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreatePortfolioResponsePrivate::parseCreatePortfolioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePortfolioResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
