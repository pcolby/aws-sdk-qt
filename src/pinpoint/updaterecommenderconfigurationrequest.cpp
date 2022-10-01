// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
