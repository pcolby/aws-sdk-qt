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

#include "createportfolioshareresponse.h"
#include "createportfolioshareresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  CreatePortfolioShareResponse
 *
 * @brief  Handles ServiceCatalog CreatePortfolioShare responses.
 *
 * @see    ServiceCatalogClient::createPortfolioShare
 */

/**
 * @brief  Constructs a new CreatePortfolioShareResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreatePortfolioShareResponse::CreatePortfolioShareResponse(
        const CreatePortfolioShareRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new CreatePortfolioShareResponsePrivate(this), parent)
{
    setRequest(new CreatePortfolioShareRequest(request));
    setReply(reply);
}

const CreatePortfolioShareRequest * CreatePortfolioShareResponse::request() const
{
    Q_D(const CreatePortfolioShareResponse);
    return static_cast<const CreatePortfolioShareRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog CreatePortfolioShare response.
 *
 * @param  response  Response to parse.
 */
void CreatePortfolioShareResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreatePortfolioShareResponsePrivate
 *
 * @brief  Private implementation for CreatePortfolioShareResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePortfolioShareResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreatePortfolioShareResponse instance.
 */
CreatePortfolioShareResponsePrivate::CreatePortfolioShareResponsePrivate(
    CreatePortfolioShareQueueResponse * const q) : CreatePortfolioSharePrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog CreatePortfolioShareResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreatePortfolioShareResponsePrivate::CreatePortfolioShareResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePortfolioShareResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
