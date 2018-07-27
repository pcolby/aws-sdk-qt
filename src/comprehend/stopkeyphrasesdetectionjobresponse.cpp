/*
    Copyright 2013-2018 Paul Colby

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

#include "stopkeyphrasesdetectionjobresponse.h"
#include "stopkeyphrasesdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StopKeyPhrasesDetectionJobResponse
 * \brief The StopKeyPhrasesDetectionJobResponse class provides an interace for Comprehend StopKeyPhrasesDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::stopKeyPhrasesDetectionJob
 */

/*!
 * Constructs a StopKeyPhrasesDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopKeyPhrasesDetectionJobResponse::StopKeyPhrasesDetectionJobResponse(
        const StopKeyPhrasesDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new StopKeyPhrasesDetectionJobResponsePrivate(this), parent)
{
    setRequest(new StopKeyPhrasesDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopKeyPhrasesDetectionJobRequest * StopKeyPhrasesDetectionJobResponse::request() const
{
    Q_D(const StopKeyPhrasesDetectionJobResponse);
    return static_cast<const StopKeyPhrasesDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend StopKeyPhrasesDetectionJob \a response.
 */
void StopKeyPhrasesDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopKeyPhrasesDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::StopKeyPhrasesDetectionJobResponsePrivate
 * \brief The StopKeyPhrasesDetectionJobResponsePrivate class provides private implementation for StopKeyPhrasesDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StopKeyPhrasesDetectionJobResponsePrivate object with public implementation \a q.
 */
StopKeyPhrasesDetectionJobResponsePrivate::StopKeyPhrasesDetectionJobResponsePrivate(
    StopKeyPhrasesDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend StopKeyPhrasesDetectionJob response element from \a xml.
 */
void StopKeyPhrasesDetectionJobResponsePrivate::parseStopKeyPhrasesDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopKeyPhrasesDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
