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

#include "putfeedbackresponse.h"
#include "putfeedbackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::PutFeedbackResponse
 * \brief The PutFeedbackResponse class provides an interace for LookoutMetrics PutFeedback responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::putFeedback
 */

/*!
 * Constructs a PutFeedbackResponse object for \a reply to \a request, with parent \a parent.
 */
PutFeedbackResponse::PutFeedbackResponse(
        const PutFeedbackRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new PutFeedbackResponsePrivate(this), parent)
{
    setRequest(new PutFeedbackRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutFeedbackRequest * PutFeedbackResponse::request() const
{
    return static_cast<const PutFeedbackRequest *>(LookoutMetricsResponse::request());
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics PutFeedback \a response.
 */
void PutFeedbackResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutFeedbackResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::PutFeedbackResponsePrivate
 * \brief The PutFeedbackResponsePrivate class provides private implementation for PutFeedbackResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a PutFeedbackResponsePrivate object with public implementation \a q.
 */
PutFeedbackResponsePrivate::PutFeedbackResponsePrivate(
    PutFeedbackResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics PutFeedback response element from \a xml.
 */
void PutFeedbackResponsePrivate::parsePutFeedbackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutFeedbackResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
