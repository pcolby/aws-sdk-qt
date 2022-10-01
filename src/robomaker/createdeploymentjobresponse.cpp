// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdeploymentjobresponse.h"
#include "createdeploymentjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateDeploymentJobResponse
 * \brief The CreateDeploymentJobResponse class provides an interace for RoboMaker CreateDeploymentJob responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createDeploymentJob
 */

/*!
 * Constructs a CreateDeploymentJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDeploymentJobResponse::CreateDeploymentJobResponse(
        const CreateDeploymentJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new CreateDeploymentJobResponsePrivate(this), parent)
{
    setRequest(new CreateDeploymentJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDeploymentJobRequest * CreateDeploymentJobResponse::request() const
{
    Q_D(const CreateDeploymentJobResponse);
    return static_cast<const CreateDeploymentJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker CreateDeploymentJob \a response.
 */
void CreateDeploymentJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDeploymentJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::CreateDeploymentJobResponsePrivate
 * \brief The CreateDeploymentJobResponsePrivate class provides private implementation for CreateDeploymentJobResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateDeploymentJobResponsePrivate object with public implementation \a q.
 */
CreateDeploymentJobResponsePrivate::CreateDeploymentJobResponsePrivate(
    CreateDeploymentJobResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker CreateDeploymentJob response element from \a xml.
 */
void CreateDeploymentJobResponsePrivate::parseCreateDeploymentJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDeploymentJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
