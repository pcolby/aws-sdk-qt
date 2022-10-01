// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPAPPREPLICATIONRESPONSE_P_H
#define QTAWS_STOPAPPREPLICATIONRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class StopAppReplicationResponse;

class StopAppReplicationResponsePrivate : public SmsResponsePrivate {

public:

    explicit StopAppReplicationResponsePrivate(StopAppReplicationResponse * const q);

    void parseStopAppReplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopAppReplicationResponse)
    Q_DISABLE_COPY(StopAppReplicationResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
