// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listendpointsrequest.h"
#include "listendpointsrequest_p.h"
#include "listendpointsresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListEndpointsRequest
 * \brief The ListEndpointsRequest class provides an interface for Comprehend ListEndpoints requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listEndpoints
 */

/*!
 * Constructs a copy of \a other.
 */
ListEndpointsRequest::ListEndpointsRequest(const ListEndpointsRequest &other)
    : ComprehendRequest(new ListEndpointsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEndpointsRequest object.
 */
ListEndpointsRequest::ListEndpointsRequest()
    : ComprehendRequest(new ListEndpointsRequestPrivate(ComprehendRequest::ListEndpointsAction, this))
{

}

/*!
 * \reimp
 */
bool ListEndpointsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEndpointsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEndpointsRequest::response(QNetworkReply * const reply) const
{
    return new ListEndpointsResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::ListEndpointsRequestPrivate
 * \brief The ListEndpointsRequestPrivate class provides private implementation for ListEndpointsRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListEndpointsRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
ListEndpointsRequestPrivate::ListEndpointsRequestPrivate(
    const ComprehendRequest::Action action, ListEndpointsRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEndpointsRequest
 * class' copy constructor.
 */
ListEndpointsRequestPrivate::ListEndpointsRequestPrivate(
    const ListEndpointsRequestPrivate &other, ListEndpointsRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
