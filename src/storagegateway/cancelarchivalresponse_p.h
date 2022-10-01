// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELARCHIVALRESPONSE_P_H
#define QTAWS_CANCELARCHIVALRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class CancelArchivalResponse;

class CancelArchivalResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit CancelArchivalResponsePrivate(CancelArchivalResponse * const q);

    void parseCancelArchivalResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelArchivalResponse)
    Q_DISABLE_COPY(CancelArchivalResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
