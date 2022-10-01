// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVAULTLOCKRESPONSE_P_H
#define QTAWS_GETVAULTLOCKRESPONSE_P_H

#include "glacierresponse_p.h"

namespace QtAws {
namespace Glacier {

class GetVaultLockResponse;

class GetVaultLockResponsePrivate : public GlacierResponsePrivate {

public:

    explicit GetVaultLockResponsePrivate(GetVaultLockResponse * const q);

    void parseGetVaultLockResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetVaultLockResponse)
    Q_DISABLE_COPY(GetVaultLockResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif
