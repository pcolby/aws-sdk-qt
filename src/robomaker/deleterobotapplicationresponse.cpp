// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterobotapplicationresponse.h"
#include "deleterobotapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DeleteRobotApplicationResponse
 * \brief The DeleteRobotApplicationResponse class provides an interace for RoboMaker DeleteRobotApplication responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::deleteRobotApplication
 */

/*!
 * Constructs a DeleteRobotApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRobotApplicationResponse::DeleteRobotApplicationResponse(
        const DeleteRobotApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DeleteRobotApplicationResponsePrivate(this), parent)
{
    setRequest(new DeleteRobotApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRobotApplicationRequest * DeleteRobotApplicationResponse::request() const
{
    Q_D(const DeleteRobotApplicationResponse);
    return static_cast<const DeleteRobotApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker DeleteRobotApplication \a response.
 */
void DeleteRobotApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRobotApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DeleteRobotApplicationResponsePrivate
 * \brief The DeleteRobotApplicationResponsePrivate class provides private implementation for DeleteRobotApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DeleteRobotApplicationResponsePrivate object with public implementation \a q.
 */
DeleteRobotApplicationResponsePrivate::DeleteRobotApplicationResponsePrivate(
    DeleteRobotApplicationResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DeleteRobotApplication response element from \a xml.
 */
void DeleteRobotApplicationResponsePrivate::parseDeleteRobotApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRobotApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
