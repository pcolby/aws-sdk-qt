// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapprequest.h"
#include "getapprequest_p.h"
#include "getappresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetAppRequest
 * \brief The GetAppRequest class provides an interface for Pinpoint GetApp requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getApp
 */

/*!
 * Constructs a copy of \a other.
 */
GetAppRequest::GetAppRequest(const GetAppRequest &other)
    : PinpointRequest(new GetAppRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAppRequest object.
 */
GetAppRequest::GetAppRequest()
    : PinpointRequest(new GetAppRequestPrivate(PinpointRequest::GetAppAction, this))
{

}

/*!
 * \reimp
 */
bool GetAppRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAppResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAppRequest::response(QNetworkReply * const reply) const
{
    return new GetAppResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetAppRequestPrivate
 * \brief The GetAppRequestPrivate class provides private implementation for GetAppRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetAppRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetAppRequestPrivate::GetAppRequestPrivate(
    const PinpointRequest::Action action, GetAppRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAppRequest
 * class' copy constructor.
 */
GetAppRequestPrivate::GetAppRequestPrivate(
    const GetAppRequestPrivate &other, GetAppRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
