// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcuratedenvironmentimagesrequest.h"
#include "listcuratedenvironmentimagesrequest_p.h"
#include "listcuratedenvironmentimagesresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::ListCuratedEnvironmentImagesRequest
 * \brief The ListCuratedEnvironmentImagesRequest class provides an interface for CodeBuild ListCuratedEnvironmentImages requests.
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
 * \sa CodeBuildClient::listCuratedEnvironmentImages
 */

/*!
 * Constructs a copy of \a other.
 */
ListCuratedEnvironmentImagesRequest::ListCuratedEnvironmentImagesRequest(const ListCuratedEnvironmentImagesRequest &other)
    : CodeBuildRequest(new ListCuratedEnvironmentImagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCuratedEnvironmentImagesRequest object.
 */
ListCuratedEnvironmentImagesRequest::ListCuratedEnvironmentImagesRequest()
    : CodeBuildRequest(new ListCuratedEnvironmentImagesRequestPrivate(CodeBuildRequest::ListCuratedEnvironmentImagesAction, this))
{

}

/*!
 * \reimp
 */
bool ListCuratedEnvironmentImagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCuratedEnvironmentImagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCuratedEnvironmentImagesRequest::response(QNetworkReply * const reply) const
{
    return new ListCuratedEnvironmentImagesResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::ListCuratedEnvironmentImagesRequestPrivate
 * \brief The ListCuratedEnvironmentImagesRequestPrivate class provides private implementation for ListCuratedEnvironmentImagesRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a ListCuratedEnvironmentImagesRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
ListCuratedEnvironmentImagesRequestPrivate::ListCuratedEnvironmentImagesRequestPrivate(
    const CodeBuildRequest::Action action, ListCuratedEnvironmentImagesRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCuratedEnvironmentImagesRequest
 * class' copy constructor.
 */
ListCuratedEnvironmentImagesRequestPrivate::ListCuratedEnvironmentImagesRequestPrivate(
    const ListCuratedEnvironmentImagesRequestPrivate &other, ListCuratedEnvironmentImagesRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
