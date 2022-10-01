// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbuildsrequest.h"
#include "listbuildsrequest_p.h"
#include "listbuildsresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::ListBuildsRequest
 * \brief The ListBuildsRequest class provides an interface for CodeBuild ListBuilds requests.
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
 * Constructs a copy of \a other.
 */
ListBuildsRequest::ListBuildsRequest(const ListBuildsRequest &other)
    : CodeBuildRequest(new ListBuildsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBuildsRequest object.
 */
ListBuildsRequest::ListBuildsRequest()
    : CodeBuildRequest(new ListBuildsRequestPrivate(CodeBuildRequest::ListBuildsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBuildsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBuildsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBuildsRequest::response(QNetworkReply * const reply) const
{
    return new ListBuildsResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::ListBuildsRequestPrivate
 * \brief The ListBuildsRequestPrivate class provides private implementation for ListBuildsRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a ListBuildsRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
ListBuildsRequestPrivate::ListBuildsRequestPrivate(
    const CodeBuildRequest::Action action, ListBuildsRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBuildsRequest
 * class' copy constructor.
 */
ListBuildsRequestPrivate::ListBuildsRequestPrivate(
    const ListBuildsRequestPrivate &other, ListBuildsRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
