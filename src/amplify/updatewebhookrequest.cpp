// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatewebhookrequest.h"
#include "updatewebhookrequest_p.h"
#include "updatewebhookresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::UpdateWebhookRequest
 * \brief The UpdateWebhookRequest class provides an interface for Amplify UpdateWebhook requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::updateWebhook
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateWebhookRequest::UpdateWebhookRequest(const UpdateWebhookRequest &other)
    : AmplifyRequest(new UpdateWebhookRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateWebhookRequest object.
 */
UpdateWebhookRequest::UpdateWebhookRequest()
    : AmplifyRequest(new UpdateWebhookRequestPrivate(AmplifyRequest::UpdateWebhookAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateWebhookRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateWebhookResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateWebhookRequest::response(QNetworkReply * const reply) const
{
    return new UpdateWebhookResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::UpdateWebhookRequestPrivate
 * \brief The UpdateWebhookRequestPrivate class provides private implementation for UpdateWebhookRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a UpdateWebhookRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
UpdateWebhookRequestPrivate::UpdateWebhookRequestPrivate(
    const AmplifyRequest::Action action, UpdateWebhookRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateWebhookRequest
 * class' copy constructor.
 */
UpdateWebhookRequestPrivate::UpdateWebhookRequestPrivate(
    const UpdateWebhookRequestPrivate &other, UpdateWebhookRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
