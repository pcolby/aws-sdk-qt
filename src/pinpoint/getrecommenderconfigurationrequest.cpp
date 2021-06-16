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

#include "getrecommenderconfigurationrequest.h"
#include "getrecommenderconfigurationrequest_p.h"
#include "getrecommenderconfigurationresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetRecommenderConfigurationRequest
 * \brief The GetRecommenderConfigurationRequest class provides an interface for Pinpoint GetRecommenderConfiguration requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getRecommenderConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetRecommenderConfigurationRequest::GetRecommenderConfigurationRequest(const GetRecommenderConfigurationRequest &other)
    : PinpointRequest(new GetRecommenderConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRecommenderConfigurationRequest object.
 */
GetRecommenderConfigurationRequest::GetRecommenderConfigurationRequest()
    : PinpointRequest(new GetRecommenderConfigurationRequestPrivate(PinpointRequest::GetRecommenderConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetRecommenderConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRecommenderConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRecommenderConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetRecommenderConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetRecommenderConfigurationRequestPrivate
 * \brief The GetRecommenderConfigurationRequestPrivate class provides private implementation for GetRecommenderConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetRecommenderConfigurationRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetRecommenderConfigurationRequestPrivate::GetRecommenderConfigurationRequestPrivate(
    const PinpointRequest::Action action, GetRecommenderConfigurationRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRecommenderConfigurationRequest
 * class' copy constructor.
 */
GetRecommenderConfigurationRequestPrivate::GetRecommenderConfigurationRequestPrivate(
    const GetRecommenderConfigurationRequestPrivate &other, GetRecommenderConfigurationRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
