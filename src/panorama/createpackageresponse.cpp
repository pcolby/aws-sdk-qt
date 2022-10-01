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

#include "createpackageresponse.h"
#include "createpackageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::CreatePackageResponse
 * \brief The CreatePackageResponse class provides an interace for Panorama CreatePackage responses.
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
 * \sa PanoramaClient::createPackage
 */

/*!
 * Constructs a CreatePackageResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePackageResponse::CreatePackageResponse(
        const CreatePackageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new CreatePackageResponsePrivate(this), parent)
{
    setRequest(new CreatePackageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePackageRequest * CreatePackageResponse::request() const
{
    Q_D(const CreatePackageResponse);
    return static_cast<const CreatePackageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama CreatePackage \a response.
 */
void CreatePackageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePackageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::CreatePackageResponsePrivate
 * \brief The CreatePackageResponsePrivate class provides private implementation for CreatePackageResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a CreatePackageResponsePrivate object with public implementation \a q.
 */
CreatePackageResponsePrivate::CreatePackageResponsePrivate(
    CreatePackageResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama CreatePackage response element from \a xml.
 */
void CreatePackageResponsePrivate::parseCreatePackageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePackageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
