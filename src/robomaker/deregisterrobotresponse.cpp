// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deregisterrobotresponse.h"
#include "deregisterrobotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DeregisterRobotResponse
 * \brief The DeregisterRobotResponse class provides an interace for RoboMaker DeregisterRobot responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::deregisterRobot
 */

/*!
 * Constructs a DeregisterRobotResponse object for \a reply to \a request, with parent \a parent.
 */
DeregisterRobotResponse::DeregisterRobotResponse(
        const DeregisterRobotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DeregisterRobotResponsePrivate(this), parent)
{
    setRequest(new DeregisterRobotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeregisterRobotRequest * DeregisterRobotResponse::request() const
{
    Q_D(const DeregisterRobotResponse);
    return static_cast<const DeregisterRobotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker DeregisterRobot \a response.
 */
void DeregisterRobotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeregisterRobotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DeregisterRobotResponsePrivate
 * \brief The DeregisterRobotResponsePrivate class provides private implementation for DeregisterRobotResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DeregisterRobotResponsePrivate object with public implementation \a q.
 */
DeregisterRobotResponsePrivate::DeregisterRobotResponsePrivate(
    DeregisterRobotResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DeregisterRobot response element from \a xml.
 */
void DeregisterRobotResponsePrivate::parseDeregisterRobotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterRobotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
