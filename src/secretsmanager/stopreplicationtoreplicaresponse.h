// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPREPLICATIONTOREPLICARESPONSE_H
#define QTAWS_STOPREPLICATIONTOREPLICARESPONSE_H

#include "secretsmanagerresponse.h"
#include "stopreplicationtoreplicarequest.h"

namespace QtAws {
namespace SecretsManager {

class StopReplicationToReplicaResponsePrivate;

class QTAWSSECRETSMANAGER_EXPORT StopReplicationToReplicaResponse : public SecretsManagerResponse {
    Q_OBJECT

public:
    StopReplicationToReplicaResponse(const StopReplicationToReplicaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopReplicationToReplicaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopReplicationToReplicaResponse)
    Q_DISABLE_COPY(StopReplicationToReplicaResponse)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
