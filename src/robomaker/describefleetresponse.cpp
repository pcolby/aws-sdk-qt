/*
    Copyright 2013-2020 Paul Colby

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

#include "describefleetresponse.h"
#include "describefleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeFleetResponse
 * \brief The DescribeFleetResponse class provides an interace for RoboMaker DescribeFleet responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeFleet
 */

/*!
 * Constructs a DescribeFleetResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFleetResponse::DescribeFleetResponse(
        const DescribeFleetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DescribeFleetResponsePrivate(this), parent)
{
    setRequest(new DescribeFleetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFleetRequest * DescribeFleetResponse::request() const
{
    Q_D(const DescribeFleetResponse);
    return static_cast<const DescribeFleetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker DescribeFleet \a response.
 */
void DescribeFleetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFleetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DescribeFleetResponsePrivate
 * \brief The DescribeFleetResponsePrivate class provides private implementation for DescribeFleetResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeFleetResponsePrivate object with public implementation \a q.
 */
DescribeFleetResponsePrivate::DescribeFleetResponsePrivate(
    DescribeFleetResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DescribeFleet response element from \a xml.
 */
void DescribeFleetResponsePrivate::parseDescribeFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFleetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
