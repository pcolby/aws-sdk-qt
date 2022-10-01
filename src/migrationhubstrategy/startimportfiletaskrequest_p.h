// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTIMPORTFILETASKREQUEST_P_H
#define QTAWS_STARTIMPORTFILETASKREQUEST_P_H

#include "migrationhubstrategyrequest_p.h"
#include "startimportfiletaskrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class StartImportFileTaskRequest;

class StartImportFileTaskRequestPrivate : public MigrationHubStrategyRequestPrivate {

public:
    StartImportFileTaskRequestPrivate(const MigrationHubStrategyRequest::Action action,
                                   StartImportFileTaskRequest * const q);
    StartImportFileTaskRequestPrivate(const StartImportFileTaskRequestPrivate &other,
                                   StartImportFileTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartImportFileTaskRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
