// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
