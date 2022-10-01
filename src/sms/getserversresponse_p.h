// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVERSRESPONSE_P_H
#define QTAWS_GETSERVERSRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class GetServersResponse;

class GetServersResponsePrivate : public SmsResponsePrivate {

public:

    explicit GetServersResponsePrivate(GetServersResponse * const q);

    void parseGetServersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetServersResponse)
    Q_DISABLE_COPY(GetServersResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
