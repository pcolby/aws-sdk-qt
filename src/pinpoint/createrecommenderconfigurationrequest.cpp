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

#include "createrecommenderconfigurationrequest.h"
#include "createrecommenderconfigurationrequest_p.h"
#include "createrecommenderconfigurationresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateRecommenderConfigurationRequest
 * \brief The CreateRecommenderConfigurationRequest class provides an interface for Pinpoint CreateRecommenderConfiguration requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createRecommenderConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRecommenderConfigurationRequest::CreateRecommenderConfigurationRequest(const CreateRecommenderConfigurationRequest &other)
    : PinpointRequest(new CreateRecommenderConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRecommenderConfigurationRequest object.
 */
CreateRecommenderConfigurationRequest::CreateRecommenderConfigurationRequest()
    : PinpointRequest(new CreateRecommenderConfigurationRequestPrivate(PinpointRequest::CreateRecommenderConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRecommenderConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRecommenderConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRecommenderConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new CreateRecommenderConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::CreateRecommenderConfigurationRequestPrivate
 * \brief The CreateRecommenderConfigurationRequestPrivate class provides private implementation for CreateRecommenderConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateRecommenderConfigurationRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
CreateRecommenderConfigurationRequestPrivate::CreateRecommenderConfigurationRequestPrivate(
    const PinpointRequest::Action action, CreateRecommenderConfigurationRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRecommenderConfigurationRequest
 * class' copy constructor.
 */
CreateRecommenderConfigurationRequestPrivate::CreateRecommenderConfigurationRequestPrivate(
    const CreateRecommenderConfigurationRequestPrivate &other, CreateRecommenderConfigurationRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
