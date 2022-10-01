/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatereportgrouprequest.h"
#include "updatereportgrouprequest_p.h"
#include "updatereportgroupresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::UpdateReportGroupRequest
 * \brief The UpdateReportGroupRequest class provides an interface for CodeBuild UpdateReportGroup requests.
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
 * \sa CodeBuildClient::updateReportGroup
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateReportGroupRequest::UpdateReportGroupRequest(const UpdateReportGroupRequest &other)
    : CodeBuildRequest(new UpdateReportGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateReportGroupRequest object.
 */
UpdateReportGroupRequest::UpdateReportGroupRequest()
    : CodeBuildRequest(new UpdateReportGroupRequestPrivate(CodeBuildRequest::UpdateReportGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateReportGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateReportGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateReportGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateReportGroupResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::UpdateReportGroupRequestPrivate
 * \brief The UpdateReportGroupRequestPrivate class provides private implementation for UpdateReportGroupRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a UpdateReportGroupRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
UpdateReportGroupRequestPrivate::UpdateReportGroupRequestPrivate(
    const CodeBuildRequest::Action action, UpdateReportGroupRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateReportGroupRequest
 * class' copy constructor.
 */
UpdateReportGroupRequestPrivate::UpdateReportGroupRequestPrivate(
    const UpdateReportGroupRequestPrivate &other, UpdateReportGroupRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
