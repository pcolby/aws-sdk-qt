// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "acceptresourceshareinvitationrequest.h"
#include "acceptresourceshareinvitationrequest_p.h"
#include "acceptresourceshareinvitationresponse.h"
#include "ramrequest_p.h"

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::AcceptResourceShareInvitationRequest
 * \brief The AcceptResourceShareInvitationRequest class provides an interface for Ram AcceptResourceShareInvitation requests.
 *
 * \inmodule QtAwsRam
 *
 *  This is the <i>Resource Access Manager API Reference</i>. This documentation provides descriptions and syntax for each
 *  of the actions and data types in RAM. RAM is a service that helps you securely share your Amazon Web Services resources
 *  across Amazon Web Services accounts. If you have multiple Amazon Web Services accounts, you can use RAM to share those
 *  resources with other accounts. If you use Organizations to manage your accounts, then you share your resources with your
 *  organization or organizational units (OUs). For supported resource types, you can also share resources with individual
 *  Identity and Access Management (IAM) roles an users.
 * 
 *  </p
 * 
 *  To learn more about RAM, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/ram">Resource Access Manager product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/ram/latest/userguide/">Resource Access Manager User Guide</a>
 *
 * \sa RamClient::acceptResourceShareInvitation
 */

/*!
 * Constructs a copy of \a other.
 */
AcceptResourceShareInvitationRequest::AcceptResourceShareInvitationRequest(const AcceptResourceShareInvitationRequest &other)
    : RamRequest(new AcceptResourceShareInvitationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AcceptResourceShareInvitationRequest object.
 */
AcceptResourceShareInvitationRequest::AcceptResourceShareInvitationRequest()
    : RamRequest(new AcceptResourceShareInvitationRequestPrivate(RamRequest::AcceptResourceShareInvitationAction, this))
{

}

/*!
 * \reimp
 */
bool AcceptResourceShareInvitationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AcceptResourceShareInvitationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AcceptResourceShareInvitationRequest::response(QNetworkReply * const reply) const
{
    return new AcceptResourceShareInvitationResponse(*this, reply);
}

/*!
 * \class QtAws::Ram::AcceptResourceShareInvitationRequestPrivate
 * \brief The AcceptResourceShareInvitationRequestPrivate class provides private implementation for AcceptResourceShareInvitationRequest.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a AcceptResourceShareInvitationRequestPrivate object for Ram \a action,
 * with public implementation \a q.
 */
AcceptResourceShareInvitationRequestPrivate::AcceptResourceShareInvitationRequestPrivate(
    const RamRequest::Action action, AcceptResourceShareInvitationRequest * const q)
    : RamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AcceptResourceShareInvitationRequest
 * class' copy constructor.
 */
AcceptResourceShareInvitationRequestPrivate::AcceptResourceShareInvitationRequestPrivate(
    const AcceptResourceShareInvitationRequestPrivate &other, AcceptResourceShareInvitationRequest * const q)
    : RamRequestPrivate(other, q)
{

}

} // namespace Ram
} // namespace QtAws
