// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEKEYSIGNINGKEYREQUEST_P_H
#define QTAWS_DELETEKEYSIGNINGKEYREQUEST_P_H

#include "route53request_p.h"
#include "deletekeysigningkeyrequest.h"

namespace QtAws {
namespace Route53 {

class DeleteKeySigningKeyRequest;

class DeleteKeySigningKeyRequestPrivate : public Route53RequestPrivate {

public:
    DeleteKeySigningKeyRequestPrivate(const Route53Request::Action action,
                                   DeleteKeySigningKeyRequest * const q);
    DeleteKeySigningKeyRequestPrivate(const DeleteKeySigningKeyRequestPrivate &other,
                                   DeleteKeySigningKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteKeySigningKeyRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
