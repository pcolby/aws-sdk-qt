// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
