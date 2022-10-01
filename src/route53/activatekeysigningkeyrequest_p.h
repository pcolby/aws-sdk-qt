// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATEKEYSIGNINGKEYREQUEST_P_H
#define QTAWS_ACTIVATEKEYSIGNINGKEYREQUEST_P_H

#include "route53request_p.h"
#include "activatekeysigningkeyrequest.h"

namespace QtAws {
namespace Route53 {

class ActivateKeySigningKeyRequest;

class ActivateKeySigningKeyRequestPrivate : public Route53RequestPrivate {

public:
    ActivateKeySigningKeyRequestPrivate(const Route53Request::Action action,
                                   ActivateKeySigningKeyRequest * const q);
    ActivateKeySigningKeyRequestPrivate(const ActivateKeySigningKeyRequestPrivate &other,
                                   ActivateKeySigningKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(ActivateKeySigningKeyRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
