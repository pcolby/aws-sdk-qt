// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSIGNINGPROFILEREQUEST_P_H
#define QTAWS_CANCELSIGNINGPROFILEREQUEST_P_H

#include "signerrequest_p.h"
#include "cancelsigningprofilerequest.h"

namespace QtAws {
namespace Signer {

class CancelSigningProfileRequest;

class CancelSigningProfileRequestPrivate : public SignerRequestPrivate {

public:
    CancelSigningProfileRequestPrivate(const SignerRequest::Action action,
                                   CancelSigningProfileRequest * const q);
    CancelSigningProfileRequestPrivate(const CancelSigningProfileRequestPrivate &other,
                                   CancelSigningProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelSigningProfileRequest)

};

} // namespace Signer
} // namespace QtAws

#endif
