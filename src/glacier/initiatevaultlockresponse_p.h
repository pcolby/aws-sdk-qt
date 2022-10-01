// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIATEVAULTLOCKRESPONSE_P_H
#define QTAWS_INITIATEVAULTLOCKRESPONSE_P_H

#include "glacierresponse_p.h"

namespace QtAws {
namespace Glacier {

class InitiateVaultLockResponse;

class InitiateVaultLockResponsePrivate : public GlacierResponsePrivate {

public:

    explicit InitiateVaultLockResponsePrivate(InitiateVaultLockResponse * const q);

    void parseInitiateVaultLockResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(InitiateVaultLockResponse)
    Q_DISABLE_COPY(InitiateVaultLockResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif
