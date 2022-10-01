// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "retrybuildbatchrequest.h"
#include "retrybuildbatchrequest_p.h"
#include "retrybuildbatchresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::RetryBuildBatchRequest
 * \brief The RetryBuildBatchRequest class provides an interface for CodeBuild RetryBuildBatch requests.
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
 * \sa CodeBuildClient::retryBuildBatch
 */

/*!
 * Constructs a copy of \a other.
 */
RetryBuildBatchRequest::RetryBuildBatchRequest(const RetryBuildBatchRequest &other)
    : CodeBuildRequest(new RetryBuildBatchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RetryBuildBatchRequest object.
 */
RetryBuildBatchRequest::RetryBuildBatchRequest()
    : CodeBuildRequest(new RetryBuildBatchRequestPrivate(CodeBuildRequest::RetryBuildBatchAction, this))
{

}

/*!
 * \reimp
 */
bool RetryBuildBatchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RetryBuildBatchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RetryBuildBatchRequest::response(QNetworkReply * const reply) const
{
    return new RetryBuildBatchResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::RetryBuildBatchRequestPrivate
 * \brief The RetryBuildBatchRequestPrivate class provides private implementation for RetryBuildBatchRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a RetryBuildBatchRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
RetryBuildBatchRequestPrivate::RetryBuildBatchRequestPrivate(
    const CodeBuildRequest::Action action, RetryBuildBatchRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RetryBuildBatchRequest
 * class' copy constructor.
 */
RetryBuildBatchRequestPrivate::RetryBuildBatchRequestPrivate(
    const RetryBuildBatchRequestPrivate &other, RetryBuildBatchRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
