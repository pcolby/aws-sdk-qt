// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIATEVAULTLOCKREQUEST_P_H
#define QTAWS_INITIATEVAULTLOCKREQUEST_P_H

#include "glacierrequest_p.h"
#include "initiatevaultlockrequest.h"

namespace QtAws {
namespace Glacier {

class InitiateVaultLockRequest;

class InitiateVaultLockRequestPrivate : public GlacierRequestPrivate {

public:
    InitiateVaultLockRequestPrivate(const GlacierRequest::Action action,
                                   InitiateVaultLockRequest * const q);
    InitiateVaultLockRequestPrivate(const InitiateVaultLockRequestPrivate &other,
                                   InitiateVaultLockRequest * const q);

private:
    Q_DECLARE_PUBLIC(InitiateVaultLockRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
