// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Doc Engage API - Amazon Pinpoint
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
