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

#include "updateinfrastructureconfigurationrequest.h"
#include "updateinfrastructureconfigurationrequest_p.h"
#include "updateinfrastructureconfigurationresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::UpdateInfrastructureConfigurationRequest
 * \brief The UpdateInfrastructureConfigurationRequest class provides an interface for ImageBuilder UpdateInfrastructureConfiguration requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::updateInfrastructureConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateInfrastructureConfigurationRequest::UpdateInfrastructureConfigurationRequest(const UpdateInfrastructureConfigurationRequest &other)
    : ImageBuilderRequest(new UpdateInfrastructureConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateInfrastructureConfigurationRequest object.
 */
UpdateInfrastructureConfigurationRequest::UpdateInfrastructureConfigurationRequest()
    : ImageBuilderRequest(new UpdateInfrastructureConfigurationRequestPrivate(ImageBuilderRequest::UpdateInfrastructureConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateInfrastructureConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateInfrastructureConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateInfrastructureConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateInfrastructureConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::UpdateInfrastructureConfigurationRequestPrivate
 * \brief The UpdateInfrastructureConfigurationRequestPrivate class provides private implementation for UpdateInfrastructureConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a UpdateInfrastructureConfigurationRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
UpdateInfrastructureConfigurationRequestPrivate::UpdateInfrastructureConfigurationRequestPrivate(
    const ImageBuilderRequest::Action action, UpdateInfrastructureConfigurationRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateInfrastructureConfigurationRequest
 * class' copy constructor.
 */
UpdateInfrastructureConfigurationRequestPrivate::UpdateInfrastructureConfigurationRequestPrivate(
    const UpdateInfrastructureConfigurationRequestPrivate &other, UpdateInfrastructureConfigurationRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
