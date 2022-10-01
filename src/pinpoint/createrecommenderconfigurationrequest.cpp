// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
