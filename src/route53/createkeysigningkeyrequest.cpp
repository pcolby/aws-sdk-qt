// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createkeysigningkeyrequest.h"
#include "createkeysigningkeyrequest_p.h"
#include "createkeysigningkeyresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateKeySigningKeyRequest
 * \brief The CreateKeySigningKeyRequest class provides an interface for Route53 CreateKeySigningKey requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::createKeySigningKey
 */

/*!
 * Constructs a copy of \a other.
 */
CreateKeySigningKeyRequest::CreateKeySigningKeyRequest(const CreateKeySigningKeyRequest &other)
    : Route53Request(new CreateKeySigningKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateKeySigningKeyRequest object.
 */
CreateKeySigningKeyRequest::CreateKeySigningKeyRequest()
    : Route53Request(new CreateKeySigningKeyRequestPrivate(Route53Request::CreateKeySigningKeyAction, this))
{

}

/*!
 * \reimp
 */
bool CreateKeySigningKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateKeySigningKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateKeySigningKeyRequest::response(QNetworkReply * const reply) const
{
    return new CreateKeySigningKeyResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::CreateKeySigningKeyRequestPrivate
 * \brief The CreateKeySigningKeyRequestPrivate class provides private implementation for CreateKeySigningKeyRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a CreateKeySigningKeyRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
CreateKeySigningKeyRequestPrivate::CreateKeySigningKeyRequestPrivate(
    const Route53Request::Action action, CreateKeySigningKeyRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateKeySigningKeyRequest
 * class' copy constructor.
 */
CreateKeySigningKeyRequestPrivate::CreateKeySigningKeyRequestPrivate(
    const CreateKeySigningKeyRequestPrivate &other, CreateKeySigningKeyRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
