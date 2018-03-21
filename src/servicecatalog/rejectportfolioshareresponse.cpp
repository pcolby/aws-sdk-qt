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

#include "rejectportfolioshareresponse.h"
#include "rejectportfolioshareresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  RejectPortfolioShareResponse
 *
 * @brief  Handles ServiceCatalog RejectPortfolioShare responses.
 *
 * @see    ServiceCatalogClient::rejectPortfolioShare
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RejectPortfolioShareResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new RejectPortfolioShareResponsePrivate(this), parent)
{
    setRequest(new RejectPortfolioShareRequest(request));
    setReply(reply);
}

const RejectPortfolioShareRequest * RejectPortfolioShareResponse::request() const
{
    Q_D(const RejectPortfolioShareResponse);
    return static_cast<const RejectPortfolioShareRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog RejectPortfolioShare response.
 *
 * @param  response  Response to parse.
 */
void RejectPortfolioShareResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RejectPortfolioShareResponsePrivate
 *
 * @brief  Private implementation for RejectPortfolioShareResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RejectPortfolioShareResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RejectPortfolioShareResponse instance.
 */
RejectPortfolioShareResponsePrivate::RejectPortfolioShareResponsePrivate(
    RejectPortfolioShareQueueResponse * const q) : RejectPortfolioSharePrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog RejectPortfolioShareResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RejectPortfolioShareResponsePrivate::RejectPortfolioShareResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RejectPortfolioShareResponse"));
    /// @todo
}
