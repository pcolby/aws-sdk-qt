// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVERRESPONSE_P_H
#define QTAWS_CREATESERVERRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class CreateServerResponse;

class CreateServerResponsePrivate : public TransferResponsePrivate {

public:

    explicit CreateServerResponsePrivate(CreateServerResponse * const q);

    void parseCreateServerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateServerResponse)
    Q_DISABLE_COPY(CreateServerResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
