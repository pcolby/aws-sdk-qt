// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCOUNTSENDINGENABLEDRESPONSE_P_H
#define QTAWS_UPDATEACCOUNTSENDINGENABLEDRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class UpdateAccountSendingEnabledResponse;

class UpdateAccountSendingEnabledResponsePrivate : public SesResponsePrivate {

public:

    explicit UpdateAccountSendingEnabledResponsePrivate(UpdateAccountSendingEnabledResponse * const q);

    void parseUpdateAccountSendingEnabledResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAccountSendingEnabledResponse)
    Q_DISABLE_COPY(UpdateAccountSendingEnabledResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
