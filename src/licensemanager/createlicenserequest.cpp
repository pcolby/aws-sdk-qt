// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlicenserequest.h"
#include "createlicenserequest_p.h"
#include "createlicenseresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CreateLicenseRequest
 * \brief The CreateLicenseRequest class provides an interface for LicenseManager CreateLicense requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::createLicense
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLicenseRequest::CreateLicenseRequest(const CreateLicenseRequest &other)
    : LicenseManagerRequest(new CreateLicenseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLicenseRequest object.
 */
CreateLicenseRequest::CreateLicenseRequest()
    : LicenseManagerRequest(new CreateLicenseRequestPrivate(LicenseManagerRequest::CreateLicenseAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLicenseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLicenseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLicenseRequest::response(QNetworkReply * const reply) const
{
    return new CreateLicenseResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::CreateLicenseRequestPrivate
 * \brief The CreateLicenseRequestPrivate class provides private implementation for CreateLicenseRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CreateLicenseRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
CreateLicenseRequestPrivate::CreateLicenseRequestPrivate(
    const LicenseManagerRequest::Action action, CreateLicenseRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLicenseRequest
 * class' copy constructor.
 */
CreateLicenseRequestPrivate::CreateLicenseRequestPrivate(
    const CreateLicenseRequestPrivate &other, CreateLicenseRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
