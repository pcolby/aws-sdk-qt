// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetestcasesrequest.h"
#include "describetestcasesrequest_p.h"
#include "describetestcasesresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::DescribeTestCasesRequest
 * \brief The DescribeTestCasesRequest class provides an interface for CodeBuild DescribeTestCases requests.
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
 * \sa CodeBuildClient::describeTestCases
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTestCasesRequest::DescribeTestCasesRequest(const DescribeTestCasesRequest &other)
    : CodeBuildRequest(new DescribeTestCasesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTestCasesRequest object.
 */
DescribeTestCasesRequest::DescribeTestCasesRequest()
    : CodeBuildRequest(new DescribeTestCasesRequestPrivate(CodeBuildRequest::DescribeTestCasesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTestCasesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTestCasesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTestCasesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTestCasesResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::DescribeTestCasesRequestPrivate
 * \brief The DescribeTestCasesRequestPrivate class provides private implementation for DescribeTestCasesRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a DescribeTestCasesRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
DescribeTestCasesRequestPrivate::DescribeTestCasesRequestPrivate(
    const CodeBuildRequest::Action action, DescribeTestCasesRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTestCasesRequest
 * class' copy constructor.
 */
DescribeTestCasesRequestPrivate::DescribeTestCasesRequestPrivate(
    const DescribeTestCasesRequestPrivate &other, DescribeTestCasesRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
