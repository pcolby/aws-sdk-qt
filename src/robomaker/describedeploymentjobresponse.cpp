/*
    Copyright 2013-2019 Paul Colby

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

#include "describedeploymentjobresponse.h"
#include "describedeploymentjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeDeploymentJobResponse
 * \brief The DescribeDeploymentJobResponse class provides an interace for RoboMaker DescribeDeploymentJob responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeDeploymentJob
 */

/*!
 * Constructs a DescribeDeploymentJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDeploymentJobResponse::DescribeDeploymentJobResponse(
        const DescribeDeploymentJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DescribeDeploymentJobResponsePrivate(this), parent)
{
    setRequest(new DescribeDeploymentJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDeploymentJobRequest * DescribeDeploymentJobResponse::request() const
{
    Q_D(const DescribeDeploymentJobResponse);
    return static_cast<const DescribeDeploymentJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker DescribeDeploymentJob \a response.
 */
void DescribeDeploymentJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDeploymentJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DescribeDeploymentJobResponsePrivate
 * \brief The DescribeDeploymentJobResponsePrivate class provides private implementation for DescribeDeploymentJobResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeDeploymentJobResponsePrivate object with public implementation \a q.
 */
DescribeDeploymentJobResponsePrivate::DescribeDeploymentJobResponsePrivate(
    DescribeDeploymentJobResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DescribeDeploymentJob response element from \a xml.
 */
void DescribeDeploymentJobResponsePrivate::parseDescribeDeploymentJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDeploymentJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
