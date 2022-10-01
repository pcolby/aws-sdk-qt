// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpermissionrequest.h"
#include "getpermissionrequest_p.h"
#include "getpermissionresponse.h"
#include "ramrequest_p.h"

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::GetPermissionRequest
 * \brief The GetPermissionRequest class provides an interface for Ram GetPermission requests.
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
 * \sa RamClient::getPermission
 */

/*!
 * Constructs a copy of \a other.
 */
GetPermissionRequest::GetPermissionRequest(const GetPermissionRequest &other)
    : RamRequest(new GetPermissionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPermissionRequest object.
 */
GetPermissionRequest::GetPermissionRequest()
    : RamRequest(new GetPermissionRequestPrivate(RamRequest::GetPermissionAction, this))
{

}

/*!
 * \reimp
 */
bool GetPermissionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPermissionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPermissionRequest::response(QNetworkReply * const reply) const
{
    return new GetPermissionResponse(*this, reply);
}

/*!
 * \class QtAws::Ram::GetPermissionRequestPrivate
 * \brief The GetPermissionRequestPrivate class provides private implementation for GetPermissionRequest.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a GetPermissionRequestPrivate object for Ram \a action,
 * with public implementation \a q.
 */
GetPermissionRequestPrivate::GetPermissionRequestPrivate(
    const RamRequest::Action action, GetPermissionRequest * const q)
    : RamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPermissionRequest
 * class' copy constructor.
 */
GetPermissionRequestPrivate::GetPermissionRequestPrivate(
    const GetPermissionRequestPrivate &other, GetPermissionRequest * const q)
    : RamRequestPrivate(other, q)
{

}

} // namespace Ram
} // namespace QtAws
