// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listreportsrequest.h"
#include "listreportsrequest_p.h"
#include "listreportsresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::ListReportsRequest
 * \brief The ListReportsRequest class provides an interface for CodeBuild ListReports requests.
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
 * \sa CodeBuildClient::listReports
 */

/*!
 * Constructs a copy of \a other.
 */
ListReportsRequest::ListReportsRequest(const ListReportsRequest &other)
    : CodeBuildRequest(new ListReportsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListReportsRequest object.
 */
ListReportsRequest::ListReportsRequest()
    : CodeBuildRequest(new ListReportsRequestPrivate(CodeBuildRequest::ListReportsAction, this))
{

}

/*!
 * \reimp
 */
bool ListReportsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListReportsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListReportsRequest::response(QNetworkReply * const reply) const
{
    return new ListReportsResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::ListReportsRequestPrivate
 * \brief The ListReportsRequestPrivate class provides private implementation for ListReportsRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a ListReportsRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
ListReportsRequestPrivate::ListReportsRequestPrivate(
    const CodeBuildRequest::Action action, ListReportsRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListReportsRequest
 * class' copy constructor.
 */
ListReportsRequestPrivate::ListReportsRequestPrivate(
    const ListReportsRequestPrivate &other, ListReportsRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
