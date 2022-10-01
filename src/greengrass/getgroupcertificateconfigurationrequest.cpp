// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgroupcertificateconfigurationrequest.h"
#include "getgroupcertificateconfigurationrequest_p.h"
#include "getgroupcertificateconfigurationresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetGroupCertificateConfigurationRequest
 * \brief The GetGroupCertificateConfigurationRequest class provides an interface for Greengrass GetGroupCertificateConfiguration requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getGroupCertificateConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetGroupCertificateConfigurationRequest::GetGroupCertificateConfigurationRequest(const GetGroupCertificateConfigurationRequest &other)
    : GreengrassRequest(new GetGroupCertificateConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGroupCertificateConfigurationRequest object.
 */
GetGroupCertificateConfigurationRequest::GetGroupCertificateConfigurationRequest()
    : GreengrassRequest(new GetGroupCertificateConfigurationRequestPrivate(GreengrassRequest::GetGroupCertificateConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetGroupCertificateConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGroupCertificateConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGroupCertificateConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetGroupCertificateConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetGroupCertificateConfigurationRequestPrivate
 * \brief The GetGroupCertificateConfigurationRequestPrivate class provides private implementation for GetGroupCertificateConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetGroupCertificateConfigurationRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetGroupCertificateConfigurationRequestPrivate::GetGroupCertificateConfigurationRequestPrivate(
    const GreengrassRequest::Action action, GetGroupCertificateConfigurationRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGroupCertificateConfigurationRequest
 * class' copy constructor.
 */
GetGroupCertificateConfigurationRequestPrivate::GetGroupCertificateConfigurationRequestPrivate(
    const GetGroupCertificateConfigurationRequestPrivate &other, GetGroupCertificateConfigurationRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
