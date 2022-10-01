// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresourcetypesrequest.h"
#include "listresourcetypesrequest_p.h"
#include "listresourcetypesresponse.h"
#include "ramrequest_p.h"

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::ListResourceTypesRequest
 * \brief The ListResourceTypesRequest class provides an interface for Ram ListResourceTypes requests.
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
 * \sa RamClient::listResourceTypes
 */

/*!
 * Constructs a copy of \a other.
 */
ListResourceTypesRequest::ListResourceTypesRequest(const ListResourceTypesRequest &other)
    : RamRequest(new ListResourceTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListResourceTypesRequest object.
 */
ListResourceTypesRequest::ListResourceTypesRequest()
    : RamRequest(new ListResourceTypesRequestPrivate(RamRequest::ListResourceTypesAction, this))
{

}

/*!
 * \reimp
 */
bool ListResourceTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListResourceTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListResourceTypesRequest::response(QNetworkReply * const reply) const
{
    return new ListResourceTypesResponse(*this, reply);
}

/*!
 * \class QtAws::Ram::ListResourceTypesRequestPrivate
 * \brief The ListResourceTypesRequestPrivate class provides private implementation for ListResourceTypesRequest.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a ListResourceTypesRequestPrivate object for Ram \a action,
 * with public implementation \a q.
 */
ListResourceTypesRequestPrivate::ListResourceTypesRequestPrivate(
    const RamRequest::Action action, ListResourceTypesRequest * const q)
    : RamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListResourceTypesRequest
 * class' copy constructor.
 */
ListResourceTypesRequestPrivate::ListResourceTypesRequestPrivate(
    const ListResourceTypesRequestPrivate &other, ListResourceTypesRequest * const q)
    : RamRequestPrivate(other, q)
{

}

} // namespace Ram
} // namespace QtAws
