// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPREPLICATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTAPPREPLICATIONCONFIGURATIONRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class PutAppReplicationConfigurationResponse;

class PutAppReplicationConfigurationResponsePrivate : public SmsResponsePrivate {

public:

    explicit PutAppReplicationConfigurationResponsePrivate(PutAppReplicationConfigurationResponse * const q);

    void parsePutAppReplicationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutAppReplicationConfigurationResponse)
    Q_DISABLE_COPY(PutAppReplicationConfigurationResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
