// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPREPLICATIONTOREPLICAREQUEST_P_H
#define QTAWS_STOPREPLICATIONTOREPLICAREQUEST_P_H

#include "secretsmanagerrequest_p.h"
#include "stopreplicationtoreplicarequest.h"

namespace QtAws {
namespace SecretsManager {

class StopReplicationToReplicaRequest;

class StopReplicationToReplicaRequestPrivate : public SecretsManagerRequestPrivate {

public:
    StopReplicationToReplicaRequestPrivate(const SecretsManagerRequest::Action action,
                                   StopReplicationToReplicaRequest * const q);
    StopReplicationToReplicaRequestPrivate(const StopReplicationToReplicaRequestPrivate &other,
                                   StopReplicationToReplicaRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopReplicationToReplicaRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
