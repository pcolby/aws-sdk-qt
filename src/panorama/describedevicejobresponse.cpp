// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
