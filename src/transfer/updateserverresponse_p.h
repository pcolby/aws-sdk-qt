// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVERRESPONSE_P_H
#define QTAWS_UPDATESERVERRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class UpdateServerResponse;

class UpdateServerResponsePrivate : public TransferResponsePrivate {

public:

    explicit UpdateServerResponsePrivate(UpdateServerResponse * const q);

    void parseUpdateServerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateServerResponse)
    Q_DISABLE_COPY(UpdateServerResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
