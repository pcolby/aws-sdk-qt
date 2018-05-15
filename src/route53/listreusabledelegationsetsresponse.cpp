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

#include "listreusabledelegationsetsresponse.h"
#include "listreusabledelegationsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListReusableDelegationSetsResponse
 * \brief The ListReusableDelegationSetsResponse class provides an interace for Route53 ListReusableDelegationSets responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::listReusableDelegationSets
 */

/*!
 * Constructs a ListReusableDelegationSetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListReusableDelegationSetsResponse::ListReusableDelegationSetsResponse(
        const ListReusableDelegationSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListReusableDelegationSetsResponsePrivate(this), parent)
{
    setRequest(new ListReusableDelegationSetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListReusableDelegationSetsRequest * ListReusableDelegationSetsResponse::request() const
{
    Q_D(const ListReusableDelegationSetsResponse);
    return static_cast<const ListReusableDelegationSetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 ListReusableDelegationSets \a response.
 */
void ListReusableDelegationSetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListReusableDelegationSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::ListReusableDelegationSetsResponsePrivate
 * \brief The ListReusableDelegationSetsResponsePrivate class provides private implementation for ListReusableDelegationSetsResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListReusableDelegationSetsResponsePrivate object with public implementation \a q.
 */
ListReusableDelegationSetsResponsePrivate::ListReusableDelegationSetsResponsePrivate(
    ListReusableDelegationSetsResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 ListReusableDelegationSets response element from \a xml.
 */
void ListReusableDelegationSetsResponsePrivate::parseListReusableDelegationSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListReusableDelegationSetsResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
