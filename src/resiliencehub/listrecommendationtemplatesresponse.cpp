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

#include "listrecommendationtemplatesresponse.h"
#include "listrecommendationtemplatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListRecommendationTemplatesResponse
 * \brief The ListRecommendationTemplatesResponse class provides an interace for ResilienceHub ListRecommendationTemplates responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listRecommendationTemplates
 */

/*!
 * Constructs a ListRecommendationTemplatesResponse object for \a reply to \a request, with parent \a parent.
 */
ListRecommendationTemplatesResponse::ListRecommendationTemplatesResponse(
        const ListRecommendationTemplatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new ListRecommendationTemplatesResponsePrivate(this), parent)
{
    setRequest(new ListRecommendationTemplatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRecommendationTemplatesRequest * ListRecommendationTemplatesResponse::request() const
{
    Q_D(const ListRecommendationTemplatesResponse);
    return static_cast<const ListRecommendationTemplatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub ListRecommendationTemplates \a response.
 */
void ListRecommendationTemplatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRecommendationTemplatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::ListRecommendationTemplatesResponsePrivate
 * \brief The ListRecommendationTemplatesResponsePrivate class provides private implementation for ListRecommendationTemplatesResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListRecommendationTemplatesResponsePrivate object with public implementation \a q.
 */
ListRecommendationTemplatesResponsePrivate::ListRecommendationTemplatesResponsePrivate(
    ListRecommendationTemplatesResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub ListRecommendationTemplates response element from \a xml.
 */
void ListRecommendationTemplatesResponsePrivate::parseListRecommendationTemplatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRecommendationTemplatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws
