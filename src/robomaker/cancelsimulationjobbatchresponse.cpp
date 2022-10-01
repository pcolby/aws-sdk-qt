// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelsimulationjobbatchresponse.h"
#include "cancelsimulationjobbatchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CancelSimulationJobBatchResponse
 * \brief The CancelSimulationJobBatchResponse class provides an interace for RoboMaker CancelSimulationJobBatch responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::cancelSimulationJobBatch
 */

/*!
 * Constructs a CancelSimulationJobBatchResponse object for \a reply to \a request, with parent \a parent.
 */
CancelSimulationJobBatchResponse::CancelSimulationJobBatchResponse(
        const CancelSimulationJobBatchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new CancelSimulationJobBatchResponsePrivate(this), parent)
{
    setRequest(new CancelSimulationJobBatchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelSimulationJobBatchRequest * CancelSimulationJobBatchResponse::request() const
{
    Q_D(const CancelSimulationJobBatchResponse);
    return static_cast<const CancelSimulationJobBatchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker CancelSimulationJobBatch \a response.
 */
void CancelSimulationJobBatchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelSimulationJobBatchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::CancelSimulationJobBatchResponsePrivate
 * \brief The CancelSimulationJobBatchResponsePrivate class provides private implementation for CancelSimulationJobBatchResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CancelSimulationJobBatchResponsePrivate object with public implementation \a q.
 */
CancelSimulationJobBatchResponsePrivate::CancelSimulationJobBatchResponsePrivate(
    CancelSimulationJobBatchResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker CancelSimulationJobBatch response element from \a xml.
 */
void CancelSimulationJobBatchResponsePrivate::parseCancelSimulationJobBatchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelSimulationJobBatchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
