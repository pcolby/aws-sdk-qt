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

#include "listdeploymentjobsresponse.h"
#include "listdeploymentjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListDeploymentJobsResponse
 * \brief The ListDeploymentJobsResponse class provides an interace for RoboMaker ListDeploymentJobs responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  his section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listDeploymentJobs
 */

/*!
 * Constructs a ListDeploymentJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDeploymentJobsResponse::ListDeploymentJobsResponse(
        const ListDeploymentJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new ListDeploymentJobsResponsePrivate(this), parent)
{
    setRequest(new ListDeploymentJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDeploymentJobsRequest * ListDeploymentJobsResponse::request() const
{
    Q_D(const ListDeploymentJobsResponse);
    return static_cast<const ListDeploymentJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker ListDeploymentJobs \a response.
 */
void ListDeploymentJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDeploymentJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::ListDeploymentJobsResponsePrivate
 * \brief The ListDeploymentJobsResponsePrivate class provides private implementation for ListDeploymentJobsResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListDeploymentJobsResponsePrivate object with public implementation \a q.
 */
ListDeploymentJobsResponsePrivate::ListDeploymentJobsResponsePrivate(
    ListDeploymentJobsResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker ListDeploymentJobs response element from \a xml.
 */
void ListDeploymentJobsResponsePrivate::parseListDeploymentJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeploymentJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
