// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTONDEMANDAPPREPLICATIONRESPONSE_P_H
#define QTAWS_STARTONDEMANDAPPREPLICATIONRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class StartOnDemandAppReplicationResponse;

class StartOnDemandAppReplicationResponsePrivate : public SmsResponsePrivate {

public:

    explicit StartOnDemandAppReplicationResponsePrivate(StartOnDemandAppReplicationResponse * const q);

    void parseStartOnDemandAppReplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartOnDemandAppReplicationResponse)
    Q_DISABLE_COPY(StartOnDemandAppReplicationResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
