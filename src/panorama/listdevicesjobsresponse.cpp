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

#include "listdevicesjobsresponse.h"
#include "listdevicesjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::ListDevicesJobsResponse
 * \brief The ListDevicesJobsResponse class provides an interace for Panorama ListDevicesJobs responses.
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
 * \sa PanoramaClient::listDevicesJobs
 */

/*!
 * Constructs a ListDevicesJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDevicesJobsResponse::ListDevicesJobsResponse(
        const ListDevicesJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new ListDevicesJobsResponsePrivate(this), parent)
{
    setRequest(new ListDevicesJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDevicesJobsRequest * ListDevicesJobsResponse::request() const
{
    Q_D(const ListDevicesJobsResponse);
    return static_cast<const ListDevicesJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama ListDevicesJobs \a response.
 */
void ListDevicesJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDevicesJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::ListDevicesJobsResponsePrivate
 * \brief The ListDevicesJobsResponsePrivate class provides private implementation for ListDevicesJobsResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a ListDevicesJobsResponsePrivate object with public implementation \a q.
 */
ListDevicesJobsResponsePrivate::ListDevicesJobsResponsePrivate(
    ListDevicesJobsResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama ListDevicesJobs response element from \a xml.
 */
void ListDevicesJobsResponsePrivate::parseListDevicesJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDevicesJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
