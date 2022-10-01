// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creategrantrequest.h"
#include "creategrantrequest_p.h"
#include "creategrantresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CreateGrantRequest
 * \brief The CreateGrantRequest class provides an interface for LicenseManager CreateGrant requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::createGrant
 */

/*!
 * Constructs a copy of \a other.
 */
CreateGrantRequest::CreateGrantRequest(const CreateGrantRequest &other)
    : LicenseManagerRequest(new CreateGrantRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateGrantRequest object.
 */
CreateGrantRequest::CreateGrantRequest()
    : LicenseManagerRequest(new CreateGrantRequestPrivate(LicenseManagerRequest::CreateGrantAction, this))
{

}

/*!
 * \reimp
 */
bool CreateGrantRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateGrantResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGrantRequest::response(QNetworkReply * const reply) const
{
    return new CreateGrantResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::CreateGrantRequestPrivate
 * \brief The CreateGrantRequestPrivate class provides private implementation for CreateGrantRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CreateGrantRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
CreateGrantRequestPrivate::CreateGrantRequestPrivate(
    const LicenseManagerRequest::Action action, CreateGrantRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateGrantRequest
 * class' copy constructor.
 */
CreateGrantRequestPrivate::CreateGrantRequestPrivate(
    const CreateGrantRequestPrivate &other, CreateGrantRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
