// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatealertresponse.h"
#include "updatealertresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::UpdateAlertResponse
 * \brief The UpdateAlertResponse class provides an interace for LookoutMetrics UpdateAlert responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::updateAlert
 */

/*!
 * Constructs a UpdateAlertResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAlertResponse::UpdateAlertResponse(
        const UpdateAlertRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new UpdateAlertResponsePrivate(this), parent)
{
    setRequest(new UpdateAlertRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAlertRequest * UpdateAlertResponse::request() const
{
    Q_D(const UpdateAlertResponse);
    return static_cast<const UpdateAlertRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics UpdateAlert \a response.
 */
void UpdateAlertResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAlertResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::UpdateAlertResponsePrivate
 * \brief The UpdateAlertResponsePrivate class provides private implementation for UpdateAlertResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a UpdateAlertResponsePrivate object with public implementation \a q.
 */
UpdateAlertResponsePrivate::UpdateAlertResponsePrivate(
    UpdateAlertResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics UpdateAlert response element from \a xml.
 */
void UpdateAlertResponsePrivate::parseUpdateAlertResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAlertResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
