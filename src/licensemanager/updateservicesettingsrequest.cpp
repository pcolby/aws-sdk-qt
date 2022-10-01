// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateservicesettingsrequest.h"
#include "updateservicesettingsrequest_p.h"
#include "updateservicesettingsresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::UpdateServiceSettingsRequest
 * \brief The UpdateServiceSettingsRequest class provides an interface for LicenseManager UpdateServiceSettings requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::updateServiceSettings
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateServiceSettingsRequest::UpdateServiceSettingsRequest(const UpdateServiceSettingsRequest &other)
    : LicenseManagerRequest(new UpdateServiceSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateServiceSettingsRequest object.
 */
UpdateServiceSettingsRequest::UpdateServiceSettingsRequest()
    : LicenseManagerRequest(new UpdateServiceSettingsRequestPrivate(LicenseManagerRequest::UpdateServiceSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateServiceSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateServiceSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateServiceSettingsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateServiceSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::UpdateServiceSettingsRequestPrivate
 * \brief The UpdateServiceSettingsRequestPrivate class provides private implementation for UpdateServiceSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a UpdateServiceSettingsRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
UpdateServiceSettingsRequestPrivate::UpdateServiceSettingsRequestPrivate(
    const LicenseManagerRequest::Action action, UpdateServiceSettingsRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateServiceSettingsRequest
 * class' copy constructor.
 */
UpdateServiceSettingsRequestPrivate::UpdateServiceSettingsRequestPrivate(
    const UpdateServiceSettingsRequestPrivate &other, UpdateServiceSettingsRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
