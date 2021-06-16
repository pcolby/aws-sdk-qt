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

#include "getrecommenderconfigurationsrequest.h"
#include "getrecommenderconfigurationsrequest_p.h"
#include "getrecommenderconfigurationsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetRecommenderConfigurationsRequest
 * \brief The GetRecommenderConfigurationsRequest class provides an interface for Pinpoint GetRecommenderConfigurations requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getRecommenderConfigurations
 */

/*!
 * Constructs a copy of \a other.
 */
GetRecommenderConfigurationsRequest::GetRecommenderConfigurationsRequest(const GetRecommenderConfigurationsRequest &other)
    : PinpointRequest(new GetRecommenderConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRecommenderConfigurationsRequest object.
 */
GetRecommenderConfigurationsRequest::GetRecommenderConfigurationsRequest()
    : PinpointRequest(new GetRecommenderConfigurationsRequestPrivate(PinpointRequest::GetRecommenderConfigurationsAction, this))
{

}

/*!
 * \reimp
 */
bool GetRecommenderConfigurationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRecommenderConfigurationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRecommenderConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new GetRecommenderConfigurationsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetRecommenderConfigurationsRequestPrivate
 * \brief The GetRecommenderConfigurationsRequestPrivate class provides private implementation for GetRecommenderConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetRecommenderConfigurationsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetRecommenderConfigurationsRequestPrivate::GetRecommenderConfigurationsRequestPrivate(
    const PinpointRequest::Action action, GetRecommenderConfigurationsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRecommenderConfigurationsRequest
 * class' copy constructor.
 */
GetRecommenderConfigurationsRequestPrivate::GetRecommenderConfigurationsRequestPrivate(
    const GetRecommenderConfigurationsRequestPrivate &other, GetRecommenderConfigurationsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
