// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEKEYSIGNINGKEYREQUEST_P_H
#define QTAWS_CREATEKEYSIGNINGKEYREQUEST_P_H

#include "route53request_p.h"
#include "createkeysigningkeyrequest.h"

namespace QtAws {
namespace Route53 {

class CreateKeySigningKeyRequest;

class CreateKeySigningKeyRequestPrivate : public Route53RequestPrivate {

public:
    CreateKeySigningKeyRequestPrivate(const Route53Request::Action action,
                                   CreateKeySigningKeyRequest * const q);
    CreateKeySigningKeyRequestPrivate(const CreateKeySigningKeyRequestPrivate &other,
                                   CreateKeySigningKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateKeySigningKeyRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
