// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlicenseconfigurationrequest.h"
#include "createlicenseconfigurationrequest_p.h"
#include "createlicenseconfigurationresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CreateLicenseConfigurationRequest
 * \brief The CreateLicenseConfigurationRequest class provides an interface for LicenseManager CreateLicenseConfiguration requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::createLicenseConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLicenseConfigurationRequest::CreateLicenseConfigurationRequest(const CreateLicenseConfigurationRequest &other)
    : LicenseManagerRequest(new CreateLicenseConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLicenseConfigurationRequest object.
 */
CreateLicenseConfigurationRequest::CreateLicenseConfigurationRequest()
    : LicenseManagerRequest(new CreateLicenseConfigurationRequestPrivate(LicenseManagerRequest::CreateLicenseConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLicenseConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLicenseConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLicenseConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new CreateLicenseConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::CreateLicenseConfigurationRequestPrivate
 * \brief The CreateLicenseConfigurationRequestPrivate class provides private implementation for CreateLicenseConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CreateLicenseConfigurationRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
CreateLicenseConfigurationRequestPrivate::CreateLicenseConfigurationRequestPrivate(
    const LicenseManagerRequest::Action action, CreateLicenseConfigurationRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLicenseConfigurationRequest
 * class' copy constructor.
 */
CreateLicenseConfigurationRequestPrivate::CreateLicenseConfigurationRequestPrivate(
    const CreateLicenseConfigurationRequestPrivate &other, CreateLicenseConfigurationRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
