// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startbuildbatchrequest.h"
#include "startbuildbatchrequest_p.h"
#include "startbuildbatchresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::StartBuildBatchRequest
 * \brief The StartBuildBatchRequest class provides an interface for CodeBuild StartBuildBatch requests.
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
 * \sa CodeBuildClient::startBuildBatch
 */

/*!
 * Constructs a copy of \a other.
 */
StartBuildBatchRequest::StartBuildBatchRequest(const StartBuildBatchRequest &other)
    : CodeBuildRequest(new StartBuildBatchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartBuildBatchRequest object.
 */
StartBuildBatchRequest::StartBuildBatchRequest()
    : CodeBuildRequest(new StartBuildBatchRequestPrivate(CodeBuildRequest::StartBuildBatchAction, this))
{

}

/*!
 * \reimp
 */
bool StartBuildBatchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartBuildBatchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartBuildBatchRequest::response(QNetworkReply * const reply) const
{
    return new StartBuildBatchResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::StartBuildBatchRequestPrivate
 * \brief The StartBuildBatchRequestPrivate class provides private implementation for StartBuildBatchRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a StartBuildBatchRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
StartBuildBatchRequestPrivate::StartBuildBatchRequestPrivate(
    const CodeBuildRequest::Action action, StartBuildBatchRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartBuildBatchRequest
 * class' copy constructor.
 */
StartBuildBatchRequestPrivate::StartBuildBatchRequestPrivate(
    const StartBuildBatchRequestPrivate &other, StartBuildBatchRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
