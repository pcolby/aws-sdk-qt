// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONJOBRESPONSE_P_H
#define QTAWS_CREATEREPLICATIONJOBRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class CreateReplicationJobResponse;

class CreateReplicationJobResponsePrivate : public SmsResponsePrivate {

public:

    explicit CreateReplicationJobResponsePrivate(CreateReplicationJobResponse * const q);

    void parseCreateReplicationJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateReplicationJobResponse)
    Q_DISABLE_COPY(CreateReplicationJobResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
