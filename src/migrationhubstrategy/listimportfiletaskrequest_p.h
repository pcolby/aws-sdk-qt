// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMPORTFILETASKREQUEST_P_H
#define QTAWS_LISTIMPORTFILETASKREQUEST_P_H

#include "migrationhubstrategyrequest_p.h"
#include "listimportfiletaskrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class ListImportFileTaskRequest;

class ListImportFileTaskRequestPrivate : public MigrationHubStrategyRequestPrivate {

public:
    ListImportFileTaskRequestPrivate(const MigrationHubStrategyRequest::Action action,
                                   ListImportFileTaskRequest * const q);
    ListImportFileTaskRequestPrivate(const ListImportFileTaskRequestPrivate &other,
                                   ListImportFileTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListImportFileTaskRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
