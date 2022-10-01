// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsimulationapplicationresponse.h"
#include "createsimulationapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateSimulationApplicationResponse
 * \brief The CreateSimulationApplicationResponse class provides an interace for RoboMaker CreateSimulationApplication responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createSimulationApplication
 */

/*!
 * Constructs a CreateSimulationApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSimulationApplicationResponse::CreateSimulationApplicationResponse(
        const CreateSimulationApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new CreateSimulationApplicationResponsePrivate(this), parent)
{
    setRequest(new CreateSimulationApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSimulationApplicationRequest * CreateSimulationApplicationResponse::request() const
{
    Q_D(const CreateSimulationApplicationResponse);
    return static_cast<const CreateSimulationApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker CreateSimulationApplication \a response.
 */
void CreateSimulationApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSimulationApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::CreateSimulationApplicationResponsePrivate
 * \brief The CreateSimulationApplicationResponsePrivate class provides private implementation for CreateSimulationApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateSimulationApplicationResponsePrivate object with public implementation \a q.
 */
CreateSimulationApplicationResponsePrivate::CreateSimulationApplicationResponsePrivate(
    CreateSimulationApplicationResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker CreateSimulationApplication response element from \a xml.
 */
void CreateSimulationApplicationResponsePrivate::parseCreateSimulationApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSimulationApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
