/*
    Copyright 2013-2020 Paul Colby

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

#include "listtagsfordomainresponse.h"
#include "listtagsfordomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::ListTagsForDomainResponse
 * \brief The ListTagsForDomainResponse class provides an interace for Route53Domains ListTagsForDomain responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::listTagsForDomain
 */

/*!
 * Constructs a ListTagsForDomainResponse object for \a reply to \a request, with parent \a parent.
 */
ListTagsForDomainResponse::ListTagsForDomainResponse(
        const ListTagsForDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new ListTagsForDomainResponsePrivate(this), parent)
{
    setRequest(new ListTagsForDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTagsForDomainRequest * ListTagsForDomainResponse::request() const
{
    Q_D(const ListTagsForDomainResponse);
    return static_cast<const ListTagsForDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Domains ListTagsForDomain \a response.
 */
void ListTagsForDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTagsForDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::ListTagsForDomainResponsePrivate
 * \brief The ListTagsForDomainResponsePrivate class provides private implementation for ListTagsForDomainResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a ListTagsForDomainResponsePrivate object with public implementation \a q.
 */
ListTagsForDomainResponsePrivate::ListTagsForDomainResponsePrivate(
    ListTagsForDomainResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains ListTagsForDomain response element from \a xml.
 */
void ListTagsForDomainResponsePrivate::parseListTagsForDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTagsForDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
