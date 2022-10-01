// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteworkspacerequest.h"
#include "deleteworkspacerequest_p.h"
#include "deleteworkspaceresponse.h"
#include "amprequest_p.h"

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::DeleteWorkspaceRequest
 * \brief The DeleteWorkspaceRequest class provides an interface for Amp DeleteWorkspace requests.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::deleteWorkspace
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWorkspaceRequest::DeleteWorkspaceRequest(const DeleteWorkspaceRequest &other)
    : AmpRequest(new DeleteWorkspaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWorkspaceRequest object.
 */
DeleteWorkspaceRequest::DeleteWorkspaceRequest()
    : AmpRequest(new DeleteWorkspaceRequestPrivate(AmpRequest::DeleteWorkspaceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWorkspaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteWorkspaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWorkspaceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWorkspaceResponse(*this, reply);
}

/*!
 * \class QtAws::Amp::DeleteWorkspaceRequestPrivate
 * \brief The DeleteWorkspaceRequestPrivate class provides private implementation for DeleteWorkspaceRequest.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a DeleteWorkspaceRequestPrivate object for Amp \a action,
 * with public implementation \a q.
 */
DeleteWorkspaceRequestPrivate::DeleteWorkspaceRequestPrivate(
    const AmpRequest::Action action, DeleteWorkspaceRequest * const q)
    : AmpRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteWorkspaceRequest
 * class' copy constructor.
 */
DeleteWorkspaceRequestPrivate::DeleteWorkspaceRequestPrivate(
    const DeleteWorkspaceRequestPrivate &other, DeleteWorkspaceRequest * const q)
    : AmpRequestPrivate(other, q)
{

}

} // namespace Amp
} // namespace QtAws
