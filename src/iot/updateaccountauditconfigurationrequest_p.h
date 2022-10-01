// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCOUNTAUDITCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATEACCOUNTAUDITCONFIGURATIONREQUEST_P_H

#include "iotrequest_p.h"
#include "updateaccountauditconfigurationrequest.h"

namespace QtAws {
namespace IoT {

class UpdateAccountAuditConfigurationRequest;

class UpdateAccountAuditConfigurationRequestPrivate : public IoTRequestPrivate {

public:
    UpdateAccountAuditConfigurationRequestPrivate(const IoTRequest::Action action,
                                   UpdateAccountAuditConfigurationRequest * const q);
    UpdateAccountAuditConfigurationRequestPrivate(const UpdateAccountAuditConfigurationRequestPrivate &other,
                                   UpdateAccountAuditConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAccountAuditConfigurationRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
