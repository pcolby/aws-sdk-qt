// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
