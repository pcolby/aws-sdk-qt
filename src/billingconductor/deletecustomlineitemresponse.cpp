// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecustomlineitemresponse.h"
#include "deletecustomlineitemresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace BillingConductor {

/*!
 * \class QtAws::BillingConductor::DeleteCustomLineItemResponse
 * \brief The DeleteCustomLineItemResponse class provides an interace for BillingConductor DeleteCustomLineItem responses.
 *
 * \inmodule QtAwsBillingConductor
 *
 *  Amazon Web Services Billing Conductor is a fully managed service that you can use to customize a <a
 *  href="https://docs.aws.amazon.com/enterprisebilling/6b7c01c5-b592-467e-9769-90052eaf359c/userguide/understanding-eb.html#eb-other-definitions">pro
 *  forma</a> version of your billing data each month, to accurately show or chargeback your end customers. Amazon Web
 *  Services Billing Conductor doesn't change the way you're billed by Amazon Web Services each month by design. Instead, it
 *  provides you with a mechanism to configure, generate, and display rates to certain customers over a given billing
 *  period. You can also analyze the difference between the rates you apply to your accounting groupings relative to your
 *  actual rates from Amazon Web Services. As a result of your Amazon Web Services Billing Conductor configuration, the
 *  payer account can also see the custom rate applied on the billing details page of the <a
 *  href="https://console.aws.amazon.com/billing">Amazon Web Services Billing console</a>, or configure a cost and usage
 *  report per billing
 * 
 *  group>
 * 
 *  This documentation shows how you can configure Amazon Web Services Billing Conductor using its API. For more information
 *  about using the <a href="https://console.aws.amazon.com/enterprisebilling/">Amazon Web Services Billing Conductor</a>
 *  user interface, see the <a
 *  href="https://docs.aws.amazon.com/enterprisebilling/6b7c01c5-b592-467e-9769-90052eaf359c/userguide/what-is-enterprisebilling.html">
 *  Amazon Web Services Enterprise Billing Console User
 *
 * \sa BillingConductorClient::deleteCustomLineItem
 */

/*!
 * Constructs a DeleteCustomLineItemResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCustomLineItemResponse::DeleteCustomLineItemResponse(
        const DeleteCustomLineItemRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BillingConductorResponse(new DeleteCustomLineItemResponsePrivate(this), parent)
{
    setRequest(new DeleteCustomLineItemRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCustomLineItemRequest * DeleteCustomLineItemResponse::request() const
{
    Q_D(const DeleteCustomLineItemResponse);
    return static_cast<const DeleteCustomLineItemRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful BillingConductor DeleteCustomLineItem \a response.
 */
void DeleteCustomLineItemResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCustomLineItemResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::BillingConductor::DeleteCustomLineItemResponsePrivate
 * \brief The DeleteCustomLineItemResponsePrivate class provides private implementation for DeleteCustomLineItemResponse.
 * \internal
 *
 * \inmodule QtAwsBillingConductor
 */

/*!
 * Constructs a DeleteCustomLineItemResponsePrivate object with public implementation \a q.
 */
DeleteCustomLineItemResponsePrivate::DeleteCustomLineItemResponsePrivate(
    DeleteCustomLineItemResponse * const q) : BillingConductorResponsePrivate(q)
{

}

/*!
 * Parses a BillingConductor DeleteCustomLineItem response element from \a xml.
 */
void DeleteCustomLineItemResponsePrivate::parseDeleteCustomLineItemResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCustomLineItemResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace BillingConductor
} // namespace QtAws
