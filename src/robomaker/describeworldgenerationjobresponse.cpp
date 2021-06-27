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

#include "describeworldgenerationjobresponse.h"
#include "describeworldgenerationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeWorldGenerationJobResponse
 * \brief The DescribeWorldGenerationJobResponse class provides an interace for RoboMaker DescribeWorldGenerationJob responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeWorldGenerationJob
 */

/*!
 * Constructs a DescribeWorldGenerationJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWorldGenerationJobResponse::DescribeWorldGenerationJobResponse(
        const DescribeWorldGenerationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DescribeWorldGenerationJobResponsePrivate(this), parent)
{
    setRequest(new DescribeWorldGenerationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWorldGenerationJobRequest * DescribeWorldGenerationJobResponse::request() const
{
    return static_cast<const DescribeWorldGenerationJobRequest *>(RoboMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful RoboMaker DescribeWorldGenerationJob \a response.
 */
void DescribeWorldGenerationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWorldGenerationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DescribeWorldGenerationJobResponsePrivate
 * \brief The DescribeWorldGenerationJobResponsePrivate class provides private implementation for DescribeWorldGenerationJobResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeWorldGenerationJobResponsePrivate object with public implementation \a q.
 */
DescribeWorldGenerationJobResponsePrivate::DescribeWorldGenerationJobResponsePrivate(
    DescribeWorldGenerationJobResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DescribeWorldGenerationJob response element from \a xml.
 */
void DescribeWorldGenerationJobResponsePrivate::parseDescribeWorldGenerationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorldGenerationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
