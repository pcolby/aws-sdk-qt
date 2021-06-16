/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletevoicetemplaterequest.h"
#include "deletevoicetemplaterequest_p.h"
#include "deletevoicetemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteVoiceTemplateRequest
 * \brief The DeleteVoiceTemplateRequest class provides an interface for Pinpoint DeleteVoiceTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteVoiceTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteVoiceTemplateRequest::DeleteVoiceTemplateRequest(const DeleteVoiceTemplateRequest &other)
    : PinpointRequest(new DeleteVoiceTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteVoiceTemplateRequest object.
 */
DeleteVoiceTemplateRequest::DeleteVoiceTemplateRequest()
    : PinpointRequest(new DeleteVoiceTemplateRequestPrivate(PinpointRequest::DeleteVoiceTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteVoiceTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteVoiceTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteVoiceTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVoiceTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteVoiceTemplateRequestPrivate
 * \brief The DeleteVoiceTemplateRequestPrivate class provides private implementation for DeleteVoiceTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteVoiceTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteVoiceTemplateRequestPrivate::DeleteVoiceTemplateRequestPrivate(
    const PinpointRequest::Action action, DeleteVoiceTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteVoiceTemplateRequest
 * class' copy constructor.
 */
DeleteVoiceTemplateRequestPrivate::DeleteVoiceTemplateRequestPrivate(
    const DeleteVoiceTemplateRequestPrivate &other, DeleteVoiceTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
