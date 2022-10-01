// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCOUNTAUDITCONFIGURATIONRESPONSE_H
#define QTAWS_DELETEACCOUNTAUDITCONFIGURATIONRESPONSE_H

#include "iotresponse.h"
#include "deleteaccountauditconfigurationrequest.h"

namespace QtAws {
namespace IoT {

class DeleteAccountAuditConfigurationResponsePrivate;

class QTAWSIOT_EXPORT DeleteAccountAuditConfigurationResponse : public IoTResponse {
    Q_OBJECT

public:
    DeleteAccountAuditConfigurationResponse(const DeleteAccountAuditConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAccountAuditConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccountAuditConfigurationResponse)
    Q_DISABLE_COPY(DeleteAccountAuditConfigurationResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
