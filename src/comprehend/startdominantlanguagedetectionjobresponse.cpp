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

#include "startdominantlanguagedetectionjobresponse.h"
#include "startdominantlanguagedetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StartDominantLanguageDetectionJobResponse
 * \brief The StartDominantLanguageDetectionJobResponse class provides an interace for Comprehend StartDominantLanguageDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::startDominantLanguageDetectionJob
 */

/*!
 * Constructs a StartDominantLanguageDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartDominantLanguageDetectionJobResponse::StartDominantLanguageDetectionJobResponse(
        const StartDominantLanguageDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new StartDominantLanguageDetectionJobResponsePrivate(this), parent)
{
    setRequest(new StartDominantLanguageDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartDominantLanguageDetectionJobRequest * StartDominantLanguageDetectionJobResponse::request() const
{
    Q_D(const StartDominantLanguageDetectionJobResponse);
    return static_cast<const StartDominantLanguageDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend StartDominantLanguageDetectionJob \a response.
 */
void StartDominantLanguageDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartDominantLanguageDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::StartDominantLanguageDetectionJobResponsePrivate
 * \brief The StartDominantLanguageDetectionJobResponsePrivate class provides private implementation for StartDominantLanguageDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StartDominantLanguageDetectionJobResponsePrivate object with public implementation \a q.
 */
StartDominantLanguageDetectionJobResponsePrivate::StartDominantLanguageDetectionJobResponsePrivate(
    StartDominantLanguageDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend StartDominantLanguageDetectionJob response element from \a xml.
 */
void StartDominantLanguageDetectionJobResponsePrivate::parseStartDominantLanguageDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartDominantLanguageDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
