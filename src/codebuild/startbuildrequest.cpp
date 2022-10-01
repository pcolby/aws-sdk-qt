// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startbuildrequest.h"
#include "startbuildrequest_p.h"
#include "startbuildresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::StartBuildRequest
 * \brief The StartBuildRequest class provides an interface for CodeBuild StartBuild requests.
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
 * \sa CodeBuildClient::startBuild
 */

/*!
 * Constructs a copy of \a other.
 */
StartBuildRequest::StartBuildRequest(const StartBuildRequest &other)
    : CodeBuildRequest(new StartBuildRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartBuildRequest object.
 */
StartBuildRequest::StartBuildRequest()
    : CodeBuildRequest(new StartBuildRequestPrivate(CodeBuildRequest::StartBuildAction, this))
{

}

/*!
 * \reimp
 */
bool StartBuildRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartBuildResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartBuildRequest::response(QNetworkReply * const reply) const
{
    return new StartBuildResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::StartBuildRequestPrivate
 * \brief The StartBuildRequestPrivate class provides private implementation for StartBuildRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a StartBuildRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
StartBuildRequestPrivate::StartBuildRequestPrivate(
    const CodeBuildRequest::Action action, StartBuildRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartBuildRequest
 * class' copy constructor.
 */
StartBuildRequestPrivate::StartBuildRequestPrivate(
    const StartBuildRequestPrivate &other, StartBuildRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
