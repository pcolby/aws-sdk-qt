// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPLICATIONJOBRESPONSE_P_H
#define QTAWS_UPDATEREPLICATIONJOBRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class UpdateReplicationJobResponse;

class UpdateReplicationJobResponsePrivate : public SmsResponsePrivate {

public:

    explicit UpdateReplicationJobResponsePrivate(UpdateReplicationJobResponse * const q);

    void parseUpdateReplicationJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateReplicationJobResponse)
    Q_DISABLE_COPY(UpdateReplicationJobResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
