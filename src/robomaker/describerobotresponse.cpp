/*
    Copyright 2013-2021 Paul Colby

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

#include "describerobotresponse.h"
#include "describerobotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeRobotResponse
 * \brief The DescribeRobotResponse class provides an interace for RoboMaker DescribeRobot responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeRobot
 */

/*!
 * Constructs a DescribeRobotResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRobotResponse::DescribeRobotResponse(
        const DescribeRobotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DescribeRobotResponsePrivate(this), parent)
{
    setRequest(new DescribeRobotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRobotRequest * DescribeRobotResponse::request() const
{
    return static_cast<const DescribeRobotRequest *>(RoboMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful RoboMaker DescribeRobot \a response.
 */
void DescribeRobotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRobotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DescribeRobotResponsePrivate
 * \brief The DescribeRobotResponsePrivate class provides private implementation for DescribeRobotResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeRobotResponsePrivate object with public implementation \a q.
 */
DescribeRobotResponsePrivate::DescribeRobotResponsePrivate(
    DescribeRobotResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DescribeRobot response element from \a xml.
 */
void DescribeRobotResponsePrivate::parseDescribeRobotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRobotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
