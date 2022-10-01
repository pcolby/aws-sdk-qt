// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSIGNINGPROFILEREQUEST_P_H
#define QTAWS_PUTSIGNINGPROFILEREQUEST_P_H

#include "signerrequest_p.h"
#include "putsigningprofilerequest.h"

namespace QtAws {
namespace Signer {

class PutSigningProfileRequest;

class PutSigningProfileRequestPrivate : public SignerRequestPrivate {

public:
    PutSigningProfileRequestPrivate(const SignerRequest::Action action,
                                   PutSigningProfileRequest * const q);
    PutSigningProfileRequestPrivate(const PutSigningProfileRequestPrivate &other,
                                   PutSigningProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutSigningProfileRequest)

};

} // namespace Signer
} // namespace QtAws

#endif
