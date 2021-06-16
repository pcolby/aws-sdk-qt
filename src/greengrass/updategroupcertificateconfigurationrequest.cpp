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
