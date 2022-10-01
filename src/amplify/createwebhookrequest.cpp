// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createwebhookrequest.h"
#include "createwebhookrequest_p.h"
#include "createwebhookresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::CreateWebhookRequest
 * \brief The CreateWebhookRequest class provides an interface for Amplify CreateWebhook requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::createWebhook
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWebhookRequest::CreateWebhookRequest(const CreateWebhookRequest &other)
    : AmplifyRequest(new CreateWebhookRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWebhookRequest object.
 */
CreateWebhookRequest::CreateWebhookRequest()
    : AmplifyRequest(new CreateWebhookRequestPrivate(AmplifyRequest::CreateWebhookAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWebhookRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWebhookResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWebhookRequest::response(QNetworkReply * const reply) const
{
    return new CreateWebhookResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::CreateWebhookRequestPrivate
 * \brief The CreateWebhookRequestPrivate class provides private implementation for CreateWebhookRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a CreateWebhookRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
CreateWebhookRequestPrivate::CreateWebhookRequestPrivate(
    const AmplifyRequest::Action action, CreateWebhookRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWebhookRequest
 * class' copy constructor.
 */
CreateWebhookRequestPrivate::CreateWebhookRequestPrivate(
    const CreateWebhookRequestPrivate &other, CreateWebhookRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
