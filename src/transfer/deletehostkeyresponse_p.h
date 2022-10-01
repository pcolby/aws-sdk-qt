// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHOSTKEYRESPONSE_P_H
#define QTAWS_DELETEHOSTKEYRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class DeleteHostKeyResponse;

class DeleteHostKeyResponsePrivate : public TransferResponsePrivate {

public:

    explicit DeleteHostKeyResponsePrivate(DeleteHostKeyResponse * const q);

    void parseDeleteHostKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteHostKeyResponse)
    Q_DISABLE_COPY(DeleteHostKeyResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
