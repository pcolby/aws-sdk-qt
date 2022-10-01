// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPLETEVAULTLOCKRESPONSE_P_H
#define QTAWS_COMPLETEVAULTLOCKRESPONSE_P_H

#include "glacierresponse_p.h"

namespace QtAws {
namespace Glacier {

class CompleteVaultLockResponse;

class CompleteVaultLockResponsePrivate : public GlacierResponsePrivate {

public:

    explicit CompleteVaultLockResponsePrivate(CompleteVaultLockResponse * const q);

    void parseCompleteVaultLockResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CompleteVaultLockResponse)
    Q_DISABLE_COPY(CompleteVaultLockResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif
