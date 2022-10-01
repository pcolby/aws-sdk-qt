// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "starttargetedsentimentdetectionjobresponse.h"
#include "starttargetedsentimentdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StartTargetedSentimentDetectionJobResponse
 * \brief The StartTargetedSentimentDetectionJobResponse class provides an interace for Comprehend StartTargetedSentimentDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::startTargetedSentimentDetectionJob
 */

/*!
 * Constructs a StartTargetedSentimentDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartTargetedSentimentDetectionJobResponse::StartTargetedSentimentDetectionJobResponse(
        const StartTargetedSentimentDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new StartTargetedSentimentDetectionJobResponsePrivate(this), parent)
{
    setRequest(new StartTargetedSentimentDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartTargetedSentimentDetectionJobRequest * StartTargetedSentimentDetectionJobResponse::request() const
{
    Q_D(const StartTargetedSentimentDetectionJobResponse);
    return static_cast<const StartTargetedSentimentDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend StartTargetedSentimentDetectionJob \a response.
 */
void StartTargetedSentimentDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartTargetedSentimentDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::StartTargetedSentimentDetectionJobResponsePrivate
 * \brief The StartTargetedSentimentDetectionJobResponsePrivate class provides private implementation for StartTargetedSentimentDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StartTargetedSentimentDetectionJobResponsePrivate object with public implementation \a q.
 */
StartTargetedSentimentDetectionJobResponsePrivate::StartTargetedSentimentDetectionJobResponsePrivate(
    StartTargetedSentimentDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend StartTargetedSentimentDetectionJob response element from \a xml.
 */
void StartTargetedSentimentDetectionJobResponsePrivate::parseStartTargetedSentimentDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartTargetedSentimentDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
