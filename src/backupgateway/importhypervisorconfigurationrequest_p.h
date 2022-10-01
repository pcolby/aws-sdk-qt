// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTHYPERVISORCONFIGURATIONREQUEST_P_H
#define QTAWS_IMPORTHYPERVISORCONFIGURATIONREQUEST_P_H

#include "backupgatewayrequest_p.h"
#include "importhypervisorconfigurationrequest.h"

namespace QtAws {
namespace BackupGateway {

class ImportHypervisorConfigurationRequest;

class ImportHypervisorConfigurationRequestPrivate : public BackupGatewayRequestPrivate {

public:
    ImportHypervisorConfigurationRequestPrivate(const BackupGatewayRequest::Action action,
                                   ImportHypervisorConfigurationRequest * const q);
    ImportHypervisorConfigurationRequestPrivate(const ImportHypervisorConfigurationRequestPrivate &other,
                                   ImportHypervisorConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportHypervisorConfigurationRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
