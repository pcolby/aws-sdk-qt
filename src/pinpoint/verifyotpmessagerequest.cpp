// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "verifyotpmessagerequest.h"
#include "verifyotpmessagerequest_p.h"
#include "verifyotpmessageresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::VerifyOTPMessageRequest
 * \brief The VerifyOTPMessageRequest class provides an interface for Pinpoint VerifyOTPMessage requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::verifyOTPMessage
 */

/*!
 * Constructs a copy of \a other.
 */
VerifyOTPMessageRequest::VerifyOTPMessageRequest(const VerifyOTPMessageRequest &other)
    : PinpointRequest(new VerifyOTPMessageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a VerifyOTPMessageRequest object.
 */
VerifyOTPMessageRequest::VerifyOTPMessageRequest()
    : PinpointRequest(new VerifyOTPMessageRequestPrivate(PinpointRequest::VerifyOTPMessageAction, this))
{

}

/*!
 * \reimp
 */
bool VerifyOTPMessageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a VerifyOTPMessageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * VerifyOTPMessageRequest::response(QNetworkReply * const reply) const
{
    return new VerifyOTPMessageResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::VerifyOTPMessageRequestPrivate
 * \brief The VerifyOTPMessageRequestPrivate class provides private implementation for VerifyOTPMessageRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a VerifyOTPMessageRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
VerifyOTPMessageRequestPrivate::VerifyOTPMessageRequestPrivate(
    const PinpointRequest::Action action, VerifyOTPMessageRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the VerifyOTPMessageRequest
 * class' copy constructor.
 */
VerifyOTPMessageRequestPrivate::VerifyOTPMessageRequestPrivate(
    const VerifyOTPMessageRequestPrivate &other, VerifyOTPMessageRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
