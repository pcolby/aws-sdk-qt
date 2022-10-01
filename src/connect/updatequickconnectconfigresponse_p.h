// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUICKCONNECTCONFIGRESPONSE_P_H
#define QTAWS_UPDATEQUICKCONNECTCONFIGRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateQuickConnectConfigResponse;

class UpdateQuickConnectConfigResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateQuickConnectConfigResponsePrivate(UpdateQuickConnectConfigResponse * const q);

    void parseUpdateQuickConnectConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateQuickConnectConfigResponse)
    Q_DISABLE_COPY(UpdateQuickConnectConfigResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
