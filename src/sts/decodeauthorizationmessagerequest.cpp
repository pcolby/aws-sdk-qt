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

#include "decodeauthorizationmessagerequest.h"
#include "decodeauthorizationmessagerequest_p.h"
#include "decodeauthorizationmessageresponse.h"
#include "stsrequest_p.h"

namespace QtAws {
namespace Sts {

/*!
 * \class QtAws::Sts::DecodeAuthorizationMessageRequest
 * \brief The DecodeAuthorizationMessageRequest class provides an interface for Sts DecodeAuthorizationMessage requests.
 *
 * \inmodule QtAwsSts
 *
 *  <fullname>Security Token Service</fullname>
 * 
 *  Security Token Service (STS) enables you to request temporary, limited-privilege credentials for Identity and Access
 *  Management (IAM) users or for users that you authenticate (federated users). This guide provides descriptions of the STS
 *  API. For more information about using this service, see <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp.html">Temporary Security
 *
 * \sa StsClient::decodeAuthorizationMessage
 */

/*!
 * Constructs a copy of \a other.
 */
DecodeAuthorizationMessageRequest::DecodeAuthorizationMessageRequest(const DecodeAuthorizationMessageRequest &other)
    : StsRequest(new DecodeAuthorizationMessageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DecodeAuthorizationMessageRequest object.
 */
DecodeAuthorizationMessageRequest::DecodeAuthorizationMessageRequest()
    : StsRequest(new DecodeAuthorizationMessageRequestPrivate(StsRequest::DecodeAuthorizationMessageAction, this))
{

}

/*!
 * \reimp
 */
bool DecodeAuthorizationMessageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DecodeAuthorizationMessageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DecodeAuthorizationMessageRequest::response(QNetworkReply * const reply) const
{
    return new DecodeAuthorizationMessageResponse(*this, reply);
}

/*!
 * \class QtAws::Sts::DecodeAuthorizationMessageRequestPrivate
 * \brief The DecodeAuthorizationMessageRequestPrivate class provides private implementation for DecodeAuthorizationMessageRequest.
 * \internal
 *
 * \inmodule QtAwsSts
 */

/*!
 * Constructs a DecodeAuthorizationMessageRequestPrivate object for Sts \a action,
 * with public implementation \a q.
 */
DecodeAuthorizationMessageRequestPrivate::DecodeAuthorizationMessageRequestPrivate(
    const StsRequest::Action action, DecodeAuthorizationMessageRequest * const q)
    : StsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DecodeAuthorizationMessageRequest
 * class' copy constructor.
 */
DecodeAuthorizationMessageRequestPrivate::DecodeAuthorizationMessageRequestPrivate(
    const DecodeAuthorizationMessageRequestPrivate &other, DecodeAuthorizationMessageRequest * const q)
    : StsRequestPrivate(other, q)
{

}

} // namespace Sts
} // namespace QtAws
