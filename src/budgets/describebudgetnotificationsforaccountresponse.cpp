// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describebudgetnotificationsforaccountresponse.h"
#include "describebudgetnotificationsforaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Budgets {

/*!
 * \class QtAws::Budgets::DescribeBudgetNotificationsForAccountResponse
 * \brief The DescribeBudgetNotificationsForAccountResponse class provides an interace for Budgets DescribeBudgetNotificationsForAccount responses.
 *
 * \inmodule QtAwsBudgets
 *
 *  Use the Amazon Web Services Budgets API to plan your service usage, service costs, and instance reservations. This API
 *  reference provides descriptions, syntax, and usage examples for each of the actions and data types for the Amazon Web
 *  Services Budgets feature.
 * 
 *  </p
 * 
 *  Budgets provide you with a way to see the following
 * 
 *  information> <ul> <li>
 * 
 *  How close your plan is to your budgeted amount or to the free tier
 * 
 *  limit> </li> <li>
 * 
 *  Your usage-to-date, including how much you've used of your Reserved Instances
 * 
 *  (RIs> </li> <li>
 * 
 *  Your current estimated charges from Amazon Web Services, and how much your predicted usage will accrue in charges by the
 *  end of the
 * 
 *  mont> </li> <li>
 * 
 *  How much of your budget has been
 * 
 *  use> </li> </ul>
 * 
 *  Amazon Web Services updates your budget status several times a day. Budgets track your unblended costs, subscriptions,
 *  refunds, and RIs. You can create the following types of
 * 
 *  budgets> <ul> <li>
 * 
 *  <b>Cost budgets</b> - Plan how much you want to spend on a
 * 
 *  service> </li> <li>
 * 
 *  <b>Usage budgets</b> - Plan how much you want to use one or more
 * 
 *  services> </li> <li>
 * 
 *  <b>RI utilization budgets</b> - Define a utilization threshold, and receive alerts when your RI usage falls below that
 *  threshold. This lets you see if your RIs are unused or
 * 
 *  under-utilized> </li> <li>
 * 
 *  <b>RI coverage budgets</b> - Define a coverage threshold, and receive alerts when the number of your instance hours that
 *  are covered by RIs fall below that threshold. This lets you see how much of your instance usage is covered by a
 * 
 *  reservation> </li> </ul>
 * 
 *  Service
 * 
 *  Endpoin>
 * 
 *  The Amazon Web Services Budgets API provides the following
 * 
 *  endpoint> <ul> <li>
 * 
 *  https://budgets.amazonaws.co> </li> </ul>
 * 
 *  For information about costs that are associated with the Amazon Web Services Budgets API, see <a
 *  href="https://aws.amazon.com/aws-cost-management/pricing/">Amazon Web Services Cost Management
 *
 * \sa BudgetsClient::describeBudgetNotificationsForAccount
 */

/*!
 * Constructs a DescribeBudgetNotificationsForAccountResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeBudgetNotificationsForAccountResponse::DescribeBudgetNotificationsForAccountResponse(
        const DescribeBudgetNotificationsForAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BudgetsResponse(new DescribeBudgetNotificationsForAccountResponsePrivate(this), parent)
{
    setRequest(new DescribeBudgetNotificationsForAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeBudgetNotificationsForAccountRequest * DescribeBudgetNotificationsForAccountResponse::request() const
{
    Q_D(const DescribeBudgetNotificationsForAccountResponse);
    return static_cast<const DescribeBudgetNotificationsForAccountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Budgets DescribeBudgetNotificationsForAccount \a response.
 */
void DescribeBudgetNotificationsForAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeBudgetNotificationsForAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Budgets::DescribeBudgetNotificationsForAccountResponsePrivate
 * \brief The DescribeBudgetNotificationsForAccountResponsePrivate class provides private implementation for DescribeBudgetNotificationsForAccountResponse.
 * \internal
 *
 * \inmodule QtAwsBudgets
 */

/*!
 * Constructs a DescribeBudgetNotificationsForAccountResponsePrivate object with public implementation \a q.
 */
DescribeBudgetNotificationsForAccountResponsePrivate::DescribeBudgetNotificationsForAccountResponsePrivate(
    DescribeBudgetNotificationsForAccountResponse * const q) : BudgetsResponsePrivate(q)
{

}

/*!
 * Parses a Budgets DescribeBudgetNotificationsForAccount response element from \a xml.
 */
void DescribeBudgetNotificationsForAccountResponsePrivate::parseDescribeBudgetNotificationsForAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBudgetNotificationsForAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Budgets
} // namespace QtAws
