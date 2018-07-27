/*
    Copyright 2013-2018 Paul Colby

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

#include "phonenumbervalidaterequest.h"
#include "phonenumbervalidaterequest_p.h"
#include "phonenumbervalidateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::PhoneNumberValidateRequest
 * \brief The PhoneNumberValidateRequest class provides an interface for Pinpoint PhoneNumberValidate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::phoneNumberValidate
 */

/*!
 * Constructs a copy of \a other.
 */
PhoneNumberValidateRequest::PhoneNumberValidateRequest(const PhoneNumberValidateRequest &other)
    : PinpointRequest(new PhoneNumberValidateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PhoneNumberValidateRequest object.
 */
PhoneNumberValidateRequest::PhoneNumberValidateRequest()
    : PinpointRequest(new PhoneNumberValidateRequestPrivate(PinpointRequest::PhoneNumberValidateAction, this))
{

}

/*!
 * \reimp
 */
bool PhoneNumberValidateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PhoneNumberValidateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PhoneNumberValidateRequest::response(QNetworkReply * const reply) const
{
    return new PhoneNumberValidateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::PhoneNumberValidateRequestPrivate
 * \brief The PhoneNumberValidateRequestPrivate class provides private implementation for PhoneNumberValidateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a PhoneNumberValidateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
PhoneNumberValidateRequestPrivate::PhoneNumberValidateRequestPrivate(
    const PinpointRequest::Action action, PhoneNumberValidateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PhoneNumberValidateRequest
 * class' copy constructor.
 */
PhoneNumberValidateRequestPrivate::PhoneNumberValidateRequestPrivate(
    const PhoneNumberValidateRequestPrivate &other, PhoneNumberValidateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
