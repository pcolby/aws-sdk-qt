// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPREPLICATIONTOREPLICARESPONSE_P_H
#define QTAWS_STOPREPLICATIONTOREPLICARESPONSE_P_H

#include "secretsmanagerresponse_p.h"

namespace QtAws {
namespace SecretsManager {

class StopReplicationToReplicaResponse;

class StopReplicationToReplicaResponsePrivate : public SecretsManagerResponsePrivate {

public:

    explicit StopReplicationToReplicaResponsePrivate(StopReplicationToReplicaResponse * const q);

    void parseStopReplicationToReplicaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopReplicationToReplicaResponse)
    Q_DISABLE_COPY(StopReplicationToReplicaResponsePrivate)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
