// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHYPERVISORREQUEST_P_H
#define QTAWS_DELETEHYPERVISORREQUEST_P_H

#include "backupgatewayrequest_p.h"
#include "deletehypervisorrequest.h"

namespace QtAws {
namespace BackupGateway {

class DeleteHypervisorRequest;

class DeleteHypervisorRequestPrivate : public BackupGatewayRequestPrivate {

public:
    DeleteHypervisorRequestPrivate(const BackupGatewayRequest::Action action,
                                   DeleteHypervisorRequest * const q);
    DeleteHypervisorRequestPrivate(const DeleteHypervisorRequestPrivate &other,
                                   DeleteHypervisorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteHypervisorRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
