// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stoppiientitiesdetectionjobresponse.h"
#include "stoppiientitiesdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StopPiiEntitiesDetectionJobResponse
 * \brief The StopPiiEntitiesDetectionJobResponse class provides an interace for Comprehend StopPiiEntitiesDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::stopPiiEntitiesDetectionJob
 */

/*!
 * Constructs a StopPiiEntitiesDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopPiiEntitiesDetectionJobResponse::StopPiiEntitiesDetectionJobResponse(
        const StopPiiEntitiesDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new StopPiiEntitiesDetectionJobResponsePrivate(this), parent)
{
    setRequest(new StopPiiEntitiesDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopPiiEntitiesDetectionJobRequest * StopPiiEntitiesDetectionJobResponse::request() const
{
    Q_D(const StopPiiEntitiesDetectionJobResponse);
    return static_cast<const StopPiiEntitiesDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend StopPiiEntitiesDetectionJob \a response.
 */
void StopPiiEntitiesDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopPiiEntitiesDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::StopPiiEntitiesDetectionJobResponsePrivate
 * \brief The StopPiiEntitiesDetectionJobResponsePrivate class provides private implementation for StopPiiEntitiesDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StopPiiEntitiesDetectionJobResponsePrivate object with public implementation \a q.
 */
StopPiiEntitiesDetectionJobResponsePrivate::StopPiiEntitiesDetectionJobResponsePrivate(
    StopPiiEntitiesDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend StopPiiEntitiesDetectionJob response element from \a xml.
 */
void StopPiiEntitiesDetectionJobResponsePrivate::parseStopPiiEntitiesDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopPiiEntitiesDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
