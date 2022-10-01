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

#include "provisiondeviceresponse.h"
#include "provisiondeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::ProvisionDeviceResponse
 * \brief The ProvisionDeviceResponse class provides an interace for Panorama ProvisionDevice responses.
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
 * \sa PanoramaClient::provisionDevice
 */

/*!
 * Constructs a ProvisionDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
ProvisionDeviceResponse::ProvisionDeviceResponse(
        const ProvisionDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new ProvisionDeviceResponsePrivate(this), parent)
{
    setRequest(new ProvisionDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ProvisionDeviceRequest * ProvisionDeviceResponse::request() const
{
    Q_D(const ProvisionDeviceResponse);
    return static_cast<const ProvisionDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama ProvisionDevice \a response.
 */
void ProvisionDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ProvisionDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::ProvisionDeviceResponsePrivate
 * \brief The ProvisionDeviceResponsePrivate class provides private implementation for ProvisionDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a ProvisionDeviceResponsePrivate object with public implementation \a q.
 */
ProvisionDeviceResponsePrivate::ProvisionDeviceResponsePrivate(
    ProvisionDeviceResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama ProvisionDevice response element from \a xml.
 */
void ProvisionDeviceResponsePrivate::parseProvisionDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ProvisionDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
