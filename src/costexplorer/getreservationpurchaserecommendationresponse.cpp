// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  You can use the Cost Explorer API to programmatically query your cost and usage data. You can query for aggregated data
 *  such as total monthly costs or total daily usage. You can also query for granular data. This might include the number of
 *  daily write operations for Amazon DynamoDB database tables in your production environment.
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
 *  <code>https://ce.us-east-1.amazonaws.com</code>
 * 
 *  </p </li> </ul>
 * 
 *  For information about the costs that are associated with the Cost Explorer API, see <a
 *  href="http://aws.amazon.com/aws-cost-management/pricing/">Amazon Web Services Cost Management
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace CostExplorer
} // namespace QtAws
