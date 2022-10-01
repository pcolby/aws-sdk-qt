// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSERVERRESPONSE_P_H
#define QTAWS_STARTSERVERRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class StartServerResponse;

class StartServerResponsePrivate : public TransferResponsePrivate {

public:

    explicit StartServerResponsePrivate(StartServerResponse * const q);

    void parseStartServerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartServerResponse)
    Q_DISABLE_COPY(StartServerResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
