// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVAULTLOCKREQUEST_P_H
#define QTAWS_GETVAULTLOCKREQUEST_P_H

#include "glacierrequest_p.h"
#include "getvaultlockrequest.h"

namespace QtAws {
namespace Glacier {

class GetVaultLockRequest;

class GetVaultLockRequestPrivate : public GlacierRequestPrivate {

public:
    GetVaultLockRequestPrivate(const GlacierRequest::Action action,
                                   GetVaultLockRequest * const q);
    GetVaultLockRequestPrivate(const GetVaultLockRequestPrivate &other,
                                   GetVaultLockRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetVaultLockRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
