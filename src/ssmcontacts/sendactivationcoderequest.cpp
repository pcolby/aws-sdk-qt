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

#include "sendactivationcoderequest.h"
#include "sendactivationcoderequest_p.h"
#include "sendactivationcoderesponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::SendActivationCodeRequest
 * \brief The SendActivationCodeRequest class provides an interface for SSMContacts SendActivationCode requests.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::sendActivationCode
 */

/*!
 * Constructs a copy of \a other.
 */
SendActivationCodeRequest::SendActivationCodeRequest(const SendActivationCodeRequest &other)
    : SSMContactsRequest(new SendActivationCodeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendActivationCodeRequest object.
 */
SendActivationCodeRequest::SendActivationCodeRequest()
    : SSMContactsRequest(new SendActivationCodeRequestPrivate(SSMContactsRequest::SendActivationCodeAction, this))
{

}

/*!
 * \reimp
 */
bool SendActivationCodeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendActivationCodeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendActivationCodeRequest::response(QNetworkReply * const reply) const
{
    return new SendActivationCodeResponse(*this, reply);
}

/*!
 * \class QtAws::SSMContacts::SendActivationCodeRequestPrivate
 * \brief The SendActivationCodeRequestPrivate class provides private implementation for SendActivationCodeRequest.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a SendActivationCodeRequestPrivate object for SSMContacts \a action,
 * with public implementation \a q.
 */
SendActivationCodeRequestPrivate::SendActivationCodeRequestPrivate(
    const SSMContactsRequest::Action action, SendActivationCodeRequest * const q)
    : SSMContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendActivationCodeRequest
 * class' copy constructor.
 */
SendActivationCodeRequestPrivate::SendActivationCodeRequestPrivate(
    const SendActivationCodeRequestPrivate &other, SendActivationCodeRequest * const q)
    : SSMContactsRequestPrivate(other, q)
{

}

} // namespace SSMContacts
} // namespace QtAws
