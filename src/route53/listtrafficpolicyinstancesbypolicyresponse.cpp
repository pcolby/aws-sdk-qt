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

#include "listtrafficpolicyinstancesbypolicyresponse.h"
#include "listtrafficpolicyinstancesbypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListTrafficPolicyInstancesByPolicyResponse
 * \brief The ListTrafficPolicyInstancesByPolicyResponse class provides an interace for Route53 ListTrafficPolicyInstancesByPolicy responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::listTrafficPolicyInstancesByPolicy
 */

/*!
 * Constructs a ListTrafficPolicyInstancesByPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
ListTrafficPolicyInstancesByPolicyResponse::ListTrafficPolicyInstancesByPolicyResponse(
        const ListTrafficPolicyInstancesByPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListTrafficPolicyInstancesByPolicyResponsePrivate(this), parent)
{
    setRequest(new ListTrafficPolicyInstancesByPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTrafficPolicyInstancesByPolicyRequest * ListTrafficPolicyInstancesByPolicyResponse::request() const
{
    Q_D(const ListTrafficPolicyInstancesByPolicyResponse);
    return static_cast<const ListTrafficPolicyInstancesByPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 ListTrafficPolicyInstancesByPolicy \a response.
 */
void ListTrafficPolicyInstancesByPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTrafficPolicyInstancesByPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::ListTrafficPolicyInstancesByPolicyResponsePrivate
 * \brief The ListTrafficPolicyInstancesByPolicyResponsePrivate class provides private implementation for ListTrafficPolicyInstancesByPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListTrafficPolicyInstancesByPolicyResponsePrivate object with public implementation \a q.
 */
ListTrafficPolicyInstancesByPolicyResponsePrivate::ListTrafficPolicyInstancesByPolicyResponsePrivate(
    ListTrafficPolicyInstancesByPolicyResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 ListTrafficPolicyInstancesByPolicy response element from \a xml.
 */
void ListTrafficPolicyInstancesByPolicyResponsePrivate::parseListTrafficPolicyInstancesByPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTrafficPolicyInstancesByPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
