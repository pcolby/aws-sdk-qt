// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIGNINGPLATFORMREQUEST_P_H
#define QTAWS_GETSIGNINGPLATFORMREQUEST_P_H

#include "signerrequest_p.h"
#include "getsigningplatformrequest.h"

namespace QtAws {
namespace Signer {

class GetSigningPlatformRequest;

class GetSigningPlatformRequestPrivate : public SignerRequestPrivate {

public:
    GetSigningPlatformRequestPrivate(const SignerRequest::Action action,
                                   GetSigningPlatformRequest * const q);
    GetSigningPlatformRequestPrivate(const GetSigningPlatformRequestPrivate &other,
                                   GetSigningPlatformRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSigningPlatformRequest)

};

} // namespace Signer
} // namespace QtAws

#endif
