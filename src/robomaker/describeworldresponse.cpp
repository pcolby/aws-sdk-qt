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

#include "describeworldresponse.h"
#include "describeworldresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeWorldResponse
 * \brief The DescribeWorldResponse class provides an interace for RoboMaker DescribeWorld responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeWorld
 */

/*!
 * Constructs a DescribeWorldResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWorldResponse::DescribeWorldResponse(
        const DescribeWorldRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DescribeWorldResponsePrivate(this), parent)
{
    setRequest(new DescribeWorldRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWorldRequest * DescribeWorldResponse::request() const
{
    Q_D(const DescribeWorldResponse);
    return static_cast<const DescribeWorldRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker DescribeWorld \a response.
 */
void DescribeWorldResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWorldResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DescribeWorldResponsePrivate
 * \brief The DescribeWorldResponsePrivate class provides private implementation for DescribeWorldResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeWorldResponsePrivate object with public implementation \a q.
 */
DescribeWorldResponsePrivate::DescribeWorldResponsePrivate(
    DescribeWorldResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DescribeWorld response element from \a xml.
 */
void DescribeWorldResponsePrivate::parseDescribeWorldResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorldResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
