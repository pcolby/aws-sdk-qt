// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYREQUEST_P_H
#define QTAWS_VERIFYREQUEST_P_H

#include "kmsrequest_p.h"
#include "verifyrequest.h"

namespace QtAws {
namespace Kms {

class VerifyRequest;

class VerifyRequestPrivate : public KmsRequestPrivate {

public:
    VerifyRequestPrivate(const KmsRequest::Action action,
                                   VerifyRequest * const q);
    VerifyRequestPrivate(const VerifyRequestPrivate &other,
                                   VerifyRequest * const q);

private:
    Q_DECLARE_PUBLIC(VerifyRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
