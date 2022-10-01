// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlicensemanagerreportgeneratorrequest.h"
#include "getlicensemanagerreportgeneratorrequest_p.h"
#include "getlicensemanagerreportgeneratorresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::GetLicenseManagerReportGeneratorRequest
 * \brief The GetLicenseManagerReportGeneratorRequest class provides an interface for LicenseManager GetLicenseManagerReportGenerator requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::getLicenseManagerReportGenerator
 */

/*!
 * Constructs a copy of \a other.
 */
GetLicenseManagerReportGeneratorRequest::GetLicenseManagerReportGeneratorRequest(const GetLicenseManagerReportGeneratorRequest &other)
    : LicenseManagerRequest(new GetLicenseManagerReportGeneratorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLicenseManagerReportGeneratorRequest object.
 */
GetLicenseManagerReportGeneratorRequest::GetLicenseManagerReportGeneratorRequest()
    : LicenseManagerRequest(new GetLicenseManagerReportGeneratorRequestPrivate(LicenseManagerRequest::GetLicenseManagerReportGeneratorAction, this))
{

}

/*!
 * \reimp
 */
bool GetLicenseManagerReportGeneratorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLicenseManagerReportGeneratorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLicenseManagerReportGeneratorRequest::response(QNetworkReply * const reply) const
{
    return new GetLicenseManagerReportGeneratorResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::GetLicenseManagerReportGeneratorRequestPrivate
 * \brief The GetLicenseManagerReportGeneratorRequestPrivate class provides private implementation for GetLicenseManagerReportGeneratorRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a GetLicenseManagerReportGeneratorRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
GetLicenseManagerReportGeneratorRequestPrivate::GetLicenseManagerReportGeneratorRequestPrivate(
    const LicenseManagerRequest::Action action, GetLicenseManagerReportGeneratorRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLicenseManagerReportGeneratorRequest
 * class' copy constructor.
 */
GetLicenseManagerReportGeneratorRequestPrivate::GetLicenseManagerReportGeneratorRequestPrivate(
    const GetLicenseManagerReportGeneratorRequestPrivate &other, GetLicenseManagerReportGeneratorRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
