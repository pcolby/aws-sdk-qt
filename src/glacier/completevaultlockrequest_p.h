// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPLETEVAULTLOCKREQUEST_P_H
#define QTAWS_COMPLETEVAULTLOCKREQUEST_P_H

#include "glacierrequest_p.h"
#include "completevaultlockrequest.h"

namespace QtAws {
namespace Glacier {

class CompleteVaultLockRequest;

class CompleteVaultLockRequestPrivate : public GlacierRequestPrivate {

public:
    CompleteVaultLockRequestPrivate(const GlacierRequest::Action action,
                                   CompleteVaultLockRequest * const q);
    CompleteVaultLockRequestPrivate(const CompleteVaultLockRequestPrivate &other,
                                   CompleteVaultLockRequest * const q);

private:
    Q_DECLARE_PUBLIC(CompleteVaultLockRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
