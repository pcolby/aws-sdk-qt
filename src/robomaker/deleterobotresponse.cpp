// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterobotresponse.h"
#include "deleterobotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DeleteRobotResponse
 * \brief The DeleteRobotResponse class provides an interace for RoboMaker DeleteRobot responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::deleteRobot
 */

/*!
 * Constructs a DeleteRobotResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRobotResponse::DeleteRobotResponse(
        const DeleteRobotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DeleteRobotResponsePrivate(this), parent)
{
    setRequest(new DeleteRobotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRobotRequest * DeleteRobotResponse::request() const
{
    Q_D(const DeleteRobotResponse);
    return static_cast<const DeleteRobotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker DeleteRobot \a response.
 */
void DeleteRobotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRobotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DeleteRobotResponsePrivate
 * \brief The DeleteRobotResponsePrivate class provides private implementation for DeleteRobotResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DeleteRobotResponsePrivate object with public implementation \a q.
 */
DeleteRobotResponsePrivate::DeleteRobotResponsePrivate(
    DeleteRobotResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DeleteRobot response element from \a xml.
 */
void DeleteRobotResponsePrivate::parseDeleteRobotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRobotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
