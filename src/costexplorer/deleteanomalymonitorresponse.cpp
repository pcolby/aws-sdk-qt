// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteanomalymonitorresponse.h"
#include "deleteanomalymonitorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::DeleteAnomalyMonitorResponse
 * \brief The DeleteAnomalyMonitorResponse class provides an interace for CostExplorer DeleteAnomalyMonitor responses.
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
 * \sa CostExplorerClient::deleteAnomalyMonitor
 */

/*!
 * Constructs a DeleteAnomalyMonitorResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAnomalyMonitorResponse::DeleteAnomalyMonitorResponse(
        const DeleteAnomalyMonitorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new DeleteAnomalyMonitorResponsePrivate(this), parent)
{
    setRequest(new DeleteAnomalyMonitorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAnomalyMonitorRequest * DeleteAnomalyMonitorResponse::request() const
{
    Q_D(const DeleteAnomalyMonitorResponse);
    return static_cast<const DeleteAnomalyMonitorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CostExplorer DeleteAnomalyMonitor \a response.
 */
void DeleteAnomalyMonitorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAnomalyMonitorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostExplorer::DeleteAnomalyMonitorResponsePrivate
 * \brief The DeleteAnomalyMonitorResponsePrivate class provides private implementation for DeleteAnomalyMonitorResponse.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a DeleteAnomalyMonitorResponsePrivate object with public implementation \a q.
 */
DeleteAnomalyMonitorResponsePrivate::DeleteAnomalyMonitorResponsePrivate(
    DeleteAnomalyMonitorResponse * const q) : CostExplorerResponsePrivate(q)
{

}

/*!
 * Parses a CostExplorer DeleteAnomalyMonitor response element from \a xml.
 */
void DeleteAnomalyMonitorResponsePrivate::parseDeleteAnomalyMonitorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAnomalyMonitorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CostExplorer
} // namespace QtAws
