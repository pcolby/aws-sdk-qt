// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefleetresponse.h"
#include "deletefleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DeleteFleetResponse
 * \brief The DeleteFleetResponse class provides an interace for RoboMaker DeleteFleet responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::deleteFleet
 */

/*!
 * Constructs a DeleteFleetResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFleetResponse::DeleteFleetResponse(
        const DeleteFleetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DeleteFleetResponsePrivate(this), parent)
{
    setRequest(new DeleteFleetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFleetRequest * DeleteFleetResponse::request() const
{
    Q_D(const DeleteFleetResponse);
    return static_cast<const DeleteFleetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker DeleteFleet \a response.
 */
void DeleteFleetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFleetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DeleteFleetResponsePrivate
 * \brief The DeleteFleetResponsePrivate class provides private implementation for DeleteFleetResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DeleteFleetResponsePrivate object with public implementation \a q.
 */
DeleteFleetResponsePrivate::DeleteFleetResponsePrivate(
    DeleteFleetResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DeleteFleet response element from \a xml.
 */
void DeleteFleetResponsePrivate::parseDeleteFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFleetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
