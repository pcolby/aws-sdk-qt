// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listreportsforreportgrouprequest.h"
#include "listreportsforreportgrouprequest_p.h"
#include "listreportsforreportgroupresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::ListReportsForReportGroupRequest
 * \brief The ListReportsForReportGroupRequest class provides an interface for CodeBuild ListReportsForReportGroup requests.
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
 * \sa CodeBuildClient::listReportsForReportGroup
 */

/*!
 * Constructs a copy of \a other.
 */
ListReportsForReportGroupRequest::ListReportsForReportGroupRequest(const ListReportsForReportGroupRequest &other)
    : CodeBuildRequest(new ListReportsForReportGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListReportsForReportGroupRequest object.
 */
ListReportsForReportGroupRequest::ListReportsForReportGroupRequest()
    : CodeBuildRequest(new ListReportsForReportGroupRequestPrivate(CodeBuildRequest::ListReportsForReportGroupAction, this))
{

}

/*!
 * \reimp
 */
bool ListReportsForReportGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListReportsForReportGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListReportsForReportGroupRequest::response(QNetworkReply * const reply) const
{
    return new ListReportsForReportGroupResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::ListReportsForReportGroupRequestPrivate
 * \brief The ListReportsForReportGroupRequestPrivate class provides private implementation for ListReportsForReportGroupRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a ListReportsForReportGroupRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
ListReportsForReportGroupRequestPrivate::ListReportsForReportGroupRequestPrivate(
    const CodeBuildRequest::Action action, ListReportsForReportGroupRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListReportsForReportGroupRequest
 * class' copy constructor.
 */
ListReportsForReportGroupRequestPrivate::ListReportsForReportGroupRequestPrivate(
    const ListReportsForReportGroupRequestPrivate &other, ListReportsForReportGroupRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
