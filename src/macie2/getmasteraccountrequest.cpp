// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmasteraccountrequest.h"
#include "getmasteraccountrequest_p.h"
#include "getmasteraccountresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::GetMasterAccountRequest
 * \brief The GetMasterAccountRequest class provides an interface for Macie2 GetMasterAccount requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::getMasterAccount
 */

/*!
 * Constructs a copy of \a other.
 */
GetMasterAccountRequest::GetMasterAccountRequest(const GetMasterAccountRequest &other)
    : Macie2Request(new GetMasterAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMasterAccountRequest object.
 */
GetMasterAccountRequest::GetMasterAccountRequest()
    : Macie2Request(new GetMasterAccountRequestPrivate(Macie2Request::GetMasterAccountAction, this))
{

}

/*!
 * \reimp
 */
bool GetMasterAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMasterAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMasterAccountRequest::response(QNetworkReply * const reply) const
{
    return new GetMasterAccountResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::GetMasterAccountRequestPrivate
 * \brief The GetMasterAccountRequestPrivate class provides private implementation for GetMasterAccountRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a GetMasterAccountRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
GetMasterAccountRequestPrivate::GetMasterAccountRequestPrivate(
    const Macie2Request::Action action, GetMasterAccountRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMasterAccountRequest
 * class' copy constructor.
 */
GetMasterAccountRequestPrivate::GetMasterAccountRequestPrivate(
    const GetMasterAccountRequestPrivate &other, GetMasterAccountRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
