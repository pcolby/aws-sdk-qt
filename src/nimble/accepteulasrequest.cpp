// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "accepteulasrequest.h"
#include "accepteulasrequest_p.h"
#include "accepteulasresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::AcceptEulasRequest
 * \brief The AcceptEulasRequest class provides an interface for Nimble AcceptEulas requests.
 *
 * \inmodule QtAwsNimble
 *
 *  Welcome to the Amazon Nimble Studio API reference. This API reference provides methods, schema, resources, parameters,
 *  and more to help you get the most out of Nimble
 * 
 *  Studio>
 * 
 *  Nimble Studio is a virtual studio that empowers visual effects, animation, and interactive content teams to create
 *  content securely within a scalable, private cloud
 *
 * \sa NimbleClient::acceptEulas
 */

/*!
 * Constructs a copy of \a other.
 */
AcceptEulasRequest::AcceptEulasRequest(const AcceptEulasRequest &other)
    : NimbleRequest(new AcceptEulasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AcceptEulasRequest object.
 */
AcceptEulasRequest::AcceptEulasRequest()
    : NimbleRequest(new AcceptEulasRequestPrivate(NimbleRequest::AcceptEulasAction, this))
{

}

/*!
 * \reimp
 */
bool AcceptEulasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AcceptEulasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AcceptEulasRequest::response(QNetworkReply * const reply) const
{
    return new AcceptEulasResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::AcceptEulasRequestPrivate
 * \brief The AcceptEulasRequestPrivate class provides private implementation for AcceptEulasRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a AcceptEulasRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
AcceptEulasRequestPrivate::AcceptEulasRequestPrivate(
    const NimbleRequest::Action action, AcceptEulasRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AcceptEulasRequest
 * class' copy constructor.
 */
AcceptEulasRequestPrivate::AcceptEulasRequestPrivate(
    const AcceptEulasRequestPrivate &other, AcceptEulasRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
