// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKESIGNATUREREQUEST_P_H
#define QTAWS_REVOKESIGNATUREREQUEST_P_H

#include "signerrequest_p.h"
#include "revokesignaturerequest.h"

namespace QtAws {
namespace Signer {

class RevokeSignatureRequest;

class RevokeSignatureRequestPrivate : public SignerRequestPrivate {

public:
    RevokeSignatureRequestPrivate(const SignerRequest::Action action,
                                   RevokeSignatureRequest * const q);
    RevokeSignatureRequestPrivate(const RevokeSignatureRequestPrivate &other,
                                   RevokeSignatureRequest * const q);

private:
    Q_DECLARE_PUBLIC(RevokeSignatureRequest)

};

} // namespace Signer
} // namespace QtAws

#endif
