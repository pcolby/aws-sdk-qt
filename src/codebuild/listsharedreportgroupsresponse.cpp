// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsharedreportgroupsresponse.h"
#include "listsharedreportgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::ListSharedReportGroupsResponse
 * \brief The ListSharedReportGroupsResponse class provides an interace for CodeBuild ListSharedReportGroups responses.
 *
 * \inmodule QtAwsCodeBuild
 *
 *  <fullname>CodeBuild</fullname>
 * 
 *  CodeBuild is a fully managed build service in the cloud. CodeBuild compiles your source code, runs unit tests, and
 *  produces artifacts that are ready to deploy. CodeBuild eliminates the need to provision, manage, and scale your own
 *  build servers. It provides prepackaged build environments for the most popular programming languages and build tools,
 *  such as Apache Maven, Gradle, and more. You can also fully customize build environments in CodeBuild to use your own
 *  build tools. CodeBuild scales automatically to meet peak build requests. You pay only for the build time you consume.
 *  For more information about CodeBuild, see the <i> <a
 *  href="https://docs.aws.amazon.com/codebuild/latest/userguide/welcome.html">CodeBuild User Guide</a>.</i>
 *
 * \sa CodeBuildClient::listSharedReportGroups
 */

/*!
 * Constructs a ListSharedReportGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSharedReportGroupsResponse::ListSharedReportGroupsResponse(
        const ListSharedReportGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new ListSharedReportGroupsResponsePrivate(this), parent)
{
    setRequest(new ListSharedReportGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSharedReportGroupsRequest * ListSharedReportGroupsResponse::request() const
{
    Q_D(const ListSharedReportGroupsResponse);
    return static_cast<const ListSharedReportGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeBuild ListSharedReportGroups \a response.
 */
void ListSharedReportGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSharedReportGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeBuild::ListSharedReportGroupsResponsePrivate
 * \brief The ListSharedReportGroupsResponsePrivate class provides private implementation for ListSharedReportGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a ListSharedReportGroupsResponsePrivate object with public implementation \a q.
 */
ListSharedReportGroupsResponsePrivate::ListSharedReportGroupsResponsePrivate(
    ListSharedReportGroupsResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/*!
 * Parses a CodeBuild ListSharedReportGroups response element from \a xml.
 */
void ListSharedReportGroupsResponsePrivate::parseListSharedReportGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSharedReportGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeBuild
} // namespace QtAws
