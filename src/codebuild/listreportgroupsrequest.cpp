// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listreportgroupsrequest.h"
#include "listreportgroupsrequest_p.h"
#include "listreportgroupsresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::ListReportGroupsRequest
 * \brief The ListReportGroupsRequest class provides an interface for CodeBuild ListReportGroups requests.
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
 * \sa CodeBuildClient::listReportGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ListReportGroupsRequest::ListReportGroupsRequest(const ListReportGroupsRequest &other)
    : CodeBuildRequest(new ListReportGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListReportGroupsRequest object.
 */
ListReportGroupsRequest::ListReportGroupsRequest()
    : CodeBuildRequest(new ListReportGroupsRequestPrivate(CodeBuildRequest::ListReportGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListReportGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListReportGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListReportGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListReportGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::ListReportGroupsRequestPrivate
 * \brief The ListReportGroupsRequestPrivate class provides private implementation for ListReportGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a ListReportGroupsRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
ListReportGroupsRequestPrivate::ListReportGroupsRequestPrivate(
    const CodeBuildRequest::Action action, ListReportGroupsRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListReportGroupsRequest
 * class' copy constructor.
 */
ListReportGroupsRequestPrivate::ListReportGroupsRequestPrivate(
    const ListReportGroupsRequestPrivate &other, ListReportGroupsRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
