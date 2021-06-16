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

#include "updaterecommenderconfigurationrequest.h"
#include "updaterecommenderconfigurationrequest_p.h"
#include "updaterecommenderconfigurationresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateRecommenderConfigurationRequest
 * \brief The UpdateRecommenderConfigurationRequest class provides an interface for Pinpoint UpdateRecommenderConfiguration requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateRecommenderConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRecommenderConfigurationRequest::UpdateRecommenderConfigurationRequest(const UpdateRecommenderConfigurationRequest &other)
    : PinpointRequest(new UpdateRecommenderConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRecommenderConfigurationRequest object.
 */
UpdateRecommenderConfigurationRequest::UpdateRecommenderConfigurationRequest()
    : PinpointRequest(new UpdateRecommenderConfigurationRequestPrivate(PinpointRequest::UpdateRecommenderConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRecommenderConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRecommenderConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRecommenderConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRecommenderConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateRecommenderConfigurationRequestPrivate
 * \brief The UpdateRecommenderConfigurationRequestPrivate class provides private implementation for UpdateRecommenderConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateRecommenderConfigurationRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateRecommenderConfigurationRequestPrivate::UpdateRecommenderConfigurationRequestPrivate(
    const PinpointRequest::Action action, UpdateRecommenderConfigurationRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRecommenderConfigurationRequest
 * class' copy constructor.
 */
UpdateRecommenderConfigurationRequestPrivate::UpdateRecommenderConfigurationRequestPrivate(
    const UpdateRecommenderConfigurationRequestPrivate &other, UpdateRecommenderConfigurationRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
