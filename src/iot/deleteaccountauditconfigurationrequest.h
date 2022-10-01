// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCOUNTAUDITCONFIGURATIONREQUEST_H
#define QTAWS_DELETEACCOUNTAUDITCONFIGURATIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DeleteAccountAuditConfigurationRequestPrivate;

class QTAWSIOT_EXPORT DeleteAccountAuditConfigurationRequest : public IoTRequest {

public:
    DeleteAccountAuditConfigurationRequest(const DeleteAccountAuditConfigurationRequest &other);
    DeleteAccountAuditConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccountAuditConfigurationRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
