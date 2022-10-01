// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ABORTVAULTLOCKREQUEST_P_H
#define QTAWS_ABORTVAULTLOCKREQUEST_P_H

#include "glacierrequest_p.h"
#include "abortvaultlockrequest.h"

namespace QtAws {
namespace Glacier {

class AbortVaultLockRequest;

class AbortVaultLockRequestPrivate : public GlacierRequestPrivate {

public:
    AbortVaultLockRequestPrivate(const GlacierRequest::Action action,
                                   AbortVaultLockRequest * const q);
    AbortVaultLockRequestPrivate(const AbortVaultLockRequestPrivate &other,
                                   AbortVaultLockRequest * const q);

private:
    Q_DECLARE_PUBLIC(AbortVaultLockRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
