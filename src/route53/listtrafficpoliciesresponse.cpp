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

#include "listtrafficpoliciesresponse.h"
#include "listtrafficpoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListTrafficPoliciesResponse
 * \brief The ListTrafficPoliciesResponse class provides an interace for Route53 ListTrafficPolicies responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listTrafficPolicies
 */

/*!
 * Constructs a ListTrafficPoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
ListTrafficPoliciesResponse::ListTrafficPoliciesResponse(
        const ListTrafficPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListTrafficPoliciesResponsePrivate(this), parent)
{
    setRequest(new ListTrafficPoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTrafficPoliciesRequest * ListTrafficPoliciesResponse::request() const
{
    Q_D(const ListTrafficPoliciesResponse);
    return static_cast<const ListTrafficPoliciesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 ListTrafficPolicies \a response.
 */
void ListTrafficPoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTrafficPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::ListTrafficPoliciesResponsePrivate
 * \brief The ListTrafficPoliciesResponsePrivate class provides private implementation for ListTrafficPoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListTrafficPoliciesResponsePrivate object with public implementation \a q.
 */
ListTrafficPoliciesResponsePrivate::ListTrafficPoliciesResponsePrivate(
    ListTrafficPoliciesResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 ListTrafficPolicies response element from \a xml.
 */
void ListTrafficPoliciesResponsePrivate::parseListTrafficPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTrafficPoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
