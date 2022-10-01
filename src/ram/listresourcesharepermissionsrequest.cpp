// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresourcesharepermissionsrequest.h"
#include "listresourcesharepermissionsrequest_p.h"
#include "listresourcesharepermissionsresponse.h"
#include "ramrequest_p.h"

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::ListResourceSharePermissionsRequest
 * \brief The ListResourceSharePermissionsRequest class provides an interface for Ram ListResourceSharePermissions requests.
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
 * \sa RamClient::listResourceSharePermissions
 */

/*!
 * Constructs a copy of \a other.
 */
ListResourceSharePermissionsRequest::ListResourceSharePermissionsRequest(const ListResourceSharePermissionsRequest &other)
    : RamRequest(new ListResourceSharePermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListResourceSharePermissionsRequest object.
 */
ListResourceSharePermissionsRequest::ListResourceSharePermissionsRequest()
    : RamRequest(new ListResourceSharePermissionsRequestPrivate(RamRequest::ListResourceSharePermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListResourceSharePermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListResourceSharePermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListResourceSharePermissionsRequest::response(QNetworkReply * const reply) const
{
    return new ListResourceSharePermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::Ram::ListResourceSharePermissionsRequestPrivate
 * \brief The ListResourceSharePermissionsRequestPrivate class provides private implementation for ListResourceSharePermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a ListResourceSharePermissionsRequestPrivate object for Ram \a action,
 * with public implementation \a q.
 */
ListResourceSharePermissionsRequestPrivate::ListResourceSharePermissionsRequestPrivate(
    const RamRequest::Action action, ListResourceSharePermissionsRequest * const q)
    : RamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListResourceSharePermissionsRequest
 * class' copy constructor.
 */
ListResourceSharePermissionsRequestPrivate::ListResourceSharePermissionsRequestPrivate(
    const ListResourceSharePermissionsRequestPrivate &other, ListResourceSharePermissionsRequest * const q)
    : RamRequestPrivate(other, q)
{

}

} // namespace Ram
} // namespace QtAws
