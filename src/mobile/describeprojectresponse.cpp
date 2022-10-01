// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeprojectresponse.h"
#include "describeprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mobile {

/*!
 * \class QtAws::Mobile::DescribeProjectResponse
 * \brief The DescribeProjectResponse class provides an interace for Mobile DescribeProject responses.
 *
 * \inmodule QtAwsMobile
 *
 *  AWS Mobile Service provides mobile app and website developers with capabilities required to configure AWS resources and
 *  bootstrap their developer desktop projects with the necessary SDKs, constants, tools and samples to make use of those
 *  resources.
 *
 * \sa MobileClient::describeProject
 */

/*!
 * Constructs a DescribeProjectResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeProjectResponse::DescribeProjectResponse(
        const DescribeProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MobileResponse(new DescribeProjectResponsePrivate(this), parent)
{
    setRequest(new DescribeProjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeProjectRequest * DescribeProjectResponse::request() const
{
    Q_D(const DescribeProjectResponse);
    return static_cast<const DescribeProjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mobile DescribeProject \a response.
 */
void DescribeProjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeProjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mobile::DescribeProjectResponsePrivate
 * \brief The DescribeProjectResponsePrivate class provides private implementation for DescribeProjectResponse.
 * \internal
 *
 * \inmodule QtAwsMobile
 */

/*!
 * Constructs a DescribeProjectResponsePrivate object with public implementation \a q.
 */
DescribeProjectResponsePrivate::DescribeProjectResponsePrivate(
    DescribeProjectResponse * const q) : MobileResponsePrivate(q)
{

}

/*!
 * Parses a Mobile DescribeProject response element from \a xml.
 */
void DescribeProjectResponsePrivate::parseDescribeProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mobile
} // namespace QtAws
