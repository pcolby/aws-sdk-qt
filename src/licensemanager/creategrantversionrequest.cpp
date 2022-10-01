// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creategrantversionrequest.h"
#include "creategrantversionrequest_p.h"
#include "creategrantversionresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CreateGrantVersionRequest
 * \brief The CreateGrantVersionRequest class provides an interface for LicenseManager CreateGrantVersion requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::createGrantVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateGrantVersionRequest::CreateGrantVersionRequest(const CreateGrantVersionRequest &other)
    : LicenseManagerRequest(new CreateGrantVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateGrantVersionRequest object.
 */
CreateGrantVersionRequest::CreateGrantVersionRequest()
    : LicenseManagerRequest(new CreateGrantVersionRequestPrivate(LicenseManagerRequest::CreateGrantVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateGrantVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateGrantVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGrantVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateGrantVersionResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::CreateGrantVersionRequestPrivate
 * \brief The CreateGrantVersionRequestPrivate class provides private implementation for CreateGrantVersionRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CreateGrantVersionRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
CreateGrantVersionRequestPrivate::CreateGrantVersionRequestPrivate(
    const LicenseManagerRequest::Action action, CreateGrantVersionRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateGrantVersionRequest
 * class' copy constructor.
 */
CreateGrantVersionRequestPrivate::CreateGrantVersionRequestPrivate(
    const CreateGrantVersionRequestPrivate &other, CreateGrantVersionRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
