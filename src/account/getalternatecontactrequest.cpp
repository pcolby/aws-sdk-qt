// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getalternatecontactrequest.h"
#include "getalternatecontactrequest_p.h"
#include "getalternatecontactresponse.h"
#include "accountrequest_p.h"

namespace QtAws {
namespace Account {

/*!
 * \class QtAws::Account::GetAlternateContactRequest
 * \brief The GetAlternateContactRequest class provides an interface for Account GetAlternateContact requests.
 *
 * \inmodule QtAwsAccount
 *
 *  Operations for Amazon Web Services Account
 *
 * \sa AccountClient::getAlternateContact
 */

/*!
 * Constructs a copy of \a other.
 */
GetAlternateContactRequest::GetAlternateContactRequest(const GetAlternateContactRequest &other)
    : AccountRequest(new GetAlternateContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAlternateContactRequest object.
 */
GetAlternateContactRequest::GetAlternateContactRequest()
    : AccountRequest(new GetAlternateContactRequestPrivate(AccountRequest::GetAlternateContactAction, this))
{

}

/*!
 * \reimp
 */
bool GetAlternateContactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAlternateContactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAlternateContactRequest::response(QNetworkReply * const reply) const
{
    return new GetAlternateContactResponse(*this, reply);
}

/*!
 * \class QtAws::Account::GetAlternateContactRequestPrivate
 * \brief The GetAlternateContactRequestPrivate class provides private implementation for GetAlternateContactRequest.
 * \internal
 *
 * \inmodule QtAwsAccount
 */

/*!
 * Constructs a GetAlternateContactRequestPrivate object for Account \a action,
 * with public implementation \a q.
 */
GetAlternateContactRequestPrivate::GetAlternateContactRequestPrivate(
    const AccountRequest::Action action, GetAlternateContactRequest * const q)
    : AccountRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAlternateContactRequest
 * class' copy constructor.
 */
GetAlternateContactRequestPrivate::GetAlternateContactRequestPrivate(
    const GetAlternateContactRequestPrivate &other, GetAlternateContactRequest * const q)
    : AccountRequestPrivate(other, q)
{

}

} // namespace Account
} // namespace QtAws
