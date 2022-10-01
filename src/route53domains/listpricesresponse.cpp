// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpricesresponse.h"
#include "listpricesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::ListPricesResponse
 * \brief The ListPricesResponse class provides an interace for Route53Domains ListPrices responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::listPrices
 */

/*!
 * Constructs a ListPricesResponse object for \a reply to \a request, with parent \a parent.
 */
ListPricesResponse::ListPricesResponse(
        const ListPricesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new ListPricesResponsePrivate(this), parent)
{
    setRequest(new ListPricesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPricesRequest * ListPricesResponse::request() const
{
    Q_D(const ListPricesResponse);
    return static_cast<const ListPricesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Domains ListPrices \a response.
 */
void ListPricesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPricesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::ListPricesResponsePrivate
 * \brief The ListPricesResponsePrivate class provides private implementation for ListPricesResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a ListPricesResponsePrivate object with public implementation \a q.
 */
ListPricesResponsePrivate::ListPricesResponsePrivate(
    ListPricesResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains ListPrices response element from \a xml.
 */
void ListPricesResponsePrivate::parseListPricesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPricesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
