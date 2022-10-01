// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSFERCONTACTRESPONSE_P_H
#define QTAWS_TRANSFERCONTACTRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class TransferContactResponse;

class TransferContactResponsePrivate : public ConnectResponsePrivate {

public:

    explicit TransferContactResponsePrivate(TransferContactResponse * const q);

    void parseTransferContactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TransferContactResponse)
    Q_DISABLE_COPY(TransferContactResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
