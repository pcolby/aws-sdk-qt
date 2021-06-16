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
 *  <fullname>AWS CodeBuild</fullname>
 * 
 *  AWS CodeBuild is a fully managed build service in the cloud. AWS CodeBuild compiles your source code, runs unit tests,
 *  and produces artifacts that are ready to deploy. AWS CodeBuild eliminates the need to provision, manage, and scale your
 *  own build servers. It provides prepackaged build environments for the most popular programming languages and build
 *  tools, such as Apache Maven, Gradle, and more. You can also fully customize build environments in AWS CodeBuild to use
 *  your own build tools. AWS CodeBuild scales automatically to meet peak build requests. You pay only for the build time
 *  you consume. For more information about AWS CodeBuild, see the <i> <a
 *  href="https://docs.aws.amazon.com/codebuild/latest/userguide/welcome.html">AWS CodeBuild User Guide</a>.</i>
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
