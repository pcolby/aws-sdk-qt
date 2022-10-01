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

#include "listappassessmentsresponse.h"
#include "listappassessmentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListAppAssessmentsResponse
 * \brief The ListAppAssessmentsResponse class provides an interace for ResilienceHub ListAppAssessments responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listAppAssessments
 */

/*!
 * Constructs a ListAppAssessmentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAppAssessmentsResponse::ListAppAssessmentsResponse(
        const ListAppAssessmentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new ListAppAssessmentsResponsePrivate(this), parent)
{
    setRequest(new ListAppAssessmentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAppAssessmentsRequest * ListAppAssessmentsResponse::request() const
{
    Q_D(const ListAppAssessmentsResponse);
    return static_cast<const ListAppAssessmentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub ListAppAssessments \a response.
 */
void ListAppAssessmentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAppAssessmentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::ListAppAssessmentsResponsePrivate
 * \brief The ListAppAssessmentsResponsePrivate class provides private implementation for ListAppAssessmentsResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListAppAssessmentsResponsePrivate object with public implementation \a q.
 */
ListAppAssessmentsResponsePrivate::ListAppAssessmentsResponsePrivate(
    ListAppAssessmentsResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub ListAppAssessments response element from \a xml.
 */
void ListAppAssessmentsResponsePrivate::parseListAppAssessmentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAppAssessmentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws
