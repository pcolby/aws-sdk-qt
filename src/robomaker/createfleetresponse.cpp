// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfleetresponse.h"
#include "createfleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateFleetResponse
 * \brief The CreateFleetResponse class provides an interace for RoboMaker CreateFleet responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createFleet
 */

/*!
 * Constructs a CreateFleetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFleetResponse::CreateFleetResponse(
        const CreateFleetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new CreateFleetResponsePrivate(this), parent)
{
    setRequest(new CreateFleetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFleetRequest * CreateFleetResponse::request() const
{
    Q_D(const CreateFleetResponse);
    return static_cast<const CreateFleetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker CreateFleet \a response.
 */
void CreateFleetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFleetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::CreateFleetResponsePrivate
 * \brief The CreateFleetResponsePrivate class provides private implementation for CreateFleetResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateFleetResponsePrivate object with public implementation \a q.
 */
CreateFleetResponsePrivate::CreateFleetResponsePrivate(
    CreateFleetResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker CreateFleet response element from \a xml.
 */
void CreateFleetResponsePrivate::parseCreateFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFleetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
