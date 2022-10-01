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

#include "listpackagesresponse.h"
#include "listpackagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::ListPackagesResponse
 * \brief The ListPackagesResponse class provides an interace for Panorama ListPackages responses.
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
 * \sa PanoramaClient::listPackages
 */

/*!
 * Constructs a ListPackagesResponse object for \a reply to \a request, with parent \a parent.
 */
ListPackagesResponse::ListPackagesResponse(
        const ListPackagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new ListPackagesResponsePrivate(this), parent)
{
    setRequest(new ListPackagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPackagesRequest * ListPackagesResponse::request() const
{
    Q_D(const ListPackagesResponse);
    return static_cast<const ListPackagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama ListPackages \a response.
 */
void ListPackagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPackagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::ListPackagesResponsePrivate
 * \brief The ListPackagesResponsePrivate class provides private implementation for ListPackagesResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a ListPackagesResponsePrivate object with public implementation \a q.
 */
ListPackagesResponsePrivate::ListPackagesResponsePrivate(
    ListPackagesResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama ListPackages response element from \a xml.
 */
void ListPackagesResponsePrivate::parseListPackagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPackagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
