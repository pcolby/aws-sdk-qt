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
