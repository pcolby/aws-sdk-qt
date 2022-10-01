// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETLOCALCONSOLEPASSWORDRESPONSE_P_H
#define QTAWS_SETLOCALCONSOLEPASSWORDRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class SetLocalConsolePasswordResponse;

class SetLocalConsolePasswordResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit SetLocalConsolePasswordResponsePrivate(SetLocalConsolePasswordResponse * const q);

    void parseSetLocalConsolePasswordResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetLocalConsolePasswordResponse)
    Q_DISABLE_COPY(SetLocalConsolePasswordResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
