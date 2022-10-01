// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsmstemplaterequest.h"
#include "getsmstemplaterequest_p.h"
#include "getsmstemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSmsTemplateRequest
 * \brief The GetSmsTemplateRequest class provides an interface for Pinpoint GetSmsTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getSmsTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
GetSmsTemplateRequest::GetSmsTemplateRequest(const GetSmsTemplateRequest &other)
    : PinpointRequest(new GetSmsTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSmsTemplateRequest object.
 */
GetSmsTemplateRequest::GetSmsTemplateRequest()
    : PinpointRequest(new GetSmsTemplateRequestPrivate(PinpointRequest::GetSmsTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool GetSmsTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSmsTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSmsTemplateRequest::response(QNetworkReply * const reply) const
{
    return new GetSmsTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetSmsTemplateRequestPrivate
 * \brief The GetSmsTemplateRequestPrivate class provides private implementation for GetSmsTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetSmsTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetSmsTemplateRequestPrivate::GetSmsTemplateRequestPrivate(
    const PinpointRequest::Action action, GetSmsTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSmsTemplateRequest
 * class' copy constructor.
 */
GetSmsTemplateRequestPrivate::GetSmsTemplateRequestPrivate(
    const GetSmsTemplateRequestPrivate &other, GetSmsTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
