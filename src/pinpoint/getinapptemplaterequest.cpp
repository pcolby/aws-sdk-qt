// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getinapptemplaterequest.h"
#include "getinapptemplaterequest_p.h"
#include "getinapptemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetInAppTemplateRequest
 * \brief The GetInAppTemplateRequest class provides an interface for Pinpoint GetInAppTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getInAppTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
GetInAppTemplateRequest::GetInAppTemplateRequest(const GetInAppTemplateRequest &other)
    : PinpointRequest(new GetInAppTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetInAppTemplateRequest object.
 */
GetInAppTemplateRequest::GetInAppTemplateRequest()
    : PinpointRequest(new GetInAppTemplateRequestPrivate(PinpointRequest::GetInAppTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool GetInAppTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetInAppTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInAppTemplateRequest::response(QNetworkReply * const reply) const
{
    return new GetInAppTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetInAppTemplateRequestPrivate
 * \brief The GetInAppTemplateRequestPrivate class provides private implementation for GetInAppTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetInAppTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetInAppTemplateRequestPrivate::GetInAppTemplateRequestPrivate(
    const PinpointRequest::Action action, GetInAppTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetInAppTemplateRequest
 * class' copy constructor.
 */
GetInAppTemplateRequestPrivate::GetInAppTemplateRequestPrivate(
    const GetInAppTemplateRequestPrivate &other, GetInAppTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
