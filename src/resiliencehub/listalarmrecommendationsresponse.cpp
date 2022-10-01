// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listalarmrecommendationsresponse.h"
#include "listalarmrecommendationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListAlarmRecommendationsResponse
 * \brief The ListAlarmRecommendationsResponse class provides an interace for ResilienceHub ListAlarmRecommendations responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listAlarmRecommendations
 */

/*!
 * Constructs a ListAlarmRecommendationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAlarmRecommendationsResponse::ListAlarmRecommendationsResponse(
        const ListAlarmRecommendationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new ListAlarmRecommendationsResponsePrivate(this), parent)
{
    setRequest(new ListAlarmRecommendationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAlarmRecommendationsRequest * ListAlarmRecommendationsResponse::request() const
{
    Q_D(const ListAlarmRecommendationsResponse);
    return static_cast<const ListAlarmRecommendationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub ListAlarmRecommendations \a response.
 */
void ListAlarmRecommendationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAlarmRecommendationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::ListAlarmRecommendationsResponsePrivate
 * \brief The ListAlarmRecommendationsResponsePrivate class provides private implementation for ListAlarmRecommendationsResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListAlarmRecommendationsResponsePrivate object with public implementation \a q.
 */
ListAlarmRecommendationsResponsePrivate::ListAlarmRecommendationsResponsePrivate(
    ListAlarmRecommendationsResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub ListAlarmRecommendations response element from \a xml.
 */
void ListAlarmRecommendationsResponsePrivate::parseListAlarmRecommendationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAlarmRecommendationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws
