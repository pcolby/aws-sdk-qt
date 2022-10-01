// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "viewbillingresponse.h"
#include "viewbillingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::ViewBillingResponse
 * \brief The ViewBillingResponse class provides an interace for Route53Domains ViewBilling responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::viewBilling
 */

/*!
 * Constructs a ViewBillingResponse object for \a reply to \a request, with parent \a parent.
 */
ViewBillingResponse::ViewBillingResponse(
        const ViewBillingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new ViewBillingResponsePrivate(this), parent)
{
    setRequest(new ViewBillingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ViewBillingRequest * ViewBillingResponse::request() const
{
    Q_D(const ViewBillingResponse);
    return static_cast<const ViewBillingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Domains ViewBilling \a response.
 */
void ViewBillingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ViewBillingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::ViewBillingResponsePrivate
 * \brief The ViewBillingResponsePrivate class provides private implementation for ViewBillingResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a ViewBillingResponsePrivate object with public implementation \a q.
 */
ViewBillingResponsePrivate::ViewBillingResponsePrivate(
    ViewBillingResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains ViewBilling response element from \a xml.
 */
void ViewBillingResponsePrivate::parseViewBillingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ViewBillingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
