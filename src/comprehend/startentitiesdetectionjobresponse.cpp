// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startentitiesdetectionjobresponse.h"
#include "startentitiesdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StartEntitiesDetectionJobResponse
 * \brief The StartEntitiesDetectionJobResponse class provides an interace for Comprehend StartEntitiesDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::startEntitiesDetectionJob
 */

/*!
 * Constructs a StartEntitiesDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartEntitiesDetectionJobResponse::StartEntitiesDetectionJobResponse(
        const StartEntitiesDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new StartEntitiesDetectionJobResponsePrivate(this), parent)
{
    setRequest(new StartEntitiesDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartEntitiesDetectionJobRequest * StartEntitiesDetectionJobResponse::request() const
{
    Q_D(const StartEntitiesDetectionJobResponse);
    return static_cast<const StartEntitiesDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend StartEntitiesDetectionJob \a response.
 */
void StartEntitiesDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartEntitiesDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::StartEntitiesDetectionJobResponsePrivate
 * \brief The StartEntitiesDetectionJobResponsePrivate class provides private implementation for StartEntitiesDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StartEntitiesDetectionJobResponsePrivate object with public implementation \a q.
 */
StartEntitiesDetectionJobResponsePrivate::StartEntitiesDetectionJobResponsePrivate(
    StartEntitiesDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend StartEntitiesDetectionJob response element from \a xml.
 */
void StartEntitiesDetectionJobResponsePrivate::parseStartEntitiesDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartEntitiesDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
