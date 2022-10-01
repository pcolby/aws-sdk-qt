// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopbuildbatchrequest.h"
#include "stopbuildbatchrequest_p.h"
#include "stopbuildbatchresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::StopBuildBatchRequest
 * \brief The StopBuildBatchRequest class provides an interface for CodeBuild StopBuildBatch requests.
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
 * \sa CodeBuildClient::stopBuildBatch
 */

/*!
 * Constructs a copy of \a other.
 */
StopBuildBatchRequest::StopBuildBatchRequest(const StopBuildBatchRequest &other)
    : CodeBuildRequest(new StopBuildBatchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopBuildBatchRequest object.
 */
StopBuildBatchRequest::StopBuildBatchRequest()
    : CodeBuildRequest(new StopBuildBatchRequestPrivate(CodeBuildRequest::StopBuildBatchAction, this))
{

}

/*!
 * \reimp
 */
bool StopBuildBatchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopBuildBatchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopBuildBatchRequest::response(QNetworkReply * const reply) const
{
    return new StopBuildBatchResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::StopBuildBatchRequestPrivate
 * \brief The StopBuildBatchRequestPrivate class provides private implementation for StopBuildBatchRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a StopBuildBatchRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
StopBuildBatchRequestPrivate::StopBuildBatchRequestPrivate(
    const CodeBuildRequest::Action action, StopBuildBatchRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopBuildBatchRequest
 * class' copy constructor.
 */
StopBuildBatchRequestPrivate::StopBuildBatchRequestPrivate(
    const StopBuildBatchRequestPrivate &other, StopBuildBatchRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
