// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "acceptgrantrequest.h"
#include "acceptgrantrequest_p.h"
#include "acceptgrantresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::AcceptGrantRequest
 * \brief The AcceptGrantRequest class provides an interface for LicenseManager AcceptGrant requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::acceptGrant
 */

/*!
 * Constructs a copy of \a other.
 */
AcceptGrantRequest::AcceptGrantRequest(const AcceptGrantRequest &other)
    : LicenseManagerRequest(new AcceptGrantRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AcceptGrantRequest object.
 */
AcceptGrantRequest::AcceptGrantRequest()
    : LicenseManagerRequest(new AcceptGrantRequestPrivate(LicenseManagerRequest::AcceptGrantAction, this))
{

}

/*!
 * \reimp
 */
bool AcceptGrantRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AcceptGrantResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AcceptGrantRequest::response(QNetworkReply * const reply) const
{
    return new AcceptGrantResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::AcceptGrantRequestPrivate
 * \brief The AcceptGrantRequestPrivate class provides private implementation for AcceptGrantRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a AcceptGrantRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
AcceptGrantRequestPrivate::AcceptGrantRequestPrivate(
    const LicenseManagerRequest::Action action, AcceptGrantRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AcceptGrantRequest
 * class' copy constructor.
 */
AcceptGrantRequestPrivate::AcceptGrantRequestPrivate(
    const AcceptGrantRequestPrivate &other, AcceptGrantRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
