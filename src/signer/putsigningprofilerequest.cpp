/*
    Copyright 2013-2019 Paul Colby

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

#include "putsigningprofilerequest.h"
#include "putsigningprofilerequest_p.h"
#include "putsigningprofileresponse.h"
#include "signerrequest_p.h"

namespace QtAws {
namespace signer {

/*!
 * \class QtAws::signer::PutSigningProfileRequest
 * \brief The PutSigningProfileRequest class provides an interface for signer PutSigningProfile requests.
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
 * \sa signerClient::putSigningProfile
 */

/*!
 * Constructs a copy of \a other.
 */
PutSigningProfileRequest::PutSigningProfileRequest(const PutSigningProfileRequest &other)
    : signerRequest(new PutSigningProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutSigningProfileRequest object.
 */
PutSigningProfileRequest::PutSigningProfileRequest()
    : signerRequest(new PutSigningProfileRequestPrivate(signerRequest::PutSigningProfileAction, this))
{

}

/*!
 * \reimp
 */
bool PutSigningProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutSigningProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutSigningProfileRequest::response(QNetworkReply * const reply) const
{
    return new PutSigningProfileResponse(*this, reply);
}

/*!
 * \class QtAws::signer::PutSigningProfileRequestPrivate
 * \brief The PutSigningProfileRequestPrivate class provides private implementation for PutSigningProfileRequest.
 * \internal
 *
 * \inmodule QtAwssigner
 */

/*!
 * Constructs a PutSigningProfileRequestPrivate object for signer \a action,
 * with public implementation \a q.
 */
PutSigningProfileRequestPrivate::PutSigningProfileRequestPrivate(
    const signerRequest::Action action, PutSigningProfileRequest * const q)
    : signerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutSigningProfileRequest
 * class' copy constructor.
 */
PutSigningProfileRequestPrivate::PutSigningProfileRequestPrivate(
    const PutSigningProfileRequestPrivate &other, PutSigningProfileRequest * const q)
    : signerRequestPrivate(other, q)
{

}

} // namespace signer
} // namespace QtAws
