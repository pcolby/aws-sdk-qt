/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
