// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesimulationjobresponse.h"
#include "describesimulationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeSimulationJobResponse
 * \brief The DescribeSimulationJobResponse class provides an interace for RoboMaker DescribeSimulationJob responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeSimulationJob
 */

/*!
 * Constructs a DescribeSimulationJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSimulationJobResponse::DescribeSimulationJobResponse(
        const DescribeSimulationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DescribeSimulationJobResponsePrivate(this), parent)
{
    setRequest(new DescribeSimulationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSimulationJobRequest * DescribeSimulationJobResponse::request() const
{
    Q_D(const DescribeSimulationJobResponse);
    return static_cast<const DescribeSimulationJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker DescribeSimulationJob \a response.
 */
void DescribeSimulationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSimulationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DescribeSimulationJobResponsePrivate
 * \brief The DescribeSimulationJobResponsePrivate class provides private implementation for DescribeSimulationJobResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeSimulationJobResponsePrivate object with public implementation \a q.
 */
DescribeSimulationJobResponsePrivate::DescribeSimulationJobResponsePrivate(
    DescribeSimulationJobResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DescribeSimulationJob response element from \a xml.
 */
void DescribeSimulationJobResponsePrivate::parseDescribeSimulationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSimulationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
