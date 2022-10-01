// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereportgrouprequest.h"
#include "deletereportgrouprequest_p.h"
#include "deletereportgroupresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::DeleteReportGroupRequest
 * \brief The DeleteReportGroupRequest class provides an interface for CodeBuild DeleteReportGroup requests.
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
 * \sa CodeBuildClient::deleteReportGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteReportGroupRequest::DeleteReportGroupRequest(const DeleteReportGroupRequest &other)
    : CodeBuildRequest(new DeleteReportGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteReportGroupRequest object.
 */
DeleteReportGroupRequest::DeleteReportGroupRequest()
    : CodeBuildRequest(new DeleteReportGroupRequestPrivate(CodeBuildRequest::DeleteReportGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteReportGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteReportGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteReportGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReportGroupResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::DeleteReportGroupRequestPrivate
 * \brief The DeleteReportGroupRequestPrivate class provides private implementation for DeleteReportGroupRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a DeleteReportGroupRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
DeleteReportGroupRequestPrivate::DeleteReportGroupRequestPrivate(
    const CodeBuildRequest::Action action, DeleteReportGroupRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteReportGroupRequest
 * class' copy constructor.
 */
DeleteReportGroupRequestPrivate::DeleteReportGroupRequestPrivate(
    const DeleteReportGroupRequestPrivate &other, DeleteReportGroupRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
