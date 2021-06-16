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
 *  <fullname>AWS CodeBuild</fullname>
 * 
 *  AWS CodeBuild is a fully managed build service in the cloud. AWS CodeBuild compiles your source code, runs unit tests,
 *  and produces artifacts that are ready to deploy. AWS CodeBuild eliminates the need to provision, manage, and scale your
 *  own build servers. It provides prepackaged build environments for the most popular programming languages and build
 *  tools, such as Apache Maven, Gradle, and more. You can also fully customize build environments in AWS CodeBuild to use
 *  your own build tools. AWS CodeBuild scales automatically to meet peak build requests. You pay only for the build time
 *  you consume. For more information about AWS CodeBuild, see the <i> <a
 *  href="https://docs.aws.amazon.com/codebuild/latest/userguide/welcome.html">AWS CodeBuild User Guide</a>.</i>
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
