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

#include "deletepackageresponse.h"
#include "deletepackageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::DeletePackageResponse
 * \brief The DeletePackageResponse class provides an interace for Panorama DeletePackage responses.
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
 * \sa PanoramaClient::deletePackage
 */

/*!
 * Constructs a DeletePackageResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePackageResponse::DeletePackageResponse(
        const DeletePackageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new DeletePackageResponsePrivate(this), parent)
{
    setRequest(new DeletePackageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePackageRequest * DeletePackageResponse::request() const
{
    Q_D(const DeletePackageResponse);
    return static_cast<const DeletePackageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama DeletePackage \a response.
 */
void DeletePackageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePackageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::DeletePackageResponsePrivate
 * \brief The DeletePackageResponsePrivate class provides private implementation for DeletePackageResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a DeletePackageResponsePrivate object with public implementation \a q.
 */
DeletePackageResponsePrivate::DeletePackageResponsePrivate(
    DeletePackageResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama DeletePackage response element from \a xml.
 */
void DeletePackageResponsePrivate::parseDeletePackageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePackageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
