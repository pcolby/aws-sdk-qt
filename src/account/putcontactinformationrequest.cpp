// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putcontactinformationrequest.h"
#include "putcontactinformationrequest_p.h"
#include "putcontactinformationresponse.h"
#include "accountrequest_p.h"

namespace QtAws {
namespace Account {

/*!
 * \class QtAws::Account::PutContactInformationRequest
 * \brief The PutContactInformationRequest class provides an interface for Account PutContactInformation requests.
 *
 * \inmodule QtAwsAccount
 *
 *  Operations for Amazon Web Services Account
 *
 * \sa AccountClient::putContactInformation
 */

/*!
 * Constructs a copy of \a other.
 */
PutContactInformationRequest::PutContactInformationRequest(const PutContactInformationRequest &other)
    : AccountRequest(new PutContactInformationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutContactInformationRequest object.
 */
PutContactInformationRequest::PutContactInformationRequest()
    : AccountRequest(new PutContactInformationRequestPrivate(AccountRequest::PutContactInformationAction, this))
{

}

/*!
 * \reimp
 */
bool PutContactInformationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutContactInformationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutContactInformationRequest::response(QNetworkReply * const reply) const
{
    return new PutContactInformationResponse(*this, reply);
}

/*!
 * \class QtAws::Account::PutContactInformationRequestPrivate
 * \brief The PutContactInformationRequestPrivate class provides private implementation for PutContactInformationRequest.
 * \internal
 *
 * \inmodule QtAwsAccount
 */

/*!
 * Constructs a PutContactInformationRequestPrivate object for Account \a action,
 * with public implementation \a q.
 */
PutContactInformationRequestPrivate::PutContactInformationRequestPrivate(
    const AccountRequest::Action action, PutContactInformationRequest * const q)
    : AccountRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutContactInformationRequest
 * class' copy constructor.
 */
PutContactInformationRequestPrivate::PutContactInformationRequestPrivate(
    const PutContactInformationRequestPrivate &other, PutContactInformationRequest * const q)
    : AccountRequestPrivate(other, q)
{

}

} // namespace Account
} // namespace QtAws
