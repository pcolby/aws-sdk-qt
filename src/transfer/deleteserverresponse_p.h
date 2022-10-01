// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVERRESPONSE_P_H
#define QTAWS_DELETESERVERRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class DeleteServerResponse;

class DeleteServerResponsePrivate : public TransferResponsePrivate {

public:

    explicit DeleteServerResponsePrivate(DeleteServerResponse * const q);

    void parseDeleteServerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteServerResponse)
    Q_DISABLE_COPY(DeleteServerResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
