/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getreservationpurchaserecommendationresponse.h"
#include "getreservationpurchaserecommendationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetReservationPurchaseRecommendationResponse
 * \brief The GetReservationPurchaseRecommendationResponse class provides an interace for CostExplorer GetReservationPurchaseRecommendation responses.
 *
 * \inmodule QtAwsCostExplorer
 *
 *  The Cost Explorer API allows you to programmatically query your cost and usage data. You can query for aggregated data
 *  such as total monthly costs or total daily usage. You can also query for granular data, such as the number of daily
 *  write operations for Amazon DynamoDB database tables in your production environment.
 * 
 *  </p
 * 
 *  Service
 * 
 *  Endpoin>
 * 
 *  The Cost Explorer API provides the following
 * 
 *  endpoint> <ul> <li>
 * 
 *  https://ce.us-east-1.amazonaws.co> </li> </ul>
 * 
 *  For information about costs associated with the Cost Explorer API, see <a
 *  href="https://aws.amazon.com/aws-cost-management/pricing/">AWS Cost Management
 *
 * \sa CostExplorerClient::getReservationPurchaseRecommendation
 */

/*!
 * Constructs a GetReservationPurchaseRecommendationResponse object for \a reply to \a request, with parent \a parent.
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

/*!
 * \reimp
 */
const GetReservationPurchaseRecommendationRequest * GetReservationPurchaseRecommendationResponse::request() const
{
    Q_D(const GetReservationPurchaseRecommendationResponse);
    return static_cast<const GetReservationPurchaseRecommendationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CostExplorer GetReservationPurchaseRecommendation \a response.
 */
void GetReservationPurchaseRecommendationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetReservationPurchaseRecommendationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostExplorer::GetReservationPurchaseRecommendationResponsePrivate
 * \brief The GetReservationPurchaseRecommendationResponsePrivate class provides private implementation for GetReservationPurchaseRecommendationResponse.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetReservationPurchaseRecommendationResponsePrivate object with public implementation \a q.
 */
GetReservationPurchaseRecommendationResponsePrivate::GetReservationPurchaseRecommendationResponsePrivate(
    GetReservationPurchaseRecommendationResponse * const q) : CostExplorerResponsePrivate(q)
{

}

/*!
 * Parses a CostExplorer GetReservationPurchaseRecommendation response element from \a xml.
 */
void GetReservationPurchaseRecommendationResponsePrivate::parseGetReservationPurchaseRecommendationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReservationPurchaseRecommendationResponse"));
    /// @todo
}

} // namespace CostExplorer
} // namespace QtAws
