// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
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
