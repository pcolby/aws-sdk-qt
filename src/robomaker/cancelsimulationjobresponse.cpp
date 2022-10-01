// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelsimulationjobresponse.h"
#include "cancelsimulationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CancelSimulationJobResponse
 * \brief The CancelSimulationJobResponse class provides an interace for RoboMaker CancelSimulationJob responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::cancelSimulationJob
 */

/*!
 * Constructs a CancelSimulationJobResponse object for \a reply to \a request, with parent \a parent.
 */
CancelSimulationJobResponse::CancelSimulationJobResponse(
        const CancelSimulationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new CancelSimulationJobResponsePrivate(this), parent)
{
    setRequest(new CancelSimulationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelSimulationJobRequest * CancelSimulationJobResponse::request() const
{
    Q_D(const CancelSimulationJobResponse);
    return static_cast<const CancelSimulationJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker CancelSimulationJob \a response.
 */
void CancelSimulationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelSimulationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::CancelSimulationJobResponsePrivate
 * \brief The CancelSimulationJobResponsePrivate class provides private implementation for CancelSimulationJobResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CancelSimulationJobResponsePrivate object with public implementation \a q.
 */
CancelSimulationJobResponsePrivate::CancelSimulationJobResponsePrivate(
    CancelSimulationJobResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker CancelSimulationJob response element from \a xml.
 */
void CancelSimulationJobResponsePrivate::parseCancelSimulationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelSimulationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
