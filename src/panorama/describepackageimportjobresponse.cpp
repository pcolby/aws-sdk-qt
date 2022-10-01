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

#include "describepackageimportjobresponse.h"
#include "describepackageimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::DescribePackageImportJobResponse
 * \brief The DescribePackageImportJobResponse class provides an interace for Panorama DescribePackageImportJob responses.
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
 * \sa PanoramaClient::describePackageImportJob
 */

/*!
 * Constructs a DescribePackageImportJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePackageImportJobResponse::DescribePackageImportJobResponse(
        const DescribePackageImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new DescribePackageImportJobResponsePrivate(this), parent)
{
    setRequest(new DescribePackageImportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePackageImportJobRequest * DescribePackageImportJobResponse::request() const
{
    Q_D(const DescribePackageImportJobResponse);
    return static_cast<const DescribePackageImportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama DescribePackageImportJob \a response.
 */
void DescribePackageImportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePackageImportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::DescribePackageImportJobResponsePrivate
 * \brief The DescribePackageImportJobResponsePrivate class provides private implementation for DescribePackageImportJobResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a DescribePackageImportJobResponsePrivate object with public implementation \a q.
 */
DescribePackageImportJobResponsePrivate::DescribePackageImportJobResponsePrivate(
    DescribePackageImportJobResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama DescribePackageImportJob response element from \a xml.
 */
void DescribePackageImportJobResponsePrivate::parseDescribePackageImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePackageImportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
