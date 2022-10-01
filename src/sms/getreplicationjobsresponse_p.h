// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPLICATIONJOBSRESPONSE_P_H
#define QTAWS_GETREPLICATIONJOBSRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class GetReplicationJobsResponse;

class GetReplicationJobsResponsePrivate : public SmsResponsePrivate {

public:

    explicit GetReplicationJobsResponsePrivate(GetReplicationJobsResponse * const q);

    void parseGetReplicationJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetReplicationJobsResponse)
    Q_DISABLE_COPY(GetReplicationJobsResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
