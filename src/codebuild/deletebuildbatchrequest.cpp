// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebuildbatchrequest.h"
#include "deletebuildbatchrequest_p.h"
#include "deletebuildbatchresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::DeleteBuildBatchRequest
 * \brief The DeleteBuildBatchRequest class provides an interface for CodeBuild DeleteBuildBatch requests.
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
 * \sa CodeBuildClient::deleteBuildBatch
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBuildBatchRequest::DeleteBuildBatchRequest(const DeleteBuildBatchRequest &other)
    : CodeBuildRequest(new DeleteBuildBatchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBuildBatchRequest object.
 */
DeleteBuildBatchRequest::DeleteBuildBatchRequest()
    : CodeBuildRequest(new DeleteBuildBatchRequestPrivate(CodeBuildRequest::DeleteBuildBatchAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBuildBatchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBuildBatchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBuildBatchRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBuildBatchResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::DeleteBuildBatchRequestPrivate
 * \brief The DeleteBuildBatchRequestPrivate class provides private implementation for DeleteBuildBatchRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a DeleteBuildBatchRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
DeleteBuildBatchRequestPrivate::DeleteBuildBatchRequestPrivate(
    const CodeBuildRequest::Action action, DeleteBuildBatchRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBuildBatchRequest
 * class' copy constructor.
 */
DeleteBuildBatchRequestPrivate::DeleteBuildBatchRequestPrivate(
    const DeleteBuildBatchRequestPrivate &other, DeleteBuildBatchRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
