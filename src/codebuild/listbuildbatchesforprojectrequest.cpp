// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
