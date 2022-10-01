// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disableorganizationadminaccountrequest.h"
#include "disableorganizationadminaccountrequest_p.h"
#include "disableorganizationadminaccountresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::DisableOrganizationAdminAccountRequest
 * \brief The DisableOrganizationAdminAccountRequest class provides an interface for Macie2 DisableOrganizationAdminAccount requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::disableOrganizationAdminAccount
 */

/*!
 * Constructs a copy of \a other.
 */
DisableOrganizationAdminAccountRequest::DisableOrganizationAdminAccountRequest(const DisableOrganizationAdminAccountRequest &other)
    : Macie2Request(new DisableOrganizationAdminAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisableOrganizationAdminAccountRequest object.
 */
DisableOrganizationAdminAccountRequest::DisableOrganizationAdminAccountRequest()
    : Macie2Request(new DisableOrganizationAdminAccountRequestPrivate(Macie2Request::DisableOrganizationAdminAccountAction, this))
{

}

/*!
 * \reimp
 */
bool DisableOrganizationAdminAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisableOrganizationAdminAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisableOrganizationAdminAccountRequest::response(QNetworkReply * const reply) const
{
    return new DisableOrganizationAdminAccountResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::DisableOrganizationAdminAccountRequestPrivate
 * \brief The DisableOrganizationAdminAccountRequestPrivate class provides private implementation for DisableOrganizationAdminAccountRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a DisableOrganizationAdminAccountRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
DisableOrganizationAdminAccountRequestPrivate::DisableOrganizationAdminAccountRequestPrivate(
    const Macie2Request::Action action, DisableOrganizationAdminAccountRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisableOrganizationAdminAccountRequest
 * class' copy constructor.
 */
DisableOrganizationAdminAccountRequestPrivate::DisableOrganizationAdminAccountRequestPrivate(
    const DisableOrganizationAdminAccountRequestPrivate &other, DisableOrganizationAdminAccountRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
