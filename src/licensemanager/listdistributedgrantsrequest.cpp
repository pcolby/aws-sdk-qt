// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdistributedgrantsrequest.h"
#include "listdistributedgrantsrequest_p.h"
#include "listdistributedgrantsresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListDistributedGrantsRequest
 * \brief The ListDistributedGrantsRequest class provides an interface for LicenseManager ListDistributedGrants requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::listDistributedGrants
 */

/*!
 * Constructs a copy of \a other.
 */
ListDistributedGrantsRequest::ListDistributedGrantsRequest(const ListDistributedGrantsRequest &other)
    : LicenseManagerRequest(new ListDistributedGrantsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDistributedGrantsRequest object.
 */
ListDistributedGrantsRequest::ListDistributedGrantsRequest()
    : LicenseManagerRequest(new ListDistributedGrantsRequestPrivate(LicenseManagerRequest::ListDistributedGrantsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDistributedGrantsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDistributedGrantsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDistributedGrantsRequest::response(QNetworkReply * const reply) const
{
    return new ListDistributedGrantsResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::ListDistributedGrantsRequestPrivate
 * \brief The ListDistributedGrantsRequestPrivate class provides private implementation for ListDistributedGrantsRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListDistributedGrantsRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
ListDistributedGrantsRequestPrivate::ListDistributedGrantsRequestPrivate(
    const LicenseManagerRequest::Action action, ListDistributedGrantsRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDistributedGrantsRequest
 * class' copy constructor.
 */
ListDistributedGrantsRequestPrivate::ListDistributedGrantsRequestPrivate(
    const ListDistributedGrantsRequestPrivate &other, ListDistributedGrantsRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
