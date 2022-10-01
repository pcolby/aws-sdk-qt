// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updategroupcertificateconfigurationrequest.h"
#include "updategroupcertificateconfigurationrequest_p.h"
#include "updategroupcertificateconfigurationresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateGroupCertificateConfigurationRequest
 * \brief The UpdateGroupCertificateConfigurationRequest class provides an interface for Greengrass UpdateGroupCertificateConfiguration requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::updateGroupCertificateConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateGroupCertificateConfigurationRequest::UpdateGroupCertificateConfigurationRequest(const UpdateGroupCertificateConfigurationRequest &other)
    : GreengrassRequest(new UpdateGroupCertificateConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateGroupCertificateConfigurationRequest object.
 */
UpdateGroupCertificateConfigurationRequest::UpdateGroupCertificateConfigurationRequest()
    : GreengrassRequest(new UpdateGroupCertificateConfigurationRequestPrivate(GreengrassRequest::UpdateGroupCertificateConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateGroupCertificateConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateGroupCertificateConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateGroupCertificateConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGroupCertificateConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::UpdateGroupCertificateConfigurationRequestPrivate
 * \brief The UpdateGroupCertificateConfigurationRequestPrivate class provides private implementation for UpdateGroupCertificateConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateGroupCertificateConfigurationRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
UpdateGroupCertificateConfigurationRequestPrivate::UpdateGroupCertificateConfigurationRequestPrivate(
    const GreengrassRequest::Action action, UpdateGroupCertificateConfigurationRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateGroupCertificateConfigurationRequest
 * class' copy constructor.
 */
UpdateGroupCertificateConfigurationRequestPrivate::UpdateGroupCertificateConfigurationRequestPrivate(
    const UpdateGroupCertificateConfigurationRequestPrivate &other, UpdateGroupCertificateConfigurationRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
