// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enablesharingwithawsorganizationrequest.h"
#include "enablesharingwithawsorganizationrequest_p.h"
#include "enablesharingwithawsorganizationresponse.h"
#include "ramrequest_p.h"

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::EnableSharingWithAwsOrganizationRequest
 * \brief The EnableSharingWithAwsOrganizationRequest class provides an interface for Ram EnableSharingWithAwsOrganization requests.
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
 * \sa RamClient::enableSharingWithAwsOrganization
 */

/*!
 * Constructs a copy of \a other.
 */
EnableSharingWithAwsOrganizationRequest::EnableSharingWithAwsOrganizationRequest(const EnableSharingWithAwsOrganizationRequest &other)
    : RamRequest(new EnableSharingWithAwsOrganizationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EnableSharingWithAwsOrganizationRequest object.
 */
EnableSharingWithAwsOrganizationRequest::EnableSharingWithAwsOrganizationRequest()
    : RamRequest(new EnableSharingWithAwsOrganizationRequestPrivate(RamRequest::EnableSharingWithAwsOrganizationAction, this))
{

}

/*!
 * \reimp
 */
bool EnableSharingWithAwsOrganizationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EnableSharingWithAwsOrganizationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableSharingWithAwsOrganizationRequest::response(QNetworkReply * const reply) const
{
    return new EnableSharingWithAwsOrganizationResponse(*this, reply);
}

/*!
 * \class QtAws::Ram::EnableSharingWithAwsOrganizationRequestPrivate
 * \brief The EnableSharingWithAwsOrganizationRequestPrivate class provides private implementation for EnableSharingWithAwsOrganizationRequest.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a EnableSharingWithAwsOrganizationRequestPrivate object for Ram \a action,
 * with public implementation \a q.
 */
EnableSharingWithAwsOrganizationRequestPrivate::EnableSharingWithAwsOrganizationRequestPrivate(
    const RamRequest::Action action, EnableSharingWithAwsOrganizationRequest * const q)
    : RamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EnableSharingWithAwsOrganizationRequest
 * class' copy constructor.
 */
EnableSharingWithAwsOrganizationRequestPrivate::EnableSharingWithAwsOrganizationRequestPrivate(
    const EnableSharingWithAwsOrganizationRequestPrivate &other, EnableSharingWithAwsOrganizationRequest * const q)
    : RamRequestPrivate(other, q)
{

}

} // namespace Ram
} // namespace QtAws
