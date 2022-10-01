// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getanomalymonitorsresponse.h"
#include "getanomalymonitorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetAnomalyMonitorsResponse
 * \brief The GetAnomalyMonitorsResponse class provides an interace for CostExplorer GetAnomalyMonitors responses.
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
 * \sa CostExplorerClient::getAnomalyMonitors
 */

/*!
 * Constructs a GetAnomalyMonitorsResponse object for \a reply to \a request, with parent \a parent.
 */
GetAnomalyMonitorsResponse::GetAnomalyMonitorsResponse(
        const GetAnomalyMonitorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new GetAnomalyMonitorsResponsePrivate(this), parent)
{
    setRequest(new GetAnomalyMonitorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAnomalyMonitorsRequest * GetAnomalyMonitorsResponse::request() const
{
    Q_D(const GetAnomalyMonitorsResponse);
    return static_cast<const GetAnomalyMonitorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CostExplorer GetAnomalyMonitors \a response.
 */
void GetAnomalyMonitorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAnomalyMonitorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostExplorer::GetAnomalyMonitorsResponsePrivate
 * \brief The GetAnomalyMonitorsResponsePrivate class provides private implementation for GetAnomalyMonitorsResponse.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetAnomalyMonitorsResponsePrivate object with public implementation \a q.
 */
GetAnomalyMonitorsResponsePrivate::GetAnomalyMonitorsResponsePrivate(
    GetAnomalyMonitorsResponse * const q) : CostExplorerResponsePrivate(q)
{

}

/*!
 * Parses a CostExplorer GetAnomalyMonitors response element from \a xml.
 */
void GetAnomalyMonitorsResponsePrivate::parseGetAnomalyMonitorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAnomalyMonitorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CostExplorer
} // namespace QtAws
