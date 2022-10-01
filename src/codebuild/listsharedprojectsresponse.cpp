// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsharedprojectsresponse.h"
#include "listsharedprojectsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::ListSharedProjectsResponse
 * \brief The ListSharedProjectsResponse class provides an interace for CodeBuild ListSharedProjects responses.
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
 * \sa CodeBuildClient::listSharedProjects
 */

/*!
 * Constructs a ListSharedProjectsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSharedProjectsResponse::ListSharedProjectsResponse(
        const ListSharedProjectsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new ListSharedProjectsResponsePrivate(this), parent)
{
    setRequest(new ListSharedProjectsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSharedProjectsRequest * ListSharedProjectsResponse::request() const
{
    Q_D(const ListSharedProjectsResponse);
    return static_cast<const ListSharedProjectsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeBuild ListSharedProjects \a response.
 */
void ListSharedProjectsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSharedProjectsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeBuild::ListSharedProjectsResponsePrivate
 * \brief The ListSharedProjectsResponsePrivate class provides private implementation for ListSharedProjectsResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a ListSharedProjectsResponsePrivate object with public implementation \a q.
 */
ListSharedProjectsResponsePrivate::ListSharedProjectsResponsePrivate(
    ListSharedProjectsResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/*!
 * Parses a CodeBuild ListSharedProjects response element from \a xml.
 */
void ListSharedProjectsResponsePrivate::parseListSharedProjectsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSharedProjectsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeBuild
} // namespace QtAws
