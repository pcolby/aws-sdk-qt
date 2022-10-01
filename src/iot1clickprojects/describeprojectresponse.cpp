// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeprojectresponse.h"
#include "describeprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::DescribeProjectResponse
 * \brief The DescribeProjectResponse class provides an interace for IoT1ClickProjects DescribeProject responses.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Projects API
 *
 * \sa IoT1ClickProjectsClient::describeProject
 */

/*!
 * Constructs a DescribeProjectResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeProjectResponse::DescribeProjectResponse(
        const DescribeProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickProjectsResponse(new DescribeProjectResponsePrivate(this), parent)
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
 * Parses a successful IoT1ClickProjects DescribeProject \a response.
 */
void DescribeProjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeProjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickProjects::DescribeProjectResponsePrivate
 * \brief The DescribeProjectResponsePrivate class provides private implementation for DescribeProjectResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a DescribeProjectResponsePrivate object with public implementation \a q.
 */
DescribeProjectResponsePrivate::DescribeProjectResponsePrivate(
    DescribeProjectResponse * const q) : IoT1ClickProjectsResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickProjects DescribeProject response element from \a xml.
 */
void DescribeProjectResponsePrivate::parseDescribeProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickProjects
} // namespace QtAws
