// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmetricsetsresponse.h"
#include "listmetricsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::ListMetricSetsResponse
 * \brief The ListMetricSetsResponse class provides an interace for LookoutMetrics ListMetricSets responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::listMetricSets
 */

/*!
 * Constructs a ListMetricSetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListMetricSetsResponse::ListMetricSetsResponse(
        const ListMetricSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new ListMetricSetsResponsePrivate(this), parent)
{
    setRequest(new ListMetricSetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMetricSetsRequest * ListMetricSetsResponse::request() const
{
    Q_D(const ListMetricSetsResponse);
    return static_cast<const ListMetricSetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics ListMetricSets \a response.
 */
void ListMetricSetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMetricSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::ListMetricSetsResponsePrivate
 * \brief The ListMetricSetsResponsePrivate class provides private implementation for ListMetricSetsResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a ListMetricSetsResponsePrivate object with public implementation \a q.
 */
ListMetricSetsResponsePrivate::ListMetricSetsResponsePrivate(
    ListMetricSetsResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics ListMetricSets response element from \a xml.
 */
void ListMetricSetsResponsePrivate::parseListMetricSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMetricSetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
