// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlicenseconversiontaskforresourcerequest.h"
#include "createlicenseconversiontaskforresourcerequest_p.h"
#include "createlicenseconversiontaskforresourceresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CreateLicenseConversionTaskForResourceRequest
 * \brief The CreateLicenseConversionTaskForResourceRequest class provides an interface for LicenseManager CreateLicenseConversionTaskForResource requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::createLicenseConversionTaskForResource
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLicenseConversionTaskForResourceRequest::CreateLicenseConversionTaskForResourceRequest(const CreateLicenseConversionTaskForResourceRequest &other)
    : LicenseManagerRequest(new CreateLicenseConversionTaskForResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLicenseConversionTaskForResourceRequest object.
 */
CreateLicenseConversionTaskForResourceRequest::CreateLicenseConversionTaskForResourceRequest()
    : LicenseManagerRequest(new CreateLicenseConversionTaskForResourceRequestPrivate(LicenseManagerRequest::CreateLicenseConversionTaskForResourceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLicenseConversionTaskForResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLicenseConversionTaskForResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLicenseConversionTaskForResourceRequest::response(QNetworkReply * const reply) const
{
    return new CreateLicenseConversionTaskForResourceResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::CreateLicenseConversionTaskForResourceRequestPrivate
 * \brief The CreateLicenseConversionTaskForResourceRequestPrivate class provides private implementation for CreateLicenseConversionTaskForResourceRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CreateLicenseConversionTaskForResourceRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
CreateLicenseConversionTaskForResourceRequestPrivate::CreateLicenseConversionTaskForResourceRequestPrivate(
    const LicenseManagerRequest::Action action, CreateLicenseConversionTaskForResourceRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLicenseConversionTaskForResourceRequest
 * class' copy constructor.
 */
CreateLicenseConversionTaskForResourceRequestPrivate::CreateLicenseConversionTaskForResourceRequestPrivate(
    const CreateLicenseConversionTaskForResourceRequestPrivate &other, CreateLicenseConversionTaskForResourceRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
