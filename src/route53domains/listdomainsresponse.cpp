/*
    Copyright 2013-2018 Paul Colby

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

#include "listdomainsresponse.h"
#include "listdomainsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::ListDomainsResponse
 * \brief The ListDomainsResponse class provides an interace for Route53Domains ListDomains responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::listDomains
 */

/*!
 * Constructs a ListDomainsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDomainsResponse::ListDomainsResponse(
        const ListDomainsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new ListDomainsResponsePrivate(this), parent)
{
    setRequest(new ListDomainsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDomainsRequest * ListDomainsResponse::request() const
{
    Q_D(const ListDomainsResponse);
    return static_cast<const ListDomainsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Domains ListDomains \a response.
 */
void ListDomainsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDomainsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::ListDomainsResponsePrivate
 * \brief The ListDomainsResponsePrivate class provides private implementation for ListDomainsResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a ListDomainsResponsePrivate object with public implementation \a q.
 */
ListDomainsResponsePrivate::ListDomainsResponsePrivate(
    ListDomainsResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains ListDomains response element from \a xml.
 */
void ListDomainsResponsePrivate::parseListDomainsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDomainsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
