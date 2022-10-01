// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
