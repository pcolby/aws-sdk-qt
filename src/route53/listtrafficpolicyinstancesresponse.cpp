/*
    Copyright 2013-2019 Paul Colby

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

#include "listtrafficpolicyinstancesresponse.h"
#include "listtrafficpolicyinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListTrafficPolicyInstancesResponse
 * \brief The ListTrafficPolicyInstancesResponse class provides an interace for Route53 ListTrafficPolicyInstances responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::listTrafficPolicyInstances
 */

/*!
 * Constructs a ListTrafficPolicyInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
ListTrafficPolicyInstancesResponse::ListTrafficPolicyInstancesResponse(
        const ListTrafficPolicyInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListTrafficPolicyInstancesResponsePrivate(this), parent)
{
    setRequest(new ListTrafficPolicyInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTrafficPolicyInstancesRequest * ListTrafficPolicyInstancesResponse::request() const
{
    Q_D(const ListTrafficPolicyInstancesResponse);
    return static_cast<const ListTrafficPolicyInstancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 ListTrafficPolicyInstances \a response.
 */
void ListTrafficPolicyInstancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTrafficPolicyInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::ListTrafficPolicyInstancesResponsePrivate
 * \brief The ListTrafficPolicyInstancesResponsePrivate class provides private implementation for ListTrafficPolicyInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListTrafficPolicyInstancesResponsePrivate object with public implementation \a q.
 */
ListTrafficPolicyInstancesResponsePrivate::ListTrafficPolicyInstancesResponsePrivate(
    ListTrafficPolicyInstancesResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 ListTrafficPolicyInstances response element from \a xml.
 */
void ListTrafficPolicyInstancesResponsePrivate::parseListTrafficPolicyInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTrafficPolicyInstancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
