// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listanomalydetectorsresponse.h"
#include "listanomalydetectorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::ListAnomalyDetectorsResponse
 * \brief The ListAnomalyDetectorsResponse class provides an interace for LookoutMetrics ListAnomalyDetectors responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::listAnomalyDetectors
 */

/*!
 * Constructs a ListAnomalyDetectorsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAnomalyDetectorsResponse::ListAnomalyDetectorsResponse(
        const ListAnomalyDetectorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new ListAnomalyDetectorsResponsePrivate(this), parent)
{
    setRequest(new ListAnomalyDetectorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAnomalyDetectorsRequest * ListAnomalyDetectorsResponse::request() const
{
    Q_D(const ListAnomalyDetectorsResponse);
    return static_cast<const ListAnomalyDetectorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics ListAnomalyDetectors \a response.
 */
void ListAnomalyDetectorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAnomalyDetectorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::ListAnomalyDetectorsResponsePrivate
 * \brief The ListAnomalyDetectorsResponsePrivate class provides private implementation for ListAnomalyDetectorsResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a ListAnomalyDetectorsResponsePrivate object with public implementation \a q.
 */
ListAnomalyDetectorsResponsePrivate::ListAnomalyDetectorsResponsePrivate(
    ListAnomalyDetectorsResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics ListAnomalyDetectors response element from \a xml.
 */
void ListAnomalyDetectorsResponsePrivate::parseListAnomalyDetectorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAnomalyDetectorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
