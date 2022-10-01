// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ABORTVAULTLOCKRESPONSE_P_H
#define QTAWS_ABORTVAULTLOCKRESPONSE_P_H

#include "glacierresponse_p.h"

namespace QtAws {
namespace Glacier {

class AbortVaultLockResponse;

class AbortVaultLockResponsePrivate : public GlacierResponsePrivate {

public:

    explicit AbortVaultLockResponsePrivate(AbortVaultLockResponse * const q);

    void parseAbortVaultLockResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AbortVaultLockResponse)
    Q_DISABLE_COPY(AbortVaultLockResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif
