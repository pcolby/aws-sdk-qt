// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFILETRANSFERRESPONSE_P_H
#define QTAWS_STARTFILETRANSFERRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class StartFileTransferResponse;

class StartFileTransferResponsePrivate : public TransferResponsePrivate {

public:

    explicit StartFileTransferResponsePrivate(StartFileTransferResponse * const q);

    void parseStartFileTransferResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartFileTransferResponse)
    Q_DISABLE_COPY(StartFileTransferResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
