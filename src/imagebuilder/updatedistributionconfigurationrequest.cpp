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

#include "updatedistributionconfigurationrequest.h"
#include "updatedistributionconfigurationrequest_p.h"
#include "updatedistributionconfigurationresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::UpdateDistributionConfigurationRequest
 * \brief The UpdateDistributionConfigurationRequest class provides an interface for ImageBuilder UpdateDistributionConfiguration requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::updateDistributionConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDistributionConfigurationRequest::UpdateDistributionConfigurationRequest(const UpdateDistributionConfigurationRequest &other)
    : ImageBuilderRequest(new UpdateDistributionConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDistributionConfigurationRequest object.
 */
UpdateDistributionConfigurationRequest::UpdateDistributionConfigurationRequest()
    : ImageBuilderRequest(new UpdateDistributionConfigurationRequestPrivate(ImageBuilderRequest::UpdateDistributionConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDistributionConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDistributionConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDistributionConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDistributionConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::UpdateDistributionConfigurationRequestPrivate
 * \brief The UpdateDistributionConfigurationRequestPrivate class provides private implementation for UpdateDistributionConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a UpdateDistributionConfigurationRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
UpdateDistributionConfigurationRequestPrivate::UpdateDistributionConfigurationRequestPrivate(
    const ImageBuilderRequest::Action action, UpdateDistributionConfigurationRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDistributionConfigurationRequest
 * class' copy constructor.
 */
UpdateDistributionConfigurationRequestPrivate::UpdateDistributionConfigurationRequestPrivate(
    const UpdateDistributionConfigurationRequestPrivate &other, UpdateDistributionConfigurationRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
