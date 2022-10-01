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

#include "listassociatedroute53healthchecksresponse.h"
#include "listassociatedroute53healthchecksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::ListAssociatedRoute53HealthChecksResponse
 * \brief The ListAssociatedRoute53HealthChecksResponse class provides an interace for Route53RecoveryControlConfig ListAssociatedRoute53HealthChecks responses.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::listAssociatedRoute53HealthChecks
 */

/*!
 * Constructs a ListAssociatedRoute53HealthChecksResponse object for \a reply to \a request, with parent \a parent.
 */
ListAssociatedRoute53HealthChecksResponse::ListAssociatedRoute53HealthChecksResponse(
        const ListAssociatedRoute53HealthChecksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryControlConfigResponse(new ListAssociatedRoute53HealthChecksResponsePrivate(this), parent)
{
    setRequest(new ListAssociatedRoute53HealthChecksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAssociatedRoute53HealthChecksRequest * ListAssociatedRoute53HealthChecksResponse::request() const
{
    Q_D(const ListAssociatedRoute53HealthChecksResponse);
    return static_cast<const ListAssociatedRoute53HealthChecksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryControlConfig ListAssociatedRoute53HealthChecks \a response.
 */
void ListAssociatedRoute53HealthChecksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAssociatedRoute53HealthChecksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::ListAssociatedRoute53HealthChecksResponsePrivate
 * \brief The ListAssociatedRoute53HealthChecksResponsePrivate class provides private implementation for ListAssociatedRoute53HealthChecksResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a ListAssociatedRoute53HealthChecksResponsePrivate object with public implementation \a q.
 */
ListAssociatedRoute53HealthChecksResponsePrivate::ListAssociatedRoute53HealthChecksResponsePrivate(
    ListAssociatedRoute53HealthChecksResponse * const q) : Route53RecoveryControlConfigResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryControlConfig ListAssociatedRoute53HealthChecks response element from \a xml.
 */
void ListAssociatedRoute53HealthChecksResponsePrivate::parseListAssociatedRoute53HealthChecksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssociatedRoute53HealthChecksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
