// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enableorganizationadminaccountrequest.h"
#include "enableorganizationadminaccountrequest_p.h"
#include "enableorganizationadminaccountresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::EnableOrganizationAdminAccountRequest
 * \brief The EnableOrganizationAdminAccountRequest class provides an interface for Macie2 EnableOrganizationAdminAccount requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::enableOrganizationAdminAccount
 */

/*!
 * Constructs a copy of \a other.
 */
EnableOrganizationAdminAccountRequest::EnableOrganizationAdminAccountRequest(const EnableOrganizationAdminAccountRequest &other)
    : Macie2Request(new EnableOrganizationAdminAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EnableOrganizationAdminAccountRequest object.
 */
EnableOrganizationAdminAccountRequest::EnableOrganizationAdminAccountRequest()
    : Macie2Request(new EnableOrganizationAdminAccountRequestPrivate(Macie2Request::EnableOrganizationAdminAccountAction, this))
{

}

/*!
 * \reimp
 */
bool EnableOrganizationAdminAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EnableOrganizationAdminAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableOrganizationAdminAccountRequest::response(QNetworkReply * const reply) const
{
    return new EnableOrganizationAdminAccountResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::EnableOrganizationAdminAccountRequestPrivate
 * \brief The EnableOrganizationAdminAccountRequestPrivate class provides private implementation for EnableOrganizationAdminAccountRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a EnableOrganizationAdminAccountRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
EnableOrganizationAdminAccountRequestPrivate::EnableOrganizationAdminAccountRequestPrivate(
    const Macie2Request::Action action, EnableOrganizationAdminAccountRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EnableOrganizationAdminAccountRequest
 * class' copy constructor.
 */
EnableOrganizationAdminAccountRequestPrivate::EnableOrganizationAdminAccountRequestPrivate(
    const EnableOrganizationAdminAccountRequestPrivate &other, EnableOrganizationAdminAccountRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
