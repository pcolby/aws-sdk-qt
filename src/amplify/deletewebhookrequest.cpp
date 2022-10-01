// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletewebhookrequest.h"
#include "deletewebhookrequest_p.h"
#include "deletewebhookresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::DeleteWebhookRequest
 * \brief The DeleteWebhookRequest class provides an interface for Amplify DeleteWebhook requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::deleteWebhook
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWebhookRequest::DeleteWebhookRequest(const DeleteWebhookRequest &other)
    : AmplifyRequest(new DeleteWebhookRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWebhookRequest object.
 */
DeleteWebhookRequest::DeleteWebhookRequest()
    : AmplifyRequest(new DeleteWebhookRequestPrivate(AmplifyRequest::DeleteWebhookAction, this))
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
 * \class QtAws::Amplify::DeleteWebhookRequestPrivate
 * \brief The DeleteWebhookRequestPrivate class provides private implementation for DeleteWebhookRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a DeleteWebhookRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
DeleteWebhookRequestPrivate::DeleteWebhookRequestPrivate(
    const AmplifyRequest::Action action, DeleteWebhookRequest * const q)
    : AmplifyRequestPrivate(action, q)
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
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
