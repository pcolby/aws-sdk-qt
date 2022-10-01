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

#include "deletedistributionconfigurationrequest.h"
#include "deletedistributionconfigurationrequest_p.h"
#include "deletedistributionconfigurationresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::DeleteDistributionConfigurationRequest
 * \brief The DeleteDistributionConfigurationRequest class provides an interface for ImageBuilder DeleteDistributionConfiguration requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::deleteDistributionConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDistributionConfigurationRequest::DeleteDistributionConfigurationRequest(const DeleteDistributionConfigurationRequest &other)
    : ImageBuilderRequest(new DeleteDistributionConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDistributionConfigurationRequest object.
 */
DeleteDistributionConfigurationRequest::DeleteDistributionConfigurationRequest()
    : ImageBuilderRequest(new DeleteDistributionConfigurationRequestPrivate(ImageBuilderRequest::DeleteDistributionConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDistributionConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDistributionConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDistributionConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDistributionConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::DeleteDistributionConfigurationRequestPrivate
 * \brief The DeleteDistributionConfigurationRequestPrivate class provides private implementation for DeleteDistributionConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a DeleteDistributionConfigurationRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
DeleteDistributionConfigurationRequestPrivate::DeleteDistributionConfigurationRequestPrivate(
    const ImageBuilderRequest::Action action, DeleteDistributionConfigurationRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDistributionConfigurationRequest
 * class' copy constructor.
 */
DeleteDistributionConfigurationRequestPrivate::DeleteDistributionConfigurationRequestPrivate(
    const DeleteDistributionConfigurationRequestPrivate &other, DeleteDistributionConfigurationRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
