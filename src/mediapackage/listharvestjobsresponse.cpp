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

#include "listharvestjobsresponse.h"
#include "listharvestjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::ListHarvestJobsResponse
 * \brief The ListHarvestJobsResponse class provides an interace for MediaPackage ListHarvestJobs responses.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::listHarvestJobs
 */

/*!
 * Constructs a ListHarvestJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListHarvestJobsResponse::ListHarvestJobsResponse(
        const ListHarvestJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new ListHarvestJobsResponsePrivate(this), parent)
{
    setRequest(new ListHarvestJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListHarvestJobsRequest * ListHarvestJobsResponse::request() const
{
    Q_D(const ListHarvestJobsResponse);
    return static_cast<const ListHarvestJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackage ListHarvestJobs \a response.
 */
void ListHarvestJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListHarvestJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackage::ListHarvestJobsResponsePrivate
 * \brief The ListHarvestJobsResponsePrivate class provides private implementation for ListHarvestJobsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a ListHarvestJobsResponsePrivate object with public implementation \a q.
 */
ListHarvestJobsResponsePrivate::ListHarvestJobsResponsePrivate(
    ListHarvestJobsResponse * const q) : MediaPackageResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackage ListHarvestJobs response element from \a xml.
 */
void ListHarvestJobsResponsePrivate::parseListHarvestJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHarvestJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackage
} // namespace QtAws
