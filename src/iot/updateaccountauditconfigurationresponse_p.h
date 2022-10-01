// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCOUNTAUDITCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATEACCOUNTAUDITCONFIGURATIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class UpdateAccountAuditConfigurationResponse;

class UpdateAccountAuditConfigurationResponsePrivate : public IoTResponsePrivate {

public:

    explicit UpdateAccountAuditConfigurationResponsePrivate(UpdateAccountAuditConfigurationResponse * const q);

    void parseUpdateAccountAuditConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAccountAuditConfigurationResponse)
    Q_DISABLE_COPY(UpdateAccountAuditConfigurationResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
