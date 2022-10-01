// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startpiientitiesdetectionjobresponse.h"
#include "startpiientitiesdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StartPiiEntitiesDetectionJobResponse
 * \brief The StartPiiEntitiesDetectionJobResponse class provides an interace for Comprehend StartPiiEntitiesDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::startPiiEntitiesDetectionJob
 */

/*!
 * Constructs a StartPiiEntitiesDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartPiiEntitiesDetectionJobResponse::StartPiiEntitiesDetectionJobResponse(
        const StartPiiEntitiesDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new StartPiiEntitiesDetectionJobResponsePrivate(this), parent)
{
    setRequest(new StartPiiEntitiesDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartPiiEntitiesDetectionJobRequest * StartPiiEntitiesDetectionJobResponse::request() const
{
    Q_D(const StartPiiEntitiesDetectionJobResponse);
    return static_cast<const StartPiiEntitiesDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend StartPiiEntitiesDetectionJob \a response.
 */
void StartPiiEntitiesDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartPiiEntitiesDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::StartPiiEntitiesDetectionJobResponsePrivate
 * \brief The StartPiiEntitiesDetectionJobResponsePrivate class provides private implementation for StartPiiEntitiesDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StartPiiEntitiesDetectionJobResponsePrivate object with public implementation \a q.
 */
StartPiiEntitiesDetectionJobResponsePrivate::StartPiiEntitiesDetectionJobResponsePrivate(
    StartPiiEntitiesDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend StartPiiEntitiesDetectionJob response element from \a xml.
 */
void StartPiiEntitiesDetectionJobResponsePrivate::parseStartPiiEntitiesDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartPiiEntitiesDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
