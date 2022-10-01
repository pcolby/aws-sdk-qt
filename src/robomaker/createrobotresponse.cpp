// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createrobotresponse.h"
#include "createrobotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateRobotResponse
 * \brief The CreateRobotResponse class provides an interace for RoboMaker CreateRobot responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createRobot
 */

/*!
 * Constructs a CreateRobotResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRobotResponse::CreateRobotResponse(
        const CreateRobotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new CreateRobotResponsePrivate(this), parent)
{
    setRequest(new CreateRobotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRobotRequest * CreateRobotResponse::request() const
{
    Q_D(const CreateRobotResponse);
    return static_cast<const CreateRobotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker CreateRobot \a response.
 */
void CreateRobotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRobotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::CreateRobotResponsePrivate
 * \brief The CreateRobotResponsePrivate class provides private implementation for CreateRobotResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateRobotResponsePrivate object with public implementation \a q.
 */
CreateRobotResponsePrivate::CreateRobotResponsePrivate(
    CreateRobotResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker CreateRobot response element from \a xml.
 */
void CreateRobotResponsePrivate::parseCreateRobotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRobotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
