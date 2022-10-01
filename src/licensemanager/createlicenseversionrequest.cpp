// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlicenseversionrequest.h"
#include "createlicenseversionrequest_p.h"
#include "createlicenseversionresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CreateLicenseVersionRequest
 * \brief The CreateLicenseVersionRequest class provides an interface for LicenseManager CreateLicenseVersion requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::createLicenseVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLicenseVersionRequest::CreateLicenseVersionRequest(const CreateLicenseVersionRequest &other)
    : LicenseManagerRequest(new CreateLicenseVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLicenseVersionRequest object.
 */
CreateLicenseVersionRequest::CreateLicenseVersionRequest()
    : LicenseManagerRequest(new CreateLicenseVersionRequestPrivate(LicenseManagerRequest::CreateLicenseVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLicenseVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLicenseVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLicenseVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateLicenseVersionResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::CreateLicenseVersionRequestPrivate
 * \brief The CreateLicenseVersionRequestPrivate class provides private implementation for CreateLicenseVersionRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CreateLicenseVersionRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
CreateLicenseVersionRequestPrivate::CreateLicenseVersionRequestPrivate(
    const LicenseManagerRequest::Action action, CreateLicenseVersionRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLicenseVersionRequest
 * class' copy constructor.
 */
CreateLicenseVersionRequestPrivate::CreateLicenseVersionRequestPrivate(
    const CreateLicenseVersionRequestPrivate &other, CreateLicenseVersionRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
