// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
