// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVERCONFIGREQUEST_P_H
#define QTAWS_UPDATESERVERCONFIGREQUEST_P_H

#include "migrationhubstrategyrequest_p.h"
#include "updateserverconfigrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class UpdateServerConfigRequest;

class UpdateServerConfigRequestPrivate : public MigrationHubStrategyRequestPrivate {

public:
    UpdateServerConfigRequestPrivate(const MigrationHubStrategyRequest::Action action,
                                   UpdateServerConfigRequest * const q);
    UpdateServerConfigRequestPrivate(const UpdateServerConfigRequestPrivate &other,
                                   UpdateServerConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateServerConfigRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
