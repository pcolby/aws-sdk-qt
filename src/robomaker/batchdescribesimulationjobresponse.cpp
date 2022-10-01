// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdescribesimulationjobresponse.h"
#include "batchdescribesimulationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::BatchDescribeSimulationJobResponse
 * \brief The BatchDescribeSimulationJobResponse class provides an interace for RoboMaker BatchDescribeSimulationJob responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::batchDescribeSimulationJob
 */

/*!
 * Constructs a BatchDescribeSimulationJobResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDescribeSimulationJobResponse::BatchDescribeSimulationJobResponse(
        const BatchDescribeSimulationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new BatchDescribeSimulationJobResponsePrivate(this), parent)
{
    setRequest(new BatchDescribeSimulationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDescribeSimulationJobRequest * BatchDescribeSimulationJobResponse::request() const
{
    Q_D(const BatchDescribeSimulationJobResponse);
    return static_cast<const BatchDescribeSimulationJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker BatchDescribeSimulationJob \a response.
 */
void BatchDescribeSimulationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDescribeSimulationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::BatchDescribeSimulationJobResponsePrivate
 * \brief The BatchDescribeSimulationJobResponsePrivate class provides private implementation for BatchDescribeSimulationJobResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a BatchDescribeSimulationJobResponsePrivate object with public implementation \a q.
 */
BatchDescribeSimulationJobResponsePrivate::BatchDescribeSimulationJobResponsePrivate(
    BatchDescribeSimulationJobResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker BatchDescribeSimulationJob response element from \a xml.
 */
void BatchDescribeSimulationJobResponsePrivate::parseBatchDescribeSimulationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDescribeSimulationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
