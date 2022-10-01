// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listanomalygrouprelatedmetricsresponse.h"
#include "listanomalygrouprelatedmetricsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::ListAnomalyGroupRelatedMetricsResponse
 * \brief The ListAnomalyGroupRelatedMetricsResponse class provides an interace for LookoutMetrics ListAnomalyGroupRelatedMetrics responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::listAnomalyGroupRelatedMetrics
 */

/*!
 * Constructs a ListAnomalyGroupRelatedMetricsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAnomalyGroupRelatedMetricsResponse::ListAnomalyGroupRelatedMetricsResponse(
        const ListAnomalyGroupRelatedMetricsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new ListAnomalyGroupRelatedMetricsResponsePrivate(this), parent)
{
    setRequest(new ListAnomalyGroupRelatedMetricsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAnomalyGroupRelatedMetricsRequest * ListAnomalyGroupRelatedMetricsResponse::request() const
{
    Q_D(const ListAnomalyGroupRelatedMetricsResponse);
    return static_cast<const ListAnomalyGroupRelatedMetricsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics ListAnomalyGroupRelatedMetrics \a response.
 */
void ListAnomalyGroupRelatedMetricsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAnomalyGroupRelatedMetricsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::ListAnomalyGroupRelatedMetricsResponsePrivate
 * \brief The ListAnomalyGroupRelatedMetricsResponsePrivate class provides private implementation for ListAnomalyGroupRelatedMetricsResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a ListAnomalyGroupRelatedMetricsResponsePrivate object with public implementation \a q.
 */
ListAnomalyGroupRelatedMetricsResponsePrivate::ListAnomalyGroupRelatedMetricsResponsePrivate(
    ListAnomalyGroupRelatedMetricsResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics ListAnomalyGroupRelatedMetrics response element from \a xml.
 */
void ListAnomalyGroupRelatedMetricsResponsePrivate::parseListAnomalyGroupRelatedMetricsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAnomalyGroupRelatedMetricsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
