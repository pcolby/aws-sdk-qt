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

#include "describedeviceresponse.h"
#include "describedeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::DescribeDeviceResponse
 * \brief The DescribeDeviceResponse class provides an interace for Panorama DescribeDevice responses.
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
 * \sa PanoramaClient::describeDevice
 */

/*!
 * Constructs a DescribeDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDeviceResponse::DescribeDeviceResponse(
        const DescribeDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new DescribeDeviceResponsePrivate(this), parent)
{
    setRequest(new DescribeDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDeviceRequest * DescribeDeviceResponse::request() const
{
    Q_D(const DescribeDeviceResponse);
    return static_cast<const DescribeDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama DescribeDevice \a response.
 */
void DescribeDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::DescribeDeviceResponsePrivate
 * \brief The DescribeDeviceResponsePrivate class provides private implementation for DescribeDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a DescribeDeviceResponsePrivate object with public implementation \a q.
 */
DescribeDeviceResponsePrivate::DescribeDeviceResponsePrivate(
    DescribeDeviceResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama DescribeDevice response element from \a xml.
 */
void DescribeDeviceResponsePrivate::parseDescribeDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
