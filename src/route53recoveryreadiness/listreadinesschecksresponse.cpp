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

#include "listreadinesschecksresponse.h"
#include "listreadinesschecksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::ListReadinessChecksResponse
 * \brief The ListReadinessChecksResponse class provides an interace for Route53RecoveryReadiness ListReadinessChecks responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::listReadinessChecks
 */

/*!
 * Constructs a ListReadinessChecksResponse object for \a reply to \a request, with parent \a parent.
 */
ListReadinessChecksResponse::ListReadinessChecksResponse(
        const ListReadinessChecksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new ListReadinessChecksResponsePrivate(this), parent)
{
    setRequest(new ListReadinessChecksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListReadinessChecksRequest * ListReadinessChecksResponse::request() const
{
    Q_D(const ListReadinessChecksResponse);
    return static_cast<const ListReadinessChecksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness ListReadinessChecks \a response.
 */
void ListReadinessChecksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListReadinessChecksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::ListReadinessChecksResponsePrivate
 * \brief The ListReadinessChecksResponsePrivate class provides private implementation for ListReadinessChecksResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a ListReadinessChecksResponsePrivate object with public implementation \a q.
 */
ListReadinessChecksResponsePrivate::ListReadinessChecksResponsePrivate(
    ListReadinessChecksResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness ListReadinessChecks response element from \a xml.
 */
void ListReadinessChecksResponsePrivate::parseListReadinessChecksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListReadinessChecksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
