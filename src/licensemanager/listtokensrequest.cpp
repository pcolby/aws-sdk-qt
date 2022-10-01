// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtokensrequest.h"
#include "listtokensrequest_p.h"
#include "listtokensresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListTokensRequest
 * \brief The ListTokensRequest class provides an interface for LicenseManager ListTokens requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::listTokens
 */

/*!
 * Constructs a copy of \a other.
 */
ListTokensRequest::ListTokensRequest(const ListTokensRequest &other)
    : LicenseManagerRequest(new ListTokensRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTokensRequest object.
 */
ListTokensRequest::ListTokensRequest()
    : LicenseManagerRequest(new ListTokensRequestPrivate(LicenseManagerRequest::ListTokensAction, this))
{

}

/*!
 * \reimp
 */
bool ListTokensRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTokensResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTokensRequest::response(QNetworkReply * const reply) const
{
    return new ListTokensResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::ListTokensRequestPrivate
 * \brief The ListTokensRequestPrivate class provides private implementation for ListTokensRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListTokensRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
ListTokensRequestPrivate::ListTokensRequestPrivate(
    const LicenseManagerRequest::Action action, ListTokensRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTokensRequest
 * class' copy constructor.
 */
ListTokensRequestPrivate::ListTokensRequestPrivate(
    const ListTokensRequestPrivate &other, ListTokensRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
