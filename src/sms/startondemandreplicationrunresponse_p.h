// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTONDEMANDREPLICATIONRUNRESPONSE_P_H
#define QTAWS_STARTONDEMANDREPLICATIONRUNRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class StartOnDemandReplicationRunResponse;

class StartOnDemandReplicationRunResponsePrivate : public SmsResponsePrivate {

public:

    explicit StartOnDemandReplicationRunResponsePrivate(StartOnDemandReplicationRunResponse * const q);

    void parseStartOnDemandReplicationRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartOnDemandReplicationRunResponse)
    Q_DISABLE_COPY(StartOnDemandReplicationRunResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
