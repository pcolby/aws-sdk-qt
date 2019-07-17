/*
    Copyright 2013-2019 Paul Colby

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
