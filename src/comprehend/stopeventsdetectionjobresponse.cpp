// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopeventsdetectionjobresponse.h"
#include "stopeventsdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StopEventsDetectionJobResponse
 * \brief The StopEventsDetectionJobResponse class provides an interace for Comprehend StopEventsDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::stopEventsDetectionJob
 */

/*!
 * Constructs a StopEventsDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopEventsDetectionJobResponse::StopEventsDetectionJobResponse(
        const StopEventsDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new StopEventsDetectionJobResponsePrivate(this), parent)
{
    setRequest(new StopEventsDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopEventsDetectionJobRequest * StopEventsDetectionJobResponse::request() const
{
    Q_D(const StopEventsDetectionJobResponse);
    return static_cast<const StopEventsDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend StopEventsDetectionJob \a response.
 */
void StopEventsDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopEventsDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::StopEventsDetectionJobResponsePrivate
 * \brief The StopEventsDetectionJobResponsePrivate class provides private implementation for StopEventsDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StopEventsDetectionJobResponsePrivate object with public implementation \a q.
 */
StopEventsDetectionJobResponsePrivate::StopEventsDetectionJobResponsePrivate(
    StopEventsDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend StopEventsDetectionJob response element from \a xml.
 */
void StopEventsDetectionJobResponsePrivate::parseStopEventsDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopEventsDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
