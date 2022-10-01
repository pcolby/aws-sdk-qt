// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprincipalsrequest.h"
#include "listprincipalsrequest_p.h"
#include "listprincipalsresponse.h"
#include "ramrequest_p.h"

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::ListPrincipalsRequest
 * \brief The ListPrincipalsRequest class provides an interface for Ram ListPrincipals requests.
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
 * \sa RamClient::listPrincipals
 */

/*!
 * Constructs a copy of \a other.
 */
ListPrincipalsRequest::ListPrincipalsRequest(const ListPrincipalsRequest &other)
    : RamRequest(new ListPrincipalsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPrincipalsRequest object.
 */
ListPrincipalsRequest::ListPrincipalsRequest()
    : RamRequest(new ListPrincipalsRequestPrivate(RamRequest::ListPrincipalsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPrincipalsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPrincipalsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPrincipalsRequest::response(QNetworkReply * const reply) const
{
    return new ListPrincipalsResponse(*this, reply);
}

/*!
 * \class QtAws::Ram::ListPrincipalsRequestPrivate
 * \brief The ListPrincipalsRequestPrivate class provides private implementation for ListPrincipalsRequest.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a ListPrincipalsRequestPrivate object for Ram \a action,
 * with public implementation \a q.
 */
ListPrincipalsRequestPrivate::ListPrincipalsRequestPrivate(
    const RamRequest::Action action, ListPrincipalsRequest * const q)
    : RamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPrincipalsRequest
 * class' copy constructor.
 */
ListPrincipalsRequestPrivate::ListPrincipalsRequestPrivate(
    const ListPrincipalsRequestPrivate &other, ListPrincipalsRequest * const q)
    : RamRequestPrivate(other, q)
{

}

} // namespace Ram
} // namespace QtAws
