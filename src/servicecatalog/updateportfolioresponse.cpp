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

#include "updateportfolioresponse.h"
#include "updateportfolioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  UpdatePortfolioResponse
 *
 * @brief  Handles ServiceCatalog UpdatePortfolio responses.
 *
 * @see    ServiceCatalogClient::updatePortfolio
 */

/**
 * @brief  Constructs a new UpdatePortfolioResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdatePortfolioResponse::UpdatePortfolioResponse(
        const UpdatePortfolioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new UpdatePortfolioResponsePrivate(this), parent)
{
    setRequest(new UpdatePortfolioRequest(request));
    setReply(reply);
}

const UpdatePortfolioRequest * UpdatePortfolioResponse::request() const
{
    Q_D(const UpdatePortfolioResponse);
    return static_cast<const UpdatePortfolioRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog UpdatePortfolio response.
 *
 * @param  response  Response to parse.
 */
void UpdatePortfolioResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdatePortfolioResponsePrivate
 *
 * @brief  Private implementation for UpdatePortfolioResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePortfolioResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdatePortfolioResponse instance.
 */
UpdatePortfolioResponsePrivate::UpdatePortfolioResponsePrivate(
    UpdatePortfolioQueueResponse * const q) : UpdatePortfolioPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog UpdatePortfolioResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdatePortfolioResponsePrivate::UpdatePortfolioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePortfolioResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace AWS
