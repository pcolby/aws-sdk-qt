// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesimulationapplicationresponse.h"
#include "deletesimulationapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DeleteSimulationApplicationResponse
 * \brief The DeleteSimulationApplicationResponse class provides an interace for RoboMaker DeleteSimulationApplication responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::deleteSimulationApplication
 */

/*!
 * Constructs a DeleteSimulationApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSimulationApplicationResponse::DeleteSimulationApplicationResponse(
        const DeleteSimulationApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DeleteSimulationApplicationResponsePrivate(this), parent)
{
    setRequest(new DeleteSimulationApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSimulationApplicationRequest * DeleteSimulationApplicationResponse::request() const
{
    Q_D(const DeleteSimulationApplicationResponse);
    return static_cast<const DeleteSimulationApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker DeleteSimulationApplication \a response.
 */
void DeleteSimulationApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSimulationApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DeleteSimulationApplicationResponsePrivate
 * \brief The DeleteSimulationApplicationResponsePrivate class provides private implementation for DeleteSimulationApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DeleteSimulationApplicationResponsePrivate object with public implementation \a q.
 */
DeleteSimulationApplicationResponsePrivate::DeleteSimulationApplicationResponsePrivate(
    DeleteSimulationApplicationResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DeleteSimulationApplication response element from \a xml.
 */
void DeleteSimulationApplicationResponsePrivate::parseDeleteSimulationApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSimulationApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
