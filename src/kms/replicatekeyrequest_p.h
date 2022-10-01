// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLICATEKEYREQUEST_P_H
#define QTAWS_REPLICATEKEYREQUEST_P_H

#include "kmsrequest_p.h"
#include "replicatekeyrequest.h"

namespace QtAws {
namespace Kms {

class ReplicateKeyRequest;

class ReplicateKeyRequestPrivate : public KmsRequestPrivate {

public:
    ReplicateKeyRequestPrivate(const KmsRequest::Action action,
                                   ReplicateKeyRequest * const q);
    ReplicateKeyRequestPrivate(const ReplicateKeyRequestPrivate &other,
                                   ReplicateKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(ReplicateKeyRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
