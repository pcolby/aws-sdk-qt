// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpermissionsrequest.h"
#include "listpermissionsrequest_p.h"
#include "listpermissionsresponse.h"
#include "ramrequest_p.h"

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::ListPermissionsRequest
 * \brief The ListPermissionsRequest class provides an interface for Ram ListPermissions requests.
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
 * \sa RamClient::listPermissions
 */

/*!
 * Constructs a copy of \a other.
 */
ListPermissionsRequest::ListPermissionsRequest(const ListPermissionsRequest &other)
    : RamRequest(new ListPermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPermissionsRequest object.
 */
ListPermissionsRequest::ListPermissionsRequest()
    : RamRequest(new ListPermissionsRequestPrivate(RamRequest::ListPermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPermissionsRequest::response(QNetworkReply * const reply) const
{
    return new ListPermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::Ram::ListPermissionsRequestPrivate
 * \brief The ListPermissionsRequestPrivate class provides private implementation for ListPermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a ListPermissionsRequestPrivate object for Ram \a action,
 * with public implementation \a q.
 */
ListPermissionsRequestPrivate::ListPermissionsRequestPrivate(
    const RamRequest::Action action, ListPermissionsRequest * const q)
    : RamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPermissionsRequest
 * class' copy constructor.
 */
ListPermissionsRequestPrivate::ListPermissionsRequestPrivate(
    const ListPermissionsRequestPrivate &other, ListPermissionsRequest * const q)
    : RamRequestPrivate(other, q)
{

}

} // namespace Ram
} // namespace QtAws
