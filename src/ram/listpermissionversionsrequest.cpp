// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpermissionversionsrequest.h"
#include "listpermissionversionsrequest_p.h"
#include "listpermissionversionsresponse.h"
#include "ramrequest_p.h"

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::ListPermissionVersionsRequest
 * \brief The ListPermissionVersionsRequest class provides an interface for Ram ListPermissionVersions requests.
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
 * \sa RamClient::listPermissionVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListPermissionVersionsRequest::ListPermissionVersionsRequest(const ListPermissionVersionsRequest &other)
    : RamRequest(new ListPermissionVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPermissionVersionsRequest object.
 */
ListPermissionVersionsRequest::ListPermissionVersionsRequest()
    : RamRequest(new ListPermissionVersionsRequestPrivate(RamRequest::ListPermissionVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPermissionVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPermissionVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPermissionVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListPermissionVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Ram::ListPermissionVersionsRequestPrivate
 * \brief The ListPermissionVersionsRequestPrivate class provides private implementation for ListPermissionVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a ListPermissionVersionsRequestPrivate object for Ram \a action,
 * with public implementation \a q.
 */
ListPermissionVersionsRequestPrivate::ListPermissionVersionsRequestPrivate(
    const RamRequest::Action action, ListPermissionVersionsRequest * const q)
    : RamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPermissionVersionsRequest
 * class' copy constructor.
 */
ListPermissionVersionsRequestPrivate::ListPermissionVersionsRequestPrivate(
    const ListPermissionVersionsRequestPrivate &other, ListPermissionVersionsRequest * const q)
    : RamRequestPrivate(other, q)
{

}

} // namespace Ram
} // namespace QtAws
