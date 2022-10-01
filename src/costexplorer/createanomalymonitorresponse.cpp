// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createanomalymonitorresponse.h"
#include "createanomalymonitorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::CreateAnomalyMonitorResponse
 * \brief The CreateAnomalyMonitorResponse class provides an interace for CostExplorer CreateAnomalyMonitor responses.
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
 * \sa CostExplorerClient::createAnomalyMonitor
 */

/*!
 * Constructs a CreateAnomalyMonitorResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAnomalyMonitorResponse::CreateAnomalyMonitorResponse(
        const CreateAnomalyMonitorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new CreateAnomalyMonitorResponsePrivate(this), parent)
{
    setRequest(new CreateAnomalyMonitorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAnomalyMonitorRequest * CreateAnomalyMonitorResponse::request() const
{
    Q_D(const CreateAnomalyMonitorResponse);
    return static_cast<const CreateAnomalyMonitorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CostExplorer CreateAnomalyMonitor \a response.
 */
void CreateAnomalyMonitorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAnomalyMonitorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostExplorer::CreateAnomalyMonitorResponsePrivate
 * \brief The CreateAnomalyMonitorResponsePrivate class provides private implementation for CreateAnomalyMonitorResponse.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a CreateAnomalyMonitorResponsePrivate object with public implementation \a q.
 */
CreateAnomalyMonitorResponsePrivate::CreateAnomalyMonitorResponsePrivate(
    CreateAnomalyMonitorResponse * const q) : CostExplorerResponsePrivate(q)
{

}

/*!
 * Parses a CostExplorer CreateAnomalyMonitor response element from \a xml.
 */
void CreateAnomalyMonitorResponsePrivate::parseCreateAnomalyMonitorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAnomalyMonitorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CostExplorer
} // namespace QtAws
