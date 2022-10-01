// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesourcecredentialsrequest.h"
#include "deletesourcecredentialsrequest_p.h"
#include "deletesourcecredentialsresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::DeleteSourceCredentialsRequest
 * \brief The DeleteSourceCredentialsRequest class provides an interface for CodeBuild DeleteSourceCredentials requests.
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
 * \sa CodeBuildClient::deleteSourceCredentials
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSourceCredentialsRequest::DeleteSourceCredentialsRequest(const DeleteSourceCredentialsRequest &other)
    : CodeBuildRequest(new DeleteSourceCredentialsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSourceCredentialsRequest object.
 */
DeleteSourceCredentialsRequest::DeleteSourceCredentialsRequest()
    : CodeBuildRequest(new DeleteSourceCredentialsRequestPrivate(CodeBuildRequest::DeleteSourceCredentialsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSourceCredentialsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSourceCredentialsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSourceCredentialsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSourceCredentialsResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::DeleteSourceCredentialsRequestPrivate
 * \brief The DeleteSourceCredentialsRequestPrivate class provides private implementation for DeleteSourceCredentialsRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a DeleteSourceCredentialsRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
DeleteSourceCredentialsRequestPrivate::DeleteSourceCredentialsRequestPrivate(
    const CodeBuildRequest::Action action, DeleteSourceCredentialsRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSourceCredentialsRequest
 * class' copy constructor.
 */
DeleteSourceCredentialsRequestPrivate::DeleteSourceCredentialsRequestPrivate(
    const DeleteSourceCredentialsRequestPrivate &other, DeleteSourceCredentialsRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
