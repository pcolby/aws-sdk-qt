// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIGNINGPROFILEREQUEST_P_H
#define QTAWS_GETSIGNINGPROFILEREQUEST_P_H

#include "signerrequest_p.h"
#include "getsigningprofilerequest.h"

namespace QtAws {
namespace Signer {

class GetSigningProfileRequest;

class GetSigningProfileRequestPrivate : public SignerRequestPrivate {

public:
    GetSigningProfileRequestPrivate(const SignerRequest::Action action,
                                   GetSigningProfileRequest * const q);
    GetSigningProfileRequestPrivate(const GetSigningProfileRequestPrivate &other,
                                   GetSigningProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSigningProfileRequest)

};

} // namespace Signer
} // namespace QtAws

#endif
