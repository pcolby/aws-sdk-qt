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

#include "putencryptionconfigrequest.h"
#include "putencryptionconfigrequest_p.h"
#include "putencryptionconfigresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::PutEncryptionConfigRequest
 * \brief The PutEncryptionConfigRequest class provides an interface for XRay PutEncryptionConfig requests.
 *
 * \inmodule QtAwsXRay
 *
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
 *
 * \sa XRayClient::putEncryptionConfig
 */

/*!
 * Constructs a copy of \a other.
 */
PutEncryptionConfigRequest::PutEncryptionConfigRequest(const PutEncryptionConfigRequest &other)
    : XRayRequest(new PutEncryptionConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutEncryptionConfigRequest object.
 */
PutEncryptionConfigRequest::PutEncryptionConfigRequest()
    : XRayRequest(new PutEncryptionConfigRequestPrivate(XRayRequest::PutEncryptionConfigAction, this))
{

}

/*!
 * \reimp
 */
bool PutEncryptionConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutEncryptionConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutEncryptionConfigRequest::response(QNetworkReply * const reply) const
{
    return new PutEncryptionConfigResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::PutEncryptionConfigRequestPrivate
 * \brief The PutEncryptionConfigRequestPrivate class provides private implementation for PutEncryptionConfigRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a PutEncryptionConfigRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
PutEncryptionConfigRequestPrivate::PutEncryptionConfigRequestPrivate(
    const XRayRequest::Action action, PutEncryptionConfigRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutEncryptionConfigRequest
 * class' copy constructor.
 */
PutEncryptionConfigRequestPrivate::PutEncryptionConfigRequestPrivate(
    const PutEncryptionConfigRequestPrivate &other, PutEncryptionConfigRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
