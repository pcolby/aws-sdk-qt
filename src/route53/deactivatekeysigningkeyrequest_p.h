// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATEKEYSIGNINGKEYREQUEST_P_H
#define QTAWS_DEACTIVATEKEYSIGNINGKEYREQUEST_P_H

#include "route53request_p.h"
#include "deactivatekeysigningkeyrequest.h"

namespace QtAws {
namespace Route53 {

class DeactivateKeySigningKeyRequest;

class DeactivateKeySigningKeyRequestPrivate : public Route53RequestPrivate {

public:
    DeactivateKeySigningKeyRequestPrivate(const Route53Request::Action action,
                                   DeactivateKeySigningKeyRequest * const q);
    DeactivateKeySigningKeyRequestPrivate(const DeactivateKeySigningKeyRequestPrivate &other,
                                   DeactivateKeySigningKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeactivateKeySigningKeyRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
