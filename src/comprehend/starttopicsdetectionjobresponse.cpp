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

#include "starttopicsdetectionjobresponse.h"
#include "starttopicsdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StartTopicsDetectionJobResponse
 * \brief The StartTopicsDetectionJobResponse class provides an interace for Comprehend StartTopicsDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::startTopicsDetectionJob
 */

/*!
 * Constructs a StartTopicsDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartTopicsDetectionJobResponse::StartTopicsDetectionJobResponse(
        const StartTopicsDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new StartTopicsDetectionJobResponsePrivate(this), parent)
{
    setRequest(new StartTopicsDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartTopicsDetectionJobRequest * StartTopicsDetectionJobResponse::request() const
{
    Q_D(const StartTopicsDetectionJobResponse);
    return static_cast<const StartTopicsDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend StartTopicsDetectionJob \a response.
 */
void StartTopicsDetectionJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartTopicsDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::StartTopicsDetectionJobResponsePrivate
 * \brief The StartTopicsDetectionJobResponsePrivate class provides private implementation for StartTopicsDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StartTopicsDetectionJobResponsePrivate object with public implementation \a q.
 */
StartTopicsDetectionJobResponsePrivate::StartTopicsDetectionJobResponsePrivate(
    StartTopicsDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend StartTopicsDetectionJob response element from \a xml.
 */
void StartTopicsDetectionJobResponsePrivate::parseStartTopicsDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartTopicsDetectionJobResponse"));
    /// @todo
}

} // namespace Comprehend
} // namespace QtAws
