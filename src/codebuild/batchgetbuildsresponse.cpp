/*
    Copyright 2013-2020 Paul Colby

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

#include "batchgetbuildsresponse.h"
#include "batchgetbuildsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::BatchGetBuildsResponse
 * \brief The BatchGetBuildsResponse class provides an interace for CodeBuild BatchGetBuilds responses.
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
 *  you consume. For more information about AWS CodeBuild, see the <i>AWS CodeBuild User
 * 
 *  Guide</i>>
 * 
 *  AWS CodeBuild supports these
 * 
 *  operations> <ul> <li>
 * 
 *  <code>BatchDeleteBuilds</code>: Deletes one or more
 * 
 *  builds> </li> <li>
 * 
 *  <code>BatchGetProjects</code>: Gets information about one or more build projects. A <i>build project</i> defines how AWS
 *  CodeBuild runs a build. This includes information such as where to get the source code to build, the build environment
 *  to use, the build commands to run, and where to store the build output. A <i>build environment</i> is a representation
 *  of operating system, programming language runtime, and tools that AWS CodeBuild uses to run a build. You can add tags to
 *  build projects to help manage your resources and
 * 
 *  costs> </li> <li>
 * 
 *  <code>CreateProject</code>: Creates a build
 * 
 *  project> </li> <li>
 * 
 *  <code>CreateWebhook</code>: For an existing AWS CodeBuild build project that has its source code stored in a GitHub or
 *  Bitbucket repository, enables AWS CodeBuild to start rebuilding the source code every time a code change is pushed to
 *  the
 * 
 *  repository> </li> <li>
 * 
 *  <code>UpdateWebhook</code>: Changes the settings of an existing
 * 
 *  webhook> </li> <li>
 * 
 *  <code>DeleteProject</code>: Deletes a build
 * 
 *  project> </li> <li>
 * 
 *  <code>DeleteWebhook</code>: For an existing AWS CodeBuild build project that has its source code stored in a GitHub or
 *  Bitbucket repository, stops AWS CodeBuild from rebuilding the source code every time a code change is pushed to the
 * 
 *  repository> </li> <li>
 * 
 *  <code>ListProjects</code>: Gets a list of build project names, with each build project name representing a single build
 * 
 *  project> </li> <li>
 * 
 *  <code>UpdateProject</code>: Changes the settings of an existing build
 * 
 *  project> </li> <li>
 * 
 *  <code>BatchGetBuilds</code>: Gets information about one or more
 * 
 *  builds> </li> <li>
 * 
 *  <code>ListBuilds</code>: Gets a list of build IDs, with each build ID representing a single
 * 
 *  build> </li> <li>
 * 
 *  <code>ListBuildsForProject</code>: Gets a list of build IDs for the specified build project, with each build ID
 *  representing a single
 * 
 *  build> </li> <li>
 * 
 *  <code>StartBuild</code>: Starts running a
 * 
 *  build> </li> <li>
 * 
 *  <code>StopBuild</code>: Attempts to stop running a
 * 
 *  build> </li> <li>
 * 
 *  <code>ListCuratedEnvironmentImages</code>: Gets information about Docker images that are managed by AWS
 * 
 *  CodeBuild> </li> <li>
 * 
 *  <code>DeleteSourceCredentials</code>: Deletes a set of GitHub, GitHub Enterprise, or Bitbucket source
 * 
 *  credentials> </li> <li>
 * 
 *  <code>ImportSourceCredentials</code>: Imports the source repository credentials for an AWS CodeBuild project that has
 *  its source code stored in a GitHub, GitHub Enterprise, or Bitbucket
 * 
 *  repository> </li> <li>
 * 
 *  <code>ListSourceCredentials</code>: Returns a list of <code>SourceCredentialsInfo</code> objects. Each
 *  <code>SourceCredentialsInfo</code> object includes the authentication type, token ARN, and type of source provider for
 *  one set of
 *
 * \sa CodeBuildClient::batchGetBuilds
 */

/*!
 * Constructs a BatchGetBuildsResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetBuildsResponse::BatchGetBuildsResponse(
        const BatchGetBuildsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new BatchGetBuildsResponsePrivate(this), parent)
{
    setRequest(new BatchGetBuildsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetBuildsRequest * BatchGetBuildsResponse::request() const
{
    Q_D(const BatchGetBuildsResponse);
    return static_cast<const BatchGetBuildsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeBuild BatchGetBuilds \a response.
 */
void BatchGetBuildsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetBuildsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeBuild::BatchGetBuildsResponsePrivate
 * \brief The BatchGetBuildsResponsePrivate class provides private implementation for BatchGetBuildsResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a BatchGetBuildsResponsePrivate object with public implementation \a q.
 */
BatchGetBuildsResponsePrivate::BatchGetBuildsResponsePrivate(
    BatchGetBuildsResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/*!
 * Parses a CodeBuild BatchGetBuilds response element from \a xml.
 */
void BatchGetBuildsResponsePrivate::parseBatchGetBuildsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetBuildsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeBuild
} // namespace QtAws
