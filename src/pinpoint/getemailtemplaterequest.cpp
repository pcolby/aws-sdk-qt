// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getemailtemplaterequest.h"
#include "getemailtemplaterequest_p.h"
#include "getemailtemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetEmailTemplateRequest
 * \brief The GetEmailTemplateRequest class provides an interface for Pinpoint GetEmailTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getEmailTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
GetEmailTemplateRequest::GetEmailTemplateRequest(const GetEmailTemplateRequest &other)
    : PinpointRequest(new GetEmailTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetEmailTemplateRequest object.
 */
GetEmailTemplateRequest::GetEmailTemplateRequest()
    : PinpointRequest(new GetEmailTemplateRequestPrivate(PinpointRequest::GetEmailTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool GetEmailTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetEmailTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetEmailTemplateRequest::response(QNetworkReply * const reply) const
{
    return new GetEmailTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetEmailTemplateRequestPrivate
 * \brief The GetEmailTemplateRequestPrivate class provides private implementation for GetEmailTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetEmailTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetEmailTemplateRequestPrivate::GetEmailTemplateRequestPrivate(
    const PinpointRequest::Action action, GetEmailTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetEmailTemplateRequest
 * class' copy constructor.
 */
GetEmailTemplateRequestPrivate::GetEmailTemplateRequestPrivate(
    const GetEmailTemplateRequestPrivate &other, GetEmailTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
