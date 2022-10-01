// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELKEYDELETIONREQUEST_P_H
#define QTAWS_CANCELKEYDELETIONREQUEST_P_H

#include "kmsrequest_p.h"
#include "cancelkeydeletionrequest.h"

namespace QtAws {
namespace Kms {

class CancelKeyDeletionRequest;

class CancelKeyDeletionRequestPrivate : public KmsRequestPrivate {

public:
    CancelKeyDeletionRequestPrivate(const KmsRequest::Action action,
                                   CancelKeyDeletionRequest * const q);
    CancelKeyDeletionRequestPrivate(const CancelKeyDeletionRequestPrivate &other,
                                   CancelKeyDeletionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelKeyDeletionRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
