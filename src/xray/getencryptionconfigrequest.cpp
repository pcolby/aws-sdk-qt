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

#include "getencryptionconfigrequest.h"
#include "getencryptionconfigrequest_p.h"
#include "getencryptionconfigresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetEncryptionConfigRequest
 * \brief The GetEncryptionConfigRequest class provides an interface for XRay GetEncryptionConfig requests.
 *
 * \inmodule QtAwsXRay
 *
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
 *
 * \sa XRayClient::getEncryptionConfig
 */

/*!
 * Constructs a copy of \a other.
 */
GetEncryptionConfigRequest::GetEncryptionConfigRequest(const GetEncryptionConfigRequest &other)
    : XRayRequest(new GetEncryptionConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetEncryptionConfigRequest object.
 */
GetEncryptionConfigRequest::GetEncryptionConfigRequest()
    : XRayRequest(new GetEncryptionConfigRequestPrivate(XRayRequest::GetEncryptionConfigAction, this))
{

}

/*!
 * \reimp
 */
bool GetEncryptionConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetEncryptionConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetEncryptionConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetEncryptionConfigResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::GetEncryptionConfigRequestPrivate
 * \brief The GetEncryptionConfigRequestPrivate class provides private implementation for GetEncryptionConfigRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetEncryptionConfigRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
GetEncryptionConfigRequestPrivate::GetEncryptionConfigRequestPrivate(
    const XRayRequest::Action action, GetEncryptionConfigRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetEncryptionConfigRequest
 * class' copy constructor.
 */
GetEncryptionConfigRequestPrivate::GetEncryptionConfigRequestPrivate(
    const GetEncryptionConfigRequestPrivate &other, GetEncryptionConfigRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
