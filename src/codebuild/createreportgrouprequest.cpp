// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createreportgrouprequest.h"
#include "createreportgrouprequest_p.h"
#include "createreportgroupresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::CreateReportGroupRequest
 * \brief The CreateReportGroupRequest class provides an interface for CodeBuild CreateReportGroup requests.
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
 * \sa CodeBuildClient::createReportGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateReportGroupRequest::CreateReportGroupRequest(const CreateReportGroupRequest &other)
    : CodeBuildRequest(new CreateReportGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateReportGroupRequest object.
 */
CreateReportGroupRequest::CreateReportGroupRequest()
    : CodeBuildRequest(new CreateReportGroupRequestPrivate(CodeBuildRequest::CreateReportGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateReportGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateReportGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateReportGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateReportGroupResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::CreateReportGroupRequestPrivate
 * \brief The CreateReportGroupRequestPrivate class provides private implementation for CreateReportGroupRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a CreateReportGroupRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
CreateReportGroupRequestPrivate::CreateReportGroupRequestPrivate(
    const CodeBuildRequest::Action action, CreateReportGroupRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateReportGroupRequest
 * class' copy constructor.
 */
CreateReportGroupRequestPrivate::CreateReportGroupRequestPrivate(
    const CreateReportGroupRequestPrivate &other, CreateReportGroupRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
