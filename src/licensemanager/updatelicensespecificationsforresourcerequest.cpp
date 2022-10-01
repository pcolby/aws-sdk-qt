// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelicensespecificationsforresourcerequest.h"
#include "updatelicensespecificationsforresourcerequest_p.h"
#include "updatelicensespecificationsforresourceresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::UpdateLicenseSpecificationsForResourceRequest
 * \brief The UpdateLicenseSpecificationsForResourceRequest class provides an interface for LicenseManager UpdateLicenseSpecificationsForResource requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::updateLicenseSpecificationsForResource
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLicenseSpecificationsForResourceRequest::UpdateLicenseSpecificationsForResourceRequest(const UpdateLicenseSpecificationsForResourceRequest &other)
    : LicenseManagerRequest(new UpdateLicenseSpecificationsForResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLicenseSpecificationsForResourceRequest object.
 */
UpdateLicenseSpecificationsForResourceRequest::UpdateLicenseSpecificationsForResourceRequest()
    : LicenseManagerRequest(new UpdateLicenseSpecificationsForResourceRequestPrivate(LicenseManagerRequest::UpdateLicenseSpecificationsForResourceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLicenseSpecificationsForResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLicenseSpecificationsForResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLicenseSpecificationsForResourceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLicenseSpecificationsForResourceResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::UpdateLicenseSpecificationsForResourceRequestPrivate
 * \brief The UpdateLicenseSpecificationsForResourceRequestPrivate class provides private implementation for UpdateLicenseSpecificationsForResourceRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a UpdateLicenseSpecificationsForResourceRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
UpdateLicenseSpecificationsForResourceRequestPrivate::UpdateLicenseSpecificationsForResourceRequestPrivate(
    const LicenseManagerRequest::Action action, UpdateLicenseSpecificationsForResourceRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLicenseSpecificationsForResourceRequest
 * class' copy constructor.
 */
UpdateLicenseSpecificationsForResourceRequestPrivate::UpdateLicenseSpecificationsForResourceRequestPrivate(
    const UpdateLicenseSpecificationsForResourceRequestPrivate &other, UpdateLicenseSpecificationsForResourceRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
