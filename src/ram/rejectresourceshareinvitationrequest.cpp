// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rejectresourceshareinvitationrequest.h"
#include "rejectresourceshareinvitationrequest_p.h"
#include "rejectresourceshareinvitationresponse.h"
#include "ramrequest_p.h"

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::RejectResourceShareInvitationRequest
 * \brief The RejectResourceShareInvitationRequest class provides an interface for Ram RejectResourceShareInvitation requests.
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
 * \sa RamClient::rejectResourceShareInvitation
 */

/*!
 * Constructs a copy of \a other.
 */
RejectResourceShareInvitationRequest::RejectResourceShareInvitationRequest(const RejectResourceShareInvitationRequest &other)
    : RamRequest(new RejectResourceShareInvitationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RejectResourceShareInvitationRequest object.
 */
RejectResourceShareInvitationRequest::RejectResourceShareInvitationRequest()
    : RamRequest(new RejectResourceShareInvitationRequestPrivate(RamRequest::RejectResourceShareInvitationAction, this))
{

}

/*!
 * \reimp
 */
bool RejectResourceShareInvitationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RejectResourceShareInvitationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RejectResourceShareInvitationRequest::response(QNetworkReply * const reply) const
{
    return new RejectResourceShareInvitationResponse(*this, reply);
}

/*!
 * \class QtAws::Ram::RejectResourceShareInvitationRequestPrivate
 * \brief The RejectResourceShareInvitationRequestPrivate class provides private implementation for RejectResourceShareInvitationRequest.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a RejectResourceShareInvitationRequestPrivate object for Ram \a action,
 * with public implementation \a q.
 */
RejectResourceShareInvitationRequestPrivate::RejectResourceShareInvitationRequestPrivate(
    const RamRequest::Action action, RejectResourceShareInvitationRequest * const q)
    : RamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RejectResourceShareInvitationRequest
 * class' copy constructor.
 */
RejectResourceShareInvitationRequestPrivate::RejectResourceShareInvitationRequestPrivate(
    const RejectResourceShareInvitationRequestPrivate &other, RejectResourceShareInvitationRequest * const q)
    : RamRequestPrivate(other, q)
{

}

} // namespace Ram
} // namespace QtAws
