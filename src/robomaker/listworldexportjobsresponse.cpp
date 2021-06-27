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

#include "listworldexportjobsresponse.h"
#include "listworldexportjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListWorldExportJobsResponse
 * \brief The ListWorldExportJobsResponse class provides an interace for RoboMaker ListWorldExportJobs responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listWorldExportJobs
 */

/*!
 * Constructs a ListWorldExportJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListWorldExportJobsResponse::ListWorldExportJobsResponse(
        const ListWorldExportJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new ListWorldExportJobsResponsePrivate(this), parent)
{
    setRequest(new ListWorldExportJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWorldExportJobsRequest * ListWorldExportJobsResponse::request() const
{
    return static_cast<const ListWorldExportJobsRequest *>(RoboMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful RoboMaker ListWorldExportJobs \a response.
 */
void ListWorldExportJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWorldExportJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::ListWorldExportJobsResponsePrivate
 * \brief The ListWorldExportJobsResponsePrivate class provides private implementation for ListWorldExportJobsResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListWorldExportJobsResponsePrivate object with public implementation \a q.
 */
ListWorldExportJobsResponsePrivate::ListWorldExportJobsResponsePrivate(
    ListWorldExportJobsResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker ListWorldExportJobs response element from \a xml.
 */
void ListWorldExportJobsResponsePrivate::parseListWorldExportJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorldExportJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
