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

#include "listbuildbatchesforprojectrequest.h"
#include "listbuildbatchesforprojectrequest_p.h"
#include "listbuildbatchesforprojectresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::ListBuildBatchesForProjectRequest
 * \brief The ListBuildBatchesForProjectRequest class provides an interface for CodeBuild ListBuildBatchesForProject requests.
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
 * \sa CodeBuildClient::listBuildBatchesForProject
 */

/*!
 * Constructs a copy of \a other.
 */
ListBuildBatchesForProjectRequest::ListBuildBatchesForProjectRequest(const ListBuildBatchesForProjectRequest &other)
    : CodeBuildRequest(new ListBuildBatchesForProjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBuildBatchesForProjectRequest object.
 */
ListBuildBatchesForProjectRequest::ListBuildBatchesForProjectRequest()
    : CodeBuildRequest(new ListBuildBatchesForProjectRequestPrivate(CodeBuildRequest::ListBuildBatchesForProjectAction, this))
{

}

/*!
 * \reimp
 */
bool ListBuildBatchesForProjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBuildBatchesForProjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBuildBatchesForProjectRequest::response(QNetworkReply * const reply) const
{
    return new ListBuildBatchesForProjectResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::ListBuildBatchesForProjectRequestPrivate
 * \brief The ListBuildBatchesForProjectRequestPrivate class provides private implementation for ListBuildBatchesForProjectRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a ListBuildBatchesForProjectRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
ListBuildBatchesForProjectRequestPrivate::ListBuildBatchesForProjectRequestPrivate(
    const CodeBuildRequest::Action action, ListBuildBatchesForProjectRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBuildBatchesForProjectRequest
 * class' copy constructor.
 */
ListBuildBatchesForProjectRequestPrivate::ListBuildBatchesForProjectRequestPrivate(
    const ListBuildBatchesForProjectRequestPrivate &other, ListBuildBatchesForProjectRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
