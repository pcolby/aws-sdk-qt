// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesimulationapplicationresponse.h"
#include "updatesimulationapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::UpdateSimulationApplicationResponse
 * \brief The UpdateSimulationApplicationResponse class provides an interace for RoboMaker UpdateSimulationApplication responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::updateSimulationApplication
 */

/*!
 * Constructs a UpdateSimulationApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSimulationApplicationResponse::UpdateSimulationApplicationResponse(
        const UpdateSimulationApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new UpdateSimulationApplicationResponsePrivate(this), parent)
{
    setRequest(new UpdateSimulationApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSimulationApplicationRequest * UpdateSimulationApplicationResponse::request() const
{
    Q_D(const UpdateSimulationApplicationResponse);
    return static_cast<const UpdateSimulationApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker UpdateSimulationApplication \a response.
 */
void UpdateSimulationApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSimulationApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::UpdateSimulationApplicationResponsePrivate
 * \brief The UpdateSimulationApplicationResponsePrivate class provides private implementation for UpdateSimulationApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a UpdateSimulationApplicationResponsePrivate object with public implementation \a q.
 */
UpdateSimulationApplicationResponsePrivate::UpdateSimulationApplicationResponsePrivate(
    UpdateSimulationApplicationResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker UpdateSimulationApplication response element from \a xml.
 */
void UpdateSimulationApplicationResponsePrivate::parseUpdateSimulationApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSimulationApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
