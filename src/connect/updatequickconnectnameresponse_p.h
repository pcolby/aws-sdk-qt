// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUICKCONNECTNAMERESPONSE_P_H
#define QTAWS_UPDATEQUICKCONNECTNAMERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateQuickConnectNameResponse;

class UpdateQuickConnectNameResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateQuickConnectNameResponsePrivate(UpdateQuickConnectNameResponse * const q);

    void parseUpdateQuickConnectNameResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateQuickConnectNameResponse)
    Q_DISABLE_COPY(UpdateQuickConnectNameResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
