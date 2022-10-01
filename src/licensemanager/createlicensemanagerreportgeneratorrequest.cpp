// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlicensemanagerreportgeneratorrequest.h"
#include "createlicensemanagerreportgeneratorrequest_p.h"
#include "createlicensemanagerreportgeneratorresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CreateLicenseManagerReportGeneratorRequest
 * \brief The CreateLicenseManagerReportGeneratorRequest class provides an interface for LicenseManager CreateLicenseManagerReportGenerator requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::createLicenseManagerReportGenerator
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLicenseManagerReportGeneratorRequest::CreateLicenseManagerReportGeneratorRequest(const CreateLicenseManagerReportGeneratorRequest &other)
    : LicenseManagerRequest(new CreateLicenseManagerReportGeneratorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLicenseManagerReportGeneratorRequest object.
 */
CreateLicenseManagerReportGeneratorRequest::CreateLicenseManagerReportGeneratorRequest()
    : LicenseManagerRequest(new CreateLicenseManagerReportGeneratorRequestPrivate(LicenseManagerRequest::CreateLicenseManagerReportGeneratorAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLicenseManagerReportGeneratorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLicenseManagerReportGeneratorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLicenseManagerReportGeneratorRequest::response(QNetworkReply * const reply) const
{
    return new CreateLicenseManagerReportGeneratorResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::CreateLicenseManagerReportGeneratorRequestPrivate
 * \brief The CreateLicenseManagerReportGeneratorRequestPrivate class provides private implementation for CreateLicenseManagerReportGeneratorRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CreateLicenseManagerReportGeneratorRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
CreateLicenseManagerReportGeneratorRequestPrivate::CreateLicenseManagerReportGeneratorRequestPrivate(
    const LicenseManagerRequest::Action action, CreateLicenseManagerReportGeneratorRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLicenseManagerReportGeneratorRequest
 * class' copy constructor.
 */
CreateLicenseManagerReportGeneratorRequestPrivate::CreateLicenseManagerReportGeneratorRequestPrivate(
    const CreateLicenseManagerReportGeneratorRequestPrivate &other, CreateLicenseManagerReportGeneratorRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
