// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrightsizingrecommendationresponse.h"
#include "getrightsizingrecommendationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetRightsizingRecommendationResponse
 * \brief The GetRightsizingRecommendationResponse class provides an interace for CostExplorer GetRightsizingRecommendation responses.
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
 * \sa CostExplorerClient::getRightsizingRecommendation
 */

/*!
 * Constructs a GetRightsizingRecommendationResponse object for \a reply to \a request, with parent \a parent.
 */
GetRightsizingRecommendationResponse::GetRightsizingRecommendationResponse(
        const GetRightsizingRecommendationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new GetRightsizingRecommendationResponsePrivate(this), parent)
{
    setRequest(new GetRightsizingRecommendationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRightsizingRecommendationRequest * GetRightsizingRecommendationResponse::request() const
{
    Q_D(const GetRightsizingRecommendationResponse);
    return static_cast<const GetRightsizingRecommendationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CostExplorer GetRightsizingRecommendation \a response.
 */
void GetRightsizingRecommendationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRightsizingRecommendationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostExplorer::GetRightsizingRecommendationResponsePrivate
 * \brief The GetRightsizingRecommendationResponsePrivate class provides private implementation for GetRightsizingRecommendationResponse.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetRightsizingRecommendationResponsePrivate object with public implementation \a q.
 */
GetRightsizingRecommendationResponsePrivate::GetRightsizingRecommendationResponsePrivate(
    GetRightsizingRecommendationResponse * const q) : CostExplorerResponsePrivate(q)
{

}

/*!
 * Parses a CostExplorer GetRightsizingRecommendation response element from \a xml.
 */
void GetRightsizingRecommendationResponsePrivate::parseGetRightsizingRecommendationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRightsizingRecommendationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CostExplorer
} // namespace QtAws
