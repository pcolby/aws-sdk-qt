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

#include "describepackageversionresponse.h"
#include "describepackageversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::DescribePackageVersionResponse
 * \brief The DescribePackageVersionResponse class provides an interace for Panorama DescribePackageVersion responses.
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
 * \sa PanoramaClient::describePackageVersion
 */

/*!
 * Constructs a DescribePackageVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePackageVersionResponse::DescribePackageVersionResponse(
        const DescribePackageVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new DescribePackageVersionResponsePrivate(this), parent)
{
    setRequest(new DescribePackageVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePackageVersionRequest * DescribePackageVersionResponse::request() const
{
    Q_D(const DescribePackageVersionResponse);
    return static_cast<const DescribePackageVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama DescribePackageVersion \a response.
 */
void DescribePackageVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePackageVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::DescribePackageVersionResponsePrivate
 * \brief The DescribePackageVersionResponsePrivate class provides private implementation for DescribePackageVersionResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a DescribePackageVersionResponsePrivate object with public implementation \a q.
 */
DescribePackageVersionResponsePrivate::DescribePackageVersionResponsePrivate(
    DescribePackageVersionResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama DescribePackageVersion response element from \a xml.
 */
void DescribePackageVersionResponsePrivate::parseDescribePackageVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePackageVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
