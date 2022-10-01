// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "canceldeploymentjobresponse.h"
#include "canceldeploymentjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CancelDeploymentJobResponse
 * \brief The CancelDeploymentJobResponse class provides an interace for RoboMaker CancelDeploymentJob responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::cancelDeploymentJob
 */

/*!
 * Constructs a CancelDeploymentJobResponse object for \a reply to \a request, with parent \a parent.
 */
CancelDeploymentJobResponse::CancelDeploymentJobResponse(
        const CancelDeploymentJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new CancelDeploymentJobResponsePrivate(this), parent)
{
    setRequest(new CancelDeploymentJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelDeploymentJobRequest * CancelDeploymentJobResponse::request() const
{
    Q_D(const CancelDeploymentJobResponse);
    return static_cast<const CancelDeploymentJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker CancelDeploymentJob \a response.
 */
void CancelDeploymentJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelDeploymentJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::CancelDeploymentJobResponsePrivate
 * \brief The CancelDeploymentJobResponsePrivate class provides private implementation for CancelDeploymentJobResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CancelDeploymentJobResponsePrivate object with public implementation \a q.
 */
CancelDeploymentJobResponsePrivate::CancelDeploymentJobResponsePrivate(
    CancelDeploymentJobResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker CancelDeploymentJob response element from \a xml.
 */
void CancelDeploymentJobResponsePrivate::parseCancelDeploymentJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelDeploymentJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
