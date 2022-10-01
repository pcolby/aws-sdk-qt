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

#include "listapplicationinstancenodeinstancesresponse.h"
#include "listapplicationinstancenodeinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::ListApplicationInstanceNodeInstancesResponse
 * \brief The ListApplicationInstanceNodeInstancesResponse class provides an interace for Panorama ListApplicationInstanceNodeInstances responses.
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
 * \sa PanoramaClient::listApplicationInstanceNodeInstances
 */

/*!
 * Constructs a ListApplicationInstanceNodeInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
ListApplicationInstanceNodeInstancesResponse::ListApplicationInstanceNodeInstancesResponse(
        const ListApplicationInstanceNodeInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new ListApplicationInstanceNodeInstancesResponsePrivate(this), parent)
{
    setRequest(new ListApplicationInstanceNodeInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListApplicationInstanceNodeInstancesRequest * ListApplicationInstanceNodeInstancesResponse::request() const
{
    Q_D(const ListApplicationInstanceNodeInstancesResponse);
    return static_cast<const ListApplicationInstanceNodeInstancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama ListApplicationInstanceNodeInstances \a response.
 */
void ListApplicationInstanceNodeInstancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListApplicationInstanceNodeInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::ListApplicationInstanceNodeInstancesResponsePrivate
 * \brief The ListApplicationInstanceNodeInstancesResponsePrivate class provides private implementation for ListApplicationInstanceNodeInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a ListApplicationInstanceNodeInstancesResponsePrivate object with public implementation \a q.
 */
ListApplicationInstanceNodeInstancesResponsePrivate::ListApplicationInstanceNodeInstancesResponsePrivate(
    ListApplicationInstanceNodeInstancesResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama ListApplicationInstanceNodeInstances response element from \a xml.
 */
void ListApplicationInstanceNodeInstancesResponsePrivate::parseListApplicationInstanceNodeInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListApplicationInstanceNodeInstancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
