// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listenvironmentsrequest.h"
#include "listenvironmentsrequest_p.h"
#include "listenvironmentsresponse.h"
#include "finspacerequest_p.h"

namespace QtAws {
namespace Finspace {

/*!
 * \class QtAws::Finspace::ListEnvironmentsRequest
 * \brief The ListEnvironmentsRequest class provides an interface for Finspace ListEnvironments requests.
 *
 * \inmodule QtAwsFinspace
 *
 *  The FinSpace management service provides the APIs for managing FinSpace
 *
 * \sa FinspaceClient::listEnvironments
 */

/*!
 * Constructs a copy of \a other.
 */
ListEnvironmentsRequest::ListEnvironmentsRequest(const ListEnvironmentsRequest &other)
    : FinspaceRequest(new ListEnvironmentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEnvironmentsRequest object.
 */
ListEnvironmentsRequest::ListEnvironmentsRequest()
    : FinspaceRequest(new ListEnvironmentsRequestPrivate(FinspaceRequest::ListEnvironmentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListEnvironmentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEnvironmentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEnvironmentsRequest::response(QNetworkReply * const reply) const
{
    return new ListEnvironmentsResponse(*this, reply);
}

/*!
 * \class QtAws::Finspace::ListEnvironmentsRequestPrivate
 * \brief The ListEnvironmentsRequestPrivate class provides private implementation for ListEnvironmentsRequest.
 * \internal
 *
 * \inmodule QtAwsFinspace
 */

/*!
 * Constructs a ListEnvironmentsRequestPrivate object for Finspace \a action,
 * with public implementation \a q.
 */
ListEnvironmentsRequestPrivate::ListEnvironmentsRequestPrivate(
    const FinspaceRequest::Action action, ListEnvironmentsRequest * const q)
    : FinspaceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEnvironmentsRequest
 * class' copy constructor.
 */
ListEnvironmentsRequestPrivate::ListEnvironmentsRequestPrivate(
    const ListEnvironmentsRequestPrivate &other, ListEnvironmentsRequest * const q)
    : FinspaceRequestPrivate(other, q)
{

}

} // namespace Finspace
} // namespace QtAws
