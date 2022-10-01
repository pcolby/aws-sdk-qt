// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemetricsetresponse.h"
#include "updatemetricsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::UpdateMetricSetResponse
 * \brief The UpdateMetricSetResponse class provides an interace for LookoutMetrics UpdateMetricSet responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::updateMetricSet
 */

/*!
 * Constructs a UpdateMetricSetResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateMetricSetResponse::UpdateMetricSetResponse(
        const UpdateMetricSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new UpdateMetricSetResponsePrivate(this), parent)
{
    setRequest(new UpdateMetricSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateMetricSetRequest * UpdateMetricSetResponse::request() const
{
    Q_D(const UpdateMetricSetResponse);
    return static_cast<const UpdateMetricSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics UpdateMetricSet \a response.
 */
void UpdateMetricSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateMetricSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::UpdateMetricSetResponsePrivate
 * \brief The UpdateMetricSetResponsePrivate class provides private implementation for UpdateMetricSetResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a UpdateMetricSetResponsePrivate object with public implementation \a q.
 */
UpdateMetricSetResponsePrivate::UpdateMetricSetResponsePrivate(
    UpdateMetricSetResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics UpdateMetricSet response element from \a xml.
 */
void UpdateMetricSetResponsePrivate::parseUpdateMetricSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMetricSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
