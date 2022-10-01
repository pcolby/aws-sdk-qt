// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createapprequest.h"
#include "createapprequest_p.h"
#include "createappresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateAppRequest
 * \brief The CreateAppRequest class provides an interface for Pinpoint CreateApp requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createApp
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAppRequest::CreateAppRequest(const CreateAppRequest &other)
    : PinpointRequest(new CreateAppRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAppRequest object.
 */
CreateAppRequest::CreateAppRequest()
    : PinpointRequest(new CreateAppRequestPrivate(PinpointRequest::CreateAppAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAppRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAppResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAppRequest::response(QNetworkReply * const reply) const
{
    return new CreateAppResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::CreateAppRequestPrivate
 * \brief The CreateAppRequestPrivate class provides private implementation for CreateAppRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateAppRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
CreateAppRequestPrivate::CreateAppRequestPrivate(
    const PinpointRequest::Action action, CreateAppRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAppRequest
 * class' copy constructor.
 */
CreateAppRequestPrivate::CreateAppRequestPrivate(
    const CreateAppRequestPrivate &other, CreateAppRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
