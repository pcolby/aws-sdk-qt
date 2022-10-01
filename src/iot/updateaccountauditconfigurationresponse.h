// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCOUNTAUDITCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATEACCOUNTAUDITCONFIGURATIONRESPONSE_H

#include "iotresponse.h"
#include "updateaccountauditconfigurationrequest.h"

namespace QtAws {
namespace IoT {

class UpdateAccountAuditConfigurationResponsePrivate;

class QTAWSIOT_EXPORT UpdateAccountAuditConfigurationResponse : public IoTResponse {
    Q_OBJECT

public:
    UpdateAccountAuditConfigurationResponse(const UpdateAccountAuditConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAccountAuditConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAccountAuditConfigurationResponse)
    Q_DISABLE_COPY(UpdateAccountAuditConfigurationResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
