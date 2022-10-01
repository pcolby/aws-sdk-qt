// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateshareinvitationrequest.h"
#include "updateshareinvitationrequest_p.h"
#include "updateshareinvitationresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::UpdateShareInvitationRequest
 * \brief The UpdateShareInvitationRequest class provides an interface for WellArchitected UpdateShareInvitation requests.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>Well-Architected Tool</fullname>
 * 
 *  This is the <i>Well-Architected Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
 *  href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services Management Console</a>. For information about
 *  the Well-Architected Tool, see the <a
 *  href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected Tool User
 *
 * \sa WellArchitectedClient::updateShareInvitation
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateShareInvitationRequest::UpdateShareInvitationRequest(const UpdateShareInvitationRequest &other)
    : WellArchitectedRequest(new UpdateShareInvitationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateShareInvitationRequest object.
 */
UpdateShareInvitationRequest::UpdateShareInvitationRequest()
    : WellArchitectedRequest(new UpdateShareInvitationRequestPrivate(WellArchitectedRequest::UpdateShareInvitationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateShareInvitationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateShareInvitationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateShareInvitationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateShareInvitationResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::UpdateShareInvitationRequestPrivate
 * \brief The UpdateShareInvitationRequestPrivate class provides private implementation for UpdateShareInvitationRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a UpdateShareInvitationRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
UpdateShareInvitationRequestPrivate::UpdateShareInvitationRequestPrivate(
    const WellArchitectedRequest::Action action, UpdateShareInvitationRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateShareInvitationRequest
 * class' copy constructor.
 */
UpdateShareInvitationRequestPrivate::UpdateShareInvitationRequestPrivate(
    const UpdateShareInvitationRequestPrivate &other, UpdateShareInvitationRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
