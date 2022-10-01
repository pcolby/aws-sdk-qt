// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getservicesettingsrequest.h"
#include "getservicesettingsrequest_p.h"
#include "getservicesettingsresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::GetServiceSettingsRequest
 * \brief The GetServiceSettingsRequest class provides an interface for LicenseManager GetServiceSettings requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::getServiceSettings
 */

/*!
 * Constructs a copy of \a other.
 */
GetServiceSettingsRequest::GetServiceSettingsRequest(const GetServiceSettingsRequest &other)
    : LicenseManagerRequest(new GetServiceSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetServiceSettingsRequest object.
 */
GetServiceSettingsRequest::GetServiceSettingsRequest()
    : LicenseManagerRequest(new GetServiceSettingsRequestPrivate(LicenseManagerRequest::GetServiceSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool GetServiceSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetServiceSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetServiceSettingsRequest::response(QNetworkReply * const reply) const
{
    return new GetServiceSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::GetServiceSettingsRequestPrivate
 * \brief The GetServiceSettingsRequestPrivate class provides private implementation for GetServiceSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a GetServiceSettingsRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
GetServiceSettingsRequestPrivate::GetServiceSettingsRequestPrivate(
    const LicenseManagerRequest::Action action, GetServiceSettingsRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetServiceSettingsRequest
 * class' copy constructor.
 */
GetServiceSettingsRequestPrivate::GetServiceSettingsRequestPrivate(
    const GetServiceSettingsRequestPrivate &other, GetServiceSettingsRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
