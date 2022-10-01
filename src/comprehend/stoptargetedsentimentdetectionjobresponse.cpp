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
