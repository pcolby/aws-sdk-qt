// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTHYPERVISORCONFIGURATIONREQUEST_H
#define QTAWS_IMPORTHYPERVISORCONFIGURATIONREQUEST_H

#include "backupgatewayrequest.h"

namespace QtAws {
namespace BackupGateway {

class ImportHypervisorConfigurationRequestPrivate;

class QTAWSBACKUPGATEWAY_EXPORT ImportHypervisorConfigurationRequest : public BackupGatewayRequest {

public:
    ImportHypervisorConfigurationRequest(const ImportHypervisorConfigurationRequest &other);
    ImportHypervisorConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportHypervisorConfigurationRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
