// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapplicationsettingsrequest.h"
#include "getapplicationsettingsrequest_p.h"
#include "getapplicationsettingsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetApplicationSettingsRequest
 * \brief The GetApplicationSettingsRequest class provides an interface for Pinpoint GetApplicationSettings requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getApplicationSettings
 */

/*!
 * Constructs a copy of \a other.
 */
GetApplicationSettingsRequest::GetApplicationSettingsRequest(const GetApplicationSettingsRequest &other)
    : PinpointRequest(new GetApplicationSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetApplicationSettingsRequest object.
 */
GetApplicationSettingsRequest::GetApplicationSettingsRequest()
    : PinpointRequest(new GetApplicationSettingsRequestPrivate(PinpointRequest::GetApplicationSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool GetApplicationSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetApplicationSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApplicationSettingsRequest::response(QNetworkReply * const reply) const
{
    return new GetApplicationSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetApplicationSettingsRequestPrivate
 * \brief The GetApplicationSettingsRequestPrivate class provides private implementation for GetApplicationSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetApplicationSettingsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetApplicationSettingsRequestPrivate::GetApplicationSettingsRequestPrivate(
    const PinpointRequest::Action action, GetApplicationSettingsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetApplicationSettingsRequest
 * class' copy constructor.
 */
GetApplicationSettingsRequestPrivate::GetApplicationSettingsRequestPrivate(
    const GetApplicationSettingsRequestPrivate &other, GetApplicationSettingsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
