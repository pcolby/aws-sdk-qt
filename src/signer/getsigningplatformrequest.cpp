/*
    Copyright 2013-2020 Paul Colby

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

#include "getsigningplatformrequest.h"
#include "getsigningplatformrequest_p.h"
#include "getsigningplatformresponse.h"
#include "signerrequest_p.h"

namespace QtAws {
namespace signer {

/*!
 * \class QtAws::signer::GetSigningPlatformRequest
 * \brief The GetSigningPlatformRequest class provides an interface for signer GetSigningPlatform requests.
 *
 * \inmodule QtAwssigner
 *
 *  You can use Code Signing for Amazon FreeRTOS (AWS Signer) to sign code that you created for any of the IoT devices that
 *  Amazon Web Services supports. AWS Signer is integrated with Amazon FreeRTOS, AWS Certificate Manager, and AWS
 *  CloudTrail. Amazon FreeRTOS customers can use AWS Signer to sign code images before making them available for
 *  microcontrollers. You can use ACM to import third-party certificates to be used by AWS Signer. For general information
 *  about using AWS Signer, see the <a href="http://docs.aws.amazon.com/signer/latest/developerguide/Welcome.html">Code
 *  Signing for Amazon FreeRTOS Developer
 *
 * \sa signerClient::getSigningPlatform
 */

/*!
 * Constructs a copy of \a other.
 */
GetSigningPlatformRequest::GetSigningPlatformRequest(const GetSigningPlatformRequest &other)
    : signerRequest(new GetSigningPlatformRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSigningPlatformRequest object.
 */
GetSigningPlatformRequest::GetSigningPlatformRequest()
    : signerRequest(new GetSigningPlatformRequestPrivate(signerRequest::GetSigningPlatformAction, this))
{

}

/*!
 * \reimp
 */
bool GetSigningPlatformRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSigningPlatformResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSigningPlatformRequest::response(QNetworkReply * const reply) const
{
    return new GetSigningPlatformResponse(*this, reply);
}

/*!
 * \class QtAws::signer::GetSigningPlatformRequestPrivate
 * \brief The GetSigningPlatformRequestPrivate class provides private implementation for GetSigningPlatformRequest.
 * \internal
 *
 * \inmodule QtAwssigner
 */

/*!
 * Constructs a GetSigningPlatformRequestPrivate object for signer \a action,
 * with public implementation \a q.
 */
GetSigningPlatformRequestPrivate::GetSigningPlatformRequestPrivate(
    const signerRequest::Action action, GetSigningPlatformRequest * const q)
    : signerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSigningPlatformRequest
 * class' copy constructor.
 */
GetSigningPlatformRequestPrivate::GetSigningPlatformRequestPrivate(
    const GetSigningPlatformRequestPrivate &other, GetSigningPlatformRequest * const q)
    : signerRequestPrivate(other, q)
{

}

} // namespace signer
} // namespace QtAws
