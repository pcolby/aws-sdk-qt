// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateworkspacealiasrequest.h"
#include "updateworkspacealiasrequest_p.h"
#include "updateworkspacealiasresponse.h"
#include "amprequest_p.h"

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::UpdateWorkspaceAliasRequest
 * \brief The UpdateWorkspaceAliasRequest class provides an interface for Amp UpdateWorkspaceAlias requests.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::updateWorkspaceAlias
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateWorkspaceAliasRequest::UpdateWorkspaceAliasRequest(const UpdateWorkspaceAliasRequest &other)
    : AmpRequest(new UpdateWorkspaceAliasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateWorkspaceAliasRequest object.
 */
UpdateWorkspaceAliasRequest::UpdateWorkspaceAliasRequest()
    : AmpRequest(new UpdateWorkspaceAliasRequestPrivate(AmpRequest::UpdateWorkspaceAliasAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateWorkspaceAliasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateWorkspaceAliasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateWorkspaceAliasRequest::response(QNetworkReply * const reply) const
{
    return new UpdateWorkspaceAliasResponse(*this, reply);
}

/*!
 * \class QtAws::Amp::UpdateWorkspaceAliasRequestPrivate
 * \brief The UpdateWorkspaceAliasRequestPrivate class provides private implementation for UpdateWorkspaceAliasRequest.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a UpdateWorkspaceAliasRequestPrivate object for Amp \a action,
 * with public implementation \a q.
 */
UpdateWorkspaceAliasRequestPrivate::UpdateWorkspaceAliasRequestPrivate(
    const AmpRequest::Action action, UpdateWorkspaceAliasRequest * const q)
    : AmpRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateWorkspaceAliasRequest
 * class' copy constructor.
 */
UpdateWorkspaceAliasRequestPrivate::UpdateWorkspaceAliasRequestPrivate(
    const UpdateWorkspaceAliasRequestPrivate &other, UpdateWorkspaceAliasRequest * const q)
    : AmpRequestPrivate(other, q)
{

}

} // namespace Amp
} // namespace QtAws
