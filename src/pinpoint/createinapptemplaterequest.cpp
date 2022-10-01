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

#include "createinapptemplaterequest.h"
#include "createinapptemplaterequest_p.h"
#include "createinapptemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateInAppTemplateRequest
 * \brief The CreateInAppTemplateRequest class provides an interface for Pinpoint CreateInAppTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createInAppTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
CreateInAppTemplateRequest::CreateInAppTemplateRequest(const CreateInAppTemplateRequest &other)
    : PinpointRequest(new CreateInAppTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateInAppTemplateRequest object.
 */
CreateInAppTemplateRequest::CreateInAppTemplateRequest()
    : PinpointRequest(new CreateInAppTemplateRequestPrivate(PinpointRequest::CreateInAppTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool CreateInAppTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateInAppTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateInAppTemplateRequest::response(QNetworkReply * const reply) const
{
    return new CreateInAppTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::CreateInAppTemplateRequestPrivate
 * \brief The CreateInAppTemplateRequestPrivate class provides private implementation for CreateInAppTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateInAppTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
CreateInAppTemplateRequestPrivate::CreateInAppTemplateRequestPrivate(
    const PinpointRequest::Action action, CreateInAppTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateInAppTemplateRequest
 * class' copy constructor.
 */
CreateInAppTemplateRequestPrivate::CreateInAppTemplateRequestPrivate(
    const CreateInAppTemplateRequestPrivate &other, CreateInAppTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
