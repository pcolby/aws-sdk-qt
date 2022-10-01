// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createrobotapplicationresponse.h"
#include "createrobotapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateRobotApplicationResponse
 * \brief The CreateRobotApplicationResponse class provides an interace for RoboMaker CreateRobotApplication responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createRobotApplication
 */

/*!
 * Constructs a CreateRobotApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRobotApplicationResponse::CreateRobotApplicationResponse(
        const CreateRobotApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new CreateRobotApplicationResponsePrivate(this), parent)
{
    setRequest(new CreateRobotApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRobotApplicationRequest * CreateRobotApplicationResponse::request() const
{
    Q_D(const CreateRobotApplicationResponse);
    return static_cast<const CreateRobotApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker CreateRobotApplication \a response.
 */
void CreateRobotApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRobotApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::CreateRobotApplicationResponsePrivate
 * \brief The CreateRobotApplicationResponsePrivate class provides private implementation for CreateRobotApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateRobotApplicationResponsePrivate object with public implementation \a q.
 */
CreateRobotApplicationResponsePrivate::CreateRobotApplicationResponsePrivate(
    CreateRobotApplicationResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker CreateRobotApplication response element from \a xml.
 */
void CreateRobotApplicationResponsePrivate::parseCreateRobotApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRobotApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
