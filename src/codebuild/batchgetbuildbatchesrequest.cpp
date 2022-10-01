// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetbuildbatchesrequest.h"
#include "batchgetbuildbatchesrequest_p.h"
#include "batchgetbuildbatchesresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::BatchGetBuildBatchesRequest
 * \brief The BatchGetBuildBatchesRequest class provides an interface for CodeBuild BatchGetBuildBatches requests.
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
 * \sa CodeBuildClient::batchGetBuildBatches
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetBuildBatchesRequest::BatchGetBuildBatchesRequest(const BatchGetBuildBatchesRequest &other)
    : CodeBuildRequest(new BatchGetBuildBatchesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetBuildBatchesRequest object.
 */
BatchGetBuildBatchesRequest::BatchGetBuildBatchesRequest()
    : CodeBuildRequest(new BatchGetBuildBatchesRequestPrivate(CodeBuildRequest::BatchGetBuildBatchesAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetBuildBatchesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetBuildBatchesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetBuildBatchesRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetBuildBatchesResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::BatchGetBuildBatchesRequestPrivate
 * \brief The BatchGetBuildBatchesRequestPrivate class provides private implementation for BatchGetBuildBatchesRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a BatchGetBuildBatchesRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
BatchGetBuildBatchesRequestPrivate::BatchGetBuildBatchesRequestPrivate(
    const CodeBuildRequest::Action action, BatchGetBuildBatchesRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetBuildBatchesRequest
 * class' copy constructor.
 */
BatchGetBuildBatchesRequestPrivate::BatchGetBuildBatchesRequestPrivate(
    const BatchGetBuildBatchesRequestPrivate &other, BatchGetBuildBatchesRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
