// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsourcecredentialsrequest.h"
#include "listsourcecredentialsrequest_p.h"
#include "listsourcecredentialsresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::ListSourceCredentialsRequest
 * \brief The ListSourceCredentialsRequest class provides an interface for CodeBuild ListSourceCredentials requests.
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
 * \sa CodeBuildClient::listSourceCredentials
 */

/*!
 * Constructs a copy of \a other.
 */
ListSourceCredentialsRequest::ListSourceCredentialsRequest(const ListSourceCredentialsRequest &other)
    : CodeBuildRequest(new ListSourceCredentialsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSourceCredentialsRequest object.
 */
ListSourceCredentialsRequest::ListSourceCredentialsRequest()
    : CodeBuildRequest(new ListSourceCredentialsRequestPrivate(CodeBuildRequest::ListSourceCredentialsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSourceCredentialsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSourceCredentialsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSourceCredentialsRequest::response(QNetworkReply * const reply) const
{
    return new ListSourceCredentialsResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::ListSourceCredentialsRequestPrivate
 * \brief The ListSourceCredentialsRequestPrivate class provides private implementation for ListSourceCredentialsRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a ListSourceCredentialsRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
ListSourceCredentialsRequestPrivate::ListSourceCredentialsRequestPrivate(
    const CodeBuildRequest::Action action, ListSourceCredentialsRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSourceCredentialsRequest
 * class' copy constructor.
 */
ListSourceCredentialsRequestPrivate::ListSourceCredentialsRequestPrivate(
    const ListSourceCredentialsRequestPrivate &other, ListSourceCredentialsRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
