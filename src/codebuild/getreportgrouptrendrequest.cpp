// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getreportgrouptrendrequest.h"
#include "getreportgrouptrendrequest_p.h"
#include "getreportgrouptrendresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::GetReportGroupTrendRequest
 * \brief The GetReportGroupTrendRequest class provides an interface for CodeBuild GetReportGroupTrend requests.
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
 * \sa CodeBuildClient::getReportGroupTrend
 */

/*!
 * Constructs a copy of \a other.
 */
GetReportGroupTrendRequest::GetReportGroupTrendRequest(const GetReportGroupTrendRequest &other)
    : CodeBuildRequest(new GetReportGroupTrendRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetReportGroupTrendRequest object.
 */
GetReportGroupTrendRequest::GetReportGroupTrendRequest()
    : CodeBuildRequest(new GetReportGroupTrendRequestPrivate(CodeBuildRequest::GetReportGroupTrendAction, this))
{

}

/*!
 * \reimp
 */
bool GetReportGroupTrendRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetReportGroupTrendResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetReportGroupTrendRequest::response(QNetworkReply * const reply) const
{
    return new GetReportGroupTrendResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::GetReportGroupTrendRequestPrivate
 * \brief The GetReportGroupTrendRequestPrivate class provides private implementation for GetReportGroupTrendRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a GetReportGroupTrendRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
GetReportGroupTrendRequestPrivate::GetReportGroupTrendRequestPrivate(
    const CodeBuildRequest::Action action, GetReportGroupTrendRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetReportGroupTrendRequest
 * class' copy constructor.
 */
GetReportGroupTrendRequestPrivate::GetReportGroupTrendRequestPrivate(
    const GetReportGroupTrendRequestPrivate &other, GetReportGroupTrendRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
