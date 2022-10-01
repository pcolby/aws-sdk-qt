// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlicenseconversiontasksrequest.h"
#include "listlicenseconversiontasksrequest_p.h"
#include "listlicenseconversiontasksresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListLicenseConversionTasksRequest
 * \brief The ListLicenseConversionTasksRequest class provides an interface for LicenseManager ListLicenseConversionTasks requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::listLicenseConversionTasks
 */

/*!
 * Constructs a copy of \a other.
 */
ListLicenseConversionTasksRequest::ListLicenseConversionTasksRequest(const ListLicenseConversionTasksRequest &other)
    : LicenseManagerRequest(new ListLicenseConversionTasksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLicenseConversionTasksRequest object.
 */
ListLicenseConversionTasksRequest::ListLicenseConversionTasksRequest()
    : LicenseManagerRequest(new ListLicenseConversionTasksRequestPrivate(LicenseManagerRequest::ListLicenseConversionTasksAction, this))
{

}

/*!
 * \reimp
 */
bool ListLicenseConversionTasksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLicenseConversionTasksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLicenseConversionTasksRequest::response(QNetworkReply * const reply) const
{
    return new ListLicenseConversionTasksResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::ListLicenseConversionTasksRequestPrivate
 * \brief The ListLicenseConversionTasksRequestPrivate class provides private implementation for ListLicenseConversionTasksRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListLicenseConversionTasksRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
ListLicenseConversionTasksRequestPrivate::ListLicenseConversionTasksRequestPrivate(
    const LicenseManagerRequest::Action action, ListLicenseConversionTasksRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLicenseConversionTasksRequest
 * class' copy constructor.
 */
ListLicenseConversionTasksRequestPrivate::ListLicenseConversionTasksRequestPrivate(
    const ListLicenseConversionTasksRequestPrivate &other, ListLicenseConversionTasksRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
