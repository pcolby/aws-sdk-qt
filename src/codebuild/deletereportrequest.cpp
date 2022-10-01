// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereportrequest.h"
#include "deletereportrequest_p.h"
#include "deletereportresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::DeleteReportRequest
 * \brief The DeleteReportRequest class provides an interface for CodeBuild DeleteReport requests.
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
 * \sa CodeBuildClient::deleteReport
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteReportRequest::DeleteReportRequest(const DeleteReportRequest &other)
    : CodeBuildRequest(new DeleteReportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteReportRequest object.
 */
DeleteReportRequest::DeleteReportRequest()
    : CodeBuildRequest(new DeleteReportRequestPrivate(CodeBuildRequest::DeleteReportAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteReportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteReportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteReportRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReportResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::DeleteReportRequestPrivate
 * \brief The DeleteReportRequestPrivate class provides private implementation for DeleteReportRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a DeleteReportRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
DeleteReportRequestPrivate::DeleteReportRequestPrivate(
    const CodeBuildRequest::Action action, DeleteReportRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteReportRequest
 * class' copy constructor.
 */
DeleteReportRequestPrivate::DeleteReportRequestPrivate(
    const DeleteReportRequestPrivate &other, DeleteReportRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
