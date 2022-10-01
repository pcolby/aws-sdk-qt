// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importsourcecredentialsrequest.h"
#include "importsourcecredentialsrequest_p.h"
#include "importsourcecredentialsresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::ImportSourceCredentialsRequest
 * \brief The ImportSourceCredentialsRequest class provides an interface for CodeBuild ImportSourceCredentials requests.
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
 * \sa CodeBuildClient::importSourceCredentials
 */

/*!
 * Constructs a copy of \a other.
 */
ImportSourceCredentialsRequest::ImportSourceCredentialsRequest(const ImportSourceCredentialsRequest &other)
    : CodeBuildRequest(new ImportSourceCredentialsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportSourceCredentialsRequest object.
 */
ImportSourceCredentialsRequest::ImportSourceCredentialsRequest()
    : CodeBuildRequest(new ImportSourceCredentialsRequestPrivate(CodeBuildRequest::ImportSourceCredentialsAction, this))
{

}

/*!
 * \reimp
 */
bool ImportSourceCredentialsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportSourceCredentialsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportSourceCredentialsRequest::response(QNetworkReply * const reply) const
{
    return new ImportSourceCredentialsResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::ImportSourceCredentialsRequestPrivate
 * \brief The ImportSourceCredentialsRequestPrivate class provides private implementation for ImportSourceCredentialsRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a ImportSourceCredentialsRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
ImportSourceCredentialsRequestPrivate::ImportSourceCredentialsRequestPrivate(
    const CodeBuildRequest::Action action, ImportSourceCredentialsRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportSourceCredentialsRequest
 * class' copy constructor.
 */
ImportSourceCredentialsRequestPrivate::ImportSourceCredentialsRequestPrivate(
    const ImportSourceCredentialsRequestPrivate &other, ImportSourceCredentialsRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
