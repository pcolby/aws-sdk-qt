// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMPORTFILETASKREQUEST_P_H
#define QTAWS_GETIMPORTFILETASKREQUEST_P_H

#include "migrationhubstrategyrequest_p.h"
#include "getimportfiletaskrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetImportFileTaskRequest;

class GetImportFileTaskRequestPrivate : public MigrationHubStrategyRequestPrivate {

public:
    GetImportFileTaskRequestPrivate(const MigrationHubStrategyRequest::Action action,
                                   GetImportFileTaskRequest * const q);
    GetImportFileTaskRequestPrivate(const GetImportFileTaskRequestPrivate &other,
                                   GetImportFileTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetImportFileTaskRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
