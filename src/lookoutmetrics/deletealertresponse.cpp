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

#include "deletealertresponse.h"
#include "deletealertresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::DeleteAlertResponse
 * \brief The DeleteAlertResponse class provides an interace for LookoutMetrics DeleteAlert responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::deleteAlert
 */

/*!
 * Constructs a DeleteAlertResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAlertResponse::DeleteAlertResponse(
        const DeleteAlertRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new DeleteAlertResponsePrivate(this), parent)
{
    setRequest(new DeleteAlertRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAlertRequest * DeleteAlertResponse::request() const
{
    Q_D(const DeleteAlertResponse);
    return static_cast<const DeleteAlertRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics DeleteAlert \a response.
 */
void DeleteAlertResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAlertResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::DeleteAlertResponsePrivate
 * \brief The DeleteAlertResponsePrivate class provides private implementation for DeleteAlertResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a DeleteAlertResponsePrivate object with public implementation \a q.
 */
DeleteAlertResponsePrivate::DeleteAlertResponsePrivate(
    DeleteAlertResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics DeleteAlert response element from \a xml.
 */
void DeleteAlertResponsePrivate::parseDeleteAlertResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAlertResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
