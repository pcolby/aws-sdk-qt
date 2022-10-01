// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTORSRESPONSE_P_H
#define QTAWS_GETCONNECTORSRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class GetConnectorsResponse;

class GetConnectorsResponsePrivate : public SmsResponsePrivate {

public:

    explicit GetConnectorsResponsePrivate(GetConnectorsResponse * const q);

    void parseGetConnectorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetConnectorsResponse)
    Q_DISABLE_COPY(GetConnectorsResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
