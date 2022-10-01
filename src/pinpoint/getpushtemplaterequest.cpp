// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpushtemplaterequest.h"
#include "getpushtemplaterequest_p.h"
#include "getpushtemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetPushTemplateRequest
 * \brief The GetPushTemplateRequest class provides an interface for Pinpoint GetPushTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getPushTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
GetPushTemplateRequest::GetPushTemplateRequest(const GetPushTemplateRequest &other)
    : PinpointRequest(new GetPushTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPushTemplateRequest object.
 */
GetPushTemplateRequest::GetPushTemplateRequest()
    : PinpointRequest(new GetPushTemplateRequestPrivate(PinpointRequest::GetPushTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool GetPushTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPushTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPushTemplateRequest::response(QNetworkReply * const reply) const
{
    return new GetPushTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetPushTemplateRequestPrivate
 * \brief The GetPushTemplateRequestPrivate class provides private implementation for GetPushTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetPushTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetPushTemplateRequestPrivate::GetPushTemplateRequestPrivate(
    const PinpointRequest::Action action, GetPushTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPushTemplateRequest
 * class' copy constructor.
 */
GetPushTemplateRequestPrivate::GetPushTemplateRequestPrivate(
    const GetPushTemplateRequestPrivate &other, GetPushTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
