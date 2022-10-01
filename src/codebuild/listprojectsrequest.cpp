// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprojectsrequest.h"
#include "listprojectsrequest_p.h"
#include "listprojectsresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::ListProjectsRequest
 * \brief The ListProjectsRequest class provides an interface for CodeBuild ListProjects requests.
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
 * \sa CodeBuildClient::listProjects
 */

/*!
 * Constructs a copy of \a other.
 */
ListProjectsRequest::ListProjectsRequest(const ListProjectsRequest &other)
    : CodeBuildRequest(new ListProjectsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListProjectsRequest object.
 */
ListProjectsRequest::ListProjectsRequest()
    : CodeBuildRequest(new ListProjectsRequestPrivate(CodeBuildRequest::ListProjectsAction, this))
{

}

/*!
 * \reimp
 */
bool ListProjectsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListProjectsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListProjectsRequest::response(QNetworkReply * const reply) const
{
    return new ListProjectsResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::ListProjectsRequestPrivate
 * \brief The ListProjectsRequestPrivate class provides private implementation for ListProjectsRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a ListProjectsRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
ListProjectsRequestPrivate::ListProjectsRequestPrivate(
    const CodeBuildRequest::Action action, ListProjectsRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListProjectsRequest
 * class' copy constructor.
 */
ListProjectsRequestPrivate::ListProjectsRequestPrivate(
    const ListProjectsRequestPrivate &other, ListProjectsRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
