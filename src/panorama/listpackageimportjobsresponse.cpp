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

#include "listpackageimportjobsresponse.h"
#include "listpackageimportjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::ListPackageImportJobsResponse
 * \brief The ListPackageImportJobsResponse class provides an interace for Panorama ListPackageImportJobs responses.
 *
 * \inmodule QtAwsPanorama
 *
 *  <fullname>AWS Panorama</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Panorama API Reference</i>. For an introduction to the service, see <a
 *  href="https://docs.aws.amazon.com/panorama/latest/dev/panorama-welcome.html">What is AWS Panorama?</a> in the <i>AWS
 *  Panorama Developer
 *
 * \sa PanoramaClient::listPackageImportJobs
 */

/*!
 * Constructs a ListPackageImportJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPackageImportJobsResponse::ListPackageImportJobsResponse(
        const ListPackageImportJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new ListPackageImportJobsResponsePrivate(this), parent)
{
    setRequest(new ListPackageImportJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPackageImportJobsRequest * ListPackageImportJobsResponse::request() const
{
    Q_D(const ListPackageImportJobsResponse);
    return static_cast<const ListPackageImportJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama ListPackageImportJobs \a response.
 */
void ListPackageImportJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPackageImportJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::ListPackageImportJobsResponsePrivate
 * \brief The ListPackageImportJobsResponsePrivate class provides private implementation for ListPackageImportJobsResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a ListPackageImportJobsResponsePrivate object with public implementation \a q.
 */
ListPackageImportJobsResponsePrivate::ListPackageImportJobsResponsePrivate(
    ListPackageImportJobsResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama ListPackageImportJobs response element from \a xml.
 */
void ListPackageImportJobsResponsePrivate::parseListPackageImportJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPackageImportJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
