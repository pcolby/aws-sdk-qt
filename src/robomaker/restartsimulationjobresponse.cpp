// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "restartsimulationjobresponse.h"
#include "restartsimulationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::RestartSimulationJobResponse
 * \brief The RestartSimulationJobResponse class provides an interace for RoboMaker RestartSimulationJob responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::restartSimulationJob
 */

/*!
 * Constructs a RestartSimulationJobResponse object for \a reply to \a request, with parent \a parent.
 */
RestartSimulationJobResponse::RestartSimulationJobResponse(
        const RestartSimulationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new RestartSimulationJobResponsePrivate(this), parent)
{
    setRequest(new RestartSimulationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RestartSimulationJobRequest * RestartSimulationJobResponse::request() const
{
    Q_D(const RestartSimulationJobResponse);
    return static_cast<const RestartSimulationJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker RestartSimulationJob \a response.
 */
void RestartSimulationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RestartSimulationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::RestartSimulationJobResponsePrivate
 * \brief The RestartSimulationJobResponsePrivate class provides private implementation for RestartSimulationJobResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a RestartSimulationJobResponsePrivate object with public implementation \a q.
 */
RestartSimulationJobResponsePrivate::RestartSimulationJobResponsePrivate(
    RestartSimulationJobResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker RestartSimulationJob response element from \a xml.
 */
void RestartSimulationJobResponsePrivate::parseRestartSimulationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestartSimulationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
