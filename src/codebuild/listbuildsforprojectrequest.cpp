// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbuildsforprojectrequest.h"
#include "listbuildsforprojectrequest_p.h"
#include "listbuildsforprojectresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::ListBuildsForProjectRequest
 * \brief The ListBuildsForProjectRequest class provides an interface for CodeBuild ListBuildsForProject requests.
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
 * \sa CodeBuildClient::listBuildsForProject
 */

/*!
 * Constructs a copy of \a other.
 */
ListBuildsForProjectRequest::ListBuildsForProjectRequest(const ListBuildsForProjectRequest &other)
    : CodeBuildRequest(new ListBuildsForProjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBuildsForProjectRequest object.
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
 * Returns a ListBuildsForProjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBuildsForProjectRequest::response(QNetworkReply * const reply) const
{
    return new ListBuildsForProjectResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::ListBuildsForProjectRequestPrivate
 * \brief The ListBuildsForProjectRequestPrivate class provides private implementation for ListBuildsForProjectRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a ListBuildsForProjectRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
ListBuildsForProjectRequestPrivate::ListBuildsForProjectRequestPrivate(
    const CodeBuildRequest::Action action, ListBuildsForProjectRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBuildsForProjectRequest
 * class' copy constructor.
 */
ListBuildsForProjectRequestPrivate::ListBuildsForProjectRequestPrivate(
    const ListBuildsForProjectRequestPrivate &other, ListBuildsForProjectRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
