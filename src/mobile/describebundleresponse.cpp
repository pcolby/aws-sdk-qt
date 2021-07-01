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

#include "describebundleresponse.h"
#include "describebundleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mobile {

/*!
 * \class QtAws::Mobile::DescribeBundleResponse
 * \brief The DescribeBundleResponse class provides an interace for Mobile DescribeBundle responses.
 *
 * \inmodule QtAwsMobile
 *
 *  AWS Mobile Service provides mobile app and website developers with capabilities required to configure AWS resources and
 *  bootstrap their developer desktop projects with the necessary SDKs, constants, tools and samples to make use of those
 *  resources.
 *
 * \sa MobileClient::describeBundle
 */

/*!
 * Constructs a DescribeBundleResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeBundleResponse::DescribeBundleResponse(
        const DescribeBundleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MobileResponse(new DescribeBundleResponsePrivate(this), parent)
{
    setRequest(new DescribeBundleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeBundleRequest * DescribeBundleResponse::request() const
{
    Q_D(const DescribeBundleResponse);
    return static_cast<const DescribeBundleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mobile DescribeBundle \a response.
 */
void DescribeBundleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeBundleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mobile::DescribeBundleResponsePrivate
 * \brief The DescribeBundleResponsePrivate class provides private implementation for DescribeBundleResponse.
 * \internal
 *
 * \inmodule QtAwsMobile
 */

/*!
 * Constructs a DescribeBundleResponsePrivate object with public implementation \a q.
 */
DescribeBundleResponsePrivate::DescribeBundleResponsePrivate(
    DescribeBundleResponse * const q) : MobileResponsePrivate(q)
{

}

/*!
 * Parses a Mobile DescribeBundle response element from \a xml.
 */
void DescribeBundleResponsePrivate::parseDescribeBundleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBundleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mobile
} // namespace QtAws
