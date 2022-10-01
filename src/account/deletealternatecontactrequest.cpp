// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletealternatecontactrequest.h"
#include "deletealternatecontactrequest_p.h"
#include "deletealternatecontactresponse.h"
#include "accountrequest_p.h"

namespace QtAws {
namespace Account {

/*!
 * \class QtAws::Account::DeleteAlternateContactRequest
 * \brief The DeleteAlternateContactRequest class provides an interface for Account DeleteAlternateContact requests.
 *
 * \inmodule QtAwsAccount
 *
 *  Operations for Amazon Web Services Account
 *
 * \sa AccountClient::deleteAlternateContact
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAlternateContactRequest::DeleteAlternateContactRequest(const DeleteAlternateContactRequest &other)
    : AccountRequest(new DeleteAlternateContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAlternateContactRequest object.
 */
DeleteAlternateContactRequest::DeleteAlternateContactRequest()
    : AccountRequest(new DeleteAlternateContactRequestPrivate(AccountRequest::DeleteAlternateContactAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAlternateContactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAlternateContactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAlternateContactRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAlternateContactResponse(*this, reply);
}

/*!
 * \class QtAws::Account::DeleteAlternateContactRequestPrivate
 * \brief The DeleteAlternateContactRequestPrivate class provides private implementation for DeleteAlternateContactRequest.
 * \internal
 *
 * \inmodule QtAwsAccount
 */

/*!
 * Constructs a DeleteAlternateContactRequestPrivate object for Account \a action,
 * with public implementation \a q.
 */
DeleteAlternateContactRequestPrivate::DeleteAlternateContactRequestPrivate(
    const AccountRequest::Action action, DeleteAlternateContactRequest * const q)
    : AccountRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAlternateContactRequest
 * class' copy constructor.
 */
DeleteAlternateContactRequestPrivate::DeleteAlternateContactRequestPrivate(
    const DeleteAlternateContactRequestPrivate &other, DeleteAlternateContactRequest * const q)
    : AccountRequestPrivate(other, q)
{

}

} // namespace Account
} // namespace QtAws
