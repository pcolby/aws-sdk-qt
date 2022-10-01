// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHYPERVISORREQUEST_P_H
#define QTAWS_UPDATEHYPERVISORREQUEST_P_H

#include "backupgatewayrequest_p.h"
#include "updatehypervisorrequest.h"

namespace QtAws {
namespace BackupGateway {

class UpdateHypervisorRequest;

class UpdateHypervisorRequestPrivate : public BackupGatewayRequestPrivate {

public:
    UpdateHypervisorRequestPrivate(const BackupGatewayRequest::Action action,
                                   UpdateHypervisorRequest * const q);
    UpdateHypervisorRequestPrivate(const UpdateHypervisorRequestPrivate &other,
                                   UpdateHypervisorRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateHypervisorRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
