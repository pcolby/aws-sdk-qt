// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworkspacesrequest.h"
#include "listworkspacesrequest_p.h"
#include "listworkspacesresponse.h"
#include "amprequest_p.h"

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::ListWorkspacesRequest
 * \brief The ListWorkspacesRequest class provides an interface for Amp ListWorkspaces requests.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::listWorkspaces
 */

/*!
 * Constructs a copy of \a other.
 */
ListWorkspacesRequest::ListWorkspacesRequest(const ListWorkspacesRequest &other)
    : AmpRequest(new ListWorkspacesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWorkspacesRequest object.
 */
ListWorkspacesRequest::ListWorkspacesRequest()
    : AmpRequest(new ListWorkspacesRequestPrivate(AmpRequest::ListWorkspacesAction, this))
{

}

/*!
 * \reimp
 */
bool ListWorkspacesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWorkspacesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWorkspacesRequest::response(QNetworkReply * const reply) const
{
    return new ListWorkspacesResponse(*this, reply);
}

/*!
 * \class QtAws::Amp::ListWorkspacesRequestPrivate
 * \brief The ListWorkspacesRequestPrivate class provides private implementation for ListWorkspacesRequest.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a ListWorkspacesRequestPrivate object for Amp \a action,
 * with public implementation \a q.
 */
ListWorkspacesRequestPrivate::ListWorkspacesRequestPrivate(
    const AmpRequest::Action action, ListWorkspacesRequest * const q)
    : AmpRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWorkspacesRequest
 * class' copy constructor.
 */
ListWorkspacesRequestPrivate::ListWorkspacesRequestPrivate(
    const ListWorkspacesRequestPrivate &other, ListWorkspacesRequest * const q)
    : AmpRequestPrivate(other, q)
{

}

} // namespace Amp
} // namespace QtAws
