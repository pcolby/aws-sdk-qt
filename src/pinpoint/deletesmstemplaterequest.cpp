// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesmstemplaterequest.h"
#include "deletesmstemplaterequest_p.h"
#include "deletesmstemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteSmsTemplateRequest
 * \brief The DeleteSmsTemplateRequest class provides an interface for Pinpoint DeleteSmsTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteSmsTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSmsTemplateRequest::DeleteSmsTemplateRequest(const DeleteSmsTemplateRequest &other)
    : PinpointRequest(new DeleteSmsTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSmsTemplateRequest object.
 */
DeleteSmsTemplateRequest::DeleteSmsTemplateRequest()
    : PinpointRequest(new DeleteSmsTemplateRequestPrivate(PinpointRequest::DeleteSmsTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSmsTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSmsTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSmsTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSmsTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteSmsTemplateRequestPrivate
 * \brief The DeleteSmsTemplateRequestPrivate class provides private implementation for DeleteSmsTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteSmsTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteSmsTemplateRequestPrivate::DeleteSmsTemplateRequestPrivate(
    const PinpointRequest::Action action, DeleteSmsTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSmsTemplateRequest
 * class' copy constructor.
 */
DeleteSmsTemplateRequestPrivate::DeleteSmsTemplateRequestPrivate(
    const DeleteSmsTemplateRequestPrivate &other, DeleteSmsTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
