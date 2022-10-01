// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listreceivedgrantsrequest.h"
#include "listreceivedgrantsrequest_p.h"
#include "listreceivedgrantsresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListReceivedGrantsRequest
 * \brief The ListReceivedGrantsRequest class provides an interface for LicenseManager ListReceivedGrants requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::listReceivedGrants
 */

/*!
 * Constructs a copy of \a other.
 */
ListReceivedGrantsRequest::ListReceivedGrantsRequest(const ListReceivedGrantsRequest &other)
    : LicenseManagerRequest(new ListReceivedGrantsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListReceivedGrantsRequest object.
 */
ListReceivedGrantsRequest::ListReceivedGrantsRequest()
    : LicenseManagerRequest(new ListReceivedGrantsRequestPrivate(LicenseManagerRequest::ListReceivedGrantsAction, this))
{

}

/*!
 * \reimp
 */
bool ListReceivedGrantsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListReceivedGrantsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListReceivedGrantsRequest::response(QNetworkReply * const reply) const
{
    return new ListReceivedGrantsResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::ListReceivedGrantsRequestPrivate
 * \brief The ListReceivedGrantsRequestPrivate class provides private implementation for ListReceivedGrantsRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListReceivedGrantsRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
ListReceivedGrantsRequestPrivate::ListReceivedGrantsRequestPrivate(
    const LicenseManagerRequest::Action action, ListReceivedGrantsRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListReceivedGrantsRequest
 * class' copy constructor.
 */
ListReceivedGrantsRequestPrivate::ListReceivedGrantsRequestPrivate(
    const ListReceivedGrantsRequestPrivate &other, ListReceivedGrantsRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
