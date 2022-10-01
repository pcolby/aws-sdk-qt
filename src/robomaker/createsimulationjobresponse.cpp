// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsimulationjobresponse.h"
#include "createsimulationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateSimulationJobResponse
 * \brief The CreateSimulationJobResponse class provides an interace for RoboMaker CreateSimulationJob responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createSimulationJob
 */

/*!
 * Constructs a CreateSimulationJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSimulationJobResponse::CreateSimulationJobResponse(
        const CreateSimulationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new CreateSimulationJobResponsePrivate(this), parent)
{
    setRequest(new CreateSimulationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSimulationJobRequest * CreateSimulationJobResponse::request() const
{
    Q_D(const CreateSimulationJobResponse);
    return static_cast<const CreateSimulationJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker CreateSimulationJob \a response.
 */
void CreateSimulationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSimulationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::CreateSimulationJobResponsePrivate
 * \brief The CreateSimulationJobResponsePrivate class provides private implementation for CreateSimulationJobResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateSimulationJobResponsePrivate object with public implementation \a q.
 */
CreateSimulationJobResponsePrivate::CreateSimulationJobResponsePrivate(
    CreateSimulationJobResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker CreateSimulationJob response element from \a xml.
 */
void CreateSimulationJobResponsePrivate::parseCreateSimulationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSimulationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
