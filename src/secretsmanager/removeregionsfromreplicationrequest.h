// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEREGIONSFROMREPLICATIONREQUEST_H
#define QTAWS_REMOVEREGIONSFROMREPLICATIONREQUEST_H

#include "secretsmanagerrequest.h"

namespace QtAws {
namespace SecretsManager {

class RemoveRegionsFromReplicationRequestPrivate;

class QTAWSSECRETSMANAGER_EXPORT RemoveRegionsFromReplicationRequest : public SecretsManagerRequest {

public:
    RemoveRegionsFromReplicationRequest(const RemoveRegionsFromReplicationRequest &other);
    RemoveRegionsFromReplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveRegionsFromReplicationRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
