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

#include "deletedeviceresponse.h"
#include "deletedeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::DeleteDeviceResponse
 * \brief The DeleteDeviceResponse class provides an interace for Panorama DeleteDevice responses.
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
 * \sa PanoramaClient::deleteDevice
 */

/*!
 * Constructs a DeleteDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDeviceResponse::DeleteDeviceResponse(
        const DeleteDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new DeleteDeviceResponsePrivate(this), parent)
{
    setRequest(new DeleteDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDeviceRequest * DeleteDeviceResponse::request() const
{
    Q_D(const DeleteDeviceResponse);
    return static_cast<const DeleteDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama DeleteDevice \a response.
 */
void DeleteDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::DeleteDeviceResponsePrivate
 * \brief The DeleteDeviceResponsePrivate class provides private implementation for DeleteDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a DeleteDeviceResponsePrivate object with public implementation \a q.
 */
DeleteDeviceResponsePrivate::DeleteDeviceResponsePrivate(
    DeleteDeviceResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama DeleteDevice response element from \a xml.
 */
void DeleteDeviceResponsePrivate::parseDeleteDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
