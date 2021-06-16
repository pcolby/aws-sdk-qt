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

#include "getinfrastructureconfigurationrequest.h"
#include "getinfrastructureconfigurationrequest_p.h"
#include "getinfrastructureconfigurationresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::GetInfrastructureConfigurationRequest
 * \brief The GetInfrastructureConfigurationRequest class provides an interface for imagebuilder GetInfrastructureConfiguration requests.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::getInfrastructureConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetInfrastructureConfigurationRequest::GetInfrastructureConfigurationRequest(const GetInfrastructureConfigurationRequest &other)
    : imagebuilderRequest(new GetInfrastructureConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetInfrastructureConfigurationRequest object.
 */
GetInfrastructureConfigurationRequest::GetInfrastructureConfigurationRequest()
    : imagebuilderRequest(new GetInfrastructureConfigurationRequestPrivate(imagebuilderRequest::GetInfrastructureConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetInfrastructureConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetInfrastructureConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInfrastructureConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetInfrastructureConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::imagebuilder::GetInfrastructureConfigurationRequestPrivate
 * \brief The GetInfrastructureConfigurationRequestPrivate class provides private implementation for GetInfrastructureConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a GetInfrastructureConfigurationRequestPrivate object for imagebuilder \a action,
 * with public implementation \a q.
 */
GetInfrastructureConfigurationRequestPrivate::GetInfrastructureConfigurationRequestPrivate(
    const imagebuilderRequest::Action action, GetInfrastructureConfigurationRequest * const q)
    : imagebuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetInfrastructureConfigurationRequest
 * class' copy constructor.
 */
GetInfrastructureConfigurationRequestPrivate::GetInfrastructureConfigurationRequestPrivate(
    const GetInfrastructureConfigurationRequestPrivate &other, GetInfrastructureConfigurationRequest * const q)
    : imagebuilderRequestPrivate(other, q)
{

}

} // namespace imagebuilder
} // namespace QtAws
