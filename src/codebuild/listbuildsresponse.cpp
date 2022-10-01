// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbuildsresponse.h"
#include "listbuildsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::ListBuildsResponse
 * \brief The ListBuildsResponse class provides an interace for CodeBuild ListBuilds responses.
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
 * \sa CodeBuildClient::listBuilds
 */

/*!
 * Constructs a ListBuildsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBuildsResponse::ListBuildsResponse(
        const ListBuildsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new ListBuildsResponsePrivate(this), parent)
{
    setRequest(new ListBuildsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBuildsRequest * ListBuildsResponse::request() const
{
    Q_D(const ListBuildsResponse);
    return static_cast<const ListBuildsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeBuild ListBuilds \a response.
 */
void ListBuildsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBuildsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeBuild::ListBuildsResponsePrivate
 * \brief The ListBuildsResponsePrivate class provides private implementation for ListBuildsResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a ListBuildsResponsePrivate object with public implementation \a q.
 */
ListBuildsResponsePrivate::ListBuildsResponsePrivate(
    ListBuildsResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/*!
 * Parses a CodeBuild ListBuilds response element from \a xml.
 */
void ListBuildsResponsePrivate::parseListBuildsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBuildsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeBuild
} // namespace QtAws
