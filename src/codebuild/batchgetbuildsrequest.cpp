// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetbuildsrequest.h"
#include "batchgetbuildsrequest_p.h"
#include "batchgetbuildsresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::BatchGetBuildsRequest
 * \brief The BatchGetBuildsRequest class provides an interface for CodeBuild BatchGetBuilds requests.
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
 * \sa CodeBuildClient::batchGetBuilds
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetBuildsRequest::BatchGetBuildsRequest(const BatchGetBuildsRequest &other)
    : CodeBuildRequest(new BatchGetBuildsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetBuildsRequest object.
 */
BatchGetBuildsRequest::BatchGetBuildsRequest()
    : CodeBuildRequest(new BatchGetBuildsRequestPrivate(CodeBuildRequest::BatchGetBuildsAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetBuildsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetBuildsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetBuildsRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetBuildsResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::BatchGetBuildsRequestPrivate
 * \brief The BatchGetBuildsRequestPrivate class provides private implementation for BatchGetBuildsRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a BatchGetBuildsRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
BatchGetBuildsRequestPrivate::BatchGetBuildsRequestPrivate(
    const CodeBuildRequest::Action action, BatchGetBuildsRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetBuildsRequest
 * class' copy constructor.
 */
BatchGetBuildsRequestPrivate::BatchGetBuildsRequestPrivate(
    const BatchGetBuildsRequestPrivate &other, BatchGetBuildsRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
