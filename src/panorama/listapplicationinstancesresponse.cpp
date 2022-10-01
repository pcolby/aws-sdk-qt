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

#include "listapplicationinstancesresponse.h"
#include "listapplicationinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::ListApplicationInstancesResponse
 * \brief The ListApplicationInstancesResponse class provides an interace for Panorama ListApplicationInstances responses.
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
 * \sa PanoramaClient::listApplicationInstances
 */

/*!
 * Constructs a ListApplicationInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
ListApplicationInstancesResponse::ListApplicationInstancesResponse(
        const ListApplicationInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new ListApplicationInstancesResponsePrivate(this), parent)
{
    setRequest(new ListApplicationInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListApplicationInstancesRequest * ListApplicationInstancesResponse::request() const
{
    Q_D(const ListApplicationInstancesResponse);
    return static_cast<const ListApplicationInstancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama ListApplicationInstances \a response.
 */
void ListApplicationInstancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListApplicationInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::ListApplicationInstancesResponsePrivate
 * \brief The ListApplicationInstancesResponsePrivate class provides private implementation for ListApplicationInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a ListApplicationInstancesResponsePrivate object with public implementation \a q.
 */
ListApplicationInstancesResponsePrivate::ListApplicationInstancesResponsePrivate(
    ListApplicationInstancesResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama ListApplicationInstances response element from \a xml.
 */
void ListApplicationInstancesResponsePrivate::parseListApplicationInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListApplicationInstancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
