// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetreportsrequest.h"
#include "batchgetreportsrequest_p.h"
#include "batchgetreportsresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::BatchGetReportsRequest
 * \brief The BatchGetReportsRequest class provides an interface for CodeBuild BatchGetReports requests.
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
 * \sa CodeBuildClient::batchGetReports
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetReportsRequest::BatchGetReportsRequest(const BatchGetReportsRequest &other)
    : CodeBuildRequest(new BatchGetReportsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetReportsRequest object.
 */
BatchGetReportsRequest::BatchGetReportsRequest()
    : CodeBuildRequest(new BatchGetReportsRequestPrivate(CodeBuildRequest::BatchGetReportsAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetReportsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetReportsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetReportsRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetReportsResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::BatchGetReportsRequestPrivate
 * \brief The BatchGetReportsRequestPrivate class provides private implementation for BatchGetReportsRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a BatchGetReportsRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
BatchGetReportsRequestPrivate::BatchGetReportsRequestPrivate(
    const CodeBuildRequest::Action action, BatchGetReportsRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetReportsRequest
 * class' copy constructor.
 */
BatchGetReportsRequestPrivate::BatchGetReportsRequestPrivate(
    const BatchGetReportsRequestPrivate &other, BatchGetReportsRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
