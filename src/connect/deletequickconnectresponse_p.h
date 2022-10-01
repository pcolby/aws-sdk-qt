// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUICKCONNECTRESPONSE_P_H
#define QTAWS_DELETEQUICKCONNECTRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DeleteQuickConnectResponse;

class DeleteQuickConnectResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DeleteQuickConnectResponsePrivate(DeleteQuickConnectResponse * const q);

    void parseDeleteQuickConnectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteQuickConnectResponse)
    Q_DISABLE_COPY(DeleteQuickConnectResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
