// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putalternatecontactrequest.h"
#include "putalternatecontactrequest_p.h"
#include "putalternatecontactresponse.h"
#include "accountrequest_p.h"

namespace QtAws {
namespace Account {

/*!
 * \class QtAws::Account::PutAlternateContactRequest
 * \brief The PutAlternateContactRequest class provides an interface for Account PutAlternateContact requests.
 *
 * \inmodule QtAwsAccount
 *
 *  Operations for Amazon Web Services Account
 *
 * \sa AccountClient::putAlternateContact
 */

/*!
 * Constructs a copy of \a other.
 */
PutAlternateContactRequest::PutAlternateContactRequest(const PutAlternateContactRequest &other)
    : AccountRequest(new PutAlternateContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutAlternateContactRequest object.
 */
PutAlternateContactRequest::PutAlternateContactRequest()
    : AccountRequest(new PutAlternateContactRequestPrivate(AccountRequest::PutAlternateContactAction, this))
{

}

/*!
 * \reimp
 */
bool PutAlternateContactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutAlternateContactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutAlternateContactRequest::response(QNetworkReply * const reply) const
{
    return new PutAlternateContactResponse(*this, reply);
}

/*!
 * \class QtAws::Account::PutAlternateContactRequestPrivate
 * \brief The PutAlternateContactRequestPrivate class provides private implementation for PutAlternateContactRequest.
 * \internal
 *
 * \inmodule QtAwsAccount
 */

/*!
 * Constructs a PutAlternateContactRequestPrivate object for Account \a action,
 * with public implementation \a q.
 */
PutAlternateContactRequestPrivate::PutAlternateContactRequestPrivate(
    const AccountRequest::Action action, PutAlternateContactRequest * const q)
    : AccountRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutAlternateContactRequest
 * class' copy constructor.
 */
PutAlternateContactRequestPrivate::PutAlternateContactRequestPrivate(
    const PutAlternateContactRequestPrivate &other, PutAlternateContactRequest * const q)
    : AccountRequestPrivate(other, q)
{

}

} // namespace Account
} // namespace QtAws
