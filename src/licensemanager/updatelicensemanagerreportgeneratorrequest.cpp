// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelicensemanagerreportgeneratorrequest.h"
#include "updatelicensemanagerreportgeneratorrequest_p.h"
#include "updatelicensemanagerreportgeneratorresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::UpdateLicenseManagerReportGeneratorRequest
 * \brief The UpdateLicenseManagerReportGeneratorRequest class provides an interface for LicenseManager UpdateLicenseManagerReportGenerator requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::updateLicenseManagerReportGenerator
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLicenseManagerReportGeneratorRequest::UpdateLicenseManagerReportGeneratorRequest(const UpdateLicenseManagerReportGeneratorRequest &other)
    : LicenseManagerRequest(new UpdateLicenseManagerReportGeneratorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLicenseManagerReportGeneratorRequest object.
 */
UpdateLicenseManagerReportGeneratorRequest::UpdateLicenseManagerReportGeneratorRequest()
    : LicenseManagerRequest(new UpdateLicenseManagerReportGeneratorRequestPrivate(LicenseManagerRequest::UpdateLicenseManagerReportGeneratorAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLicenseManagerReportGeneratorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLicenseManagerReportGeneratorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLicenseManagerReportGeneratorRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLicenseManagerReportGeneratorResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::UpdateLicenseManagerReportGeneratorRequestPrivate
 * \brief The UpdateLicenseManagerReportGeneratorRequestPrivate class provides private implementation for UpdateLicenseManagerReportGeneratorRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a UpdateLicenseManagerReportGeneratorRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
UpdateLicenseManagerReportGeneratorRequestPrivate::UpdateLicenseManagerReportGeneratorRequestPrivate(
    const LicenseManagerRequest::Action action, UpdateLicenseManagerReportGeneratorRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLicenseManagerReportGeneratorRequest
 * class' copy constructor.
 */
UpdateLicenseManagerReportGeneratorRequestPrivate::UpdateLicenseManagerReportGeneratorRequestPrivate(
    const UpdateLicenseManagerReportGeneratorRequestPrivate &other, UpdateLicenseManagerReportGeneratorRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
