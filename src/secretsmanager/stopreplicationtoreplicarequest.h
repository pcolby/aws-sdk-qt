// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPREPLICATIONTOREPLICAREQUEST_H
#define QTAWS_STOPREPLICATIONTOREPLICAREQUEST_H

#include "secretsmanagerrequest.h"

namespace QtAws {
namespace SecretsManager {

class StopReplicationToReplicaRequestPrivate;

class QTAWSSECRETSMANAGER_EXPORT StopReplicationToReplicaRequest : public SecretsManagerRequest {

public:
    StopReplicationToReplicaRequest(const StopReplicationToReplicaRequest &other);
    StopReplicationToReplicaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopReplicationToReplicaRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
