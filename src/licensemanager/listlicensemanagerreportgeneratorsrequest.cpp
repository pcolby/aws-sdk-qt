// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlicensemanagerreportgeneratorsrequest.h"
#include "listlicensemanagerreportgeneratorsrequest_p.h"
#include "listlicensemanagerreportgeneratorsresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListLicenseManagerReportGeneratorsRequest
 * \brief The ListLicenseManagerReportGeneratorsRequest class provides an interface for LicenseManager ListLicenseManagerReportGenerators requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::listLicenseManagerReportGenerators
 */

/*!
 * Constructs a copy of \a other.
 */
ListLicenseManagerReportGeneratorsRequest::ListLicenseManagerReportGeneratorsRequest(const ListLicenseManagerReportGeneratorsRequest &other)
    : LicenseManagerRequest(new ListLicenseManagerReportGeneratorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLicenseManagerReportGeneratorsRequest object.
 */
ListLicenseManagerReportGeneratorsRequest::ListLicenseManagerReportGeneratorsRequest()
    : LicenseManagerRequest(new ListLicenseManagerReportGeneratorsRequestPrivate(LicenseManagerRequest::ListLicenseManagerReportGeneratorsAction, this))
{

}

/*!
 * \reimp
 */
bool ListLicenseManagerReportGeneratorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLicenseManagerReportGeneratorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLicenseManagerReportGeneratorsRequest::response(QNetworkReply * const reply) const
{
    return new ListLicenseManagerReportGeneratorsResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::ListLicenseManagerReportGeneratorsRequestPrivate
 * \brief The ListLicenseManagerReportGeneratorsRequestPrivate class provides private implementation for ListLicenseManagerReportGeneratorsRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListLicenseManagerReportGeneratorsRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
ListLicenseManagerReportGeneratorsRequestPrivate::ListLicenseManagerReportGeneratorsRequestPrivate(
    const LicenseManagerRequest::Action action, ListLicenseManagerReportGeneratorsRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLicenseManagerReportGeneratorsRequest
 * class' copy constructor.
 */
ListLicenseManagerReportGeneratorsRequestPrivate::ListLicenseManagerReportGeneratorsRequestPrivate(
    const ListLicenseManagerReportGeneratorsRequestPrivate &other, ListLicenseManagerReportGeneratorsRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
