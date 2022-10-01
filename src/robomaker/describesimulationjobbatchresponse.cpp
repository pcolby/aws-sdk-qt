// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesimulationjobbatchresponse.h"
#include "describesimulationjobbatchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeSimulationJobBatchResponse
 * \brief The DescribeSimulationJobBatchResponse class provides an interace for RoboMaker DescribeSimulationJobBatch responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeSimulationJobBatch
 */

/*!
 * Constructs a DescribeSimulationJobBatchResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSimulationJobBatchResponse::DescribeSimulationJobBatchResponse(
        const DescribeSimulationJobBatchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DescribeSimulationJobBatchResponsePrivate(this), parent)
{
    setRequest(new DescribeSimulationJobBatchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSimulationJobBatchRequest * DescribeSimulationJobBatchResponse::request() const
{
    Q_D(const DescribeSimulationJobBatchResponse);
    return static_cast<const DescribeSimulationJobBatchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker DescribeSimulationJobBatch \a response.
 */
void DescribeSimulationJobBatchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSimulationJobBatchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DescribeSimulationJobBatchResponsePrivate
 * \brief The DescribeSimulationJobBatchResponsePrivate class provides private implementation for DescribeSimulationJobBatchResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeSimulationJobBatchResponsePrivate object with public implementation \a q.
 */
DescribeSimulationJobBatchResponsePrivate::DescribeSimulationJobBatchResponsePrivate(
    DescribeSimulationJobBatchResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DescribeSimulationJobBatch response element from \a xml.
 */
void DescribeSimulationJobBatchResponsePrivate::parseDescribeSimulationJobBatchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSimulationJobBatchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
