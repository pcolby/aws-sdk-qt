// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststudiosrequest.h"
#include "liststudiosrequest_p.h"
#include "liststudiosresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::ListStudiosRequest
 * \brief The ListStudiosRequest class provides an interface for Nimble ListStudios requests.
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
 * \sa NimbleClient::listStudios
 */

/*!
 * Constructs a copy of \a other.
 */
ListStudiosRequest::ListStudiosRequest(const ListStudiosRequest &other)
    : NimbleRequest(new ListStudiosRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStudiosRequest object.
 */
ListStudiosRequest::ListStudiosRequest()
    : NimbleRequest(new ListStudiosRequestPrivate(NimbleRequest::ListStudiosAction, this))
{

}

/*!
 * \reimp
 */
bool ListStudiosRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStudiosResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStudiosRequest::response(QNetworkReply * const reply) const
{
    return new ListStudiosResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::ListStudiosRequestPrivate
 * \brief The ListStudiosRequestPrivate class provides private implementation for ListStudiosRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a ListStudiosRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
ListStudiosRequestPrivate::ListStudiosRequestPrivate(
    const NimbleRequest::Action action, ListStudiosRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStudiosRequest
 * class' copy constructor.
 */
ListStudiosRequestPrivate::ListStudiosRequestPrivate(
    const ListStudiosRequestPrivate &other, ListStudiosRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
