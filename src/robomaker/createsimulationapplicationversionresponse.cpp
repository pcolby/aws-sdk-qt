// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsimulationapplicationversionresponse.h"
#include "createsimulationapplicationversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateSimulationApplicationVersionResponse
 * \brief The CreateSimulationApplicationVersionResponse class provides an interace for RoboMaker CreateSimulationApplicationVersion responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createSimulationApplicationVersion
 */

/*!
 * Constructs a CreateSimulationApplicationVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSimulationApplicationVersionResponse::CreateSimulationApplicationVersionResponse(
        const CreateSimulationApplicationVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new CreateSimulationApplicationVersionResponsePrivate(this), parent)
{
    setRequest(new CreateSimulationApplicationVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSimulationApplicationVersionRequest * CreateSimulationApplicationVersionResponse::request() const
{
    Q_D(const CreateSimulationApplicationVersionResponse);
    return static_cast<const CreateSimulationApplicationVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker CreateSimulationApplicationVersion \a response.
 */
void CreateSimulationApplicationVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSimulationApplicationVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::CreateSimulationApplicationVersionResponsePrivate
 * \brief The CreateSimulationApplicationVersionResponsePrivate class provides private implementation for CreateSimulationApplicationVersionResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateSimulationApplicationVersionResponsePrivate object with public implementation \a q.
 */
CreateSimulationApplicationVersionResponsePrivate::CreateSimulationApplicationVersionResponsePrivate(
    CreateSimulationApplicationVersionResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker CreateSimulationApplicationVersion response element from \a xml.
 */
void CreateSimulationApplicationVersionResponsePrivate::parseCreateSimulationApplicationVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSimulationApplicationVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
