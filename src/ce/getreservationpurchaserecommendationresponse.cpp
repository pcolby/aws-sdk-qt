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

#include "getreservationpurchaserecommendationresponse.h"
#include "getreservationpurchaserecommendationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/**
 * @class  GetReservationPurchaseRecommendationResponse
 *
 * @brief  Handles CostExplorer GetReservationPurchaseRecommendation responses.
 *
 * @see    CostExplorerClient::getReservationPurchaseRecommendation
 */

/**
 * @brief  Constructs a new GetReservationPurchaseRecommendationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetReservationPurchaseRecommendationResponse::GetReservationPurchaseRecommendationResponse(
        const GetReservationPurchaseRecommendationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new GetReservationPurchaseRecommendationResponsePrivate(this), parent)
{
    setRequest(new GetReservationPurchaseRecommendationRequest(request));
    setReply(reply);
}

const GetReservationPurchaseRecommendationRequest * GetReservationPurchaseRecommendationResponse::request() const
{
    Q_D(const GetReservationPurchaseRecommendationResponse);
    return static_cast<const GetReservationPurchaseRecommendationRequest *>(d->request);
}

/**
 * @brief  Parse a CostExplorer GetReservationPurchaseRecommendation response.
 *
 * @param  response  Response to parse.
 */
void GetReservationPurchaseRecommendationResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetReservationPurchaseRecommendationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetReservationPurchaseRecommendationResponsePrivate
 *
 * @brief  Private implementation for GetReservationPurchaseRecommendationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetReservationPurchaseRecommendationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetReservationPurchaseRecommendationResponse instance.
 */
GetReservationPurchaseRecommendationResponsePrivate::GetReservationPurchaseRecommendationResponsePrivate(
    GetReservationPurchaseRecommendationResponse * const q) : CostExplorerResponsePrivate(q)
{

}

/**
 * @brief  Parse an CostExplorer GetReservationPurchaseRecommendationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetReservationPurchaseRecommendationResponsePrivate::parseGetReservationPurchaseRecommendationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReservationPurchaseRecommendationResponse"));
    /// @todo
}

} // namespace CostExplorer
} // namespace QtAws
