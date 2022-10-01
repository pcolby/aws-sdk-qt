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

#include "listsoprecommendationsresponse.h"
#include "listsoprecommendationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListSopRecommendationsResponse
 * \brief The ListSopRecommendationsResponse class provides an interace for ResilienceHub ListSopRecommendations responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listSopRecommendations
 */

/*!
 * Constructs a ListSopRecommendationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSopRecommendationsResponse::ListSopRecommendationsResponse(
        const ListSopRecommendationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new ListSopRecommendationsResponsePrivate(this), parent)
{
    setRequest(new ListSopRecommendationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSopRecommendationsRequest * ListSopRecommendationsResponse::request() const
{
    Q_D(const ListSopRecommendationsResponse);
    return static_cast<const ListSopRecommendationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub ListSopRecommendations \a response.
 */
void ListSopRecommendationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSopRecommendationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::ListSopRecommendationsResponsePrivate
 * \brief The ListSopRecommendationsResponsePrivate class provides private implementation for ListSopRecommendationsResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListSopRecommendationsResponsePrivate object with public implementation \a q.
 */
ListSopRecommendationsResponsePrivate::ListSopRecommendationsResponsePrivate(
    ListSopRecommendationsResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub ListSopRecommendations response element from \a xml.
 */
void ListSopRecommendationsResponsePrivate::parseListSopRecommendationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSopRecommendationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws
