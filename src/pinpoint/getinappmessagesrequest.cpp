// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getinappmessagesrequest.h"
#include "getinappmessagesrequest_p.h"
#include "getinappmessagesresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetInAppMessagesRequest
 * \brief The GetInAppMessagesRequest class provides an interface for Pinpoint GetInAppMessages requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getInAppMessages
 */

/*!
 * Constructs a copy of \a other.
 */
GetInAppMessagesRequest::GetInAppMessagesRequest(const GetInAppMessagesRequest &other)
    : PinpointRequest(new GetInAppMessagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetInAppMessagesRequest object.
 */
GetInAppMessagesRequest::GetInAppMessagesRequest()
    : PinpointRequest(new GetInAppMessagesRequestPrivate(PinpointRequest::GetInAppMessagesAction, this))
{

}

/*!
 * \reimp
 */
bool GetInAppMessagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetInAppMessagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInAppMessagesRequest::response(QNetworkReply * const reply) const
{
    return new GetInAppMessagesResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetInAppMessagesRequestPrivate
 * \brief The GetInAppMessagesRequestPrivate class provides private implementation for GetInAppMessagesRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetInAppMessagesRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetInAppMessagesRequestPrivate::GetInAppMessagesRequestPrivate(
    const PinpointRequest::Action action, GetInAppMessagesRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetInAppMessagesRequest
 * class' copy constructor.
 */
GetInAppMessagesRequestPrivate::GetInAppMessagesRequestPrivate(
    const GetInAppMessagesRequestPrivate &other, GetInAppMessagesRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
