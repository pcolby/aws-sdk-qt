/*
    Copyright 2013-2020 Paul Colby

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

#include "startsentimentdetectionjobresponse.h"
#include "startsentimentdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StartSentimentDetectionJobResponse
 * \brief The StartSentimentDetectionJobResponse class provides an interace for Comprehend StartSentimentDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::startSentimentDetectionJob
 */

/*!
 * Constructs a StartSentimentDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartSentimentDetectionJobResponse::StartSentimentDetectionJobResponse(
        const StartSentimentDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new StartSentimentDetectionJobResponsePrivate(this), parent)
{
    setRequest(new StartSentimentDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartSentimentDetectionJobRequest * StartSentimentDetectionJobResponse::request() const
{
    Q_D(const StartSentimentDetectionJobResponse);
    return static_cast<const StartSentimentDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend StartSentimentDetectionJob \a response.
 */
void StartSentimentDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartSentimentDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::StartSentimentDetectionJobResponsePrivate
 * \brief The StartSentimentDetectionJobResponsePrivate class provides private implementation for StartSentimentDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StartSentimentDetectionJobResponsePrivate object with public implementation \a q.
 */
StartSentimentDetectionJobResponsePrivate::StartSentimentDetectionJobResponsePrivate(
    StartSentimentDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend StartSentimentDetectionJob response element from \a xml.
 */
void StartSentimentDetectionJobResponsePrivate::parseStartSentimentDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartSentimentDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
