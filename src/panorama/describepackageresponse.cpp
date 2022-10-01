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

#include "describepackageresponse.h"
#include "describepackageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::DescribePackageResponse
 * \brief The DescribePackageResponse class provides an interace for Panorama DescribePackage responses.
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
 * \sa PanoramaClient::describePackage
 */

/*!
 * Constructs a DescribePackageResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePackageResponse::DescribePackageResponse(
        const DescribePackageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new DescribePackageResponsePrivate(this), parent)
{
    setRequest(new DescribePackageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePackageRequest * DescribePackageResponse::request() const
{
    Q_D(const DescribePackageResponse);
    return static_cast<const DescribePackageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama DescribePackage \a response.
 */
void DescribePackageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePackageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::DescribePackageResponsePrivate
 * \brief The DescribePackageResponsePrivate class provides private implementation for DescribePackageResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a DescribePackageResponsePrivate object with public implementation \a q.
 */
DescribePackageResponsePrivate::DescribePackageResponsePrivate(
    DescribePackageResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama DescribePackage response element from \a xml.
 */
void DescribePackageResponsePrivate::parseDescribePackageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePackageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
