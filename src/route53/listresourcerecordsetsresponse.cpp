/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listresourcerecordsetsresponse.h"
#include "listresourcerecordsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListResourceRecordSetsResponse
 * \brief The ListResourceRecordSetsResponse class provides an interace for Route53 ListResourceRecordSets responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::listResourceRecordSets
 */

/*!
 * Constructs a ListResourceRecordSetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListResourceRecordSetsResponse::ListResourceRecordSetsResponse(
        const ListResourceRecordSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListResourceRecordSetsResponsePrivate(this), parent)
{
    setRequest(new ListResourceRecordSetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListResourceRecordSetsRequest * ListResourceRecordSetsResponse::request() const
{
    Q_D(const ListResourceRecordSetsResponse);
    return static_cast<const ListResourceRecordSetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 ListResourceRecordSets \a response.
 */
void ListResourceRecordSetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListResourceRecordSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::ListResourceRecordSetsResponsePrivate
 * \brief The ListResourceRecordSetsResponsePrivate class provides private implementation for ListResourceRecordSetsResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListResourceRecordSetsResponsePrivate object with public implementation \a q.
 */
ListResourceRecordSetsResponsePrivate::ListResourceRecordSetsResponsePrivate(
    ListResourceRecordSetsResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 ListResourceRecordSets response element from \a xml.
 */
void ListResourceRecordSetsResponsePrivate::parseListResourceRecordSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResourceRecordSetsResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
