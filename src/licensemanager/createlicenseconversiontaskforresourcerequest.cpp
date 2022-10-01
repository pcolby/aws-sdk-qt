/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
