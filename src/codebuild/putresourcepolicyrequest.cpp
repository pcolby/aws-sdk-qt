// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putresourcepolicyrequest.h"
#include "putresourcepolicyrequest_p.h"
#include "putresourcepolicyresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::PutResourcePolicyRequest
 * \brief The PutResourcePolicyRequest class provides an interface for CodeBuild PutResourcePolicy requests.
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
 * \sa CodeBuildClient::putResourcePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutResourcePolicyRequest::PutResourcePolicyRequest(const PutResourcePolicyRequest &other)
    : CodeBuildRequest(new PutResourcePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutResourcePolicyRequest object.
 */
PutResourcePolicyRequest::PutResourcePolicyRequest()
    : CodeBuildRequest(new PutResourcePolicyRequestPrivate(CodeBuildRequest::PutResourcePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutResourcePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutResourcePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutResourcePolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutResourcePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::PutResourcePolicyRequestPrivate
 * \brief The PutResourcePolicyRequestPrivate class provides private implementation for PutResourcePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a PutResourcePolicyRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
PutResourcePolicyRequestPrivate::PutResourcePolicyRequestPrivate(
    const CodeBuildRequest::Action action, PutResourcePolicyRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutResourcePolicyRequest
 * class' copy constructor.
 */
PutResourcePolicyRequestPrivate::PutResourcePolicyRequestPrivate(
    const PutResourcePolicyRequestPrivate &other, PutResourcePolicyRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
