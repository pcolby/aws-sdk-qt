// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTSENDINGENABLEDRESPONSE_P_H
#define QTAWS_GETACCOUNTSENDINGENABLEDRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class GetAccountSendingEnabledResponse;

class GetAccountSendingEnabledResponsePrivate : public SesResponsePrivate {

public:

    explicit GetAccountSendingEnabledResponsePrivate(GetAccountSendingEnabledResponse * const q);

    void parseGetAccountSendingEnabledResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAccountSendingEnabledResponse)
    Q_DISABLE_COPY(GetAccountSendingEnabledResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
