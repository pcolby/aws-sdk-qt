// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REENCRYPTREQUEST_P_H
#define QTAWS_REENCRYPTREQUEST_P_H

#include "kmsrequest_p.h"
#include "reencryptrequest.h"

namespace QtAws {
namespace Kms {

class ReEncryptRequest;

class ReEncryptRequestPrivate : public KmsRequestPrivate {

public:
    ReEncryptRequestPrivate(const KmsRequest::Action action,
                                   ReEncryptRequest * const q);
    ReEncryptRequestPrivate(const ReEncryptRequestPrivate &other,
                                   ReEncryptRequest * const q);

private:
    Q_DECLARE_PUBLIC(ReEncryptRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
