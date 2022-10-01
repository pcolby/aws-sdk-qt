// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcontactinformationrequest.h"
#include "getcontactinformationrequest_p.h"
#include "getcontactinformationresponse.h"
#include "accountrequest_p.h"

namespace QtAws {
namespace Account {

/*!
 * \class QtAws::Account::GetContactInformationRequest
 * \brief The GetContactInformationRequest class provides an interface for Account GetContactInformation requests.
 *
 * \inmodule QtAwsAccount
 *
 *  Operations for Amazon Web Services Account
 *
 * \sa AccountClient::getContactInformation
 */

/*!
 * Constructs a copy of \a other.
 */
GetContactInformationRequest::GetContactInformationRequest(const GetContactInformationRequest &other)
    : AccountRequest(new GetContactInformationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetContactInformationRequest object.
 */
GetContactInformationRequest::GetContactInformationRequest()
    : AccountRequest(new GetContactInformationRequestPrivate(AccountRequest::GetContactInformationAction, this))
{

}

/*!
 * \reimp
 */
bool GetContactInformationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetContactInformationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetContactInformationRequest::response(QNetworkReply * const reply) const
{
    return new GetContactInformationResponse(*this, reply);
}

/*!
 * \class QtAws::Account::GetContactInformationRequestPrivate
 * \brief The GetContactInformationRequestPrivate class provides private implementation for GetContactInformationRequest.
 * \internal
 *
 * \inmodule QtAwsAccount
 */

/*!
 * Constructs a GetContactInformationRequestPrivate object for Account \a action,
 * with public implementation \a q.
 */
GetContactInformationRequestPrivate::GetContactInformationRequestPrivate(
    const AccountRequest::Action action, GetContactInformationRequest * const q)
    : AccountRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetContactInformationRequest
 * class' copy constructor.
 */
GetContactInformationRequestPrivate::GetContactInformationRequestPrivate(
    const GetContactInformationRequestPrivate &other, GetContactInformationRequest * const q)
    : AccountRequestPrivate(other, q)
{

}

} // namespace Account
} // namespace QtAws
