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

#include "deleteinfrastructureconfigurationrequest.h"
#include "deleteinfrastructureconfigurationrequest_p.h"
#include "deleteinfrastructureconfigurationresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::DeleteInfrastructureConfigurationRequest
 * \brief The DeleteInfrastructureConfigurationRequest class provides an interface for ImageBuilder DeleteInfrastructureConfiguration requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::deleteInfrastructureConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteInfrastructureConfigurationRequest::DeleteInfrastructureConfigurationRequest(const DeleteInfrastructureConfigurationRequest &other)
    : ImageBuilderRequest(new DeleteInfrastructureConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteInfrastructureConfigurationRequest object.
 */
DeleteInfrastructureConfigurationRequest::DeleteInfrastructureConfigurationRequest()
    : ImageBuilderRequest(new DeleteInfrastructureConfigurationRequestPrivate(ImageBuilderRequest::DeleteInfrastructureConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteInfrastructureConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteInfrastructureConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteInfrastructureConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteInfrastructureConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::DeleteInfrastructureConfigurationRequestPrivate
 * \brief The DeleteInfrastructureConfigurationRequestPrivate class provides private implementation for DeleteInfrastructureConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a DeleteInfrastructureConfigurationRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
DeleteInfrastructureConfigurationRequestPrivate::DeleteInfrastructureConfigurationRequestPrivate(
    const ImageBuilderRequest::Action action, DeleteInfrastructureConfigurationRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteInfrastructureConfigurationRequest
 * class' copy constructor.
 */
DeleteInfrastructureConfigurationRequestPrivate::DeleteInfrastructureConfigurationRequestPrivate(
    const DeleteInfrastructureConfigurationRequestPrivate &other, DeleteInfrastructureConfigurationRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
