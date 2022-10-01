// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPREPLICATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETAPPREPLICATIONCONFIGURATIONRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class GetAppReplicationConfigurationResponse;

class GetAppReplicationConfigurationResponsePrivate : public SmsResponsePrivate {

public:

    explicit GetAppReplicationConfigurationResponsePrivate(GetAppReplicationConfigurationResponse * const q);

    void parseGetAppReplicationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAppReplicationConfigurationResponse)
    Q_DISABLE_COPY(GetAppReplicationConfigurationResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
