// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsharedreportgroupsrequest.h"
#include "listsharedreportgroupsrequest_p.h"
#include "listsharedreportgroupsresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::ListSharedReportGroupsRequest
 * \brief The ListSharedReportGroupsRequest class provides an interface for CodeBuild ListSharedReportGroups requests.
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
 * \sa CodeBuildClient::listSharedReportGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ListSharedReportGroupsRequest::ListSharedReportGroupsRequest(const ListSharedReportGroupsRequest &other)
    : CodeBuildRequest(new ListSharedReportGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSharedReportGroupsRequest object.
 */
ListSharedReportGroupsRequest::ListSharedReportGroupsRequest()
    : CodeBuildRequest(new ListSharedReportGroupsRequestPrivate(CodeBuildRequest::ListSharedReportGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSharedReportGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSharedReportGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSharedReportGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListSharedReportGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::ListSharedReportGroupsRequestPrivate
 * \brief The ListSharedReportGroupsRequestPrivate class provides private implementation for ListSharedReportGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a ListSharedReportGroupsRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
ListSharedReportGroupsRequestPrivate::ListSharedReportGroupsRequestPrivate(
    const CodeBuildRequest::Action action, ListSharedReportGroupsRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSharedReportGroupsRequest
 * class' copy constructor.
 */
ListSharedReportGroupsRequestPrivate::ListSharedReportGroupsRequestPrivate(
    const ListSharedReportGroupsRequestPrivate &other, ListSharedReportGroupsRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
