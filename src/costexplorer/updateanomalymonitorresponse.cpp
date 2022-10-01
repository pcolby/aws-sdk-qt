/*
    Copyright 2013-2021 Paul Colby

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

#include "updateanomalymonitorresponse.h"
#include "updateanomalymonitorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::UpdateAnomalyMonitorResponse
 * \brief The UpdateAnomalyMonitorResponse class provides an interace for CostExplorer UpdateAnomalyMonitor responses.
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
 * \sa CostExplorerClient::updateAnomalyMonitor
 */

/*!
 * Constructs a UpdateAnomalyMonitorResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAnomalyMonitorResponse::UpdateAnomalyMonitorResponse(
        const UpdateAnomalyMonitorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new UpdateAnomalyMonitorResponsePrivate(this), parent)
{
    setRequest(new UpdateAnomalyMonitorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAnomalyMonitorRequest * UpdateAnomalyMonitorResponse::request() const
{
    Q_D(const UpdateAnomalyMonitorResponse);
    return static_cast<const UpdateAnomalyMonitorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CostExplorer UpdateAnomalyMonitor \a response.
 */
void UpdateAnomalyMonitorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAnomalyMonitorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostExplorer::UpdateAnomalyMonitorResponsePrivate
 * \brief The UpdateAnomalyMonitorResponsePrivate class provides private implementation for UpdateAnomalyMonitorResponse.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a UpdateAnomalyMonitorResponsePrivate object with public implementation \a q.
 */
UpdateAnomalyMonitorResponsePrivate::UpdateAnomalyMonitorResponsePrivate(
    UpdateAnomalyMonitorResponse * const q) : CostExplorerResponsePrivate(q)
{

}

/*!
 * Parses a CostExplorer UpdateAnomalyMonitor response element from \a xml.
 */
void UpdateAnomalyMonitorResponsePrivate::parseUpdateAnomalyMonitorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAnomalyMonitorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CostExplorer
} // namespace QtAws
