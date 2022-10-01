// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSERVERRESPONSE_P_H
#define QTAWS_STOPSERVERRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class StopServerResponse;

class StopServerResponsePrivate : public TransferResponsePrivate {

public:

    explicit StopServerResponsePrivate(StopServerResponse * const q);

    void parseStopServerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopServerResponse)
    Q_DISABLE_COPY(StopServerResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
