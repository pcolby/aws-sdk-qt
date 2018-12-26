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

#include "cancelsigningprofilerequest.h"
#include "cancelsigningprofilerequest_p.h"
#include "cancelsigningprofileresponse.h"
#include "signerrequest_p.h"

namespace QtAws {
namespace signer {

/*!
 * \class QtAws::signer::CancelSigningProfileRequest
 * \brief The CancelSigningProfileRequest class provides an interface for signer CancelSigningProfile requests.
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
 * \sa signerClient::cancelSigningProfile
 */

/*!
 * Constructs a copy of \a other.
 */
CancelSigningProfileRequest::CancelSigningProfileRequest(const CancelSigningProfileRequest &other)
    : signerRequest(new CancelSigningProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelSigningProfileRequest object.
 */
CancelSigningProfileRequest::CancelSigningProfileRequest()
    : signerRequest(new CancelSigningProfileRequestPrivate(signerRequest::CancelSigningProfileAction, this))
{

}

/*!
 * \reimp
 */
bool CancelSigningProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelSigningProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelSigningProfileRequest::response(QNetworkReply * const reply) const
{
    return new CancelSigningProfileResponse(*this, reply);
}

/*!
 * \class QtAws::signer::CancelSigningProfileRequestPrivate
 * \brief The CancelSigningProfileRequestPrivate class provides private implementation for CancelSigningProfileRequest.
 * \internal
 *
 * \inmodule QtAwssigner
 */

/*!
 * Constructs a CancelSigningProfileRequestPrivate object for signer \a action,
 * with public implementation \a q.
 */
CancelSigningProfileRequestPrivate::CancelSigningProfileRequestPrivate(
    const signerRequest::Action action, CancelSigningProfileRequest * const q)
    : signerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelSigningProfileRequest
 * class' copy constructor.
 */
CancelSigningProfileRequestPrivate::CancelSigningProfileRequestPrivate(
    const CancelSigningProfileRequestPrivate &other, CancelSigningProfileRequest * const q)
    : signerRequestPrivate(other, q)
{

}

} // namespace signer
} // namespace QtAws
