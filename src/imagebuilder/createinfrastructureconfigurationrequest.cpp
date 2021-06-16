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

#include "createinfrastructureconfigurationrequest.h"
#include "createinfrastructureconfigurationrequest_p.h"
#include "createinfrastructureconfigurationresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::CreateInfrastructureConfigurationRequest
 * \brief The CreateInfrastructureConfigurationRequest class provides an interface for imagebuilder CreateInfrastructureConfiguration requests.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::createInfrastructureConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
CreateInfrastructureConfigurationRequest::CreateInfrastructureConfigurationRequest(const CreateInfrastructureConfigurationRequest &other)
    : imagebuilderRequest(new CreateInfrastructureConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateInfrastructureConfigurationRequest object.
 */
CreateInfrastructureConfigurationRequest::CreateInfrastructureConfigurationRequest()
    : imagebuilderRequest(new CreateInfrastructureConfigurationRequestPrivate(imagebuilderRequest::CreateInfrastructureConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateInfrastructureConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateInfrastructureConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateInfrastructureConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new CreateInfrastructureConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::imagebuilder::CreateInfrastructureConfigurationRequestPrivate
 * \brief The CreateInfrastructureConfigurationRequestPrivate class provides private implementation for CreateInfrastructureConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a CreateInfrastructureConfigurationRequestPrivate object for imagebuilder \a action,
 * with public implementation \a q.
 */
CreateInfrastructureConfigurationRequestPrivate::CreateInfrastructureConfigurationRequestPrivate(
    const imagebuilderRequest::Action action, CreateInfrastructureConfigurationRequest * const q)
    : imagebuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateInfrastructureConfigurationRequest
 * class' copy constructor.
 */
CreateInfrastructureConfigurationRequestPrivate::CreateInfrastructureConfigurationRequestPrivate(
    const CreateInfrastructureConfigurationRequestPrivate &other, CreateInfrastructureConfigurationRequest * const q)
    : imagebuilderRequestPrivate(other, q)
{

}

} // namespace imagebuilder
} // namespace QtAws
