// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesimulationapplicationresponse.h"
#include "describesimulationapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeSimulationApplicationResponse
 * \brief The DescribeSimulationApplicationResponse class provides an interace for RoboMaker DescribeSimulationApplication responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeSimulationApplication
 */

/*!
 * Constructs a DescribeSimulationApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSimulationApplicationResponse::DescribeSimulationApplicationResponse(
        const DescribeSimulationApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DescribeSimulationApplicationResponsePrivate(this), parent)
{
    setRequest(new DescribeSimulationApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSimulationApplicationRequest * DescribeSimulationApplicationResponse::request() const
{
    Q_D(const DescribeSimulationApplicationResponse);
    return static_cast<const DescribeSimulationApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker DescribeSimulationApplication \a response.
 */
void DescribeSimulationApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSimulationApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DescribeSimulationApplicationResponsePrivate
 * \brief The DescribeSimulationApplicationResponsePrivate class provides private implementation for DescribeSimulationApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeSimulationApplicationResponsePrivate object with public implementation \a q.
 */
DescribeSimulationApplicationResponsePrivate::DescribeSimulationApplicationResponsePrivate(
    DescribeSimulationApplicationResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DescribeSimulationApplication response element from \a xml.
 */
void DescribeSimulationApplicationResponsePrivate::parseDescribeSimulationApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSimulationApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
