// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCOUNTAUDITCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEACCOUNTAUDITCONFIGURATIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DeleteAccountAuditConfigurationResponse;

class DeleteAccountAuditConfigurationResponsePrivate : public IoTResponsePrivate {

public:

    explicit DeleteAccountAuditConfigurationResponsePrivate(DeleteAccountAuditConfigurationResponse * const q);

    void parseDeleteAccountAuditConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAccountAuditConfigurationResponse)
    Q_DISABLE_COPY(DeleteAccountAuditConfigurationResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
