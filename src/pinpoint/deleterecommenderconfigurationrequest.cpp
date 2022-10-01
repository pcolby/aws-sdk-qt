// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterecommenderconfigurationrequest.h"
#include "deleterecommenderconfigurationrequest_p.h"
#include "deleterecommenderconfigurationresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteRecommenderConfigurationRequest
 * \brief The DeleteRecommenderConfigurationRequest class provides an interface for Pinpoint DeleteRecommenderConfiguration requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteRecommenderConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRecommenderConfigurationRequest::DeleteRecommenderConfigurationRequest(const DeleteRecommenderConfigurationRequest &other)
    : PinpointRequest(new DeleteRecommenderConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRecommenderConfigurationRequest object.
 */
DeleteRecommenderConfigurationRequest::DeleteRecommenderConfigurationRequest()
    : PinpointRequest(new DeleteRecommenderConfigurationRequestPrivate(PinpointRequest::DeleteRecommenderConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRecommenderConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRecommenderConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRecommenderConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRecommenderConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteRecommenderConfigurationRequestPrivate
 * \brief The DeleteRecommenderConfigurationRequestPrivate class provides private implementation for DeleteRecommenderConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteRecommenderConfigurationRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteRecommenderConfigurationRequestPrivate::DeleteRecommenderConfigurationRequestPrivate(
    const PinpointRequest::Action action, DeleteRecommenderConfigurationRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRecommenderConfigurationRequest
 * class' copy constructor.
 */
DeleteRecommenderConfigurationRequestPrivate::DeleteRecommenderConfigurationRequestPrivate(
    const DeleteRecommenderConfigurationRequestPrivate &other, DeleteRecommenderConfigurationRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
