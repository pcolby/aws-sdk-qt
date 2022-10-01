// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteemailtemplaterequest.h"
#include "deleteemailtemplaterequest_p.h"
#include "deleteemailtemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteEmailTemplateRequest
 * \brief The DeleteEmailTemplateRequest class provides an interface for Pinpoint DeleteEmailTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteEmailTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEmailTemplateRequest::DeleteEmailTemplateRequest(const DeleteEmailTemplateRequest &other)
    : PinpointRequest(new DeleteEmailTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEmailTemplateRequest object.
 */
DeleteEmailTemplateRequest::DeleteEmailTemplateRequest()
    : PinpointRequest(new DeleteEmailTemplateRequestPrivate(PinpointRequest::DeleteEmailTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEmailTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEmailTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEmailTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEmailTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteEmailTemplateRequestPrivate
 * \brief The DeleteEmailTemplateRequestPrivate class provides private implementation for DeleteEmailTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteEmailTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteEmailTemplateRequestPrivate::DeleteEmailTemplateRequestPrivate(
    const PinpointRequest::Action action, DeleteEmailTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEmailTemplateRequest
 * class' copy constructor.
 */
DeleteEmailTemplateRequestPrivate::DeleteEmailTemplateRequestPrivate(
    const DeleteEmailTemplateRequestPrivate &other, DeleteEmailTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
