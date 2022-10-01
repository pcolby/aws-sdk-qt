// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeapplicationinstancedetailsresponse.h"
#include "describeapplicationinstancedetailsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::DescribeApplicationInstanceDetailsResponse
 * \brief The DescribeApplicationInstanceDetailsResponse class provides an interace for Panorama DescribeApplicationInstanceDetails responses.
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
 * \sa PanoramaClient::describeApplicationInstanceDetails
 */

/*!
 * Constructs a DescribeApplicationInstanceDetailsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeApplicationInstanceDetailsResponse::DescribeApplicationInstanceDetailsResponse(
        const DescribeApplicationInstanceDetailsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new DescribeApplicationInstanceDetailsResponsePrivate(this), parent)
{
    setRequest(new DescribeApplicationInstanceDetailsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeApplicationInstanceDetailsRequest * DescribeApplicationInstanceDetailsResponse::request() const
{
    Q_D(const DescribeApplicationInstanceDetailsResponse);
    return static_cast<const DescribeApplicationInstanceDetailsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama DescribeApplicationInstanceDetails \a response.
 */
void DescribeApplicationInstanceDetailsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeApplicationInstanceDetailsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::DescribeApplicationInstanceDetailsResponsePrivate
 * \brief The DescribeApplicationInstanceDetailsResponsePrivate class provides private implementation for DescribeApplicationInstanceDetailsResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a DescribeApplicationInstanceDetailsResponsePrivate object with public implementation \a q.
 */
DescribeApplicationInstanceDetailsResponsePrivate::DescribeApplicationInstanceDetailsResponsePrivate(
    DescribeApplicationInstanceDetailsResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama DescribeApplicationInstanceDetails response element from \a xml.
 */
void DescribeApplicationInstanceDetailsResponsePrivate::parseDescribeApplicationInstanceDetailsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeApplicationInstanceDetailsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
