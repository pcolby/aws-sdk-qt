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
