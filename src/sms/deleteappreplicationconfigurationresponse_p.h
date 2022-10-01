// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPREPLICATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEAPPREPLICATIONCONFIGURATIONRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class DeleteAppReplicationConfigurationResponse;

class DeleteAppReplicationConfigurationResponsePrivate : public SmsResponsePrivate {

public:

    explicit DeleteAppReplicationConfigurationResponsePrivate(DeleteAppReplicationConfigurationResponse * const q);

    void parseDeleteAppReplicationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAppReplicationConfigurationResponse)
    Q_DISABLE_COPY(DeleteAppReplicationConfigurationResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
