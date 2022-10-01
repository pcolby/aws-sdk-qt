// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stoptargetedsentimentdetectionjobresponse.h"
#include "stoptargetedsentimentdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StopTargetedSentimentDetectionJobResponse
 * \brief The StopTargetedSentimentDetectionJobResponse class provides an interace for Comprehend StopTargetedSentimentDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::stopTargetedSentimentDetectionJob
 */

/*!
 * Constructs a StopTargetedSentimentDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopTargetedSentimentDetectionJobResponse::StopTargetedSentimentDetectionJobResponse(
        const StopTargetedSentimentDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new StopTargetedSentimentDetectionJobResponsePrivate(this), parent)
{
    setRequest(new StopTargetedSentimentDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopTargetedSentimentDetectionJobRequest * StopTargetedSentimentDetectionJobResponse::request() const
{
    Q_D(const StopTargetedSentimentDetectionJobResponse);
    return static_cast<const StopTargetedSentimentDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend StopTargetedSentimentDetectionJob \a response.
 */
void StopTargetedSentimentDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopTargetedSentimentDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::StopTargetedSentimentDetectionJobResponsePrivate
 * \brief The StopTargetedSentimentDetectionJobResponsePrivate class provides private implementation for StopTargetedSentimentDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StopTargetedSentimentDetectionJobResponsePrivate object with public implementation \a q.
 */
StopTargetedSentimentDetectionJobResponsePrivate::StopTargetedSentimentDetectionJobResponsePrivate(
    StopTargetedSentimentDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend StopTargetedSentimentDetectionJob response element from \a xml.
 */
void StopTargetedSentimentDetectionJobResponsePrivate::parseStopTargetedSentimentDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopTargetedSentimentDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
