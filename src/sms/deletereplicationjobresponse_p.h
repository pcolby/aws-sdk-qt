// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONJOBRESPONSE_P_H
#define QTAWS_DELETEREPLICATIONJOBRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class DeleteReplicationJobResponse;

class DeleteReplicationJobResponsePrivate : public SmsResponsePrivate {

public:

    explicit DeleteReplicationJobResponsePrivate(DeleteReplicationJobResponse * const q);

    void parseDeleteReplicationJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteReplicationJobResponse)
    Q_DISABLE_COPY(DeleteReplicationJobResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
