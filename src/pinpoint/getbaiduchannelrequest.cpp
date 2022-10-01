// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbaiduchannelrequest.h"
#include "getbaiduchannelrequest_p.h"
#include "getbaiduchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetBaiduChannelRequest
 * \brief The GetBaiduChannelRequest class provides an interface for Pinpoint GetBaiduChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getBaiduChannel
 */

/*!
 * Constructs a copy of \a other.
 */
GetBaiduChannelRequest::GetBaiduChannelRequest(const GetBaiduChannelRequest &other)
    : PinpointRequest(new GetBaiduChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBaiduChannelRequest object.
 */
GetBaiduChannelRequest::GetBaiduChannelRequest()
    : PinpointRequest(new GetBaiduChannelRequestPrivate(PinpointRequest::GetBaiduChannelAction, this))
{

}

/*!
 * \reimp
 */
bool GetBaiduChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBaiduChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBaiduChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetBaiduChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetBaiduChannelRequestPrivate
 * \brief The GetBaiduChannelRequestPrivate class provides private implementation for GetBaiduChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetBaiduChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetBaiduChannelRequestPrivate::GetBaiduChannelRequestPrivate(
    const PinpointRequest::Action action, GetBaiduChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBaiduChannelRequest
 * class' copy constructor.
 */
GetBaiduChannelRequestPrivate::GetBaiduChannelRequestPrivate(
    const GetBaiduChannelRequestPrivate &other, GetBaiduChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
