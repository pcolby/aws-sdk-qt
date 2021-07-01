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

#include "listworldgenerationjobsresponse.h"
#include "listworldgenerationjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListWorldGenerationJobsResponse
 * \brief The ListWorldGenerationJobsResponse class provides an interace for RoboMaker ListWorldGenerationJobs responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listWorldGenerationJobs
 */

/*!
 * Constructs a ListWorldGenerationJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListWorldGenerationJobsResponse::ListWorldGenerationJobsResponse(
        const ListWorldGenerationJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new ListWorldGenerationJobsResponsePrivate(this), parent)
{
    setRequest(new ListWorldGenerationJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWorldGenerationJobsRequest * ListWorldGenerationJobsResponse::request() const
{
    Q_D(const ListWorldGenerationJobsResponse);
    return static_cast<const ListWorldGenerationJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker ListWorldGenerationJobs \a response.
 */
void ListWorldGenerationJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWorldGenerationJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::ListWorldGenerationJobsResponsePrivate
 * \brief The ListWorldGenerationJobsResponsePrivate class provides private implementation for ListWorldGenerationJobsResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListWorldGenerationJobsResponsePrivate object with public implementation \a q.
 */
ListWorldGenerationJobsResponsePrivate::ListWorldGenerationJobsResponsePrivate(
    ListWorldGenerationJobsResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker ListWorldGenerationJobs response element from \a xml.
 */
void ListWorldGenerationJobsResponsePrivate::parseListWorldGenerationJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorldGenerationJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
