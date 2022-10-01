// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
