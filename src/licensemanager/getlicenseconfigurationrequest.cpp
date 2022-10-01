// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlicenseconfigurationrequest.h"
#include "getlicenseconfigurationrequest_p.h"
#include "getlicenseconfigurationresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::GetLicenseConfigurationRequest
 * \brief The GetLicenseConfigurationRequest class provides an interface for LicenseManager GetLicenseConfiguration requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::getLicenseConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetLicenseConfigurationRequest::GetLicenseConfigurationRequest(const GetLicenseConfigurationRequest &other)
    : LicenseManagerRequest(new GetLicenseConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLicenseConfigurationRequest object.
 */
GetLicenseConfigurationRequest::GetLicenseConfigurationRequest()
    : LicenseManagerRequest(new GetLicenseConfigurationRequestPrivate(LicenseManagerRequest::GetLicenseConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetLicenseConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLicenseConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLicenseConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetLicenseConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::GetLicenseConfigurationRequestPrivate
 * \brief The GetLicenseConfigurationRequestPrivate class provides private implementation for GetLicenseConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a GetLicenseConfigurationRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
GetLicenseConfigurationRequestPrivate::GetLicenseConfigurationRequestPrivate(
    const LicenseManagerRequest::Action action, GetLicenseConfigurationRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLicenseConfigurationRequest
 * class' copy constructor.
 */
GetLicenseConfigurationRequestPrivate::GetLicenseConfigurationRequestPrivate(
    const GetLicenseConfigurationRequestPrivate &other, GetLicenseConfigurationRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
