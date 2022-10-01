// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registerrobotresponse.h"
#include "registerrobotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::RegisterRobotResponse
 * \brief The RegisterRobotResponse class provides an interace for RoboMaker RegisterRobot responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::registerRobot
 */

/*!
 * Constructs a RegisterRobotResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterRobotResponse::RegisterRobotResponse(
        const RegisterRobotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new RegisterRobotResponsePrivate(this), parent)
{
    setRequest(new RegisterRobotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterRobotRequest * RegisterRobotResponse::request() const
{
    Q_D(const RegisterRobotResponse);
    return static_cast<const RegisterRobotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker RegisterRobot \a response.
 */
void RegisterRobotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RegisterRobotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::RegisterRobotResponsePrivate
 * \brief The RegisterRobotResponsePrivate class provides private implementation for RegisterRobotResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a RegisterRobotResponsePrivate object with public implementation \a q.
 */
RegisterRobotResponsePrivate::RegisterRobotResponsePrivate(
    RegisterRobotResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker RegisterRobot response element from \a xml.
 */
void RegisterRobotResponsePrivate::parseRegisterRobotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterRobotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
