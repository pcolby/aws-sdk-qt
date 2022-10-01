// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTAPPREPLICATIONRESPONSE_P_H
#define QTAWS_STARTAPPREPLICATIONRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class StartAppReplicationResponse;

class StartAppReplicationResponsePrivate : public SmsResponsePrivate {

public:

    explicit StartAppReplicationResponsePrivate(StartAppReplicationResponse * const q);

    void parseStartAppReplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartAppReplicationResponse)
    Q_DISABLE_COPY(StartAppReplicationResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
