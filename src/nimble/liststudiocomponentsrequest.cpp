// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststudiocomponentsrequest.h"
#include "liststudiocomponentsrequest_p.h"
#include "liststudiocomponentsresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::ListStudioComponentsRequest
 * \brief The ListStudioComponentsRequest class provides an interface for Nimble ListStudioComponents requests.
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
 * \sa NimbleClient::listStudioComponents
 */

/*!
 * Constructs a copy of \a other.
 */
ListStudioComponentsRequest::ListStudioComponentsRequest(const ListStudioComponentsRequest &other)
    : NimbleRequest(new ListStudioComponentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStudioComponentsRequest object.
 */
ListStudioComponentsRequest::ListStudioComponentsRequest()
    : NimbleRequest(new ListStudioComponentsRequestPrivate(NimbleRequest::ListStudioComponentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListStudioComponentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStudioComponentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStudioComponentsRequest::response(QNetworkReply * const reply) const
{
    return new ListStudioComponentsResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::ListStudioComponentsRequestPrivate
 * \brief The ListStudioComponentsRequestPrivate class provides private implementation for ListStudioComponentsRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a ListStudioComponentsRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
ListStudioComponentsRequestPrivate::ListStudioComponentsRequestPrivate(
    const NimbleRequest::Action action, ListStudioComponentsRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStudioComponentsRequest
 * class' copy constructor.
 */
ListStudioComponentsRequestPrivate::ListStudioComponentsRequestPrivate(
    const ListStudioComponentsRequestPrivate &other, ListStudioComponentsRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
