// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelicensemanagerreportgeneratorrequest.h"
#include "deletelicensemanagerreportgeneratorrequest_p.h"
#include "deletelicensemanagerreportgeneratorresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::DeleteLicenseManagerReportGeneratorRequest
 * \brief The DeleteLicenseManagerReportGeneratorRequest class provides an interface for LicenseManager DeleteLicenseManagerReportGenerator requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::deleteLicenseManagerReportGenerator
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLicenseManagerReportGeneratorRequest::DeleteLicenseManagerReportGeneratorRequest(const DeleteLicenseManagerReportGeneratorRequest &other)
    : LicenseManagerRequest(new DeleteLicenseManagerReportGeneratorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLicenseManagerReportGeneratorRequest object.
 */
DeleteLicenseManagerReportGeneratorRequest::DeleteLicenseManagerReportGeneratorRequest()
    : LicenseManagerRequest(new DeleteLicenseManagerReportGeneratorRequestPrivate(LicenseManagerRequest::DeleteLicenseManagerReportGeneratorAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLicenseManagerReportGeneratorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLicenseManagerReportGeneratorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLicenseManagerReportGeneratorRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLicenseManagerReportGeneratorResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::DeleteLicenseManagerReportGeneratorRequestPrivate
 * \brief The DeleteLicenseManagerReportGeneratorRequestPrivate class provides private implementation for DeleteLicenseManagerReportGeneratorRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a DeleteLicenseManagerReportGeneratorRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
DeleteLicenseManagerReportGeneratorRequestPrivate::DeleteLicenseManagerReportGeneratorRequestPrivate(
    const LicenseManagerRequest::Action action, DeleteLicenseManagerReportGeneratorRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLicenseManagerReportGeneratorRequest
 * class' copy constructor.
 */
DeleteLicenseManagerReportGeneratorRequestPrivate::DeleteLicenseManagerReportGeneratorRequestPrivate(
    const DeleteLicenseManagerReportGeneratorRequestPrivate &other, DeleteLicenseManagerReportGeneratorRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
