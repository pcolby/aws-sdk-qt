// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSMBGUESTPASSWORDRESPONSE_P_H
#define QTAWS_SETSMBGUESTPASSWORDRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class SetSMBGuestPasswordResponse;

class SetSMBGuestPasswordResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit SetSMBGuestPasswordResponsePrivate(SetSMBGuestPasswordResponse * const q);

    void parseSetSMBGuestPasswordResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetSMBGuestPasswordResponse)
    Q_DISABLE_COPY(SetSMBGuestPasswordResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
