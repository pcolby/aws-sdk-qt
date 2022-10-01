// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "starteventsdetectionjobresponse.h"
#include "starteventsdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StartEventsDetectionJobResponse
 * \brief The StartEventsDetectionJobResponse class provides an interace for Comprehend StartEventsDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::startEventsDetectionJob
 */

/*!
 * Constructs a StartEventsDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartEventsDetectionJobResponse::StartEventsDetectionJobResponse(
        const StartEventsDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new StartEventsDetectionJobResponsePrivate(this), parent)
{
    setRequest(new StartEventsDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartEventsDetectionJobRequest * StartEventsDetectionJobResponse::request() const
{
    Q_D(const StartEventsDetectionJobResponse);
    return static_cast<const StartEventsDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend StartEventsDetectionJob \a response.
 */
void StartEventsDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartEventsDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::StartEventsDetectionJobResponsePrivate
 * \brief The StartEventsDetectionJobResponsePrivate class provides private implementation for StartEventsDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StartEventsDetectionJobResponsePrivate object with public implementation \a q.
 */
StartEventsDetectionJobResponsePrivate::StartEventsDetectionJobResponsePrivate(
    StartEventsDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend StartEventsDetectionJob response element from \a xml.
 */
void StartEventsDetectionJobResponsePrivate::parseStartEventsDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartEventsDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
