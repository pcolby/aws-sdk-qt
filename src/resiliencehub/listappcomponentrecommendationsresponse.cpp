// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listappcomponentrecommendationsresponse.h"
#include "listappcomponentrecommendationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListAppComponentRecommendationsResponse
 * \brief The ListAppComponentRecommendationsResponse class provides an interace for ResilienceHub ListAppComponentRecommendations responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listAppComponentRecommendations
 */

/*!
 * Constructs a ListAppComponentRecommendationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAppComponentRecommendationsResponse::ListAppComponentRecommendationsResponse(
        const ListAppComponentRecommendationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new ListAppComponentRecommendationsResponsePrivate(this), parent)
{
    setRequest(new ListAppComponentRecommendationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAppComponentRecommendationsRequest * ListAppComponentRecommendationsResponse::request() const
{
    Q_D(const ListAppComponentRecommendationsResponse);
    return static_cast<const ListAppComponentRecommendationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub ListAppComponentRecommendations \a response.
 */
void ListAppComponentRecommendationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAppComponentRecommendationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::ListAppComponentRecommendationsResponsePrivate
 * \brief The ListAppComponentRecommendationsResponsePrivate class provides private implementation for ListAppComponentRecommendationsResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListAppComponentRecommendationsResponsePrivate object with public implementation \a q.
 */
ListAppComponentRecommendationsResponsePrivate::ListAppComponentRecommendationsResponsePrivate(
    ListAppComponentRecommendationsResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub ListAppComponentRecommendations response element from \a xml.
 */
void ListAppComponentRecommendationsResponsePrivate::parseListAppComponentRecommendationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAppComponentRecommendationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws
