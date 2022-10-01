// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getappsrequest.h"
#include "getappsrequest_p.h"
#include "getappsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetAppsRequest
 * \brief The GetAppsRequest class provides an interface for Pinpoint GetApps requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getApps
 */

/*!
 * Constructs a copy of \a other.
 */
GetAppsRequest::GetAppsRequest(const GetAppsRequest &other)
    : PinpointRequest(new GetAppsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAppsRequest object.
 */
GetAppsRequest::GetAppsRequest()
    : PinpointRequest(new GetAppsRequestPrivate(PinpointRequest::GetAppsAction, this))
{

}

/*!
 * \reimp
 */
bool GetAppsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAppsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAppsRequest::response(QNetworkReply * const reply) const
{
    return new GetAppsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetAppsRequestPrivate
 * \brief The GetAppsRequestPrivate class provides private implementation for GetAppsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetAppsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetAppsRequestPrivate::GetAppsRequestPrivate(
    const PinpointRequest::Action action, GetAppsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAppsRequest
 * class' copy constructor.
 */
GetAppsRequestPrivate::GetAppsRequestPrivate(
    const GetAppsRequestPrivate &other, GetAppsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
