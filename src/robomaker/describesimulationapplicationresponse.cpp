/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  his section provides documentation for the AWS RoboMaker API
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
