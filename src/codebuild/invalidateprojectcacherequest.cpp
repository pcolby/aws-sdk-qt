// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "invalidateprojectcacherequest.h"
#include "invalidateprojectcacherequest_p.h"
#include "invalidateprojectcacheresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::InvalidateProjectCacheRequest
 * \brief The InvalidateProjectCacheRequest class provides an interface for CodeBuild InvalidateProjectCache requests.
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
 * \sa CodeBuildClient::invalidateProjectCache
 */

/*!
 * Constructs a copy of \a other.
 */
InvalidateProjectCacheRequest::InvalidateProjectCacheRequest(const InvalidateProjectCacheRequest &other)
    : CodeBuildRequest(new InvalidateProjectCacheRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a InvalidateProjectCacheRequest object.
 */
InvalidateProjectCacheRequest::InvalidateProjectCacheRequest()
    : CodeBuildRequest(new InvalidateProjectCacheRequestPrivate(CodeBuildRequest::InvalidateProjectCacheAction, this))
{

}

/*!
 * \reimp
 */
bool InvalidateProjectCacheRequest::isValid() const
{
    return false;
}


/*!
 * Returns a InvalidateProjectCacheResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * InvalidateProjectCacheRequest::response(QNetworkReply * const reply) const
{
    return new InvalidateProjectCacheResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::InvalidateProjectCacheRequestPrivate
 * \brief The InvalidateProjectCacheRequestPrivate class provides private implementation for InvalidateProjectCacheRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a InvalidateProjectCacheRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
InvalidateProjectCacheRequestPrivate::InvalidateProjectCacheRequestPrivate(
    const CodeBuildRequest::Action action, InvalidateProjectCacheRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the InvalidateProjectCacheRequest
 * class' copy constructor.
 */
InvalidateProjectCacheRequestPrivate::InvalidateProjectCacheRequestPrivate(
    const InvalidateProjectCacheRequestPrivate &other, InvalidateProjectCacheRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
