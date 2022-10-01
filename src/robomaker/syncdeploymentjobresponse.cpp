// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "syncdeploymentjobresponse.h"
#include "syncdeploymentjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::SyncDeploymentJobResponse
 * \brief The SyncDeploymentJobResponse class provides an interace for RoboMaker SyncDeploymentJob responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::syncDeploymentJob
 */

/*!
 * Constructs a SyncDeploymentJobResponse object for \a reply to \a request, with parent \a parent.
 */
SyncDeploymentJobResponse::SyncDeploymentJobResponse(
        const SyncDeploymentJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new SyncDeploymentJobResponsePrivate(this), parent)
{
    setRequest(new SyncDeploymentJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SyncDeploymentJobRequest * SyncDeploymentJobResponse::request() const
{
    Q_D(const SyncDeploymentJobResponse);
    return static_cast<const SyncDeploymentJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker SyncDeploymentJob \a response.
 */
void SyncDeploymentJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SyncDeploymentJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::SyncDeploymentJobResponsePrivate
 * \brief The SyncDeploymentJobResponsePrivate class provides private implementation for SyncDeploymentJobResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a SyncDeploymentJobResponsePrivate object with public implementation \a q.
 */
SyncDeploymentJobResponsePrivate::SyncDeploymentJobResponsePrivate(
    SyncDeploymentJobResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker SyncDeploymentJob response element from \a xml.
 */
void SyncDeploymentJobResponsePrivate::parseSyncDeploymentJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SyncDeploymentJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
