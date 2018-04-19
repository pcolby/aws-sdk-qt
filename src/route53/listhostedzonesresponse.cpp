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

#include "listhostedzonesresponse.h"
#include "listhostedzonesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListHostedZonesResponse
 * \brief The ListHostedZonesResponse class provides an interace for Route53 ListHostedZones responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::listHostedZones
 */

/*!
 * Constructs a ListHostedZonesResponse object for \a reply to \a request, with parent \a parent.
 */
ListHostedZonesResponse::ListHostedZonesResponse(
        const ListHostedZonesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListHostedZonesResponsePrivate(this), parent)
{
    setRequest(new ListHostedZonesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListHostedZonesRequest * ListHostedZonesResponse::request() const
{
    Q_D(const ListHostedZonesResponse);
    return static_cast<const ListHostedZonesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 ListHostedZones \a response.
 */
void ListHostedZonesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListHostedZonesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::ListHostedZonesResponsePrivate
 * \brief The ListHostedZonesResponsePrivate class provides private implementation for ListHostedZonesResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListHostedZonesResponsePrivate object with public implementation \a q.
 */
ListHostedZonesResponsePrivate::ListHostedZonesResponsePrivate(
    ListHostedZonesResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 ListHostedZones response element from \a xml.
 */
void ListHostedZonesResponsePrivate::parseListHostedZonesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHostedZonesResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
