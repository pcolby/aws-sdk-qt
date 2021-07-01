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

#include "deleteanomalysubscriptionresponse.h"
#include "deleteanomalysubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::DeleteAnomalySubscriptionResponse
 * \brief The DeleteAnomalySubscriptionResponse class provides an interace for CostExplorer DeleteAnomalySubscription responses.
 *
 * \inmodule QtAwsCostExplorer
 *
 *  The Cost Explorer API enables you to programmatically query your cost and usage data. You can query for aggregated data
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
 *  <code>https://ce.us-east-1.amazonaws.com</code>
 * 
 *  </p </li> </ul>
 * 
 *  For information about costs associated with the Cost Explorer API, see <a
 *  href="http://aws.amazon.com/aws-cost-management/pricing/">AWS Cost Management
 *
 * \sa CostExplorerClient::deleteAnomalySubscription
 */

/*!
 * Constructs a DeleteAnomalySubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAnomalySubscriptionResponse::DeleteAnomalySubscriptionResponse(
        const DeleteAnomalySubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new DeleteAnomalySubscriptionResponsePrivate(this), parent)
{
    setRequest(new DeleteAnomalySubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAnomalySubscriptionRequest * DeleteAnomalySubscriptionResponse::request() const
{
    Q_D(const DeleteAnomalySubscriptionResponse);
    return static_cast<const DeleteAnomalySubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CostExplorer DeleteAnomalySubscription \a response.
 */
void DeleteAnomalySubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAnomalySubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostExplorer::DeleteAnomalySubscriptionResponsePrivate
 * \brief The DeleteAnomalySubscriptionResponsePrivate class provides private implementation for DeleteAnomalySubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a DeleteAnomalySubscriptionResponsePrivate object with public implementation \a q.
 */
DeleteAnomalySubscriptionResponsePrivate::DeleteAnomalySubscriptionResponsePrivate(
    DeleteAnomalySubscriptionResponse * const q) : CostExplorerResponsePrivate(q)
{

}

/*!
 * Parses a CostExplorer DeleteAnomalySubscription response element from \a xml.
 */
void DeleteAnomalySubscriptionResponsePrivate::parseDeleteAnomalySubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAnomalySubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CostExplorer
} // namespace QtAws
