// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMIGRATIONTASKREQUEST_P_H
#define QTAWS_DESCRIBEMIGRATIONTASKREQUEST_P_H

#include "migrationhubrequest_p.h"
#include "describemigrationtaskrequest.h"

namespace QtAws {
namespace MigrationHub {

class DescribeMigrationTaskRequest;

class DescribeMigrationTaskRequestPrivate : public MigrationHubRequestPrivate {

public:
    DescribeMigrationTaskRequestPrivate(const MigrationHubRequest::Action action,
                                   DescribeMigrationTaskRequest * const q);
    DescribeMigrationTaskRequestPrivate(const DescribeMigrationTaskRequestPrivate &other,
                                   DescribeMigrationTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMigrationTaskRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
