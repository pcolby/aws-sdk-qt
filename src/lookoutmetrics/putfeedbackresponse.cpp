// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const PutFeedbackResponse);
    return static_cast<const PutFeedbackRequest *>(d->request);
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
