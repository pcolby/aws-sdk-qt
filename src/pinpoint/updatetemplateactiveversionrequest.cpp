// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetemplateactiveversionrequest.h"
#include "updatetemplateactiveversionrequest_p.h"
#include "updatetemplateactiveversionresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateTemplateActiveVersionRequest
 * \brief The UpdateTemplateActiveVersionRequest class provides an interface for Pinpoint UpdateTemplateActiveVersion requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateTemplateActiveVersion
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTemplateActiveVersionRequest::UpdateTemplateActiveVersionRequest(const UpdateTemplateActiveVersionRequest &other)
    : PinpointRequest(new UpdateTemplateActiveVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTemplateActiveVersionRequest object.
 */
UpdateTemplateActiveVersionRequest::UpdateTemplateActiveVersionRequest()
    : PinpointRequest(new UpdateTemplateActiveVersionRequestPrivate(PinpointRequest::UpdateTemplateActiveVersionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTemplateActiveVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateTemplateActiveVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTemplateActiveVersionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTemplateActiveVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateTemplateActiveVersionRequestPrivate
 * \brief The UpdateTemplateActiveVersionRequestPrivate class provides private implementation for UpdateTemplateActiveVersionRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateTemplateActiveVersionRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateTemplateActiveVersionRequestPrivate::UpdateTemplateActiveVersionRequestPrivate(
    const PinpointRequest::Action action, UpdateTemplateActiveVersionRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateTemplateActiveVersionRequest
 * class' copy constructor.
 */
UpdateTemplateActiveVersionRequestPrivate::UpdateTemplateActiveVersionRequestPrivate(
    const UpdateTemplateActiveVersionRequestPrivate &other, UpdateTemplateActiveVersionRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
