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

#include "createdistributionconfigurationrequest.h"
#include "createdistributionconfigurationrequest_p.h"
#include "createdistributionconfigurationresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::CreateDistributionConfigurationRequest
 * \brief The CreateDistributionConfigurationRequest class provides an interface for ImageBuilder CreateDistributionConfiguration requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::createDistributionConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDistributionConfigurationRequest::CreateDistributionConfigurationRequest(const CreateDistributionConfigurationRequest &other)
    : ImageBuilderRequest(new CreateDistributionConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDistributionConfigurationRequest object.
 */
CreateDistributionConfigurationRequest::CreateDistributionConfigurationRequest()
    : ImageBuilderRequest(new CreateDistributionConfigurationRequestPrivate(ImageBuilderRequest::CreateDistributionConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDistributionConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDistributionConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDistributionConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new CreateDistributionConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::CreateDistributionConfigurationRequestPrivate
 * \brief The CreateDistributionConfigurationRequestPrivate class provides private implementation for CreateDistributionConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a CreateDistributionConfigurationRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
CreateDistributionConfigurationRequestPrivate::CreateDistributionConfigurationRequestPrivate(
    const ImageBuilderRequest::Action action, CreateDistributionConfigurationRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDistributionConfigurationRequest
 * class' copy constructor.
 */
CreateDistributionConfigurationRequestPrivate::CreateDistributionConfigurationRequestPrivate(
    const CreateDistributionConfigurationRequestPrivate &other, CreateDistributionConfigurationRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
