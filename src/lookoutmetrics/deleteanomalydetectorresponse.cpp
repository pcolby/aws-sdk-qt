// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteanomalydetectorresponse.h"
#include "deleteanomalydetectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::DeleteAnomalyDetectorResponse
 * \brief The DeleteAnomalyDetectorResponse class provides an interace for LookoutMetrics DeleteAnomalyDetector responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::deleteAnomalyDetector
 */

/*!
 * Constructs a DeleteAnomalyDetectorResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAnomalyDetectorResponse::DeleteAnomalyDetectorResponse(
        const DeleteAnomalyDetectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new DeleteAnomalyDetectorResponsePrivate(this), parent)
{
    setRequest(new DeleteAnomalyDetectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAnomalyDetectorRequest * DeleteAnomalyDetectorResponse::request() const
{
    Q_D(const DeleteAnomalyDetectorResponse);
    return static_cast<const DeleteAnomalyDetectorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics DeleteAnomalyDetector \a response.
 */
void DeleteAnomalyDetectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAnomalyDetectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::DeleteAnomalyDetectorResponsePrivate
 * \brief The DeleteAnomalyDetectorResponsePrivate class provides private implementation for DeleteAnomalyDetectorResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a DeleteAnomalyDetectorResponsePrivate object with public implementation \a q.
 */
DeleteAnomalyDetectorResponsePrivate::DeleteAnomalyDetectorResponsePrivate(
    DeleteAnomalyDetectorResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics DeleteAnomalyDetector response element from \a xml.
 */
void DeleteAnomalyDetectorResponsePrivate::parseDeleteAnomalyDetectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAnomalyDetectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
