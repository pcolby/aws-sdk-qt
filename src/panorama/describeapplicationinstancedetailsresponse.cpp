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
