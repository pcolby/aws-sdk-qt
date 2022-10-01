// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHOSTKEYRESPONSE_P_H
#define QTAWS_UPDATEHOSTKEYRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class UpdateHostKeyResponse;

class UpdateHostKeyResponsePrivate : public TransferResponsePrivate {

public:

    explicit UpdateHostKeyResponsePrivate(UpdateHostKeyResponse * const q);

    void parseUpdateHostKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateHostKeyResponse)
    Q_DISABLE_COPY(UpdateHostKeyResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
