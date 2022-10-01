// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEREGIONSFROMREPLICATIONREQUEST_P_H
#define QTAWS_REMOVEREGIONSFROMREPLICATIONREQUEST_P_H

#include "secretsmanagerrequest_p.h"
#include "removeregionsfromreplicationrequest.h"

namespace QtAws {
namespace SecretsManager {

class RemoveRegionsFromReplicationRequest;

class RemoveRegionsFromReplicationRequestPrivate : public SecretsManagerRequestPrivate {

public:
    RemoveRegionsFromReplicationRequestPrivate(const SecretsManagerRequest::Action action,
                                   RemoveRegionsFromReplicationRequest * const q);
    RemoveRegionsFromReplicationRequestPrivate(const RemoveRegionsFromReplicationRequestPrivate &other,
                                   RemoveRegionsFromReplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveRegionsFromReplicationRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
