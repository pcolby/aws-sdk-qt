// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
