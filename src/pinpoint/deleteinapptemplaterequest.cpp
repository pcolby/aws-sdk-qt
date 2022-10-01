// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteinapptemplaterequest.h"
#include "deleteinapptemplaterequest_p.h"
#include "deleteinapptemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteInAppTemplateRequest
 * \brief The DeleteInAppTemplateRequest class provides an interface for Pinpoint DeleteInAppTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteInAppTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteInAppTemplateRequest::DeleteInAppTemplateRequest(const DeleteInAppTemplateRequest &other)
    : PinpointRequest(new DeleteInAppTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteInAppTemplateRequest object.
 */
DeleteInAppTemplateRequest::DeleteInAppTemplateRequest()
    : PinpointRequest(new DeleteInAppTemplateRequestPrivate(PinpointRequest::DeleteInAppTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteInAppTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteInAppTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteInAppTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteInAppTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteInAppTemplateRequestPrivate
 * \brief The DeleteInAppTemplateRequestPrivate class provides private implementation for DeleteInAppTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteInAppTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteInAppTemplateRequestPrivate::DeleteInAppTemplateRequestPrivate(
    const PinpointRequest::Action action, DeleteInAppTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteInAppTemplateRequest
 * class' copy constructor.
 */
DeleteInAppTemplateRequestPrivate::DeleteInAppTemplateRequestPrivate(
    const DeleteInAppTemplateRequestPrivate &other, DeleteInAppTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
