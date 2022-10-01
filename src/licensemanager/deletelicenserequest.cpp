// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelicenserequest.h"
#include "deletelicenserequest_p.h"
#include "deletelicenseresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::DeleteLicenseRequest
 * \brief The DeleteLicenseRequest class provides an interface for LicenseManager DeleteLicense requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::deleteLicense
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLicenseRequest::DeleteLicenseRequest(const DeleteLicenseRequest &other)
    : LicenseManagerRequest(new DeleteLicenseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLicenseRequest object.
 */
DeleteLicenseRequest::DeleteLicenseRequest()
    : LicenseManagerRequest(new DeleteLicenseRequestPrivate(LicenseManagerRequest::DeleteLicenseAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLicenseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLicenseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLicenseRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLicenseResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::DeleteLicenseRequestPrivate
 * \brief The DeleteLicenseRequestPrivate class provides private implementation for DeleteLicenseRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a DeleteLicenseRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
DeleteLicenseRequestPrivate::DeleteLicenseRequestPrivate(
    const LicenseManagerRequest::Action action, DeleteLicenseRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLicenseRequest
 * class' copy constructor.
 */
DeleteLicenseRequestPrivate::DeleteLicenseRequestPrivate(
    const DeleteLicenseRequestPrivate &other, DeleteLicenseRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
