// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepushtemplaterequest.h"
#include "deletepushtemplaterequest_p.h"
#include "deletepushtemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeletePushTemplateRequest
 * \brief The DeletePushTemplateRequest class provides an interface for Pinpoint DeletePushTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deletePushTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePushTemplateRequest::DeletePushTemplateRequest(const DeletePushTemplateRequest &other)
    : PinpointRequest(new DeletePushTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePushTemplateRequest object.
 */
DeletePushTemplateRequest::DeletePushTemplateRequest()
    : PinpointRequest(new DeletePushTemplateRequestPrivate(PinpointRequest::DeletePushTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePushTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePushTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePushTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeletePushTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeletePushTemplateRequestPrivate
 * \brief The DeletePushTemplateRequestPrivate class provides private implementation for DeletePushTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeletePushTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeletePushTemplateRequestPrivate::DeletePushTemplateRequestPrivate(
    const PinpointRequest::Action action, DeletePushTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePushTemplateRequest
 * class' copy constructor.
 */
DeletePushTemplateRequestPrivate::DeletePushTemplateRequestPrivate(
    const DeletePushTemplateRequestPrivate &other, DeletePushTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
