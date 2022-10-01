// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlicenseconversiontaskrequest.h"
#include "getlicenseconversiontaskrequest_p.h"
#include "getlicenseconversiontaskresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::GetLicenseConversionTaskRequest
 * \brief The GetLicenseConversionTaskRequest class provides an interface for LicenseManager GetLicenseConversionTask requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::getLicenseConversionTask
 */

/*!
 * Constructs a copy of \a other.
 */
GetLicenseConversionTaskRequest::GetLicenseConversionTaskRequest(const GetLicenseConversionTaskRequest &other)
    : LicenseManagerRequest(new GetLicenseConversionTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLicenseConversionTaskRequest object.
 */
GetLicenseConversionTaskRequest::GetLicenseConversionTaskRequest()
    : LicenseManagerRequest(new GetLicenseConversionTaskRequestPrivate(LicenseManagerRequest::GetLicenseConversionTaskAction, this))
{

}

/*!
 * \reimp
 */
bool GetLicenseConversionTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLicenseConversionTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLicenseConversionTaskRequest::response(QNetworkReply * const reply) const
{
    return new GetLicenseConversionTaskResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::GetLicenseConversionTaskRequestPrivate
 * \brief The GetLicenseConversionTaskRequestPrivate class provides private implementation for GetLicenseConversionTaskRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a GetLicenseConversionTaskRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
GetLicenseConversionTaskRequestPrivate::GetLicenseConversionTaskRequestPrivate(
    const LicenseManagerRequest::Action action, GetLicenseConversionTaskRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLicenseConversionTaskRequest
 * class' copy constructor.
 */
GetLicenseConversionTaskRequestPrivate::GetLicenseConversionTaskRequestPrivate(
    const GetLicenseConversionTaskRequestPrivate &other, GetLicenseConversionTaskRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
