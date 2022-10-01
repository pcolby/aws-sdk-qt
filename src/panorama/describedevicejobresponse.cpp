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

#include "describedevicejobresponse.h"
#include "describedevicejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::DescribeDeviceJobResponse
 * \brief The DescribeDeviceJobResponse class provides an interace for Panorama DescribeDeviceJob responses.
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
 * \sa PanoramaClient::describeDeviceJob
 */

/*!
 * Constructs a DescribeDeviceJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDeviceJobResponse::DescribeDeviceJobResponse(
        const DescribeDeviceJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new DescribeDeviceJobResponsePrivate(this), parent)
{
    setRequest(new DescribeDeviceJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDeviceJobRequest * DescribeDeviceJobResponse::request() const
{
    Q_D(const DescribeDeviceJobResponse);
    return static_cast<const DescribeDeviceJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama DescribeDeviceJob \a response.
 */
void DescribeDeviceJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDeviceJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::DescribeDeviceJobResponsePrivate
 * \brief The DescribeDeviceJobResponsePrivate class provides private implementation for DescribeDeviceJobResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a DescribeDeviceJobResponsePrivate object with public implementation \a q.
 */
DescribeDeviceJobResponsePrivate::DescribeDeviceJobResponsePrivate(
    DescribeDeviceJobResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama DescribeDeviceJob response element from \a xml.
 */
void DescribeDeviceJobResponsePrivate::parseDescribeDeviceJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDeviceJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
