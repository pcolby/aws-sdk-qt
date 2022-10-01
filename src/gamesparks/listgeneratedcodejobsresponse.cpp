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

#include "listgeneratedcodejobsresponse.h"
#include "listgeneratedcodejobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::ListGeneratedCodeJobsResponse
 * \brief The ListGeneratedCodeJobsResponse class provides an interace for GameSparks ListGeneratedCodeJobs responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::listGeneratedCodeJobs
 */

/*!
 * Constructs a ListGeneratedCodeJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListGeneratedCodeJobsResponse::ListGeneratedCodeJobsResponse(
        const ListGeneratedCodeJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new ListGeneratedCodeJobsResponsePrivate(this), parent)
{
    setRequest(new ListGeneratedCodeJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGeneratedCodeJobsRequest * ListGeneratedCodeJobsResponse::request() const
{
    Q_D(const ListGeneratedCodeJobsResponse);
    return static_cast<const ListGeneratedCodeJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks ListGeneratedCodeJobs \a response.
 */
void ListGeneratedCodeJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListGeneratedCodeJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::ListGeneratedCodeJobsResponsePrivate
 * \brief The ListGeneratedCodeJobsResponsePrivate class provides private implementation for ListGeneratedCodeJobsResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a ListGeneratedCodeJobsResponsePrivate object with public implementation \a q.
 */
ListGeneratedCodeJobsResponsePrivate::ListGeneratedCodeJobsResponsePrivate(
    ListGeneratedCodeJobsResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks ListGeneratedCodeJobs response element from \a xml.
 */
void ListGeneratedCodeJobsResponsePrivate::parseListGeneratedCodeJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGeneratedCodeJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
