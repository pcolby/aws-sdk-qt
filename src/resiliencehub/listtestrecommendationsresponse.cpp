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

#include "listtestrecommendationsresponse.h"
#include "listtestrecommendationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListTestRecommendationsResponse
 * \brief The ListTestRecommendationsResponse class provides an interace for ResilienceHub ListTestRecommendations responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listTestRecommendations
 */

/*!
 * Constructs a ListTestRecommendationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTestRecommendationsResponse::ListTestRecommendationsResponse(
        const ListTestRecommendationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new ListTestRecommendationsResponsePrivate(this), parent)
{
    setRequest(new ListTestRecommendationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTestRecommendationsRequest * ListTestRecommendationsResponse::request() const
{
    Q_D(const ListTestRecommendationsResponse);
    return static_cast<const ListTestRecommendationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub ListTestRecommendations \a response.
 */
void ListTestRecommendationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTestRecommendationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::ListTestRecommendationsResponsePrivate
 * \brief The ListTestRecommendationsResponsePrivate class provides private implementation for ListTestRecommendationsResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListTestRecommendationsResponsePrivate object with public implementation \a q.
 */
ListTestRecommendationsResponsePrivate::ListTestRecommendationsResponsePrivate(
    ListTestRecommendationsResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub ListTestRecommendations response element from \a xml.
 */
void ListTestRecommendationsResponsePrivate::parseListTestRecommendationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTestRecommendationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws
