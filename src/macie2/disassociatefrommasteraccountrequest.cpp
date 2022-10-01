// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatefrommasteraccountrequest.h"
#include "disassociatefrommasteraccountrequest_p.h"
#include "disassociatefrommasteraccountresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::DisassociateFromMasterAccountRequest
 * \brief The DisassociateFromMasterAccountRequest class provides an interface for Macie2 DisassociateFromMasterAccount requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::disassociateFromMasterAccount
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateFromMasterAccountRequest::DisassociateFromMasterAccountRequest(const DisassociateFromMasterAccountRequest &other)
    : Macie2Request(new DisassociateFromMasterAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateFromMasterAccountRequest object.
 */
DisassociateFromMasterAccountRequest::DisassociateFromMasterAccountRequest()
    : Macie2Request(new DisassociateFromMasterAccountRequestPrivate(Macie2Request::DisassociateFromMasterAccountAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateFromMasterAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateFromMasterAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateFromMasterAccountRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateFromMasterAccountResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::DisassociateFromMasterAccountRequestPrivate
 * \brief The DisassociateFromMasterAccountRequestPrivate class provides private implementation for DisassociateFromMasterAccountRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a DisassociateFromMasterAccountRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
DisassociateFromMasterAccountRequestPrivate::DisassociateFromMasterAccountRequestPrivate(
    const Macie2Request::Action action, DisassociateFromMasterAccountRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateFromMasterAccountRequest
 * class' copy constructor.
 */
DisassociateFromMasterAccountRequestPrivate::DisassociateFromMasterAccountRequestPrivate(
    const DisassociateFromMasterAccountRequestPrivate &other, DisassociateFromMasterAccountRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
