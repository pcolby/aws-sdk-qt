// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTHYPERVISORCONFIGURATIONREQUEST_H
#define QTAWS_TESTHYPERVISORCONFIGURATIONREQUEST_H

#include "backupgatewayrequest.h"

namespace QtAws {
namespace BackupGateway {

class TestHypervisorConfigurationRequestPrivate;

class QTAWSBACKUPGATEWAY_EXPORT TestHypervisorConfigurationRequest : public BackupGatewayRequest {

public:
    TestHypervisorConfigurationRequest(const TestHypervisorConfigurationRequest &other);
    TestHypervisorConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestHypervisorConfigurationRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
