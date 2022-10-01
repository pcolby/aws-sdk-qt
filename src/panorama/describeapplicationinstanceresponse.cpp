// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeapplicationinstanceresponse.h"
#include "describeapplicationinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::DescribeApplicationInstanceResponse
 * \brief The DescribeApplicationInstanceResponse class provides an interace for Panorama DescribeApplicationInstance responses.
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
 * \sa PanoramaClient::describeApplicationInstance
 */

/*!
 * Constructs a DescribeApplicationInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeApplicationInstanceResponse::DescribeApplicationInstanceResponse(
        const DescribeApplicationInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new DescribeApplicationInstanceResponsePrivate(this), parent)
{
    setRequest(new DescribeApplicationInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeApplicationInstanceRequest * DescribeApplicationInstanceResponse::request() const
{
    Q_D(const DescribeApplicationInstanceResponse);
    return static_cast<const DescribeApplicationInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama DescribeApplicationInstance \a response.
 */
void DescribeApplicationInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeApplicationInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::DescribeApplicationInstanceResponsePrivate
 * \brief The DescribeApplicationInstanceResponsePrivate class provides private implementation for DescribeApplicationInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a DescribeApplicationInstanceResponsePrivate object with public implementation \a q.
 */
DescribeApplicationInstanceResponsePrivate::DescribeApplicationInstanceResponsePrivate(
    DescribeApplicationInstanceResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama DescribeApplicationInstance response element from \a xml.
 */
void DescribeApplicationInstanceResponsePrivate::parseDescribeApplicationInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeApplicationInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
