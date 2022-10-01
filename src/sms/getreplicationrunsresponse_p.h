// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPLICATIONRUNSRESPONSE_P_H
#define QTAWS_GETREPLICATIONRUNSRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class GetReplicationRunsResponse;

class GetReplicationRunsResponsePrivate : public SmsResponsePrivate {

public:

    explicit GetReplicationRunsResponsePrivate(GetReplicationRunsResponse * const q);

    void parseGetReplicationRunsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetReplicationRunsResponse)
    Q_DISABLE_COPY(GetReplicationRunsResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
