// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCOUNTAUDITCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEACCOUNTAUDITCONFIGURATIONREQUEST_P_H

#include "iotrequest_p.h"
#include "deleteaccountauditconfigurationrequest.h"

namespace QtAws {
namespace IoT {

class DeleteAccountAuditConfigurationRequest;

class DeleteAccountAuditConfigurationRequestPrivate : public IoTRequestPrivate {

public:
    DeleteAccountAuditConfigurationRequestPrivate(const IoTRequest::Action action,
                                   DeleteAccountAuditConfigurationRequest * const q);
    DeleteAccountAuditConfigurationRequestPrivate(const DeleteAccountAuditConfigurationRequestPrivate &other,
                                   DeleteAccountAuditConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAccountAuditConfigurationRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
