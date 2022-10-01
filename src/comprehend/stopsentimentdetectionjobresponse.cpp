// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopsentimentdetectionjobresponse.h"
#include "stopsentimentdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StopSentimentDetectionJobResponse
 * \brief The StopSentimentDetectionJobResponse class provides an interace for Comprehend StopSentimentDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::stopSentimentDetectionJob
 */

/*!
 * Constructs a StopSentimentDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopSentimentDetectionJobResponse::StopSentimentDetectionJobResponse(
        const StopSentimentDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new StopSentimentDetectionJobResponsePrivate(this), parent)
{
    setRequest(new StopSentimentDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopSentimentDetectionJobRequest * StopSentimentDetectionJobResponse::request() const
{
    Q_D(const StopSentimentDetectionJobResponse);
    return static_cast<const StopSentimentDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend StopSentimentDetectionJob \a response.
 */
void StopSentimentDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopSentimentDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::StopSentimentDetectionJobResponsePrivate
 * \brief The StopSentimentDetectionJobResponsePrivate class provides private implementation for StopSentimentDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StopSentimentDetectionJobResponsePrivate object with public implementation \a q.
 */
StopSentimentDetectionJobResponsePrivate::StopSentimentDetectionJobResponsePrivate(
    StopSentimentDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend StopSentimentDetectionJob response element from \a xml.
 */
void StopSentimentDetectionJobResponsePrivate::parseStopSentimentDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopSentimentDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
