// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletewebhookrequest.h"
#include "deletewebhookrequest_p.h"
#include "deletewebhookresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::DeleteWebhookRequest
 * \brief The DeleteWebhookRequest class provides an interface for CodeBuild DeleteWebhook requests.
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
 * \sa CodeBuildClient::deleteWebhook
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWebhookRequest::DeleteWebhookRequest(const DeleteWebhookRequest &other)
    : CodeBuildRequest(new DeleteWebhookRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWebhookRequest object.
 */
DeleteWebhookRequest::DeleteWebhookRequest()
    : CodeBuildRequest(new DeleteWebhookRequestPrivate(CodeBuildRequest::DeleteWebhookAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWebhookRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteWebhookResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWebhookRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWebhookResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::DeleteWebhookRequestPrivate
 * \brief The DeleteWebhookRequestPrivate class provides private implementation for DeleteWebhookRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a DeleteWebhookRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
DeleteWebhookRequestPrivate::DeleteWebhookRequestPrivate(
    const CodeBuildRequest::Action action, DeleteWebhookRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteWebhookRequest
 * class' copy constructor.
 */
DeleteWebhookRequestPrivate::DeleteWebhookRequestPrivate(
    const DeleteWebhookRequestPrivate &other, DeleteWebhookRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
