/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listbuildsforprojectrequest.h"
#include "listbuildsforprojectrequest_p.h"
#include "listbuildsforprojectresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::ListBuildsForProjectRequest
 *
 * \brief The ListBuildsForProjectRequest class encapsulates CodeBuild ListBuildsForProject requests.
 *
 * \ingroup CodeBuild
 *
 *  <fullname>AWS CodeBuild</fullname>
 * 
 *  AWS CodeBuild is a fully managed build service in the cloud. AWS CodeBuild compiles your source code, runs unit tests,
 *  and produces artifacts that are ready to deploy. AWS CodeBuild eliminates the need to provision, manage, and scale your
 *  own build servers. It provides prepackaged build environments for the most popular programming languages and build
 *  tools, such as Apache Maven, Gradle, and more. You can also fully customize build environments in AWS CodeBuild to use
 *  your own build tools. AWS CodeBuild scales automatically to meet peak build requests, and you pay only for the build
 *  time you consume. For more information about AWS CodeBuild, see the <i>AWS CodeBuild User
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
 *  CodeBuild will run a build. This includes information such as where to get the source code to build, the build
 *  environment to use, the build commands to run, and where to store the build output. A <i>build environment</i>
 *  represents a combination of operating system, programming language runtime, and tools that AWS CodeBuild will use to run
 *  a build. Also, you can add tags to build projects to help manage your resources and
 * 
 *  costs> </li> <li>
 * 
 *  <code>CreateProject</code>: Creates a build
 * 
 *  project> </li> <li>
 * 
 *  <code>CreateWebhook</code>: For an existing AWS CodeBuild build project that has its source code stored in a GitHub
 *  repository, enables AWS CodeBuild to begin automatically rebuilding the source code every time a code change is pushed
 *  to the
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
 *  <code>DeleteWebhook</code>: For an existing AWS CodeBuild build project that has its source code stored in a GitHub
 *  repository, stops AWS CodeBuild from automatically rebuilding the source code every time a code change is pushed to the
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
 * \sa CodeBuildClient::listBuildsForProject
 */

/*!
 * @brief  Constructs a new ListBuildsForProjectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListBuildsForProjectRequest::ListBuildsForProjectRequest(const ListBuildsForProjectRequest &other)
    : CodeBuildRequest(new ListBuildsForProjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListBuildsForProjectRequest object.
 */
ListBuildsForProjectRequest::ListBuildsForProjectRequest()
    : CodeBuildRequest(new ListBuildsForProjectRequestPrivate(CodeBuildRequest::ListBuildsForProjectAction, this))
{

}

/*!
 * \reimp
 */
bool ListBuildsForProjectRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListBuildsForProjectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListBuildsForProjectResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeBuildClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBuildsForProjectRequest::response(QNetworkReply * const reply) const
{
    return new ListBuildsForProjectResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListBuildsForProjectRequestPrivate
 *
 * @brief  Private implementation for ListBuildsForProjectRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListBuildsForProjectRequestPrivate object.
 *
 * @param  action  CodeBuild action being performed.
 * @param  q       Pointer to this object's public ListBuildsForProjectRequest instance.
 */
ListBuildsForProjectRequestPrivate::ListBuildsForProjectRequestPrivate(
    const CodeBuildRequest::Action action, ListBuildsForProjectRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListBuildsForProjectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListBuildsForProjectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListBuildsForProjectRequest instance.
 */
ListBuildsForProjectRequestPrivate::ListBuildsForProjectRequestPrivate(
    const ListBuildsForProjectRequestPrivate &other, ListBuildsForProjectRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
