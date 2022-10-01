// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetreportgroupsrequest.h"
#include "batchgetreportgroupsrequest_p.h"
#include "batchgetreportgroupsresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::BatchGetReportGroupsRequest
 * \brief The BatchGetReportGroupsRequest class provides an interface for CodeBuild BatchGetReportGroups requests.
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
 * \sa CodeBuildClient::batchGetReportGroups
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetReportGroupsRequest::BatchGetReportGroupsRequest(const BatchGetReportGroupsRequest &other)
    : CodeBuildRequest(new BatchGetReportGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetReportGroupsRequest object.
 */
BatchGetReportGroupsRequest::BatchGetReportGroupsRequest()
    : CodeBuildRequest(new BatchGetReportGroupsRequestPrivate(CodeBuildRequest::BatchGetReportGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetReportGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetReportGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetReportGroupsRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetReportGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::BatchGetReportGroupsRequestPrivate
 * \brief The BatchGetReportGroupsRequestPrivate class provides private implementation for BatchGetReportGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a BatchGetReportGroupsRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
BatchGetReportGroupsRequestPrivate::BatchGetReportGroupsRequestPrivate(
    const CodeBuildRequest::Action action, BatchGetReportGroupsRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetReportGroupsRequest
 * class' copy constructor.
 */
BatchGetReportGroupsRequestPrivate::BatchGetReportGroupsRequestPrivate(
    const BatchGetReportGroupsRequestPrivate &other, BatchGetReportGroupsRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
