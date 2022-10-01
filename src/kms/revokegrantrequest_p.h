// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEGRANTREQUEST_P_H
#define QTAWS_REVOKEGRANTREQUEST_P_H

#include "kmsrequest_p.h"
#include "revokegrantrequest.h"

namespace QtAws {
namespace Kms {

class RevokeGrantRequest;

class RevokeGrantRequestPrivate : public KmsRequestPrivate {

public:
    RevokeGrantRequestPrivate(const KmsRequest::Action action,
                                   RevokeGrantRequest * const q);
    RevokeGrantRequestPrivate(const RevokeGrantRequestPrivate &other,
                                   RevokeGrantRequest * const q);

private:
    Q_DECLARE_PUBLIC(RevokeGrantRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
