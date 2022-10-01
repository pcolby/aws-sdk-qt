// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEQUICKCONNECTRESPONSE_P_H
#define QTAWS_CREATEQUICKCONNECTRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class CreateQuickConnectResponse;

class CreateQuickConnectResponsePrivate : public ConnectResponsePrivate {

public:

    explicit CreateQuickConnectResponsePrivate(CreateQuickConnectResponse * const q);

    void parseCreateQuickConnectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateQuickConnectResponse)
    Q_DISABLE_COPY(CreateQuickConnectResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
