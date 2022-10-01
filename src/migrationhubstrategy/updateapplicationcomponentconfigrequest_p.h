// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONCOMPONENTCONFIGREQUEST_P_H
#define QTAWS_UPDATEAPPLICATIONCOMPONENTCONFIGREQUEST_P_H

#include "migrationhubstrategyrequest_p.h"
#include "updateapplicationcomponentconfigrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class UpdateApplicationComponentConfigRequest;

class UpdateApplicationComponentConfigRequestPrivate : public MigrationHubStrategyRequestPrivate {

public:
    UpdateApplicationComponentConfigRequestPrivate(const MigrationHubStrategyRequest::Action action,
                                   UpdateApplicationComponentConfigRequest * const q);
    UpdateApplicationComponentConfigRequestPrivate(const UpdateApplicationComponentConfigRequestPrivate &other,
                                   UpdateApplicationComponentConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateApplicationComponentConfigRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
