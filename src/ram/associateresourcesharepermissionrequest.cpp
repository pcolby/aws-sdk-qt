// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateresourcesharepermissionrequest.h"
#include "associateresourcesharepermissionrequest_p.h"
#include "associateresourcesharepermissionresponse.h"
#include "ramrequest_p.h"

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::AssociateResourceSharePermissionRequest
 * \brief The AssociateResourceSharePermissionRequest class provides an interface for Ram AssociateResourceSharePermission requests.
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
 * \sa RamClient::associateResourceSharePermission
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateResourceSharePermissionRequest::AssociateResourceSharePermissionRequest(const AssociateResourceSharePermissionRequest &other)
    : RamRequest(new AssociateResourceSharePermissionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateResourceSharePermissionRequest object.
 */
AssociateResourceSharePermissionRequest::AssociateResourceSharePermissionRequest()
    : RamRequest(new AssociateResourceSharePermissionRequestPrivate(RamRequest::AssociateResourceSharePermissionAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateResourceSharePermissionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateResourceSharePermissionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateResourceSharePermissionRequest::response(QNetworkReply * const reply) const
{
    return new AssociateResourceSharePermissionResponse(*this, reply);
}

/*!
 * \class QtAws::Ram::AssociateResourceSharePermissionRequestPrivate
 * \brief The AssociateResourceSharePermissionRequestPrivate class provides private implementation for AssociateResourceSharePermissionRequest.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a AssociateResourceSharePermissionRequestPrivate object for Ram \a action,
 * with public implementation \a q.
 */
AssociateResourceSharePermissionRequestPrivate::AssociateResourceSharePermissionRequestPrivate(
    const RamRequest::Action action, AssociateResourceSharePermissionRequest * const q)
    : RamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateResourceSharePermissionRequest
 * class' copy constructor.
 */
AssociateResourceSharePermissionRequestPrivate::AssociateResourceSharePermissionRequestPrivate(
    const AssociateResourceSharePermissionRequestPrivate &other, AssociateResourceSharePermissionRequest * const q)
    : RamRequestPrivate(other, q)
{

}

} // namespace Ram
} // namespace QtAws
