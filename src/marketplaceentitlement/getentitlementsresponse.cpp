// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getentitlementsresponse.h"
#include "getentitlementsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MarketplaceEntitlement {

/*!
 * \class QtAws::MarketplaceEntitlement::GetEntitlementsResponse
 * \brief The GetEntitlementsResponse class provides an interace for MarketplaceEntitlement GetEntitlements responses.
 *
 * \inmodule QtAwsMarketplaceEntitlement
 *
 *  <fullname>AWS Marketplace Entitlement Service</fullname>
 * 
 *  This reference provides descriptions of the AWS Marketplace Entitlement Service
 * 
 *  API>
 * 
 *  AWS Marketplace Entitlement Service is used to determine the entitlement of a customer to a given product. An
 *  entitlement represents capacity in a product owned by the customer. For example, a customer might own some number of
 *  users or seats in an SaaS application or some amount of data capacity in a multi-tenant
 * 
 *  database>
 * 
 *  <b>Getting Entitlement Records</b>
 * 
 *  </p <ul> <li>
 * 
 *  <i>GetEntitlements</i>- Gets the entitlements for a Marketplace
 *
 * \sa MarketplaceEntitlementClient::getEntitlements
 */

/*!
 * Constructs a GetEntitlementsResponse object for \a reply to \a request, with parent \a parent.
 */
GetEntitlementsResponse::GetEntitlementsResponse(
        const GetEntitlementsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MarketplaceEntitlementResponse(new GetEntitlementsResponsePrivate(this), parent)
{
    setRequest(new GetEntitlementsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEntitlementsRequest * GetEntitlementsResponse::request() const
{
    Q_D(const GetEntitlementsResponse);
    return static_cast<const GetEntitlementsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MarketplaceEntitlement GetEntitlements \a response.
 */
void GetEntitlementsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEntitlementsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MarketplaceEntitlement::GetEntitlementsResponsePrivate
 * \brief The GetEntitlementsResponsePrivate class provides private implementation for GetEntitlementsResponse.
 * \internal
 *
 * \inmodule QtAwsMarketplaceEntitlement
 */

/*!
 * Constructs a GetEntitlementsResponsePrivate object with public implementation \a q.
 */
GetEntitlementsResponsePrivate::GetEntitlementsResponsePrivate(
    GetEntitlementsResponse * const q) : MarketplaceEntitlementResponsePrivate(q)
{

}

/*!
 * Parses a MarketplaceEntitlement GetEntitlements response element from \a xml.
 */
void GetEntitlementsResponsePrivate::parseGetEntitlementsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEntitlementsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MarketplaceEntitlement
} // namespace QtAws
