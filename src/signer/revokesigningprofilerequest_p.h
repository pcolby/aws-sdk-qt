// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKESIGNINGPROFILEREQUEST_P_H
#define QTAWS_REVOKESIGNINGPROFILEREQUEST_P_H

#include "signerrequest_p.h"
#include "revokesigningprofilerequest.h"

namespace QtAws {
namespace Signer {

class RevokeSigningProfileRequest;

class RevokeSigningProfileRequestPrivate : public SignerRequestPrivate {

public:
    RevokeSigningProfileRequestPrivate(const SignerRequest::Action action,
                                   RevokeSigningProfileRequest * const q);
    RevokeSigningProfileRequestPrivate(const RevokeSigningProfileRequestPrivate &other,
                                   RevokeSigningProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(RevokeSigningProfileRequest)

};

} // namespace Signer
} // namespace QtAws

#endif
