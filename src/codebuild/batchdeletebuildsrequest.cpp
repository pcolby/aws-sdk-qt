// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdeletebuildsrequest.h"
#include "batchdeletebuildsrequest_p.h"
#include "batchdeletebuildsresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::BatchDeleteBuildsRequest
 * \brief The BatchDeleteBuildsRequest class provides an interface for CodeBuild BatchDeleteBuilds requests.
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
 * \sa CodeBuildClient::batchDeleteBuilds
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDeleteBuildsRequest::BatchDeleteBuildsRequest(const BatchDeleteBuildsRequest &other)
    : CodeBuildRequest(new BatchDeleteBuildsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDeleteBuildsRequest object.
 */
BatchDeleteBuildsRequest::BatchDeleteBuildsRequest()
    : CodeBuildRequest(new BatchDeleteBuildsRequestPrivate(CodeBuildRequest::BatchDeleteBuildsAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDeleteBuildsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDeleteBuildsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDeleteBuildsRequest::response(QNetworkReply * const reply) const
{
    return new BatchDeleteBuildsResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::BatchDeleteBuildsRequestPrivate
 * \brief The BatchDeleteBuildsRequestPrivate class provides private implementation for BatchDeleteBuildsRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a BatchDeleteBuildsRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
BatchDeleteBuildsRequestPrivate::BatchDeleteBuildsRequestPrivate(
    const CodeBuildRequest::Action action, BatchDeleteBuildsRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDeleteBuildsRequest
 * class' copy constructor.
 */
BatchDeleteBuildsRequestPrivate::BatchDeleteBuildsRequestPrivate(
    const BatchDeleteBuildsRequestPrivate &other, BatchDeleteBuildsRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
