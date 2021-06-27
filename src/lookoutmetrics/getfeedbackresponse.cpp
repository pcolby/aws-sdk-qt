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

#include "getfeedbackresponse.h"
#include "getfeedbackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::GetFeedbackResponse
 * \brief The GetFeedbackResponse class provides an interace for LookoutMetrics GetFeedback responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::getFeedback
 */

/*!
 * Constructs a GetFeedbackResponse object for \a reply to \a request, with parent \a parent.
 */
GetFeedbackResponse::GetFeedbackResponse(
        const GetFeedbackRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new GetFeedbackResponsePrivate(this), parent)
{
    setRequest(new GetFeedbackRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFeedbackRequest * GetFeedbackResponse::request() const
{
    return static_cast<const GetFeedbackRequest *>(LookoutMetricsResponse::request());
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics GetFeedback \a response.
 */
void GetFeedbackResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFeedbackResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::GetFeedbackResponsePrivate
 * \brief The GetFeedbackResponsePrivate class provides private implementation for GetFeedbackResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a GetFeedbackResponsePrivate object with public implementation \a q.
 */
GetFeedbackResponsePrivate::GetFeedbackResponsePrivate(
    GetFeedbackResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics GetFeedback response element from \a xml.
 */
void GetFeedbackResponsePrivate::parseGetFeedbackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFeedbackResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
