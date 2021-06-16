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

#include "stopdominantlanguagedetectionjobresponse.h"
#include "stopdominantlanguagedetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StopDominantLanguageDetectionJobResponse
 * \brief The StopDominantLanguageDetectionJobResponse class provides an interace for Comprehend StopDominantLanguageDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::stopDominantLanguageDetectionJob
 */

/*!
 * Constructs a StopDominantLanguageDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopDominantLanguageDetectionJobResponse::StopDominantLanguageDetectionJobResponse(
        const StopDominantLanguageDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new StopDominantLanguageDetectionJobResponsePrivate(this), parent)
{
    setRequest(new StopDominantLanguageDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopDominantLanguageDetectionJobRequest * StopDominantLanguageDetectionJobResponse::request() const
{
    Q_D(const StopDominantLanguageDetectionJobResponse);
    return static_cast<const StopDominantLanguageDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend StopDominantLanguageDetectionJob \a response.
 */
void StopDominantLanguageDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopDominantLanguageDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::StopDominantLanguageDetectionJobResponsePrivate
 * \brief The StopDominantLanguageDetectionJobResponsePrivate class provides private implementation for StopDominantLanguageDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StopDominantLanguageDetectionJobResponsePrivate object with public implementation \a q.
 */
StopDominantLanguageDetectionJobResponsePrivate::StopDominantLanguageDetectionJobResponsePrivate(
    StopDominantLanguageDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend StopDominantLanguageDetectionJob response element from \a xml.
 */
void StopDominantLanguageDetectionJobResponsePrivate::parseStopDominantLanguageDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopDominantLanguageDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
