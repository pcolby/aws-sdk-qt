// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const GetFeedbackResponse);
    return static_cast<const GetFeedbackRequest *>(d->request);
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
