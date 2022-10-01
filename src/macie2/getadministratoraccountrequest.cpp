// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getadministratoraccountrequest.h"
#include "getadministratoraccountrequest_p.h"
#include "getadministratoraccountresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::GetAdministratorAccountRequest
 * \brief The GetAdministratorAccountRequest class provides an interface for Macie2 GetAdministratorAccount requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::getAdministratorAccount
 */

/*!
 * Constructs a copy of \a other.
 */
GetAdministratorAccountRequest::GetAdministratorAccountRequest(const GetAdministratorAccountRequest &other)
    : Macie2Request(new GetAdministratorAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAdministratorAccountRequest object.
 */
GetAdministratorAccountRequest::GetAdministratorAccountRequest()
    : Macie2Request(new GetAdministratorAccountRequestPrivate(Macie2Request::GetAdministratorAccountAction, this))
{

}

/*!
 * \reimp
 */
bool GetAdministratorAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAdministratorAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAdministratorAccountRequest::response(QNetworkReply * const reply) const
{
    return new GetAdministratorAccountResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::GetAdministratorAccountRequestPrivate
 * \brief The GetAdministratorAccountRequestPrivate class provides private implementation for GetAdministratorAccountRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a GetAdministratorAccountRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
GetAdministratorAccountRequestPrivate::GetAdministratorAccountRequestPrivate(
    const Macie2Request::Action action, GetAdministratorAccountRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAdministratorAccountRequest
 * class' copy constructor.
 */
GetAdministratorAccountRequestPrivate::GetAdministratorAccountRequestPrivate(
    const GetAdministratorAccountRequestPrivate &other, GetAdministratorAccountRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
