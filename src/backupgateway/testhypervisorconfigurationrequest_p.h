// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTHYPERVISORCONFIGURATIONREQUEST_P_H
#define QTAWS_TESTHYPERVISORCONFIGURATIONREQUEST_P_H

#include "backupgatewayrequest_p.h"
#include "testhypervisorconfigurationrequest.h"

namespace QtAws {
namespace BackupGateway {

class TestHypervisorConfigurationRequest;

class TestHypervisorConfigurationRequestPrivate : public BackupGatewayRequestPrivate {

public:
    TestHypervisorConfigurationRequestPrivate(const BackupGatewayRequest::Action action,
                                   TestHypervisorConfigurationRequest * const q);
    TestHypervisorConfigurationRequestPrivate(const TestHypervisorConfigurationRequestPrivate &other,
                                   TestHypervisorConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(TestHypervisorConfigurationRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
