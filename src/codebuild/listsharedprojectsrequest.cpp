// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsharedprojectsrequest.h"
#include "listsharedprojectsrequest_p.h"
#include "listsharedprojectsresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::ListSharedProjectsRequest
 * \brief The ListSharedProjectsRequest class provides an interface for CodeBuild ListSharedProjects requests.
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
 * Constructs a copy of \a other.
 */
ListSharedProjectsRequest::ListSharedProjectsRequest(const ListSharedProjectsRequest &other)
    : CodeBuildRequest(new ListSharedProjectsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSharedProjectsRequest object.
 */
ListSharedProjectsRequest::ListSharedProjectsRequest()
    : CodeBuildRequest(new ListSharedProjectsRequestPrivate(CodeBuildRequest::ListSharedProjectsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSharedProjectsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSharedProjectsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSharedProjectsRequest::response(QNetworkReply * const reply) const
{
    return new ListSharedProjectsResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::ListSharedProjectsRequestPrivate
 * \brief The ListSharedProjectsRequestPrivate class provides private implementation for ListSharedProjectsRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a ListSharedProjectsRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
ListSharedProjectsRequestPrivate::ListSharedProjectsRequestPrivate(
    const CodeBuildRequest::Action action, ListSharedProjectsRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSharedProjectsRequest
 * class' copy constructor.
 */
ListSharedProjectsRequestPrivate::ListSharedProjectsRequestPrivate(
    const ListSharedProjectsRequestPrivate &other, ListSharedProjectsRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
