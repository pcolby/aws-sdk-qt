// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listaccountassociationsresponse.h"
#include "listaccountassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace BillingConductor {

/*!
 * \class QtAws::BillingConductor::ListAccountAssociationsResponse
 * \brief The ListAccountAssociationsResponse class provides an interace for BillingConductor ListAccountAssociations responses.
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
 * \sa BillingConductorClient::listAccountAssociations
 */

/*!
 * Constructs a ListAccountAssociationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAccountAssociationsResponse::ListAccountAssociationsResponse(
        const ListAccountAssociationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BillingConductorResponse(new ListAccountAssociationsResponsePrivate(this), parent)
{
    setRequest(new ListAccountAssociationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAccountAssociationsRequest * ListAccountAssociationsResponse::request() const
{
    Q_D(const ListAccountAssociationsResponse);
    return static_cast<const ListAccountAssociationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful BillingConductor ListAccountAssociations \a response.
 */
void ListAccountAssociationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAccountAssociationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::BillingConductor::ListAccountAssociationsResponsePrivate
 * \brief The ListAccountAssociationsResponsePrivate class provides private implementation for ListAccountAssociationsResponse.
 * \internal
 *
 * \inmodule QtAwsBillingConductor
 */

/*!
 * Constructs a ListAccountAssociationsResponsePrivate object with public implementation \a q.
 */
ListAccountAssociationsResponsePrivate::ListAccountAssociationsResponsePrivate(
    ListAccountAssociationsResponse * const q) : BillingConductorResponsePrivate(q)
{

}

/*!
 * Parses a BillingConductor ListAccountAssociations response element from \a xml.
 */
void ListAccountAssociationsResponsePrivate::parseListAccountAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAccountAssociationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace BillingConductor
} // namespace QtAws
