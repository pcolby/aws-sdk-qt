// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listalertsresponse.h"
#include "listalertsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::ListAlertsResponse
 * \brief The ListAlertsResponse class provides an interace for LookoutMetrics ListAlerts responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::listAlerts
 */

/*!
 * Constructs a ListAlertsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAlertsResponse::ListAlertsResponse(
        const ListAlertsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new ListAlertsResponsePrivate(this), parent)
{
    setRequest(new ListAlertsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAlertsRequest * ListAlertsResponse::request() const
{
    Q_D(const ListAlertsResponse);
    return static_cast<const ListAlertsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics ListAlerts \a response.
 */
void ListAlertsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAlertsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::ListAlertsResponsePrivate
 * \brief The ListAlertsResponsePrivate class provides private implementation for ListAlertsResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a ListAlertsResponsePrivate object with public implementation \a q.
 */
ListAlertsResponsePrivate::ListAlertsResponsePrivate(
    ListAlertsResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics ListAlerts response element from \a xml.
 */
void ListAlertsResponsePrivate::parseListAlertsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAlertsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
