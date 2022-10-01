// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetargetedsentimentdetectionjobresponse.h"
#include "describetargetedsentimentdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribeTargetedSentimentDetectionJobResponse
 * \brief The DescribeTargetedSentimentDetectionJobResponse class provides an interace for Comprehend DescribeTargetedSentimentDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describeTargetedSentimentDetectionJob
 */

/*!
 * Constructs a DescribeTargetedSentimentDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTargetedSentimentDetectionJobResponse::DescribeTargetedSentimentDetectionJobResponse(
        const DescribeTargetedSentimentDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DescribeTargetedSentimentDetectionJobResponsePrivate(this), parent)
{
    setRequest(new DescribeTargetedSentimentDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTargetedSentimentDetectionJobRequest * DescribeTargetedSentimentDetectionJobResponse::request() const
{
    Q_D(const DescribeTargetedSentimentDetectionJobResponse);
    return static_cast<const DescribeTargetedSentimentDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend DescribeTargetedSentimentDetectionJob \a response.
 */
void DescribeTargetedSentimentDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTargetedSentimentDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::DescribeTargetedSentimentDetectionJobResponsePrivate
 * \brief The DescribeTargetedSentimentDetectionJobResponsePrivate class provides private implementation for DescribeTargetedSentimentDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribeTargetedSentimentDetectionJobResponsePrivate object with public implementation \a q.
 */
DescribeTargetedSentimentDetectionJobResponsePrivate::DescribeTargetedSentimentDetectionJobResponsePrivate(
    DescribeTargetedSentimentDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend DescribeTargetedSentimentDetectionJob response element from \a xml.
 */
void DescribeTargetedSentimentDetectionJobResponsePrivate::parseDescribeTargetedSentimentDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTargetedSentimentDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
