// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
