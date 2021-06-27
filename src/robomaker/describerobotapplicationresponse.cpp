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

#include "describerobotapplicationresponse.h"
#include "describerobotapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeRobotApplicationResponse
 * \brief The DescribeRobotApplicationResponse class provides an interace for RoboMaker DescribeRobotApplication responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeRobotApplication
 */

/*!
 * Constructs a DescribeRobotApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRobotApplicationResponse::DescribeRobotApplicationResponse(
        const DescribeRobotApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DescribeRobotApplicationResponsePrivate(this), parent)
{
    setRequest(new DescribeRobotApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRobotApplicationRequest * DescribeRobotApplicationResponse::request() const
{
    return static_cast<const DescribeRobotApplicationRequest *>(RoboMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful RoboMaker DescribeRobotApplication \a response.
 */
void DescribeRobotApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRobotApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DescribeRobotApplicationResponsePrivate
 * \brief The DescribeRobotApplicationResponsePrivate class provides private implementation for DescribeRobotApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeRobotApplicationResponsePrivate object with public implementation \a q.
 */
DescribeRobotApplicationResponsePrivate::DescribeRobotApplicationResponsePrivate(
    DescribeRobotApplicationResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DescribeRobotApplication response element from \a xml.
 */
void DescribeRobotApplicationResponsePrivate::parseDescribeRobotApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRobotApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
