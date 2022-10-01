// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getreservationutilizationresponse.h"
#include "getreservationutilizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetReservationUtilizationResponse
 * \brief The GetReservationUtilizationResponse class provides an interace for CostExplorer GetReservationUtilization responses.
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
 * \sa CostExplorerClient::getReservationUtilization
 */

/*!
 * Constructs a GetReservationUtilizationResponse object for \a reply to \a request, with parent \a parent.
 */
GetReservationUtilizationResponse::GetReservationUtilizationResponse(
        const GetReservationUtilizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new GetReservationUtilizationResponsePrivate(this), parent)
{
    setRequest(new GetReservationUtilizationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetReservationUtilizationRequest * GetReservationUtilizationResponse::request() const
{
    Q_D(const GetReservationUtilizationResponse);
    return static_cast<const GetReservationUtilizationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CostExplorer GetReservationUtilization \a response.
 */
void GetReservationUtilizationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetReservationUtilizationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostExplorer::GetReservationUtilizationResponsePrivate
 * \brief The GetReservationUtilizationResponsePrivate class provides private implementation for GetReservationUtilizationResponse.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetReservationUtilizationResponsePrivate object with public implementation \a q.
 */
GetReservationUtilizationResponsePrivate::GetReservationUtilizationResponsePrivate(
    GetReservationUtilizationResponse * const q) : CostExplorerResponsePrivate(q)
{

}

/*!
 * Parses a CostExplorer GetReservationUtilization response element from \a xml.
 */
void GetReservationUtilizationResponsePrivate::parseGetReservationUtilizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReservationUtilizationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CostExplorer
} // namespace QtAws
