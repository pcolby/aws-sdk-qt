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

#include "listappversionsresponse.h"
#include "listappversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListAppVersionsResponse
 * \brief The ListAppVersionsResponse class provides an interace for ResilienceHub ListAppVersions responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listAppVersions
 */

/*!
 * Constructs a ListAppVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAppVersionsResponse::ListAppVersionsResponse(
        const ListAppVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new ListAppVersionsResponsePrivate(this), parent)
{
    setRequest(new ListAppVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAppVersionsRequest * ListAppVersionsResponse::request() const
{
    Q_D(const ListAppVersionsResponse);
    return static_cast<const ListAppVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub ListAppVersions \a response.
 */
void ListAppVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAppVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::ListAppVersionsResponsePrivate
 * \brief The ListAppVersionsResponsePrivate class provides private implementation for ListAppVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListAppVersionsResponsePrivate object with public implementation \a q.
 */
ListAppVersionsResponsePrivate::ListAppVersionsResponsePrivate(
    ListAppVersionsResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub ListAppVersions response element from \a xml.
 */
void ListAppVersionsResponsePrivate::parseListAppVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAppVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws
